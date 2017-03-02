#include "aarch64-jit.h"
#include <vrt/util/list.h>
#include <vrt/util/set.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
using namespace vrt::arch::guest::aarch64;
using namespace vrt::dbt::ir;
using namespace vrt::util;
bool aarch64_insn_andi::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_2
  uint64 CV_read_gpr_b_top_1_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_1_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_1
  // Block b_read_gpr_b_top_1_2
  // Reg s_b_read_gpr_b_top_1_2_3
  uint64 CV_temp_5;
  vrt::dbt::ir::Statement *ir_idx_temp_5 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_3
  // Reg s_b_read_gpr_b_top_1_3_3
  uint64 CV_temp_6;
  vrt::dbt::ir::Statement *ir_idx_temp_6 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_4
  // Block b_read_gpr_b_top_1_5
  // Block b_read_gpr_b_top_1_6
  // Block b_read_gpr_b_top_1_7
  // Block b_read_gpr_b_top_1_8
  // Block b_read_gpr_b_top_1_9
  // Block b_top_10
  // Reg s_b_top_10_0
  uint64 CV_top__Qscope_0x3234530result;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x3234530result = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_11
  // Block b_top_12
  // Reg s_b_top_12_0
  uint32 CV_top__Qscope_0x323bf90result;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x323bf90result = &builder.alloc(PrimitiveTypes.u32);
  // Block b_top_13
  // Block b_top_14
  // Block b_top_15
  // Block b_top_16
  // Block b_write_gpr_b_top_17_17
  // Block b_write_gpr_b_top_17_18
  // Block b_write_gpr_sp_b_top_23_19
  // Block b_write_gpr_sp_b_top_23_20
  // Block b_write_gpr_sp_b_top_23_21
  // Block b_top_22
  // Reg s_b_top_22_4
  uint64 CV_write_gpr_b_top_32__Qscope_0x33bbb30value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_b_top_32__Qscope_0x33bbb30value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_23
  // Block b_top_24
  // Reg s_b_top_24_4
  uint64 CV_write_gpr_sp_b_top_38__Qscope_0x33c0ff0value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_sp_b_top_38__Qscope_0x33c0ff0value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_25
  // Block b_write_gpr_b_top_32_26
  // Block b_write_gpr_b_top_32_27
  // Block b_write_gpr_sp_b_top_38_28
  // Block b_write_gpr_sp_b_top_38_29
  // Block b_write_gpr_sp_b_top_38_30
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0=top__Qscope_0x3233e50inst->sf(const) */
    /* F s_b_0_1=top__Qscope_0x3233e50inst->rn(const) */
    /* F s_b_0_2: &read_gpr_b_top_1_0r = Alloc uint64 */
    /* F s_b_0_3: If s_b_0_0: Jump b_read_gpr_b_top_1_2 else b_read_gpr_b_top_1_3 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_1_2;
    }
    else 
    {
      goto block_b_read_gpr_b_top_1_3;
    }
  }
  block_b_top_1: 
  {
    /* D s_b_top_1_0 = read_gpr_b_top_1_0r */
    /* F s_b_top_1_1: Free &read_gpr_b_top_1_0r (8) */
    /* F s_b_top_1_2=top__Qscope_0x3233e50inst->sf(const) */
    /* F s_b_top_1_3: If s_b_top_1_2: Jump b_top_10 else b_top_12 (const) */
    if (sf) 
    {
      goto block_b_top_10;
    }
    else 
    {
      goto block_b_top_12;
    }
  }
  block_b_read_gpr_b_top_1_2: 
  {
    /* F s_b_read_gpr_b_top_1_2_0=top__Qscope_0x3233e50inst->rn(const) */
    /* F s_b_read_gpr_b_top_1_2_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_2_2 = s_b_read_gpr_b_top_1_2_0==s_b_read_gpr_b_top_1_2_1 (const) */
    uint8 s_b_read_gpr_b_top_1_2_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_1_2_3: &temp_5 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_1_2_4: If s_b_read_gpr_b_top_1_2_2: Jump b_read_gpr_b_top_1_4 else b_read_gpr_b_top_1_5 (const) */
    if (s_b_read_gpr_b_top_1_2_2) 
    {
      goto block_b_read_gpr_b_top_1_4;
    }
    else 
    {
      goto block_b_read_gpr_b_top_1_5;
    }
  }
  block_b_read_gpr_b_top_1_3: 
  {
    /* F s_b_read_gpr_b_top_1_3_0=top__Qscope_0x3233e50inst->rn(const) */
    /* F s_b_read_gpr_b_top_1_3_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_3_2 = s_b_read_gpr_b_top_1_3_0==s_b_read_gpr_b_top_1_3_1 (const) */
    uint8 s_b_read_gpr_b_top_1_3_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_1_3_3: &temp_6 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_1_3_4: If s_b_read_gpr_b_top_1_3_2: Jump b_read_gpr_b_top_1_7 else b_read_gpr_b_top_1_8 (const) */
    if (s_b_read_gpr_b_top_1_3_2) 
    {
      goto block_b_read_gpr_b_top_1_7;
    }
    else 
    {
      goto block_b_read_gpr_b_top_1_8;
    }
  }
  block_b_read_gpr_b_top_1_4: 
  {
    /* F s_b_read_gpr_b_top_1_4_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_1_4_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_1_4_2: temp_5 = s_b_read_gpr_b_top_1_4_1 (const), dominates: s_b_read_gpr_b_top_1_6_0  */
    CV_temp_5 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_5), Operand(PrimitiveTypes.u8, CV_temp_5));
    /* F s_b_read_gpr_b_top_1_4_3: Jump b_read_gpr_b_top_1_6 (const) */
    goto block_b_read_gpr_b_top_1_6;
  }
  block_b_read_gpr_b_top_1_5: 
  {
    /* F s_b_read_gpr_b_top_1_5_0=top__Qscope_0x3233e50inst->rn(const) */
    /* D s_b_read_gpr_b_top_1_5_1 = ReadRegBank 0:s_b_read_gpr_b_top_1_5_0 (uint64) */
    Statement& s_b_read_gpr_b_top_1_5_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_1_5_1));
    }
    /* D s_b_read_gpr_b_top_1_5_2 = (uint64)s_b_read_gpr_b_top_1_5_1 */
    Statement& s_b_read_gpr_b_top_1_5_2 = s_b_read_gpr_b_top_1_5_1;
    /* D s_b_read_gpr_b_top_1_5_3: temp_5 = s_b_read_gpr_b_top_1_5_2, dominates: s_b_read_gpr_b_top_1_6_0  */
    builder.store(Operand(*ir_idx_temp_5), Operand(s_b_read_gpr_b_top_1_5_2));
    /* F s_b_read_gpr_b_top_1_5_4: Jump b_read_gpr_b_top_1_6 (const) */
    goto block_b_read_gpr_b_top_1_6;
  }
  block_b_read_gpr_b_top_1_6: 
  {
    /* D s_b_read_gpr_b_top_1_6_0 = temp_5 */
    /* F s_b_read_gpr_b_top_1_6_1: Free &temp_5 (8) */
    /* D s_b_read_gpr_b_top_1_6_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_6_0, dominates: s_b_top_1_0 s_b_top_10_1 s_b_top_12_1  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_5));
    /* F s_b_read_gpr_b_top_1_6_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_read_gpr_b_top_1_7: 
  {
    /* F s_b_read_gpr_b_top_1_7_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_1_7_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_1_7_2: temp_6 = s_b_read_gpr_b_top_1_7_1 (const), dominates: s_b_read_gpr_b_top_1_9_0  */
    CV_temp_6 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_6), Operand(PrimitiveTypes.u8, CV_temp_6));
    /* F s_b_read_gpr_b_top_1_7_3: Jump b_read_gpr_b_top_1_9 (const) */
    goto block_b_read_gpr_b_top_1_9;
  }
  block_b_read_gpr_b_top_1_8: 
  {
    /* F s_b_read_gpr_b_top_1_8_0=top__Qscope_0x3233e50inst->rn(const) */
    /* D s_b_read_gpr_b_top_1_8_1 = ReadRegBank 1:s_b_read_gpr_b_top_1_8_0 (uint32) */
    Statement& s_b_read_gpr_b_top_1_8_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_1_8_1));
    }
    /* D s_b_read_gpr_b_top_1_8_2 = (uint64)s_b_read_gpr_b_top_1_8_1 */
    Statement& s_b_read_gpr_b_top_1_8_2 = builder.zx(Operand(s_b_read_gpr_b_top_1_8_1));
    /* D s_b_read_gpr_b_top_1_8_3: temp_6 = s_b_read_gpr_b_top_1_8_2, dominates: s_b_read_gpr_b_top_1_9_0  */
    builder.store(Operand(*ir_idx_temp_6), Operand(s_b_read_gpr_b_top_1_8_2));
    /* F s_b_read_gpr_b_top_1_8_4: Jump b_read_gpr_b_top_1_9 (const) */
    goto block_b_read_gpr_b_top_1_9;
  }
  block_b_read_gpr_b_top_1_9: 
  {
    /* D s_b_read_gpr_b_top_1_9_0 = temp_6 */
    /* F s_b_read_gpr_b_top_1_9_1: Free &temp_6 (8) */
    /* D s_b_read_gpr_b_top_1_9_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_9_0, dominates: s_b_top_1_0 s_b_top_10_1 s_b_top_12_1  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_6));
    /* F s_b_read_gpr_b_top_1_9_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_10: 
  {
    /* F s_b_top_10_0: &top__Qscope_0x3234530result = Alloc uint64 */
    /* D s_b_top_10_1 = read_gpr_b_top_1_0r */
    /* F s_b_top_10_2=top__Qscope_0x3233e50inst->immu64(const) */
    /* D s_b_top_10_3 = s_b_top_10_1&s_b_top_10_2 */
    Statement& s_b_top_10_3 = builder.band(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(PrimitiveTypes.u64, immu64));
    /* D s_b_top_10_4: top__Qscope_0x3234530result = s_b_top_10_3, dominates: s_b_top_13_2 s_b_top_16_0 s_b_write_gpr_b_top_17_18_2 s_b_top_15_2 s_b_write_gpr_sp_b_top_23_19_0 s_b_write_gpr_sp_b_top_23_21_1  */
    builder.store(Operand(*ir_idx_top__Qscope_0x3234530result), Operand(s_b_top_10_3));
    /* F s_b_top_10_5=top__Qscope_0x3233e50inst->opc(const) */
    /* F s_b_top_10_6 = (const uint8) 3 (const) */
    /* F s_b_top_10_7 = s_b_top_10_5==s_b_top_10_6 (const) */
    uint8 s_b_top_10_7 = ((uint8)(opc == (uint8)3ULL));
    /* F s_b_top_10_8: If s_b_top_10_7: Jump b_top_13 else b_top_15 (const) */
    if (s_b_top_10_7) 
    {
      goto block_b_top_13;
    }
    else 
    {
      goto block_b_top_15;
    }
  }
  block_b_top_11: 
  {
    /* F s_b_top_11_0: Return */
    goto fixed_done;
  }
  block_b_top_12: 
  {
    /* F s_b_top_12_0: &top__Qscope_0x323bf90result = Alloc uint32 */
    /* D s_b_top_12_1 = read_gpr_b_top_1_0r */
    /* D s_b_top_12_2 = (uint32)s_b_top_12_1 */
    Statement& s_b_top_12_2 = builder.trunc(Operand(*ir_idx_read_gpr_b_top_1_0r));
    /* F s_b_top_12_3=top__Qscope_0x3233e50inst->immu32(const) */
    /* D s_b_top_12_4 = s_b_top_12_2&s_b_top_12_3 */
    Statement& s_b_top_12_4 = builder.band(Operand(s_b_top_12_2), Operand(PrimitiveTypes.u32, immu32));
    /* D s_b_top_12_5: top__Qscope_0x323bf90result = s_b_top_12_4, dominates: s_b_top_22_2 s_b_top_25_1 s_b_top_24_2  */
    builder.store(Operand(*ir_idx_top__Qscope_0x323bf90result), Operand(s_b_top_12_4));
    /* F s_b_top_12_6=top__Qscope_0x3233e50inst->opc(const) */
    /* F s_b_top_12_7 = (const uint8) 3 (const) */
    /* F s_b_top_12_8 = s_b_top_12_6==s_b_top_12_7 (const) */
    uint8 s_b_top_12_8 = ((uint8)(opc == (uint8)3ULL));
    /* F s_b_top_12_9: If s_b_top_12_8: Jump b_top_22 else b_top_24 (const) */
    if (s_b_top_12_8) 
    {
      goto block_b_top_22;
    }
    else 
    {
      goto block_b_top_24;
    }
  }
  block_b_top_13: 
  {
    /* F s_b_top_13_0 = (const uint8) 1 (const) */
    /* F s_b_top_13_1=top__Qscope_0x3233e50inst->rd(const) */
    /* D s_b_top_13_2 = top__Qscope_0x3234530result */
    /* F s_b_top_13_3 = (const uint8) 1f (const) */
    /* F s_b_top_13_4 = s_b_top_13_1==s_b_top_13_3 (const) */
    uint8 s_b_top_13_4 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_13_5: If s_b_top_13_4: Jump b_write_gpr_b_top_17_17 else b_write_gpr_b_top_17_18 (const) */
    if (s_b_top_13_4) 
    {
      goto block_b_write_gpr_b_top_17_17;
    }
    else 
    {
      goto block_b_write_gpr_b_top_17_18;
    }
  }
  block_b_top_14: 
  {
    /* F s_b_top_14_0: Free &top__Qscope_0x3234530result (8) */
    /* F s_b_top_14_1: Jump b_top_11 (const) */
    goto block_b_top_11;
  }
  block_b_top_15: 
  {
    /* F s_b_top_15_0 = (const uint8) 1 (const) */
    /* F s_b_top_15_1=top__Qscope_0x3233e50inst->rd(const) */
    /* D s_b_top_15_2 = top__Qscope_0x3234530result */
    /* F s_b_top_15_3 = (uint8) 0 (const) */
    /* F s_b_top_15_4 = (uint8) 0 (const) */
    /* F s_b_top_15_5=top__Qscope_0x3233e50inst->rd(const) */
    /* F s_b_top_15_6 = (const uint8) 1f (const) */
    /* F s_b_top_15_7 = s_b_top_15_5==s_b_top_15_6 (const) */
    uint8 s_b_top_15_7 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_15_8: If s_b_top_15_7: Jump b_write_gpr_sp_b_top_23_19 else b_write_gpr_sp_b_top_23_21 (const) */
    if (s_b_top_15_7) 
    {
      goto block_b_write_gpr_sp_b_top_23_19;
    }
    else 
    {
      goto block_b_write_gpr_sp_b_top_23_21;
    }
  }
  block_b_top_16: 
  {
    /* D s_b_top_16_0 = top__Qscope_0x3234530result */
    /* D s_b_top_16_1 = [unknown intrinsic 39] */
    Statement& s_b_top_16_1 = builder.update_zn(Operand(*ir_idx_top__Qscope_0x3234530result));
    /* F s_b_top_16_2 = (const uint8) 0 (const) */
    /* F s_b_top_16_3: WriteReg 5 = s_b_top_16_2 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 266), Operand(PrimitiveTypes.u8, (uint8)0ULL));
    }
    builder.streg(Operand(PrimitiveTypes.u8, (uint8)0ULL), Operand(PrimitiveTypes.u32, 266));
    /* F s_b_top_16_4 = (const uint8) 0 (const) */
    /* F s_b_top_16_5: WriteReg 6 = s_b_top_16_4 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 267), Operand(PrimitiveTypes.u8, (uint8)0ULL));
    }
    builder.streg(Operand(PrimitiveTypes.u8, (uint8)0ULL), Operand(PrimitiveTypes.u32, 267));
    /* F s_b_top_16_6: Jump b_top_14 (const) */
    goto block_b_top_14;
  }
  block_b_write_gpr_b_top_17_17: 
  {
    /* F s_b_write_gpr_b_top_17_17_0: Jump b_top_16 (const) */
    goto block_b_top_16;
  }
  block_b_write_gpr_b_top_17_18: 
  {
    /* F s_b_write_gpr_b_top_17_18_0 = (const uint8) 1 (const) */
    /* F s_b_write_gpr_b_top_17_18_1=top__Qscope_0x3233e50inst->rd(const) */
    /* D s_b_write_gpr_b_top_17_18_2 = top__Qscope_0x3234530result */
    /* D s_b_write_gpr_b_top_17_18_3: WriteRegBank 0:s_b_write_gpr_b_top_17_18_1 = s_b_write_gpr_b_top_17_18_2 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_top__Qscope_0x3234530result));
    }
    builder.streg(Operand(*ir_idx_top__Qscope_0x3234530result), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_17_18_4: Jump b_top_16 (const) */
    goto block_b_top_16;
  }
  block_b_write_gpr_sp_b_top_23_19: 
  {
    /* D s_b_write_gpr_sp_b_top_23_19_0 = top__Qscope_0x3234530result */
    /* D s_b_write_gpr_sp_b_top_23_19_1: WriteReg 0 = s_b_write_gpr_sp_b_top_23_19_0 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 248), Operand(*ir_idx_top__Qscope_0x3234530result));
    }
    builder.streg(Operand(*ir_idx_top__Qscope_0x3234530result), Operand(PrimitiveTypes.u32, 248));
    /* F s_b_write_gpr_sp_b_top_23_19_2: Jump b_write_gpr_sp_b_top_23_20 (const) */
    goto block_b_write_gpr_sp_b_top_23_20;
  }
  block_b_write_gpr_sp_b_top_23_20: 
  {
    /* F s_b_write_gpr_sp_b_top_23_20_0: Jump b_top_14 (const) */
    goto block_b_top_14;
  }
  block_b_write_gpr_sp_b_top_23_21: 
  {
    /* F s_b_write_gpr_sp_b_top_23_21_0=top__Qscope_0x3233e50inst->rd(const) */
    /* D s_b_write_gpr_sp_b_top_23_21_1 = top__Qscope_0x3234530result */
    /* D s_b_write_gpr_sp_b_top_23_21_2: WriteRegBank 0:s_b_write_gpr_sp_b_top_23_21_0 = s_b_write_gpr_sp_b_top_23_21_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_top__Qscope_0x3234530result));
    }
    builder.streg(Operand(*ir_idx_top__Qscope_0x3234530result), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_sp_b_top_23_21_3: Jump b_write_gpr_sp_b_top_23_20 (const) */
    goto block_b_write_gpr_sp_b_top_23_20;
  }
  block_b_top_22: 
  {
    /* F s_b_top_22_0 = (const uint8) 0 (const) */
    /* F s_b_top_22_1=top__Qscope_0x3233e50inst->rd(const) */
    /* D s_b_top_22_2 = top__Qscope_0x323bf90result */
    /* D s_b_top_22_3 = (uint64)s_b_top_22_2 */
    Statement& s_b_top_22_3 = builder.zx(Operand(*ir_idx_top__Qscope_0x323bf90result));
    /* F s_b_top_22_4: &write_gpr_b_top_32__Qscope_0x33bbb30value = Alloc uint64 */
    /* D s_b_top_22_5: write_gpr_b_top_32__Qscope_0x33bbb30value = s_b_top_22_3, dominates: s_b_write_gpr_b_top_32_27_2  */
    builder.store(Operand(*ir_idx_write_gpr_b_top_32__Qscope_0x33bbb30value), Operand(s_b_top_22_3));
    /* F s_b_top_22_6 = (const uint8) 1f (const) */
    /* F s_b_top_22_7 = s_b_top_22_1==s_b_top_22_6 (const) */
    uint8 s_b_top_22_7 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_22_8: If s_b_top_22_7: Jump b_write_gpr_b_top_32_26 else b_write_gpr_b_top_32_27 (const) */
    if (s_b_top_22_7) 
    {
      goto block_b_write_gpr_b_top_32_26;
    }
    else 
    {
      goto block_b_write_gpr_b_top_32_27;
    }
  }
  block_b_top_23: 
  {
    /* F s_b_top_23_0: Free &top__Qscope_0x323bf90result (4) */
    /* F s_b_top_23_1: Jump b_top_11 (const) */
    goto block_b_top_11;
  }
  block_b_top_24: 
  {
    /* F s_b_top_24_0 = (const uint8) 0 (const) */
    /* F s_b_top_24_1=top__Qscope_0x3233e50inst->rd(const) */
    /* D s_b_top_24_2 = top__Qscope_0x323bf90result */
    /* D s_b_top_24_3 = (uint64)s_b_top_24_2 */
    Statement& s_b_top_24_3 = builder.zx(Operand(*ir_idx_top__Qscope_0x323bf90result));
    /* F s_b_top_24_4: &write_gpr_sp_b_top_38__Qscope_0x33c0ff0value = Alloc uint64 */
    /* F s_b_top_24_5 = (uint8) 0 (const) */
    /* F s_b_top_24_6 = (uint8) 1 (const) */
    /* F s_b_top_24_7 = (const uint32) ffffffff (const) */
    /* F s_b_top_24_8 = (uint64) ffffffff (const) */
    /* D s_b_top_24_9 = s_b_top_24_3&s_b_top_24_8 */
    Statement& s_b_top_24_9 = builder.band(Operand(s_b_top_24_3), Operand(PrimitiveTypes.u64, (uint64)4294967295ULL));
    /* D s_b_top_24_10: write_gpr_sp_b_top_38__Qscope_0x33c0ff0value = s_b_top_24_9, dominates: s_b_write_gpr_sp_b_top_38_28_0 s_b_write_gpr_sp_b_top_38_30_1  */
    builder.store(Operand(*ir_idx_write_gpr_sp_b_top_38__Qscope_0x33c0ff0value), Operand(s_b_top_24_9));
    /* F s_b_top_24_11=top__Qscope_0x3233e50inst->rd(const) */
    /* F s_b_top_24_12 = (const uint8) 1f (const) */
    /* F s_b_top_24_13 = s_b_top_24_11==s_b_top_24_12 (const) */
    uint8 s_b_top_24_13 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_24_14: If s_b_top_24_13: Jump b_write_gpr_sp_b_top_38_28 else b_write_gpr_sp_b_top_38_30 (const) */
    if (s_b_top_24_13) 
    {
      goto block_b_write_gpr_sp_b_top_38_28;
    }
    else 
    {
      goto block_b_write_gpr_sp_b_top_38_30;
    }
  }
  block_b_top_25: 
  {
    /* F s_b_top_25_0: Free &write_gpr_b_top_32__Qscope_0x33bbb30value (8) */
    /* D s_b_top_25_1 = top__Qscope_0x323bf90result */
    /* D s_b_top_25_2 = [unknown intrinsic 38] */
    Statement& s_b_top_25_2 = builder.update_zn(Operand(*ir_idx_top__Qscope_0x323bf90result));
    /* F s_b_top_25_3 = (const uint8) 0 (const) */
    /* F s_b_top_25_4: WriteReg 5 = s_b_top_25_3 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 266), Operand(PrimitiveTypes.u8, (uint8)0ULL));
    }
    builder.streg(Operand(PrimitiveTypes.u8, (uint8)0ULL), Operand(PrimitiveTypes.u32, 266));
    /* F s_b_top_25_5 = (const uint8) 0 (const) */
    /* F s_b_top_25_6: WriteReg 6 = s_b_top_25_5 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 267), Operand(PrimitiveTypes.u8, (uint8)0ULL));
    }
    builder.streg(Operand(PrimitiveTypes.u8, (uint8)0ULL), Operand(PrimitiveTypes.u32, 267));
    /* F s_b_top_25_7: Jump b_top_23 (const) */
    goto block_b_top_23;
  }
  block_b_write_gpr_b_top_32_26: 
  {
    /* F s_b_write_gpr_b_top_32_26_0: Jump b_top_25 (const) */
    goto block_b_top_25;
  }
  block_b_write_gpr_b_top_32_27: 
  {
    /* F s_b_write_gpr_b_top_32_27_0 = (const uint8) 0 (const) */
    /* F s_b_write_gpr_b_top_32_27_1=top__Qscope_0x3233e50inst->rd(const) */
    /* D s_b_write_gpr_b_top_32_27_2 = write_gpr_b_top_32__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_32_27_3 = (uint32)s_b_write_gpr_b_top_32_27_2 */
    Statement& s_b_write_gpr_b_top_32_27_3 = builder.trunc(Operand(*ir_idx_write_gpr_b_top_32__Qscope_0x33bbb30value));
    /* D s_b_write_gpr_b_top_32_27_4 = (uint64)s_b_write_gpr_b_top_32_27_3 */
    Statement& s_b_write_gpr_b_top_32_27_4 = builder.zx(Operand(s_b_write_gpr_b_top_32_27_3));
    /* D s_b_write_gpr_b_top_32_27_5: WriteRegBank 0:s_b_write_gpr_b_top_32_27_1 = s_b_write_gpr_b_top_32_27_4 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_write_gpr_b_top_32_27_4));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_32_27_4), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_32_27_6: Jump b_top_25 (const) */
    goto block_b_top_25;
  }
  block_b_write_gpr_sp_b_top_38_28: 
  {
    /* D s_b_write_gpr_sp_b_top_38_28_0 = write_gpr_sp_b_top_38__Qscope_0x33c0ff0value */
    /* D s_b_write_gpr_sp_b_top_38_28_1: WriteReg 0 = s_b_write_gpr_sp_b_top_38_28_0 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 248), Operand(*ir_idx_write_gpr_sp_b_top_38__Qscope_0x33c0ff0value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_sp_b_top_38__Qscope_0x33c0ff0value), Operand(PrimitiveTypes.u32, 248));
    /* F s_b_write_gpr_sp_b_top_38_28_2: Jump b_write_gpr_sp_b_top_38_29 (const) */
    goto block_b_write_gpr_sp_b_top_38_29;
  }
  block_b_write_gpr_sp_b_top_38_29: 
  {
    /* F s_b_write_gpr_sp_b_top_38_29_0: Free &write_gpr_sp_b_top_38__Qscope_0x33c0ff0value (8) */
    /* F s_b_write_gpr_sp_b_top_38_29_1: Jump b_top_23 (const) */
    goto block_b_top_23;
  }
  block_b_write_gpr_sp_b_top_38_30: 
  {
    /* F s_b_write_gpr_sp_b_top_38_30_0=top__Qscope_0x3233e50inst->rd(const) */
    /* D s_b_write_gpr_sp_b_top_38_30_1 = write_gpr_sp_b_top_38__Qscope_0x33c0ff0value */
    /* D s_b_write_gpr_sp_b_top_38_30_2: WriteRegBank 0:s_b_write_gpr_sp_b_top_38_30_0 = s_b_write_gpr_sp_b_top_38_30_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_write_gpr_sp_b_top_38__Qscope_0x33c0ff0value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_sp_b_top_38__Qscope_0x33c0ff0value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_sp_b_top_38_30_3: Jump b_write_gpr_sp_b_top_38_29 (const) */
    goto block_b_write_gpr_sp_b_top_38_29;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_br::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Block b_top_1
  // Block b_top_2
  // Reg s_b_top_2_5
  uint64 CV_temp_8;
  vrt::dbt::ir::Statement *ir_idx_temp_8 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_9_3
  // Block b_read_gpr_b_top_9_4
  // Block b_read_gpr_b_top_9_5
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0=top__Qscope_0x3297720inst->opc(const) */
    /* F s_b_0_1 = (const uint8) 1 (const) */
    /* F s_b_0_2 = s_b_0_0==s_b_0_1 (const) */
    uint8 s_b_0_2 = ((uint8)(opc == (uint8)1ULL));
    /* F s_b_0_3: If s_b_0_2: Jump b_top_1 else b_top_2 (const) */
    if (s_b_0_2) 
    {
      goto block_b_top_1;
    }
    else 
    {
      goto block_b_top_2;
    }
  }
  block_b_top_1: 
  {
    /* F s_b_top_1_0 = (const uint8) 1 (const) */
    /* F s_b_top_1_1 = (const uint8) 1e (const) */
    /* D s_b_top_1_2 = ReadReg 2 (uint64) */
    Statement& s_b_top_1_2 = builder.ldreg(Operand(PrimitiveTypes.u32, 256));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 256), Operand(s_b_top_1_2));
    }
    /* F s_b_top_1_3 = (const uint8) 4 (const) */
    /* F s_b_top_1_4 = (uint64) 4 (const) */
    /* D s_b_top_1_5 = s_b_top_1_2+s_b_top_1_4 */
    Statement& s_b_top_1_5 = builder.add(Operand(s_b_top_1_2), Operand(PrimitiveTypes.u64, (uint64)4ULL));
    /* F s_b_top_1_6 = (const uint8) 1f (const) */
    /* F s_b_top_1_7 = (uint8) 0 (const) */
    /* F s_b_top_1_8 = (const uint8) 1 (const) */
    /* F s_b_top_1_9 = (const uint8) 1e (const) */
    /* D s_b_top_1_10: WriteRegBank 0:s_b_top_1_9 = s_b_top_1_5 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * (uint8)30ULL))),Operand(s_b_top_1_5));
    }
    builder.streg(Operand(s_b_top_1_5), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * (uint8)30ULL))));
    /* F s_b_top_1_11: Jump b_top_2 (const) */
    goto block_b_top_2;
  }
  block_b_top_2: 
  {
    /* F s_b_top_2_0 = (const uint8) 1 (const) */
    /* F s_b_top_2_1=top__Qscope_0x3297720inst->rn(const) */
    /* F s_b_top_2_2=top__Qscope_0x3297720inst->rn(const) */
    /* F s_b_top_2_3 = (const uint8) 1f (const) */
    /* F s_b_top_2_4 = s_b_top_2_2==s_b_top_2_3 (const) */
    uint8 s_b_top_2_4 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_top_2_5: &temp_8 = Alloc uint64 */
    /* F s_b_top_2_6: If s_b_top_2_4: Jump b_read_gpr_b_top_9_3 else b_read_gpr_b_top_9_4 (const) */
    if (s_b_top_2_4) 
    {
      goto block_b_read_gpr_b_top_9_3;
    }
    else 
    {
      goto block_b_read_gpr_b_top_9_4;
    }
  }
  block_b_read_gpr_b_top_9_3: 
  {
    /* F s_b_read_gpr_b_top_9_3_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_9_3_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_9_3_2: temp_8 = s_b_read_gpr_b_top_9_3_1 (const), dominates: s_b_read_gpr_b_top_9_5_0  */
    CV_temp_8 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_8), Operand(PrimitiveTypes.u8, CV_temp_8));
    /* F s_b_read_gpr_b_top_9_3_3: Jump b_read_gpr_b_top_9_5 (const) */
    goto block_b_read_gpr_b_top_9_5;
  }
  block_b_read_gpr_b_top_9_4: 
  {
    /* F s_b_read_gpr_b_top_9_4_0=top__Qscope_0x3297720inst->rn(const) */
    /* D s_b_read_gpr_b_top_9_4_1 = ReadRegBank 0:s_b_read_gpr_b_top_9_4_0 (uint64) */
    Statement& s_b_read_gpr_b_top_9_4_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_9_4_1));
    }
    /* D s_b_read_gpr_b_top_9_4_2 = (uint64)s_b_read_gpr_b_top_9_4_1 */
    Statement& s_b_read_gpr_b_top_9_4_2 = s_b_read_gpr_b_top_9_4_1;
    /* D s_b_read_gpr_b_top_9_4_3: temp_8 = s_b_read_gpr_b_top_9_4_2, dominates: s_b_read_gpr_b_top_9_5_0  */
    builder.store(Operand(*ir_idx_temp_8), Operand(s_b_read_gpr_b_top_9_4_2));
    /* F s_b_read_gpr_b_top_9_4_4: Jump b_read_gpr_b_top_9_5 (const) */
    goto block_b_read_gpr_b_top_9_5;
  }
  block_b_read_gpr_b_top_9_5: 
  {
    /* D s_b_read_gpr_b_top_9_5_0 = temp_8 */
    /* F s_b_read_gpr_b_top_9_5_1: Free &temp_8 (8) */
    /* D s_b_read_gpr_b_top_9_5_2: WriteReg 2 = s_b_read_gpr_b_top_9_5_0 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 256), Operand(*ir_idx_temp_8));
    }
    builder.streg(Operand(*ir_idx_temp_8), Operand(PrimitiveTypes.u32, 256));
    /* F s_b_read_gpr_b_top_9_5_3: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_crc32::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_eorsr::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_ldpswi::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_ldrh_reg::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_ldtrb::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_lsrv::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_msr_reg::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_5
  uint64 CV_temp_5;
  vrt::dbt::ir::Statement *ir_idx_temp_5 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_1
  // Block b_read_gpr_b_top_1_2
  // Block b_read_gpr_b_top_1_3
  // Reg s_b_read_gpr_b_top_1_3_5
  uint8 CV_temp_7;
  vrt::dbt::ir::Statement *ir_idx_temp_7 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_4
  // Reg s_b_top_4_2
  uint8 CV_temp_8;
  vrt::dbt::ir::Statement *ir_idx_temp_8 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_5
  // Block b_top_6
  // Reg s_b_top_6_2
  uint8 CV_temp_9;
  vrt::dbt::ir::Statement *ir_idx_temp_9 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_7
  // Block b_top_8
  // Reg s_b_top_8_2
  uint8 CV_temp_10;
  vrt::dbt::ir::Statement *ir_idx_temp_10 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_9
  // Block b_top_10
  // Block b_top_11
  // Block b_top_12
  // Block b_top_13
  // Block b_top_14
  // Reg s_b_top_14_3
  uint8 CV_temp_11;
  vrt::dbt::ir::Statement *ir_idx_temp_11 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_15
  // Reg s_b_top_15_2
  uint8 CV_temp_12;
  vrt::dbt::ir::Statement *ir_idx_temp_12 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_16
  // Block b_top_17
  // Reg s_b_top_17_2
  uint8 CV_temp_13;
  vrt::dbt::ir::Statement *ir_idx_temp_13 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_18
  // Block b_top_19
  // Reg s_b_top_19_2
  uint8 CV_temp_14;
  vrt::dbt::ir::Statement *ir_idx_temp_14 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_20
  // Block b_top_21
  // Block b_top_22
  // Block b_top_23
  // Block b_top_24
  // Block b_top_25
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0 = (const uint8) 1 (const) */
    /* F s_b_0_1=top__Qscope_0x3226e40inst->rt(const) */
    /* F s_b_0_2=top__Qscope_0x3226e40inst->rt(const) */
    /* F s_b_0_3 = (const uint8) 1f (const) */
    /* F s_b_0_4 = s_b_0_2==s_b_0_3 (const) */
    uint8 s_b_0_4 = ((uint8)(rt == (uint8)31ULL));
    /* F s_b_0_5: &temp_5 = Alloc uint64 */
    /* F s_b_0_6: If s_b_0_4: Jump b_read_gpr_b_top_1_1 else b_read_gpr_b_top_1_2 (const) */
    if (s_b_0_4) 
    {
      goto block_b_read_gpr_b_top_1_1;
    }
    else 
    {
      goto block_b_read_gpr_b_top_1_2;
    }
  }
  block_b_read_gpr_b_top_1_1: 
  {
    /* F s_b_read_gpr_b_top_1_1_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_1_1_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_1_1_2: temp_5 = s_b_read_gpr_b_top_1_1_1 (const), dominates: s_b_read_gpr_b_top_1_3_0 s_b_top_12_0 s_b_top_23_0 s_b_top_25_2  */
    CV_temp_5 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_5), Operand(PrimitiveTypes.u8, CV_temp_5));
    /* F s_b_read_gpr_b_top_1_1_3: Jump b_read_gpr_b_top_1_3 (const) */
    goto block_b_read_gpr_b_top_1_3;
  }
  block_b_read_gpr_b_top_1_2: 
  {
    /* F s_b_read_gpr_b_top_1_2_0=top__Qscope_0x3226e40inst->rt(const) */
    /* D s_b_read_gpr_b_top_1_2_1 = ReadRegBank 0:s_b_read_gpr_b_top_1_2_0 (uint64) */
    Statement& s_b_read_gpr_b_top_1_2_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))),Operand(s_b_read_gpr_b_top_1_2_1));
    }
    /* D s_b_read_gpr_b_top_1_2_2 = (uint64)s_b_read_gpr_b_top_1_2_1 */
    Statement& s_b_read_gpr_b_top_1_2_2 = s_b_read_gpr_b_top_1_2_1;
    /* D s_b_read_gpr_b_top_1_2_3: temp_5 = s_b_read_gpr_b_top_1_2_2, dominates: s_b_read_gpr_b_top_1_3_0 s_b_top_12_0 s_b_top_23_0 s_b_top_25_2  */
    builder.store(Operand(*ir_idx_temp_5), Operand(s_b_read_gpr_b_top_1_2_2));
    /* F s_b_read_gpr_b_top_1_2_4: Jump b_read_gpr_b_top_1_3 (const) */
    goto block_b_read_gpr_b_top_1_3;
  }
  block_b_read_gpr_b_top_1_3: 
  {
    /* D s_b_read_gpr_b_top_1_3_0 = temp_5 */
    /* F s_b_read_gpr_b_top_1_3_1: Free &temp_5 (8) */
    /* F s_b_read_gpr_b_top_1_3_2=top__Qscope_0x3226e40inst->op0(const) */
    /* F s_b_read_gpr_b_top_1_3_3 = (const uint8) 3 (const) */
    /* F s_b_read_gpr_b_top_1_3_4 = s_b_read_gpr_b_top_1_3_2==s_b_read_gpr_b_top_1_3_3 (const) */
    uint8 s_b_read_gpr_b_top_1_3_4 = ((uint8)(op0 == (uint8)3ULL));
    /* F s_b_read_gpr_b_top_1_3_5: &temp_7 = Alloc uint8 */
    /* F s_b_read_gpr_b_top_1_3_6: temp_7 = s_b_read_gpr_b_top_1_3_4 (const), dominates: s_b_top_4_0  */
    CV_temp_7 = s_b_read_gpr_b_top_1_3_4;
    /* F s_b_read_gpr_b_top_1_3_7: If s_b_read_gpr_b_top_1_3_4: Jump b_top_5 else b_top_4 (const) */
    if (s_b_read_gpr_b_top_1_3_4) 
    {
      goto block_b_top_5;
    }
    else 
    {
      goto block_b_top_4;
    }
  }
  block_b_top_4: 
  {
    /* F s_b_top_4_0 = temp_7 (const) */
    /* F s_b_top_4_1: Free &temp_7 (1) */
    /* F s_b_top_4_2: &temp_8 = Alloc uint8 */
    /* F s_b_top_4_3: temp_8 = s_b_top_4_0 (const), dominates: s_b_top_6_0  */
    CV_temp_8 = CV_temp_7;
    /* F s_b_top_4_4: If s_b_top_4_0: Jump b_top_7 else b_top_6 (const) */
    if (CV_temp_7) 
    {
      goto block_b_top_7;
    }
    else 
    {
      goto block_b_top_6;
    }
  }
  block_b_top_5: 
  {
    /* F s_b_top_5_0=top__Qscope_0x3226e40inst->op1(const) */
    /* F s_b_top_5_1 = (const uint8) 0 (const) */
    /* F s_b_top_5_2 = s_b_top_5_0==s_b_top_5_1 (const) */
    uint8 s_b_top_5_2 = ((uint8)(op1 == (uint8)0ULL));
    /* F s_b_top_5_3=top__Qscope_0x3226e40inst->op1(const) */
    /* F s_b_top_5_4 = (const uint8) 4 (const) */
    /* F s_b_top_5_5 = s_b_top_5_3==s_b_top_5_4 (const) */
    uint8 s_b_top_5_5 = ((uint8)(op1 == (uint8)4ULL));
    /* F s_b_top_5_6 = s_b_top_5_2|s_b_top_5_5 (const) */
    uint8 s_b_top_5_6 = ((uint8)(s_b_top_5_2 | s_b_top_5_5));
    /* F s_b_top_5_7=top__Qscope_0x3226e40inst->op1(const) */
    /* F s_b_top_5_8 = (const uint8) 6 (const) */
    /* F s_b_top_5_9 = s_b_top_5_7==s_b_top_5_8 (const) */
    uint8 s_b_top_5_9 = ((uint8)(op1 == (uint8)6ULL));
    /* F s_b_top_5_10 = s_b_top_5_6|s_b_top_5_9 (const) */
    uint8 s_b_top_5_10 = ((uint8)(s_b_top_5_6 | s_b_top_5_9));
    /* F s_b_top_5_11: temp_7 = s_b_top_5_10 (const), dominates: s_b_top_4_0  */
    CV_temp_7 = s_b_top_5_10;
    /* F s_b_top_5_12: Jump b_top_4 (const) */
    goto block_b_top_4;
  }
  block_b_top_6: 
  {
    /* F s_b_top_6_0 = temp_8 (const) */
    /* F s_b_top_6_1: Free &temp_8 (1) */
    /* F s_b_top_6_2: &temp_9 = Alloc uint8 */
    /* F s_b_top_6_3: temp_9 = s_b_top_6_0 (const), dominates: s_b_top_8_0  */
    CV_temp_9 = CV_temp_8;
    /* F s_b_top_6_4: If s_b_top_6_0: Jump b_top_9 else b_top_8 (const) */
    if (CV_temp_8) 
    {
      goto block_b_top_9;
    }
    else 
    {
      goto block_b_top_8;
    }
  }
  block_b_top_7: 
  {
    /* F s_b_top_7_0=top__Qscope_0x3226e40inst->crn(const) */
    /* F s_b_top_7_1 = (const uint8) 2 (const) */
    /* F s_b_top_7_2 = s_b_top_7_0==s_b_top_7_1 (const) */
    uint8 s_b_top_7_2 = ((uint8)(crn == (uint8)2ULL));
    /* F s_b_top_7_3: temp_8 = s_b_top_7_2 (const), dominates: s_b_top_6_0  */
    CV_temp_8 = s_b_top_7_2;
    /* F s_b_top_7_4: Jump b_top_6 (const) */
    goto block_b_top_6;
  }
  block_b_top_8: 
  {
    /* F s_b_top_8_0 = temp_9 (const) */
    /* F s_b_top_8_1: Free &temp_9 (1) */
    /* F s_b_top_8_2: &temp_10 = Alloc uint8 */
    /* F s_b_top_8_3: temp_10 = s_b_top_8_0 (const), dominates: s_b_top_10_0  */
    CV_temp_10 = CV_temp_9;
    /* F s_b_top_8_4: If s_b_top_8_0: Jump b_top_11 else b_top_10 (const) */
    if (CV_temp_9) 
    {
      goto block_b_top_11;
    }
    else 
    {
      goto block_b_top_10;
    }
  }
  block_b_top_9: 
  {
    /* F s_b_top_9_0=top__Qscope_0x3226e40inst->crm(const) */
    /* F s_b_top_9_1 = (const uint8) 0 (const) */
    /* F s_b_top_9_2 = s_b_top_9_0==s_b_top_9_1 (const) */
    uint8 s_b_top_9_2 = ((uint8)(crm == (uint8)0ULL));
    /* F s_b_top_9_3: temp_9 = s_b_top_9_2 (const), dominates: s_b_top_8_0  */
    CV_temp_9 = s_b_top_9_2;
    /* F s_b_top_9_4: Jump b_top_8 (const) */
    goto block_b_top_8;
  }
  block_b_top_10: 
  {
    /* F s_b_top_10_0 = temp_10 (const) */
    /* F s_b_top_10_1: Free &temp_10 (1) */
    /* F s_b_top_10_2: If s_b_top_10_0: Jump b_top_12 else b_top_14 (const) */
    if (CV_temp_10) 
    {
      goto block_b_top_12;
    }
    else 
    {
      goto block_b_top_14;
    }
  }
  block_b_top_11: 
  {
    /* F s_b_top_11_0=top__Qscope_0x3226e40inst->op2(const) */
    /* F s_b_top_11_1 = (const uint8) 0 (const) */
    /* F s_b_top_11_2 = s_b_top_11_0==s_b_top_11_1 (const) */
    uint8 s_b_top_11_2 = ((uint8)(op2 == (uint8)0ULL));
    /* F s_b_top_11_3: temp_10 = s_b_top_11_2 (const), dominates: s_b_top_10_0  */
    CV_temp_10 = s_b_top_11_2;
    /* F s_b_top_11_4: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_top_12: 
  {
    /* D s_b_top_12_0 = temp_5 */
    /* D s_b_top_12_1: WriteReg 12 = s_b_top_12_0 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 273), Operand(*ir_idx_temp_5));
    }
    builder.streg(Operand(*ir_idx_temp_5), Operand(PrimitiveTypes.u32, 273));
    /* D s_b_top_12_2 = [unknown intrinsic 25] */
    builder.pgt_change();
    /* F s_b_top_12_3: Jump b_top_13 (const) */
    goto block_b_top_13;
  }
  block_b_top_13: 
  {
    /* F s_b_top_13_0: Return */
    goto fixed_done;
  }
  block_b_top_14: 
  {
    /* F s_b_top_14_0=top__Qscope_0x3226e40inst->op0(const) */
    /* F s_b_top_14_1 = (const uint8) 3 (const) */
    /* F s_b_top_14_2 = s_b_top_14_0==s_b_top_14_1 (const) */
    uint8 s_b_top_14_2 = ((uint8)(op0 == (uint8)3ULL));
    /* F s_b_top_14_3: &temp_11 = Alloc uint8 */
    /* F s_b_top_14_4: temp_11 = s_b_top_14_2 (const), dominates: s_b_top_15_0  */
    CV_temp_11 = s_b_top_14_2;
    /* F s_b_top_14_5: If s_b_top_14_2: Jump b_top_16 else b_top_15 (const) */
    if (s_b_top_14_2) 
    {
      goto block_b_top_16;
    }
    else 
    {
      goto block_b_top_15;
    }
  }
  block_b_top_15: 
  {
    /* F s_b_top_15_0 = temp_11 (const) */
    /* F s_b_top_15_1: Free &temp_11 (1) */
    /* F s_b_top_15_2: &temp_12 = Alloc uint8 */
    /* F s_b_top_15_3: temp_12 = s_b_top_15_0 (const), dominates: s_b_top_17_0  */
    CV_temp_12 = CV_temp_11;
    /* F s_b_top_15_4: If s_b_top_15_0: Jump b_top_18 else b_top_17 (const) */
    if (CV_temp_11) 
    {
      goto block_b_top_18;
    }
    else 
    {
      goto block_b_top_17;
    }
  }
  block_b_top_16: 
  {
    /* F s_b_top_16_0=top__Qscope_0x3226e40inst->op1(const) */
    /* F s_b_top_16_1 = (const uint8) 0 (const) */
    /* F s_b_top_16_2 = s_b_top_16_0==s_b_top_16_1 (const) */
    uint8 s_b_top_16_2 = ((uint8)(op1 == (uint8)0ULL));
    /* F s_b_top_16_3: temp_11 = s_b_top_16_2 (const), dominates: s_b_top_15_0  */
    CV_temp_11 = s_b_top_16_2;
    /* F s_b_top_16_4: Jump b_top_15 (const) */
    goto block_b_top_15;
  }
  block_b_top_17: 
  {
    /* F s_b_top_17_0 = temp_12 (const) */
    /* F s_b_top_17_1: Free &temp_12 (1) */
    /* F s_b_top_17_2: &temp_13 = Alloc uint8 */
    /* F s_b_top_17_3: temp_13 = s_b_top_17_0 (const), dominates: s_b_top_19_0  */
    CV_temp_13 = CV_temp_12;
    /* F s_b_top_17_4: If s_b_top_17_0: Jump b_top_20 else b_top_19 (const) */
    if (CV_temp_12) 
    {
      goto block_b_top_20;
    }
    else 
    {
      goto block_b_top_19;
    }
  }
  block_b_top_18: 
  {
    /* F s_b_top_18_0=top__Qscope_0x3226e40inst->crn(const) */
    /* F s_b_top_18_1 = (const uint8) 2 (const) */
    /* F s_b_top_18_2 = s_b_top_18_0==s_b_top_18_1 (const) */
    uint8 s_b_top_18_2 = ((uint8)(crn == (uint8)2ULL));
    /* F s_b_top_18_3: temp_12 = s_b_top_18_2 (const), dominates: s_b_top_17_0  */
    CV_temp_12 = s_b_top_18_2;
    /* F s_b_top_18_4: Jump b_top_17 (const) */
    goto block_b_top_17;
  }
  block_b_top_19: 
  {
    /* F s_b_top_19_0 = temp_13 (const) */
    /* F s_b_top_19_1: Free &temp_13 (1) */
    /* F s_b_top_19_2: &temp_14 = Alloc uint8 */
    /* F s_b_top_19_3: temp_14 = s_b_top_19_0 (const), dominates: s_b_top_21_0  */
    CV_temp_14 = CV_temp_13;
    /* F s_b_top_19_4: If s_b_top_19_0: Jump b_top_22 else b_top_21 (const) */
    if (CV_temp_13) 
    {
      goto block_b_top_22;
    }
    else 
    {
      goto block_b_top_21;
    }
  }
  block_b_top_20: 
  {
    /* F s_b_top_20_0=top__Qscope_0x3226e40inst->crm(const) */
    /* F s_b_top_20_1 = (const uint8) 0 (const) */
    /* F s_b_top_20_2 = s_b_top_20_0==s_b_top_20_1 (const) */
    uint8 s_b_top_20_2 = ((uint8)(crm == (uint8)0ULL));
    /* F s_b_top_20_3: temp_13 = s_b_top_20_2 (const), dominates: s_b_top_19_0  */
    CV_temp_13 = s_b_top_20_2;
    /* F s_b_top_20_4: Jump b_top_19 (const) */
    goto block_b_top_19;
  }
  block_b_top_21: 
  {
    /* F s_b_top_21_0 = temp_14 (const) */
    /* F s_b_top_21_1: Free &temp_14 (1) */
    /* F s_b_top_21_2: If s_b_top_21_0: Jump b_top_23 else b_top_25 (const) */
    if (CV_temp_14) 
    {
      goto block_b_top_23;
    }
    else 
    {
      goto block_b_top_25;
    }
  }
  block_b_top_22: 
  {
    /* F s_b_top_22_0=top__Qscope_0x3226e40inst->op2(const) */
    /* F s_b_top_22_1 = (const uint8) 1 (const) */
    /* F s_b_top_22_2 = s_b_top_22_0==s_b_top_22_1 (const) */
    uint8 s_b_top_22_2 = ((uint8)(op2 == (uint8)1ULL));
    /* F s_b_top_22_3: temp_14 = s_b_top_22_2 (const), dominates: s_b_top_21_0  */
    CV_temp_14 = s_b_top_22_2;
    /* F s_b_top_22_4: Jump b_top_21 (const) */
    goto block_b_top_21;
  }
  block_b_top_23: 
  {
    /* D s_b_top_23_0 = temp_5 */
    /* D s_b_top_23_1: WriteReg 13 = s_b_top_23_0 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 281), Operand(*ir_idx_temp_5));
    }
    builder.streg(Operand(*ir_idx_temp_5), Operand(PrimitiveTypes.u32, 281));
    /* D s_b_top_23_2 = [unknown intrinsic 25] */
    builder.pgt_change();
    /* F s_b_top_23_3: Jump b_top_24 (const) */
    goto block_b_top_24;
  }
  block_b_top_24: 
  {
    /* F s_b_top_24_0: Jump b_top_13 (const) */
    goto block_b_top_13;
  }
  block_b_top_25: 
  {
    /* F s_b_top_25_0 = (const uint8) 10 (const) */
    /* F s_b_top_25_1=top__Qscope_0x3226e40inst->ir(const) */
    /* D s_b_top_25_2 = temp_5 */
    /* F s_b_top_25_3 = (uint32) 10 (const) */
    /* D s_b_top_25_4 = [unknown intrinsic 12] */
    if (_trace) 
    {
      builder.trace_dev_write(Operand(PrimitiveTypes.u32, (uint32)16ULL), Operand(PrimitiveTypes.u32, ir), Operand(*ir_idx_temp_5));
    }
    builder.stdev(Operand(PrimitiveTypes.u32, (uint32)16ULL), Operand(PrimitiveTypes.u32, ir), Operand(*ir_idx_temp_5));
    /* F s_b_top_25_5: Jump b_top_24 (const) */
    goto block_b_top_24;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_rev16::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_smulh::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_strh::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_sturb::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_udiv::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* D s_b_0_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_0_1: Return */
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
