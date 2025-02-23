// Copyright 2017 The Go Authors. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

package ssa

import "math"

func softfloat(f *Func) {
	if !f.Config.SoftFloat {
		return
	}
	newInt64 := false

	for _, b := range f.Blocks {
		for _, v := range b.Values {
			if v.Type.IsFloat() {
				switch v.Op {
				case OpPhi, OpLoad, OpArg, OpComplexReal, OpComplexImag:
					if v.Type.Size() == 4 {
						v.Type = f.Config.fe.TypeUInt32()
					} else {
						v.Type = f.Config.fe.TypeUInt64()
					}
				case OpConst32F:
					v.Op = OpConst32
					v.Type = f.Config.fe.TypeUInt32()
					v.AuxInt = int64(int32(math.Float32bits(i2f32(v.AuxInt))))
				case OpConst64F:
					v.Op = OpConst64
					v.Type = f.Config.fe.TypeUInt64()
				case OpNeg32F:
					arg0 := v.Args[0]
					v.reset(OpXor32)
					v.Type = f.Config.fe.TypeUInt32()
					v.AddArg(arg0)
					mask := v.Block.NewValue0(v.Line, OpConst32, v.Type)
					mask.AuxInt = -0x80000000
					v.AddArg(mask)
				case OpNeg64F:
					arg0 := v.Args[0]
					v.reset(OpXor64)
					v.Type = f.Config.fe.TypeUInt64()
					v.AddArg(arg0)
					mask := v.Block.NewValue0(v.Line, OpConst64, v.Type)
					mask.AuxInt = -0x8000000000000000
					v.AddArg(mask)
				}
				newInt64 = newInt64 || v.Type.Size() == 8
			}
		}
	}

	if newInt64 && f.Config.IntSize == 4 {
		// On 32bit arch, decompose Uint64 introduced in the switch above.
		decomposeBuiltIn(f)
		applyRewrite(f, rewriteBlockdec64, rewriteValuedec64)
	}

}
