//Licensed under the MIT license.
/* 
 * File:   OpCodes.h
 * Author: xf  xg_55@126.com
 *
 * Created on 2017年3月22日, 下午4:42
 */

#ifndef OPCODES_H
#define OPCODES_H
#include "OpCode.h"

namespace Cil
{
   class OpCodes {
   public:
		 static OpCode*  OneByteOpCode;
		 static OpCode* TwoBytesOpCode;

		 static const OpCode Nop;
		 static const OpCode Break;
		 static const OpCode Ldarg_0;
		 static const OpCode Ldarg_1;
		 static const OpCode Ldarg_2;
		 static const OpCode Ldarg_3;
		 static const OpCode Ldloc_0;
		 static const OpCode Ldloc_1;
		 static const OpCode Ldloc_2;
		 static const OpCode Ldloc_3;
		 static const OpCode Stloc_0;
		 static const OpCode Stloc_1;
		 static const OpCode Stloc_2;
		 static const OpCode Stloc_3;
		 static const OpCode Ldarg_S;
		 static const OpCode Ldarga_S;
		 static const OpCode Starg_S;
		 static const OpCode Ldloc_S;
		 static const OpCode Ldloca_S;
		 static const OpCode Stloc_S;
		 static const OpCode Ldnull;
		 static const OpCode Ldc_I4_M1;
		 static const OpCode Ldc_I4_0;
		 static const OpCode Ldc_I4_1;
		 static const OpCode Ldc_I4_2;
		 static const OpCode Ldc_I4_3;
		 static const OpCode Ldc_I4_4;
		 static const OpCode Ldc_I4_5;
		 static const OpCode Ldc_I4_6;
		 static const OpCode Ldc_I4_7;
		 static const OpCode Ldc_I4_8 ;
		 static const OpCode Ldc_I4_S ;
		 static const OpCode Ldc_I4 ;
		 static const OpCode Ldc_I8 ;
		 static const OpCode Ldc_R4 ;
		 static const OpCode Ldc_R8 ;
		 static const OpCode Dup ;
		 static const OpCode Pop ;
		 static const OpCode Jmp ;
		 static const OpCode Call ;
		 static const OpCode Calli ;
		 static const OpCode Ret ;
		 static const OpCode Br_S ;
		 static const OpCode Brfalse_S ;
		 static const OpCode Brtrue_S ;
		 static const OpCode Beq_S ;
		 static const OpCode Bge_S ;
		 static const OpCode Bgt_S ;
		 static const OpCode Ble_S ;
		 static const OpCode Blt_S ;
		 static const OpCode Bne_Un_S ;
		 static const OpCode Bge_Un_S ;
		 static const OpCode Bgt_Un_S ;
		 static const OpCode Ble_Un_S ;
		 static const OpCode Blt_Un_S ;
		 static const OpCode Br ;
		 static const OpCode Brfalse ;
		 static const OpCode Brtrue ;
		 static const OpCode Beq ;
		 static const OpCode Bge ;
		 static const OpCode Bgt ;
		 static const OpCode Ble ;
		 static const OpCode Blt ;
		 static const OpCode Bne_Un ;
		 static const OpCode Bge_Un ;
		 static const OpCode Bgt_Un ;
		 static const OpCode Ble_Un ;
		 static const OpCode Blt_Un ;
		 static const OpCode Switch ;
		 static const OpCode Ldind_I1 ;
		 static const OpCode Ldind_U1 ;
		 static const OpCode Ldind_I2 ;
		 static const OpCode Ldind_U2 ;
		 static const OpCode Ldind_I4 ;
		 static const OpCode Ldind_U4 ;
		 static const OpCode Ldind_I8 ;
		 static const OpCode Ldind_I ;
		 static const OpCode Ldind_R4 ;
		 static const OpCode Ldind_R8 ;
		 static const OpCode Ldind_Ref ;
		 static const OpCode Stind_Ref ;
		 static const OpCode Stind_I1 ;
		 static const OpCode Stind_I2 ;
		 static const OpCode Stind_I4 ;
		 static const OpCode Stind_I8 ;
		 static const OpCode Stind_R4 ;
		 static const OpCode Stind_R8 ;
		 static const OpCode Add ;
		 static const OpCode Sub ;
		 static const OpCode Mul ;
		 static const OpCode Div ;
		 static const OpCode Div_Un ;
		 static const OpCode Rem ;
		 static const OpCode Rem_Un ;
		 static const OpCode And ;
		 static const OpCode Or ;
		 static const OpCode Xor ;
		 static const OpCode Shl ;
		 static const OpCode Shr ;
		 static const OpCode Shr_Un ;
		 static const OpCode Neg ;
		 static const OpCode Not ;
		 static const OpCode Conv_I1 ;
		 static const OpCode Conv_I2 ;
		 static const OpCode Conv_I4 ;
		 static const OpCode Conv_I8 ;
		 static const OpCode Conv_R4 ;
		 static const OpCode Conv_R8 ;
		 static const OpCode Conv_U4 ;
		 static const OpCode Conv_U8 ;
		 static const OpCode Callvirt ;
		 static const OpCode Cpobj ;
		 static const OpCode Ldobj ;
		 static const OpCode Ldstr ;
		 static const OpCode Newobj ;
		 static const OpCode Castclass ;
		 static const OpCode Isinst ;
		 static const OpCode Conv_R_Un ;
		 static const OpCode Unbox ;
		 static const OpCode Throw ;
		 static const OpCode Ldfld ;
		 static const OpCode Ldflda ;
		 static const OpCode Stfld ;
		 static const OpCode Ldsfld ;
		 static const OpCode Ldsflda ;
		 static const OpCode Stsfld ;
		 static const OpCode Stobj ;
		 static const OpCode Conv_Ovf_I1_Un ;
		 static const OpCode Conv_Ovf_I2_Un ;
		 static const OpCode Conv_Ovf_I4_Un ;
		 static const OpCode Conv_Ovf_I8_Un ;
		 static const OpCode Conv_Ovf_U1_Un ;
		 static const OpCode Conv_Ovf_U2_Un ;
		 static const OpCode Conv_Ovf_U4_Un ;
		 static const OpCode Conv_Ovf_U8_Un ;
		 static const OpCode Conv_Ovf_I_Un ;
		 static const OpCode Conv_Ovf_U_Un ;
		 static const OpCode Box ;
		 static const OpCode Newarr ;
		 static const OpCode Ldlen ;
		 static const OpCode Ldelema ;
		 static const OpCode Ldelem_I1 ;
		 static const OpCode Ldelem_U1 ;
		 static const OpCode Ldelem_I2 ;
		 static const OpCode Ldelem_U2 ;
		 static const OpCode Ldelem_I4 ;
		 static const OpCode Ldelem_U4 ;
		 static const OpCode Ldelem_I8 ;
		 static const OpCode Ldelem_I ;
		 static const OpCode Ldelem_R4 ;
		 static const OpCode Ldelem_R8 ;
		 static const OpCode Ldelem_Ref ;
		 static const OpCode Stelem_I ;
		 static const OpCode Stelem_I1 ;
		 static const OpCode Stelem_I2 ;
		 static const OpCode Stelem_I4 ;
		 static const OpCode Stelem_I8 ;
		 static const OpCode Stelem_R4 ;
		 static const OpCode Stelem_R8 ;
		 static const OpCode Stelem_Ref ;
		 static const OpCode Ldelem_Any ;
		 static const OpCode Stelem_Any ;
		 static const OpCode Unbox_Any ;
		 static const OpCode Conv_Ovf_I1 ;
		 static const OpCode Conv_Ovf_U1 ;
		 static const OpCode Conv_Ovf_I2 ;
		 static const OpCode Conv_Ovf_U2 ;
		 static const OpCode Conv_Ovf_I4 ;
		 static const OpCode Conv_Ovf_U4 ;
		 static const OpCode Conv_Ovf_I8 ;
		 static const OpCode Conv_Ovf_U8 ;
		 static const OpCode Refanyval ;
		 static const OpCode Ckfinite ;
		 static const OpCode Mkrefany ;
		 static const OpCode Ldtoken ;
		 static const OpCode Conv_U2 ;
		 static const OpCode Conv_U1 ;
		 static const OpCode Conv_I ;
		 static const OpCode Conv_Ovf_I ;
		 static const OpCode Conv_Ovf_U ;
		 static const OpCode Add_Ovf ;
		 static const OpCode Add_Ovf_Un ;
		 static const OpCode Mul_Ovf ;
		 static const OpCode Mul_Ovf_Un ;
		 static const OpCode Sub_Ovf ;
		 static const OpCode Sub_Ovf_Un ;
		 static const OpCode Endfinally ;
		 static const OpCode Leave ;
		 static const OpCode Leave_S ;
		 static const OpCode Stind_I ;
		 static const OpCode Conv_U ;
		 static const OpCode Arglist ;
		 static const OpCode Ceq ;
		 static const OpCode Cgt ;
		 static const OpCode Cgt_Un ;
		 static const OpCode Clt ;
		 static const OpCode Clt_Un ;
		 static const OpCode Ldftn ;
		 static const OpCode Ldvirtftn ;
		 static const OpCode Ldarg ;
		 static const OpCode Ldarga ;
		 static const OpCode Starg ;
		 static const OpCode Ldloc ;
		 static const OpCode Ldloca ;
		 static const OpCode Stloc ;
		 static const OpCode Localloc ;
		 static const OpCode Endfilter ;
		 static const OpCode Unaligned ;
		 static const OpCode Volatile ;
		 static const OpCode Tail ;
		 static const OpCode Initobj ;
		 static const OpCode Constrained ;
		 static const OpCode Cpblk ;
		 static const OpCode Initblk ;
		 static const OpCode No ;
		 static const OpCode Rethrow ;
		 static const OpCode Sizeof ;
		 static const OpCode Refanytype ;
		 static const OpCode Readonly ;	
   }; 
}


#endif /* OPCODES_H */
