#include "aarch64-jit.h"
#include <vrt/util/list.h>
#include <vrt/util/set.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
using namespace vrt::arch::guest::aarch64;
using namespace vrt::dbt::ir;
using namespace vrt::util;
bool aarch64_insn_andsr::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_0
  uint64 CV_top__Qscope_0x3390a80result;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x3390a80result = &builder.alloc(PrimitiveTypes.u64);
  // Reg s_b_0_3
  uint64 CV_read_gpr_b_top_1_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_1_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_1
  // Reg s_b_top_1_6
  uint64 CV_shift_reg_b_top_11_0r;
  vrt::dbt::ir::Statement *ir_idx_shift_reg_b_top_11_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_2
  // Reg s_b_read_gpr_b_top_1_2_3
  uint64 CV_temp_7;
  vrt::dbt::ir::Statement *ir_idx_temp_7 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_3
  // Reg s_b_read_gpr_b_top_1_3_3
  uint64 CV_temp_8;
  vrt::dbt::ir::Statement *ir_idx_temp_8 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_4
  // Block b_read_gpr_b_top_1_5
  // Block b_read_gpr_b_top_1_6
  // Block b_read_gpr_b_top_1_7
  // Block b_read_gpr_b_top_1_8
  // Block b_read_gpr_b_top_1_9
  // Block b_top_10
  // Reg s_b_top_10_7
  uint64 CV_write_gpr_b_top_69__Qscope_0x33bbb30value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_b_top_69__Qscope_0x33bbb30value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_shift_reg_b_top_11_11
  // Reg s_b_shift_reg_b_top_11_11_2
  uint64 CV_read_gpr_b_shift_reg_b_top_11_14_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_shift_reg_b_top_11_14_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_shift_reg_b_top_11_12
  // Block b_shift_reg_b_top_11_13
  // Block b_read_gpr_b_shift_reg_b_top_11_14_14
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_14_14_3
  uint64 CV_temp_17;
  vrt::dbt::ir::Statement *ir_idx_temp_17 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_14_15
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_14_15_3
  uint64 CV_temp_18;
  vrt::dbt::ir::Statement *ir_idx_temp_18 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_14_16
  // Block b_read_gpr_b_shift_reg_b_top_11_14_17
  // Block b_read_gpr_b_shift_reg_b_top_11_14_18
  // Block b_read_gpr_b_shift_reg_b_top_11_14_19
  // Block b_read_gpr_b_shift_reg_b_top_11_14_20
  // Block b_read_gpr_b_shift_reg_b_top_11_14_21
  // Block b_shift_reg_b_top_11_22
  // Block b_shift_reg_b_top_11_23
  // Reg s_b_shift_reg_b_top_11_23_2
  uint64 CV_read_gpr_b_shift_reg_b_top_11_26_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_shift_reg_b_top_11_26_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_shift_reg_b_top_11_24
  // Block b_read_gpr_b_shift_reg_b_top_11_26_25
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_26_25_3
  uint64 CV_temp_22;
  vrt::dbt::ir::Statement *ir_idx_temp_22 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_26_26
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_26_26_3
  uint64 CV_temp_23;
  vrt::dbt::ir::Statement *ir_idx_temp_23 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_26_27
  // Block b_read_gpr_b_shift_reg_b_top_11_26_28
  // Block b_read_gpr_b_shift_reg_b_top_11_26_29
  // Block b_read_gpr_b_shift_reg_b_top_11_26_30
  // Block b_read_gpr_b_shift_reg_b_top_11_26_31
  // Block b_read_gpr_b_shift_reg_b_top_11_26_32
  // Block b_shift_reg_b_top_11_33
  // Reg s_b_shift_reg_b_top_11_33_2
  uint64 CV_read_gpr_b_shift_reg_b_top_11_37_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_shift_reg_b_top_11_37_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_shift_reg_b_top_11_34
  // Block b_read_gpr_b_shift_reg_b_top_11_37_35
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_37_35_3
  uint64 CV_temp_27;
  vrt::dbt::ir::Statement *ir_idx_temp_27 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_37_36
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_37_36_3
  uint64 CV_temp_28;
  vrt::dbt::ir::Statement *ir_idx_temp_28 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_37_37
  // Block b_read_gpr_b_shift_reg_b_top_11_37_38
  // Block b_read_gpr_b_shift_reg_b_top_11_37_39
  // Block b_read_gpr_b_shift_reg_b_top_11_37_40
  // Block b_read_gpr_b_shift_reg_b_top_11_37_41
  // Block b_read_gpr_b_shift_reg_b_top_11_37_42
  // Block b_shift_reg_b_top_11_43
  // Reg s_b_shift_reg_b_top_11_43_2
  sint64 CV_read_gpr_sx_b_shift_reg_b_top_11_48_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_sx_b_shift_reg_b_top_11_48_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_shift_reg_b_top_11_44
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_45
  // Reg s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_3
  sint64 CV_temp_32;
  vrt::dbt::ir::Statement *ir_idx_temp_32 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_46
  // Reg s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_3
  sint64 CV_temp_33;
  vrt::dbt::ir::Statement *ir_idx_temp_33 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_47
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_48
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_49
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_50
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_51
  // Block b_read_gpr_sx_b_shift_reg_b_top_11_48_52
  // Block b_shift_reg_b_top_11_53
  // Reg s_b_shift_reg_b_top_11_53_2
  uint64 CV_read_gpr_b_shift_reg_b_top_11_59_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_shift_reg_b_top_11_59_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_shift_reg_b_top_11_54
  // Block b_read_gpr_b_shift_reg_b_top_11_59_55
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_59_55_3
  uint64 CV_temp_37;
  vrt::dbt::ir::Statement *ir_idx_temp_37 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_59_56
  // Reg s_b_read_gpr_b_shift_reg_b_top_11_59_56_3
  uint64 CV_temp_38;
  vrt::dbt::ir::Statement *ir_idx_temp_38 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_shift_reg_b_top_11_59_57
  // Block b_read_gpr_b_shift_reg_b_top_11_59_58
  // Block b_read_gpr_b_shift_reg_b_top_11_59_59
  // Block b_read_gpr_b_shift_reg_b_top_11_59_60
  // Block b_read_gpr_b_shift_reg_b_top_11_59_61
  // Block b_read_gpr_b_shift_reg_b_top_11_59_62
  // Block b_top_63
  // Block b_write_gpr_b_top_69_64
  // Block b_write_gpr_b_top_69_65
  // Block b_write_gpr_b_top_69_66
  // Block b_write_gpr_b_top_69_67
  // Block b_write_gpr_b_top_69_68
  // Block b_top_69
  // Block b_top_70
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0: &top__Qscope_0x3390a80result = Alloc uint64 */
    /* F s_b_0_1=top__Qscope_0x3390870inst->sf(const) */
    /* F s_b_0_2=top__Qscope_0x3390870inst->rn(const) */
    /* F s_b_0_3: &read_gpr_b_top_1_0r = Alloc uint64 */
    /* F s_b_0_4: If s_b_0_1: Jump b_read_gpr_b_top_1_2 else b_read_gpr_b_top_1_3 (const) */
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
    /* F s_b_top_1_2=top__Qscope_0x3390870inst->sf(const) */
    /* F s_b_top_1_3=top__Qscope_0x3390870inst->rm(const) */
    /* F s_b_top_1_4=top__Qscope_0x3390870inst->shift(const) */
    /* F s_b_top_1_5=top__Qscope_0x3390870inst->imm6(const) */
    /* F s_b_top_1_6: &shift_reg_b_top_11_0r = Alloc uint64 */
    /* F s_b_top_1_7 = (const uint8) 0 (const) */
    /* F s_b_top_1_8 = s_b_top_1_5==s_b_top_1_7 (const) */
    uint8 s_b_top_1_8 = ((uint8)(imm6 == (uint8)0ULL));
    /* F s_b_top_1_9: If s_b_top_1_8: Jump b_shift_reg_b_top_11_11 else b_shift_reg_b_top_11_12 (const) */
    if (s_b_top_1_8) 
    {
      goto block_b_shift_reg_b_top_11_11;
    }
    else 
    {
      goto block_b_shift_reg_b_top_11_12;
    }
  }
  block_b_read_gpr_b_top_1_2: 
  {
    /* F s_b_read_gpr_b_top_1_2_0=top__Qscope_0x3390870inst->rn(const) */
    /* F s_b_read_gpr_b_top_1_2_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_2_2 = s_b_read_gpr_b_top_1_2_0==s_b_read_gpr_b_top_1_2_1 (const) */
    uint8 s_b_read_gpr_b_top_1_2_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_1_2_3: &temp_7 = Alloc uint64 */
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
    /* F s_b_read_gpr_b_top_1_3_0=top__Qscope_0x3390870inst->rn(const) */
    /* F s_b_read_gpr_b_top_1_3_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_3_2 = s_b_read_gpr_b_top_1_3_0==s_b_read_gpr_b_top_1_3_1 (const) */
    uint8 s_b_read_gpr_b_top_1_3_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_1_3_3: &temp_8 = Alloc uint64 */
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
    /* F s_b_read_gpr_b_top_1_4_2: temp_7 = s_b_read_gpr_b_top_1_4_1 (const), dominates: s_b_read_gpr_b_top_1_6_0  */
    CV_temp_7 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_7), Operand(PrimitiveTypes.u8, CV_temp_7));
    /* F s_b_read_gpr_b_top_1_4_3: Jump b_read_gpr_b_top_1_6 (const) */
    goto block_b_read_gpr_b_top_1_6;
  }
  block_b_read_gpr_b_top_1_5: 
  {
    /* F s_b_read_gpr_b_top_1_5_0=top__Qscope_0x3390870inst->rn(const) */
    /* D s_b_read_gpr_b_top_1_5_1 = ReadRegBank 0:s_b_read_gpr_b_top_1_5_0 (uint64) */
    Statement& s_b_read_gpr_b_top_1_5_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_1_5_1));
    }
    /* D s_b_read_gpr_b_top_1_5_2 = (uint64)s_b_read_gpr_b_top_1_5_1 */
    Statement& s_b_read_gpr_b_top_1_5_2 = s_b_read_gpr_b_top_1_5_1;
    /* D s_b_read_gpr_b_top_1_5_3: temp_7 = s_b_read_gpr_b_top_1_5_2, dominates: s_b_read_gpr_b_top_1_6_0  */
    builder.store(Operand(*ir_idx_temp_7), Operand(s_b_read_gpr_b_top_1_5_2));
    /* F s_b_read_gpr_b_top_1_5_4: Jump b_read_gpr_b_top_1_6 (const) */
    goto block_b_read_gpr_b_top_1_6;
  }
  block_b_read_gpr_b_top_1_6: 
  {
    /* D s_b_read_gpr_b_top_1_6_0 = temp_7 */
    /* F s_b_read_gpr_b_top_1_6_1: Free &temp_7 (8) */
    /* D s_b_read_gpr_b_top_1_6_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_6_0, dominates: s_b_top_1_0 s_b_top_10_2  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_7));
    /* F s_b_read_gpr_b_top_1_6_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_read_gpr_b_top_1_7: 
  {
    /* F s_b_read_gpr_b_top_1_7_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_1_7_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_1_7_2: temp_8 = s_b_read_gpr_b_top_1_7_1 (const), dominates: s_b_read_gpr_b_top_1_9_0  */
    CV_temp_8 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_8), Operand(PrimitiveTypes.u8, CV_temp_8));
    /* F s_b_read_gpr_b_top_1_7_3: Jump b_read_gpr_b_top_1_9 (const) */
    goto block_b_read_gpr_b_top_1_9;
  }
  block_b_read_gpr_b_top_1_8: 
  {
    /* F s_b_read_gpr_b_top_1_8_0=top__Qscope_0x3390870inst->rn(const) */
    /* D s_b_read_gpr_b_top_1_8_1 = ReadRegBank 1:s_b_read_gpr_b_top_1_8_0 (uint32) */
    Statement& s_b_read_gpr_b_top_1_8_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_1_8_1));
    }
    /* D s_b_read_gpr_b_top_1_8_2 = (uint64)s_b_read_gpr_b_top_1_8_1 */
    Statement& s_b_read_gpr_b_top_1_8_2 = builder.zx(Operand(s_b_read_gpr_b_top_1_8_1));
    /* D s_b_read_gpr_b_top_1_8_3: temp_8 = s_b_read_gpr_b_top_1_8_2, dominates: s_b_read_gpr_b_top_1_9_0  */
    builder.store(Operand(*ir_idx_temp_8), Operand(s_b_read_gpr_b_top_1_8_2));
    /* F s_b_read_gpr_b_top_1_8_4: Jump b_read_gpr_b_top_1_9 (const) */
    goto block_b_read_gpr_b_top_1_9;
  }
  block_b_read_gpr_b_top_1_9: 
  {
    /* D s_b_read_gpr_b_top_1_9_0 = temp_8 */
    /* F s_b_read_gpr_b_top_1_9_1: Free &temp_8 (8) */
    /* D s_b_read_gpr_b_top_1_9_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_9_0, dominates: s_b_top_1_0 s_b_top_10_2  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_8));
    /* F s_b_read_gpr_b_top_1_9_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_10: 
  {
    /* D s_b_top_10_0 = shift_reg_b_top_11_0r */
    /* F s_b_top_10_1: Free &shift_reg_b_top_11_0r (8) */
    /* D s_b_top_10_2 = read_gpr_b_top_1_0r */
    /* D s_b_top_10_3 = s_b_top_10_2&s_b_top_10_0 */
    Statement& s_b_top_10_3 = builder.band(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_shift_reg_b_top_11_0r));
    /* D s_b_top_10_4: top__Qscope_0x3390a80result = s_b_top_10_3, dominates: s_b_top_69_0  */
    builder.store(Operand(*ir_idx_top__Qscope_0x3390a80result), Operand(s_b_top_10_3));
    /* F s_b_top_10_5=top__Qscope_0x3390870inst->sf(const) */
    /* F s_b_top_10_6=top__Qscope_0x3390870inst->rd(const) */
    /* F s_b_top_10_7: &write_gpr_b_top_69__Qscope_0x33bbb30value = Alloc uint64 */
    /* D s_b_top_10_8: write_gpr_b_top_69__Qscope_0x33bbb30value = s_b_top_10_3, dominates: s_b_write_gpr_b_top_69_66_1 s_b_write_gpr_b_top_69_68_1  */
    builder.store(Operand(*ir_idx_write_gpr_b_top_69__Qscope_0x33bbb30value), Operand(s_b_top_10_3));
    /* F s_b_top_10_9 = (const uint8) 1f (const) */
    /* F s_b_top_10_10 = s_b_top_10_6==s_b_top_10_9 (const) */
    uint8 s_b_top_10_10 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_10_11: If s_b_top_10_10: Jump b_write_gpr_b_top_69_64 else b_write_gpr_b_top_69_65 (const) */
    if (s_b_top_10_10) 
    {
      goto block_b_write_gpr_b_top_69_64;
    }
    else 
    {
      goto block_b_write_gpr_b_top_69_65;
    }
  }
  block_b_shift_reg_b_top_11_11: 
  {
    /* F s_b_shift_reg_b_top_11_11_0=top__Qscope_0x3390870inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_11_1=top__Qscope_0x3390870inst->rm(const) */
    /* F s_b_shift_reg_b_top_11_11_2: &read_gpr_b_shift_reg_b_top_11_14_0r = Alloc uint64 */
    /* F s_b_shift_reg_b_top_11_11_3: If s_b_shift_reg_b_top_11_11_0: Jump b_read_gpr_b_shift_reg_b_top_11_14_14 else b_read_gpr_b_shift_reg_b_top_11_14_15 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_14;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_15;
    }
  }
  block_b_shift_reg_b_top_11_12: 
  {
    /* F s_b_shift_reg_b_top_11_12_0=top__Qscope_0x3390870inst->shift(const) */
    /* F s_b_shift_reg_b_top_11_12_1 = (const uint8) 0 (const) */
    /* F s_b_shift_reg_b_top_11_12_2 = (const uint8) 1 (const) */
    /* F s_b_shift_reg_b_top_11_12_3 = (const uint8) 2 (const) */
    /* F s_b_shift_reg_b_top_11_12_4 = (const uint8) 3 (const) */
    /* F s_b_shift_reg_b_top_11_12_5: Switch s_b_shift_reg_b_top_11_12_0: [s_b_shift_reg_b_top_11_12_1: b_shift_reg_b_top_11_23][s_b_shift_reg_b_top_11_12_2: b_shift_reg_b_top_11_33][s_b_shift_reg_b_top_11_12_3: b_shift_reg_b_top_11_43][s_b_shift_reg_b_top_11_12_4: b_shift_reg_b_top_11_53] def b_shift_reg_b_top_11_22 (const) -> b_shift_reg_b_top_11_22, b_shift_reg_b_top_11_23, b_shift_reg_b_top_11_33, b_shift_reg_b_top_11_43, b_shift_reg_b_top_11_53,  */
    switch (shift) 
    {
    case (uint8)0ULL:
      goto block_b_shift_reg_b_top_11_23;
      break;
    case (uint8)1ULL:
      goto block_b_shift_reg_b_top_11_33;
      break;
    case (uint8)2ULL:
      goto block_b_shift_reg_b_top_11_43;
      break;
    case (uint8)3ULL:
      goto block_b_shift_reg_b_top_11_53;
      break;
    default:
      goto block_b_shift_reg_b_top_11_22;
    }
  }
  block_b_shift_reg_b_top_11_13: 
  {
    /* D s_b_shift_reg_b_top_11_13_0 = read_gpr_b_shift_reg_b_top_11_14_0r */
    /* F s_b_shift_reg_b_top_11_13_1: Free &read_gpr_b_shift_reg_b_top_11_14_0r (8) */
    /* D s_b_shift_reg_b_top_11_13_2: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_13_0, dominates: s_b_top_10_0  */
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_14_0r));
    /* F s_b_shift_reg_b_top_11_13_3: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_14: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_14_0=top__Qscope_0x3390870inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_14_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_14_2 = s_b_read_gpr_b_shift_reg_b_top_11_14_14_0==s_b_read_gpr_b_shift_reg_b_top_11_14_14_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_14_14_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_14_3: &temp_17 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_14_4: If s_b_read_gpr_b_shift_reg_b_top_11_14_14_2: Jump b_read_gpr_b_shift_reg_b_top_11_14_16 else b_read_gpr_b_shift_reg_b_top_11_14_17 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_14_14_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_16;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_17;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_15: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_15_0=top__Qscope_0x3390870inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_15_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_15_2 = s_b_read_gpr_b_shift_reg_b_top_11_14_15_0==s_b_read_gpr_b_shift_reg_b_top_11_14_15_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_14_15_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_15_3: &temp_18 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_15_4: If s_b_read_gpr_b_shift_reg_b_top_11_14_15_2: Jump b_read_gpr_b_shift_reg_b_top_11_14_19 else b_read_gpr_b_shift_reg_b_top_11_14_20 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_14_15_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_19;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_14_20;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_16: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_16_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_16_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_16_2: temp_17 = s_b_read_gpr_b_shift_reg_b_top_11_14_16_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_14_18_0  */
    CV_temp_17 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_17), Operand(PrimitiveTypes.u8, CV_temp_17));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_16_3: Jump b_read_gpr_b_shift_reg_b_top_11_14_18 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_14_18;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_17: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_17_0=top__Qscope_0x3390870inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_17_1 = ReadRegBank 0:s_b_read_gpr_b_shift_reg_b_top_11_14_17_0 (uint64) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_14_17_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_14_17_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_17_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_14_17_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_14_17_2 = s_b_read_gpr_b_shift_reg_b_top_11_14_17_1;
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_17_3: temp_17 = s_b_read_gpr_b_shift_reg_b_top_11_14_17_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_14_18_0  */
    builder.store(Operand(*ir_idx_temp_17), Operand(s_b_read_gpr_b_shift_reg_b_top_11_14_17_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_17_4: Jump b_read_gpr_b_shift_reg_b_top_11_14_18 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_14_18;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_18: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_18_0 = temp_17 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_18_1: Free &temp_17 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_18_2: read_gpr_b_shift_reg_b_top_11_14_0r = s_b_read_gpr_b_shift_reg_b_top_11_14_18_0, dominates: s_b_shift_reg_b_top_11_13_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_14_0r), Operand(*ir_idx_temp_17));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_18_3: Jump b_shift_reg_b_top_11_13 (const) */
    goto block_b_shift_reg_b_top_11_13;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_19: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_19_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_19_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_19_2: temp_18 = s_b_read_gpr_b_shift_reg_b_top_11_14_19_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_14_21_0  */
    CV_temp_18 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_18), Operand(PrimitiveTypes.u8, CV_temp_18));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_19_3: Jump b_read_gpr_b_shift_reg_b_top_11_14_21 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_14_21;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_20: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_20_0=top__Qscope_0x3390870inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_20_1 = ReadRegBank 1:s_b_read_gpr_b_shift_reg_b_top_11_14_20_0 (uint32) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_14_20_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_14_20_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_20_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_14_20_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_14_20_2 = builder.zx(Operand(s_b_read_gpr_b_shift_reg_b_top_11_14_20_1));
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_20_3: temp_18 = s_b_read_gpr_b_shift_reg_b_top_11_14_20_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_14_21_0  */
    builder.store(Operand(*ir_idx_temp_18), Operand(s_b_read_gpr_b_shift_reg_b_top_11_14_20_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_20_4: Jump b_read_gpr_b_shift_reg_b_top_11_14_21 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_14_21;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_14_21: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_21_0 = temp_18 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_21_1: Free &temp_18 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_14_21_2: read_gpr_b_shift_reg_b_top_11_14_0r = s_b_read_gpr_b_shift_reg_b_top_11_14_21_0, dominates: s_b_shift_reg_b_top_11_13_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_14_0r), Operand(*ir_idx_temp_18));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_14_21_3: Jump b_shift_reg_b_top_11_13 (const) */
    goto block_b_shift_reg_b_top_11_13;
  }
  block_b_shift_reg_b_top_11_22: 
  {
    /* F s_b_shift_reg_b_top_11_22_0 = (const uint8) 0 (const) */
    /* F s_b_shift_reg_b_top_11_22_1 = (uint64) 0 (const) */
    /* F s_b_shift_reg_b_top_11_22_2: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_22_1 (const), dominates: s_b_top_10_0  */
    CV_shift_reg_b_top_11_0r = (uint64)0ULL;
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(PrimitiveTypes.u8, CV_shift_reg_b_top_11_0r));
    /* F s_b_shift_reg_b_top_11_22_3: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_shift_reg_b_top_11_23: 
  {
    /* F s_b_shift_reg_b_top_11_23_0=top__Qscope_0x3390870inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_23_1=top__Qscope_0x3390870inst->rm(const) */
    /* F s_b_shift_reg_b_top_11_23_2: &read_gpr_b_shift_reg_b_top_11_26_0r = Alloc uint64 */
    /* F s_b_shift_reg_b_top_11_23_3: If s_b_shift_reg_b_top_11_23_0: Jump b_read_gpr_b_shift_reg_b_top_11_26_25 else b_read_gpr_b_shift_reg_b_top_11_26_26 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_25;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_26;
    }
  }
  block_b_shift_reg_b_top_11_24: 
  {
    /* D s_b_shift_reg_b_top_11_24_0 = read_gpr_b_shift_reg_b_top_11_26_0r */
    /* F s_b_shift_reg_b_top_11_24_1: Free &read_gpr_b_shift_reg_b_top_11_26_0r (8) */
    /* F s_b_shift_reg_b_top_11_24_2=top__Qscope_0x3390870inst->imm6(const) */
    /* F s_b_shift_reg_b_top_11_24_3 = (uint64)s_b_shift_reg_b_top_11_24_2 (const) */
    /* D s_b_shift_reg_b_top_11_24_4 = s_b_shift_reg_b_top_11_24_0<<s_b_shift_reg_b_top_11_24_3 */
    Statement& s_b_shift_reg_b_top_11_24_4 = builder.shl(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_26_0r), Operand(PrimitiveTypes.u64, ((uint64)imm6)));
    /* D s_b_shift_reg_b_top_11_24_5: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_24_4, dominates: s_b_top_10_0  */
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(s_b_shift_reg_b_top_11_24_4));
    /* F s_b_shift_reg_b_top_11_24_6: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_25: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_25_0=top__Qscope_0x3390870inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_25_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_25_2 = s_b_read_gpr_b_shift_reg_b_top_11_26_25_0==s_b_read_gpr_b_shift_reg_b_top_11_26_25_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_26_25_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_25_3: &temp_22 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_25_4: If s_b_read_gpr_b_shift_reg_b_top_11_26_25_2: Jump b_read_gpr_b_shift_reg_b_top_11_26_27 else b_read_gpr_b_shift_reg_b_top_11_26_28 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_26_25_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_27;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_28;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_26: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_26_0=top__Qscope_0x3390870inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_26_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_26_2 = s_b_read_gpr_b_shift_reg_b_top_11_26_26_0==s_b_read_gpr_b_shift_reg_b_top_11_26_26_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_26_26_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_26_3: &temp_23 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_26_4: If s_b_read_gpr_b_shift_reg_b_top_11_26_26_2: Jump b_read_gpr_b_shift_reg_b_top_11_26_30 else b_read_gpr_b_shift_reg_b_top_11_26_31 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_26_26_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_30;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_26_31;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_27: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_27_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_27_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_27_2: temp_22 = s_b_read_gpr_b_shift_reg_b_top_11_26_27_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_26_29_0  */
    CV_temp_22 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_22), Operand(PrimitiveTypes.u8, CV_temp_22));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_27_3: Jump b_read_gpr_b_shift_reg_b_top_11_26_29 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_26_29;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_28: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_28_0=top__Qscope_0x3390870inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_28_1 = ReadRegBank 0:s_b_read_gpr_b_shift_reg_b_top_11_26_28_0 (uint64) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_26_28_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_26_28_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_28_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_26_28_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_26_28_2 = s_b_read_gpr_b_shift_reg_b_top_11_26_28_1;
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_28_3: temp_22 = s_b_read_gpr_b_shift_reg_b_top_11_26_28_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_26_29_0  */
    builder.store(Operand(*ir_idx_temp_22), Operand(s_b_read_gpr_b_shift_reg_b_top_11_26_28_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_28_4: Jump b_read_gpr_b_shift_reg_b_top_11_26_29 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_26_29;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_29: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_29_0 = temp_22 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_29_1: Free &temp_22 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_29_2: read_gpr_b_shift_reg_b_top_11_26_0r = s_b_read_gpr_b_shift_reg_b_top_11_26_29_0, dominates: s_b_shift_reg_b_top_11_24_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_26_0r), Operand(*ir_idx_temp_22));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_29_3: Jump b_shift_reg_b_top_11_24 (const) */
    goto block_b_shift_reg_b_top_11_24;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_30: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_30_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_30_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_30_2: temp_23 = s_b_read_gpr_b_shift_reg_b_top_11_26_30_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_26_32_0  */
    CV_temp_23 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_23), Operand(PrimitiveTypes.u8, CV_temp_23));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_30_3: Jump b_read_gpr_b_shift_reg_b_top_11_26_32 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_26_32;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_31: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_31_0=top__Qscope_0x3390870inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_31_1 = ReadRegBank 1:s_b_read_gpr_b_shift_reg_b_top_11_26_31_0 (uint32) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_26_31_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_26_31_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_31_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_26_31_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_26_31_2 = builder.zx(Operand(s_b_read_gpr_b_shift_reg_b_top_11_26_31_1));
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_31_3: temp_23 = s_b_read_gpr_b_shift_reg_b_top_11_26_31_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_26_32_0  */
    builder.store(Operand(*ir_idx_temp_23), Operand(s_b_read_gpr_b_shift_reg_b_top_11_26_31_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_31_4: Jump b_read_gpr_b_shift_reg_b_top_11_26_32 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_26_32;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_26_32: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_32_0 = temp_23 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_32_1: Free &temp_23 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_26_32_2: read_gpr_b_shift_reg_b_top_11_26_0r = s_b_read_gpr_b_shift_reg_b_top_11_26_32_0, dominates: s_b_shift_reg_b_top_11_24_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_26_0r), Operand(*ir_idx_temp_23));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_26_32_3: Jump b_shift_reg_b_top_11_24 (const) */
    goto block_b_shift_reg_b_top_11_24;
  }
  block_b_shift_reg_b_top_11_33: 
  {
    /* F s_b_shift_reg_b_top_11_33_0=top__Qscope_0x3390870inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_33_1=top__Qscope_0x3390870inst->rm(const) */
    /* F s_b_shift_reg_b_top_11_33_2: &read_gpr_b_shift_reg_b_top_11_37_0r = Alloc uint64 */
    /* F s_b_shift_reg_b_top_11_33_3: If s_b_shift_reg_b_top_11_33_0: Jump b_read_gpr_b_shift_reg_b_top_11_37_35 else b_read_gpr_b_shift_reg_b_top_11_37_36 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_35;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_36;
    }
  }
  block_b_shift_reg_b_top_11_34: 
  {
    /* D s_b_shift_reg_b_top_11_34_0 = read_gpr_b_shift_reg_b_top_11_37_0r */
    /* F s_b_shift_reg_b_top_11_34_1: Free &read_gpr_b_shift_reg_b_top_11_37_0r (8) */
    /* F s_b_shift_reg_b_top_11_34_2=top__Qscope_0x3390870inst->imm6(const) */
    /* F s_b_shift_reg_b_top_11_34_3 = (uint64)s_b_shift_reg_b_top_11_34_2 (const) */
    /* D s_b_shift_reg_b_top_11_34_4 = s_b_shift_reg_b_top_11_34_0>>s_b_shift_reg_b_top_11_34_3 */
    Statement& s_b_shift_reg_b_top_11_34_4 = builder.shr(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_37_0r), Operand(PrimitiveTypes.u64, ((uint64)imm6)));
    /* D s_b_shift_reg_b_top_11_34_5: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_34_4, dominates: s_b_top_10_0  */
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(s_b_shift_reg_b_top_11_34_4));
    /* F s_b_shift_reg_b_top_11_34_6: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_35: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_35_0=top__Qscope_0x3390870inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_35_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_35_2 = s_b_read_gpr_b_shift_reg_b_top_11_37_35_0==s_b_read_gpr_b_shift_reg_b_top_11_37_35_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_37_35_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_35_3: &temp_27 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_35_4: If s_b_read_gpr_b_shift_reg_b_top_11_37_35_2: Jump b_read_gpr_b_shift_reg_b_top_11_37_37 else b_read_gpr_b_shift_reg_b_top_11_37_38 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_37_35_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_37;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_38;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_36: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_36_0=top__Qscope_0x3390870inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_36_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_36_2 = s_b_read_gpr_b_shift_reg_b_top_11_37_36_0==s_b_read_gpr_b_shift_reg_b_top_11_37_36_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_37_36_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_36_3: &temp_28 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_36_4: If s_b_read_gpr_b_shift_reg_b_top_11_37_36_2: Jump b_read_gpr_b_shift_reg_b_top_11_37_40 else b_read_gpr_b_shift_reg_b_top_11_37_41 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_37_36_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_40;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_37_41;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_37: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_37_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_37_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_37_2: temp_27 = s_b_read_gpr_b_shift_reg_b_top_11_37_37_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_37_39_0  */
    CV_temp_27 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_27), Operand(PrimitiveTypes.u8, CV_temp_27));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_37_3: Jump b_read_gpr_b_shift_reg_b_top_11_37_39 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_37_39;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_38: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_38_0=top__Qscope_0x3390870inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_38_1 = ReadRegBank 0:s_b_read_gpr_b_shift_reg_b_top_11_37_38_0 (uint64) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_37_38_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_37_38_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_38_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_37_38_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_37_38_2 = s_b_read_gpr_b_shift_reg_b_top_11_37_38_1;
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_38_3: temp_27 = s_b_read_gpr_b_shift_reg_b_top_11_37_38_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_37_39_0  */
    builder.store(Operand(*ir_idx_temp_27), Operand(s_b_read_gpr_b_shift_reg_b_top_11_37_38_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_38_4: Jump b_read_gpr_b_shift_reg_b_top_11_37_39 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_37_39;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_39: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_39_0 = temp_27 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_39_1: Free &temp_27 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_39_2: read_gpr_b_shift_reg_b_top_11_37_0r = s_b_read_gpr_b_shift_reg_b_top_11_37_39_0, dominates: s_b_shift_reg_b_top_11_34_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_37_0r), Operand(*ir_idx_temp_27));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_39_3: Jump b_shift_reg_b_top_11_34 (const) */
    goto block_b_shift_reg_b_top_11_34;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_40: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_40_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_40_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_40_2: temp_28 = s_b_read_gpr_b_shift_reg_b_top_11_37_40_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_37_42_0  */
    CV_temp_28 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_28), Operand(PrimitiveTypes.u8, CV_temp_28));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_40_3: Jump b_read_gpr_b_shift_reg_b_top_11_37_42 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_37_42;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_41: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_41_0=top__Qscope_0x3390870inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_41_1 = ReadRegBank 1:s_b_read_gpr_b_shift_reg_b_top_11_37_41_0 (uint32) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_37_41_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_37_41_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_41_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_37_41_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_37_41_2 = builder.zx(Operand(s_b_read_gpr_b_shift_reg_b_top_11_37_41_1));
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_41_3: temp_28 = s_b_read_gpr_b_shift_reg_b_top_11_37_41_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_37_42_0  */
    builder.store(Operand(*ir_idx_temp_28), Operand(s_b_read_gpr_b_shift_reg_b_top_11_37_41_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_41_4: Jump b_read_gpr_b_shift_reg_b_top_11_37_42 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_37_42;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_37_42: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_42_0 = temp_28 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_42_1: Free &temp_28 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_37_42_2: read_gpr_b_shift_reg_b_top_11_37_0r = s_b_read_gpr_b_shift_reg_b_top_11_37_42_0, dominates: s_b_shift_reg_b_top_11_34_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_37_0r), Operand(*ir_idx_temp_28));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_37_42_3: Jump b_shift_reg_b_top_11_34 (const) */
    goto block_b_shift_reg_b_top_11_34;
  }
  block_b_shift_reg_b_top_11_43: 
  {
    /* F s_b_shift_reg_b_top_11_43_0=top__Qscope_0x3390870inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_43_1=top__Qscope_0x3390870inst->rm(const) */
    /* F s_b_shift_reg_b_top_11_43_2: &read_gpr_sx_b_shift_reg_b_top_11_48_0r = Alloc sint64 */
    /* F s_b_shift_reg_b_top_11_43_3: If s_b_shift_reg_b_top_11_43_0: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_45 else b_read_gpr_sx_b_shift_reg_b_top_11_48_46 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_45;
    }
    else 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_46;
    }
  }
  block_b_shift_reg_b_top_11_44: 
  {
    /* D s_b_shift_reg_b_top_11_44_0 = read_gpr_sx_b_shift_reg_b_top_11_48_0r */
    /* F s_b_shift_reg_b_top_11_44_1: Free &read_gpr_sx_b_shift_reg_b_top_11_48_0r (8) */
    /* F s_b_shift_reg_b_top_11_44_2=top__Qscope_0x3390870inst->imm6(const) */
    /* F s_b_shift_reg_b_top_11_44_3 = (sint64)s_b_shift_reg_b_top_11_44_2 (const) */
    /* D s_b_shift_reg_b_top_11_44_4 = s_b_shift_reg_b_top_11_44_0>>s_b_shift_reg_b_top_11_44_3 */
    Statement& s_b_shift_reg_b_top_11_44_4 = builder.sar(Operand(*ir_idx_read_gpr_sx_b_shift_reg_b_top_11_48_0r), Operand(PrimitiveTypes.s64, ((sint64)imm6)));
    /* D s_b_shift_reg_b_top_11_44_5 = (uint64)s_b_shift_reg_b_top_11_44_4 */
    Statement& s_b_shift_reg_b_top_11_44_5 = s_b_shift_reg_b_top_11_44_4;
    /* D s_b_shift_reg_b_top_11_44_6: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_44_5, dominates: s_b_top_10_0  */
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(s_b_shift_reg_b_top_11_44_5));
    /* F s_b_shift_reg_b_top_11_44_7: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_45: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_0=top__Qscope_0x3390870inst->rm(const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_2 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_0==s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_1 (const) */
    uint8 s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_3: &temp_32 = Alloc sint64 */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_4: If s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_2: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_47 else b_read_gpr_sx_b_shift_reg_b_top_11_48_48 (const) */
    if (s_b_read_gpr_sx_b_shift_reg_b_top_11_48_45_2) 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_47;
    }
    else 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_48;
    }
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_46: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_0=top__Qscope_0x3390870inst->rm(const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_2 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_0==s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_1 (const) */
    uint8 s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_3: &temp_33 = Alloc sint64 */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_4: If s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_2: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_50 else b_read_gpr_sx_b_shift_reg_b_top_11_48_51 (const) */
    if (s_b_read_gpr_sx_b_shift_reg_b_top_11_48_46_2) 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_50;
    }
    else 
    {
      goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_51;
    }
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_47: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_47_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_47_1 = (sint64) 0 (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_47_2: temp_32 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_47_1 (const), dominates: s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_0  */
    CV_temp_32 = (sint64)0ULL;
    builder.store(Operand(*ir_idx_temp_32), Operand(PrimitiveTypes.u8, CV_temp_32));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_47_3: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_49 (const) */
    goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_49;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_48: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_0=top__Qscope_0x3390870inst->rm(const) */
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_1 = ReadRegBank 0:s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_0 (uint64) */
    Statement& s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_1));
    }
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_2 = (sint64)s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_1 */
    Statement& s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_2 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_1;
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_3: temp_32 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_2, dominates: s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_0  */
    builder.store(Operand(*ir_idx_temp_32), Operand(s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_2));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_48_4: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_49 (const) */
    goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_49;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_49: 
  {
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_0 = temp_32 */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_1: Free &temp_32 (8) */
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_2: read_gpr_sx_b_shift_reg_b_top_11_48_0r = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_0, dominates: s_b_shift_reg_b_top_11_44_0  */
    builder.store(Operand(*ir_idx_read_gpr_sx_b_shift_reg_b_top_11_48_0r), Operand(*ir_idx_temp_32));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_49_3: Jump b_shift_reg_b_top_11_44 (const) */
    goto block_b_shift_reg_b_top_11_44;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_50: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_50_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_50_1 = (sint64) 0 (const) */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_50_2: temp_33 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_50_1 (const), dominates: s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_0  */
    CV_temp_33 = (sint64)0ULL;
    builder.store(Operand(*ir_idx_temp_33), Operand(PrimitiveTypes.u8, CV_temp_33));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_50_3: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_52 (const) */
    goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_52;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_51: 
  {
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_0=top__Qscope_0x3390870inst->rm(const) */
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_1 = ReadRegBank 1:s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_0 (uint32) */
    Statement& s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_1));
    }
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_2 = (sint32)s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_1 */
    Statement& s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_2 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_1;
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_3 = (sint64)s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_2 */
    Statement& s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_3 = builder.sx(Operand(s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_2));
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_4: temp_33 = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_3, dominates: s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_0  */
    builder.store(Operand(*ir_idx_temp_33), Operand(s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_3));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_51_5: Jump b_read_gpr_sx_b_shift_reg_b_top_11_48_52 (const) */
    goto block_b_read_gpr_sx_b_shift_reg_b_top_11_48_52;
  }
  block_b_read_gpr_sx_b_shift_reg_b_top_11_48_52: 
  {
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_0 = temp_33 */
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_1: Free &temp_33 (8) */
    /* D s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_2: read_gpr_sx_b_shift_reg_b_top_11_48_0r = s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_0, dominates: s_b_shift_reg_b_top_11_44_0  */
    builder.store(Operand(*ir_idx_read_gpr_sx_b_shift_reg_b_top_11_48_0r), Operand(*ir_idx_temp_33));
    /* F s_b_read_gpr_sx_b_shift_reg_b_top_11_48_52_3: Jump b_shift_reg_b_top_11_44 (const) */
    goto block_b_shift_reg_b_top_11_44;
  }
  block_b_shift_reg_b_top_11_53: 
  {
    /* F s_b_shift_reg_b_top_11_53_0=top__Qscope_0x3390870inst->sf(const) */
    /* F s_b_shift_reg_b_top_11_53_1=top__Qscope_0x3390870inst->rm(const) */
    /* F s_b_shift_reg_b_top_11_53_2: &read_gpr_b_shift_reg_b_top_11_59_0r = Alloc uint64 */
    /* F s_b_shift_reg_b_top_11_53_3: If s_b_shift_reg_b_top_11_53_0: Jump b_read_gpr_b_shift_reg_b_top_11_59_55 else b_read_gpr_b_shift_reg_b_top_11_59_56 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_55;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_56;
    }
  }
  block_b_shift_reg_b_top_11_54: 
  {
    /* D s_b_shift_reg_b_top_11_54_0 = read_gpr_b_shift_reg_b_top_11_59_0r */
    /* F s_b_shift_reg_b_top_11_54_1: Free &read_gpr_b_shift_reg_b_top_11_59_0r (8) */
    /* F s_b_shift_reg_b_top_11_54_2=top__Qscope_0x3390870inst->imm6(const) */
    /* F s_b_shift_reg_b_top_11_54_3 = (uint64)s_b_shift_reg_b_top_11_54_2 (const) */
    /* D s_b_shift_reg_b_top_11_54_4 = s_b_shift_reg_b_top_11_54_0>>>s_b_shift_reg_b_top_11_54_3 */
    Statement& s_b_shift_reg_b_top_11_54_4 = builder.ror(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_59_0r), Operand(PrimitiveTypes.u64, ((uint64)imm6)));
    /* D s_b_shift_reg_b_top_11_54_5: shift_reg_b_top_11_0r = s_b_shift_reg_b_top_11_54_4, dominates: s_b_top_10_0  */
    builder.store(Operand(*ir_idx_shift_reg_b_top_11_0r), Operand(s_b_shift_reg_b_top_11_54_4));
    /* F s_b_shift_reg_b_top_11_54_6: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_55: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_55_0=top__Qscope_0x3390870inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_55_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_55_2 = s_b_read_gpr_b_shift_reg_b_top_11_59_55_0==s_b_read_gpr_b_shift_reg_b_top_11_59_55_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_59_55_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_55_3: &temp_37 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_55_4: If s_b_read_gpr_b_shift_reg_b_top_11_59_55_2: Jump b_read_gpr_b_shift_reg_b_top_11_59_57 else b_read_gpr_b_shift_reg_b_top_11_59_58 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_59_55_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_57;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_58;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_56: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_56_0=top__Qscope_0x3390870inst->rm(const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_56_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_56_2 = s_b_read_gpr_b_shift_reg_b_top_11_59_56_0==s_b_read_gpr_b_shift_reg_b_top_11_59_56_1 (const) */
    uint8 s_b_read_gpr_b_shift_reg_b_top_11_59_56_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_56_3: &temp_38 = Alloc uint64 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_56_4: If s_b_read_gpr_b_shift_reg_b_top_11_59_56_2: Jump b_read_gpr_b_shift_reg_b_top_11_59_60 else b_read_gpr_b_shift_reg_b_top_11_59_61 (const) */
    if (s_b_read_gpr_b_shift_reg_b_top_11_59_56_2) 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_60;
    }
    else 
    {
      goto block_b_read_gpr_b_shift_reg_b_top_11_59_61;
    }
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_57: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_57_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_57_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_57_2: temp_37 = s_b_read_gpr_b_shift_reg_b_top_11_59_57_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_59_59_0  */
    CV_temp_37 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_37), Operand(PrimitiveTypes.u8, CV_temp_37));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_57_3: Jump b_read_gpr_b_shift_reg_b_top_11_59_59 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_59_59;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_58: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_58_0=top__Qscope_0x3390870inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_58_1 = ReadRegBank 0:s_b_read_gpr_b_shift_reg_b_top_11_59_58_0 (uint64) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_59_58_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_59_58_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_58_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_59_58_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_59_58_2 = s_b_read_gpr_b_shift_reg_b_top_11_59_58_1;
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_58_3: temp_37 = s_b_read_gpr_b_shift_reg_b_top_11_59_58_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_59_59_0  */
    builder.store(Operand(*ir_idx_temp_37), Operand(s_b_read_gpr_b_shift_reg_b_top_11_59_58_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_58_4: Jump b_read_gpr_b_shift_reg_b_top_11_59_59 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_59_59;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_59: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_59_0 = temp_37 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_59_1: Free &temp_37 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_59_2: read_gpr_b_shift_reg_b_top_11_59_0r = s_b_read_gpr_b_shift_reg_b_top_11_59_59_0, dominates: s_b_shift_reg_b_top_11_54_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_59_0r), Operand(*ir_idx_temp_37));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_59_3: Jump b_shift_reg_b_top_11_54 (const) */
    goto block_b_shift_reg_b_top_11_54;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_60: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_60_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_60_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_60_2: temp_38 = s_b_read_gpr_b_shift_reg_b_top_11_59_60_1 (const), dominates: s_b_read_gpr_b_shift_reg_b_top_11_59_62_0  */
    CV_temp_38 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_38), Operand(PrimitiveTypes.u8, CV_temp_38));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_60_3: Jump b_read_gpr_b_shift_reg_b_top_11_59_62 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_59_62;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_61: 
  {
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_61_0=top__Qscope_0x3390870inst->rm(const) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_61_1 = ReadRegBank 1:s_b_read_gpr_b_shift_reg_b_top_11_59_61_0 (uint32) */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_59_61_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_shift_reg_b_top_11_59_61_1));
    }
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_61_2 = (uint64)s_b_read_gpr_b_shift_reg_b_top_11_59_61_1 */
    Statement& s_b_read_gpr_b_shift_reg_b_top_11_59_61_2 = builder.zx(Operand(s_b_read_gpr_b_shift_reg_b_top_11_59_61_1));
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_61_3: temp_38 = s_b_read_gpr_b_shift_reg_b_top_11_59_61_2, dominates: s_b_read_gpr_b_shift_reg_b_top_11_59_62_0  */
    builder.store(Operand(*ir_idx_temp_38), Operand(s_b_read_gpr_b_shift_reg_b_top_11_59_61_2));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_61_4: Jump b_read_gpr_b_shift_reg_b_top_11_59_62 (const) */
    goto block_b_read_gpr_b_shift_reg_b_top_11_59_62;
  }
  block_b_read_gpr_b_shift_reg_b_top_11_59_62: 
  {
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_62_0 = temp_38 */
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_62_1: Free &temp_38 (8) */
    /* D s_b_read_gpr_b_shift_reg_b_top_11_59_62_2: read_gpr_b_shift_reg_b_top_11_59_0r = s_b_read_gpr_b_shift_reg_b_top_11_59_62_0, dominates: s_b_shift_reg_b_top_11_54_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_shift_reg_b_top_11_59_0r), Operand(*ir_idx_temp_38));
    /* F s_b_read_gpr_b_shift_reg_b_top_11_59_62_3: Jump b_shift_reg_b_top_11_54 (const) */
    goto block_b_shift_reg_b_top_11_54;
  }
  block_b_top_63: 
  {
    /* F s_b_top_63_0: Free &write_gpr_b_top_69__Qscope_0x33bbb30value (8) */
    /* F s_b_top_63_1=top__Qscope_0x3390870inst->opc(const) */
    /* F s_b_top_63_2 = (const uint8) 3 (const) */
    /* F s_b_top_63_3 = s_b_top_63_1==s_b_top_63_2 (const) */
    uint8 s_b_top_63_3 = ((uint8)(opc == (uint8)3ULL));
    /* F s_b_top_63_4: If s_b_top_63_3: Jump b_top_69 else b_top_70 (const) */
    if (s_b_top_63_3) 
    {
      goto block_b_top_69;
    }
    else 
    {
      goto block_b_top_70;
    }
  }
  block_b_write_gpr_b_top_69_64: 
  {
    /* F s_b_write_gpr_b_top_69_64_0: Jump b_top_63 (const) */
    goto block_b_top_63;
  }
  block_b_write_gpr_b_top_69_65: 
  {
    /* F s_b_write_gpr_b_top_69_65_0=top__Qscope_0x3390870inst->sf(const) */
    /* F s_b_write_gpr_b_top_69_65_1: If s_b_write_gpr_b_top_69_65_0: Jump b_write_gpr_b_top_69_66 else b_write_gpr_b_top_69_68 (const) */
    if (sf) 
    {
      goto block_b_write_gpr_b_top_69_66;
    }
    else 
    {
      goto block_b_write_gpr_b_top_69_68;
    }
  }
  block_b_write_gpr_b_top_69_66: 
  {
    /* F s_b_write_gpr_b_top_69_66_0=top__Qscope_0x3390870inst->rd(const) */
    /* D s_b_write_gpr_b_top_69_66_1 = write_gpr_b_top_69__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_69_66_2: WriteRegBank 0:s_b_write_gpr_b_top_69_66_0 = s_b_write_gpr_b_top_69_66_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_write_gpr_b_top_69__Qscope_0x33bbb30value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_b_top_69__Qscope_0x33bbb30value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_69_66_3: Jump b_write_gpr_b_top_69_67 (const) */
    goto block_b_write_gpr_b_top_69_67;
  }
  block_b_write_gpr_b_top_69_67: 
  {
    /* F s_b_write_gpr_b_top_69_67_0: Jump b_top_63 (const) */
    goto block_b_top_63;
  }
  block_b_write_gpr_b_top_69_68: 
  {
    /* F s_b_write_gpr_b_top_69_68_0=top__Qscope_0x3390870inst->rd(const) */
    /* D s_b_write_gpr_b_top_69_68_1 = write_gpr_b_top_69__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_69_68_2 = (uint32)s_b_write_gpr_b_top_69_68_1 */
    Statement& s_b_write_gpr_b_top_69_68_2 = builder.trunc(Operand(*ir_idx_write_gpr_b_top_69__Qscope_0x33bbb30value));
    /* D s_b_write_gpr_b_top_69_68_3 = (uint64)s_b_write_gpr_b_top_69_68_2 */
    Statement& s_b_write_gpr_b_top_69_68_3 = builder.zx(Operand(s_b_write_gpr_b_top_69_68_2));
    /* D s_b_write_gpr_b_top_69_68_4: WriteRegBank 0:s_b_write_gpr_b_top_69_68_0 = s_b_write_gpr_b_top_69_68_3 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_write_gpr_b_top_69_68_3));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_69_68_3), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_69_68_5: Jump b_write_gpr_b_top_69_67 (const) */
    goto block_b_write_gpr_b_top_69_67;
  }
  block_b_top_69: 
  {
    /* D s_b_top_69_0 = top__Qscope_0x3390a80result */
    /* D s_b_top_69_1 = [unknown intrinsic 39] */
    Statement& s_b_top_69_1 = builder.update_zn(Operand(*ir_idx_top__Qscope_0x3390a80result));
    /* F s_b_top_69_2 = (const uint8) 0 (const) */
    /* F s_b_top_69_3: WriteReg 5 = s_b_top_69_2 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 266), Operand(PrimitiveTypes.u8, (uint8)0ULL));
    }
    builder.streg(Operand(PrimitiveTypes.u8, (uint8)0ULL), Operand(PrimitiveTypes.u32, 266));
    /* F s_b_top_69_4 = (const uint8) 0 (const) */
    /* F s_b_top_69_5: WriteReg 6 = s_b_top_69_4 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 267), Operand(PrimitiveTypes.u8, (uint8)0ULL));
    }
    builder.streg(Operand(PrimitiveTypes.u8, (uint8)0ULL), Operand(PrimitiveTypes.u32, 267));
    /* F s_b_top_69_6: Jump b_top_70 (const) */
    goto block_b_top_70;
  }
  block_b_top_70: 
  {
    /* F s_b_top_70_0: Free &top__Qscope_0x3390a80result (8) */
    /* F s_b_top_70_1: Return */
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
bool aarch64_insn_cbz::translate(vrt::dbt::ir::Builder& builder) const
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
  uint64 CV_temp_4;
  vrt::dbt::ir::Statement *ir_idx_temp_4 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_3
  // Reg s_b_read_gpr_b_top_1_3_3
  uint64 CV_temp_5;
  vrt::dbt::ir::Statement *ir_idx_temp_5 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_1_4
  // Block b_read_gpr_b_top_1_5
  // Block b_read_gpr_b_top_1_6
  // Block b_read_gpr_b_top_1_7
  // Block b_read_gpr_b_top_1_8
  // Block b_read_gpr_b_top_1_9
  // Block b_top_10
  vrt::dbt::ir::BasicBlock& block_idx_b_top_10 = builder.function().create_block();
  // Block b_top_11
  vrt::dbt::ir::BasicBlock& block_idx_b_top_11 = builder.function().create_block();
  // Block b_top_12
  vrt::dbt::ir::BasicBlock& block_idx_b_top_12 = builder.function().create_block();
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0=top__Qscope_0x3257910inst->sf(const) */
    /* F s_b_0_1=top__Qscope_0x3257910inst->rt(const) */
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
    /* F s_b_top_1_2 = (const uint8) 0 (const) */
    /* F s_b_top_1_3 = (uint64) 0 (const) */
    /* D s_b_top_1_4 = s_b_top_1_0==s_b_top_1_3 */
    Statement& s_b_top_1_4 = builder.cmpeq(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(PrimitiveTypes.u64, (uint64)0ULL));
    /* D s_b_top_1_5: If s_b_top_1_4: Jump b_top_10 else b_top_12 */
    {
      BasicBlock *true_target;
      {
        BasicBlock *block = &block_idx_b_top_10;
        dynamic_block_queue.enqueue(&block_idx_b_top_10);
        true_target = block;
      }
      BasicBlock *false_target;
      {
        BasicBlock *block = &block_idx_b_top_12;
        dynamic_block_queue.enqueue(&block_idx_b_top_12);
        false_target = block;
      }
      builder.branch(Operand(s_b_top_1_4), Operand(*true_target),Operand(*false_target));
    }
    goto fixed_done;
  }
  block_b_read_gpr_b_top_1_2: 
  {
    /* F s_b_read_gpr_b_top_1_2_0=top__Qscope_0x3257910inst->rt(const) */
    /* F s_b_read_gpr_b_top_1_2_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_2_2 = s_b_read_gpr_b_top_1_2_0==s_b_read_gpr_b_top_1_2_1 (const) */
    uint8 s_b_read_gpr_b_top_1_2_2 = ((uint8)(rt == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_1_2_3: &temp_4 = Alloc uint64 */
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
    /* F s_b_read_gpr_b_top_1_3_0=top__Qscope_0x3257910inst->rt(const) */
    /* F s_b_read_gpr_b_top_1_3_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_1_3_2 = s_b_read_gpr_b_top_1_3_0==s_b_read_gpr_b_top_1_3_1 (const) */
    uint8 s_b_read_gpr_b_top_1_3_2 = ((uint8)(rt == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_1_3_3: &temp_5 = Alloc uint64 */
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
    /* F s_b_read_gpr_b_top_1_4_2: temp_4 = s_b_read_gpr_b_top_1_4_1 (const), dominates: s_b_read_gpr_b_top_1_6_0  */
    CV_temp_4 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_4), Operand(PrimitiveTypes.u8, CV_temp_4));
    /* F s_b_read_gpr_b_top_1_4_3: Jump b_read_gpr_b_top_1_6 (const) */
    goto block_b_read_gpr_b_top_1_6;
  }
  block_b_read_gpr_b_top_1_5: 
  {
    /* F s_b_read_gpr_b_top_1_5_0=top__Qscope_0x3257910inst->rt(const) */
    /* D s_b_read_gpr_b_top_1_5_1 = ReadRegBank 0:s_b_read_gpr_b_top_1_5_0 (uint64) */
    Statement& s_b_read_gpr_b_top_1_5_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))),Operand(s_b_read_gpr_b_top_1_5_1));
    }
    /* D s_b_read_gpr_b_top_1_5_2 = (uint64)s_b_read_gpr_b_top_1_5_1 */
    Statement& s_b_read_gpr_b_top_1_5_2 = s_b_read_gpr_b_top_1_5_1;
    /* D s_b_read_gpr_b_top_1_5_3: temp_4 = s_b_read_gpr_b_top_1_5_2, dominates: s_b_read_gpr_b_top_1_6_0  */
    builder.store(Operand(*ir_idx_temp_4), Operand(s_b_read_gpr_b_top_1_5_2));
    /* F s_b_read_gpr_b_top_1_5_4: Jump b_read_gpr_b_top_1_6 (const) */
    goto block_b_read_gpr_b_top_1_6;
  }
  block_b_read_gpr_b_top_1_6: 
  {
    /* D s_b_read_gpr_b_top_1_6_0 = temp_4 */
    /* F s_b_read_gpr_b_top_1_6_1: Free &temp_4 (8) */
    /* D s_b_read_gpr_b_top_1_6_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_6_0, dominates: s_b_top_1_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_4));
    /* F s_b_read_gpr_b_top_1_6_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_read_gpr_b_top_1_7: 
  {
    /* F s_b_read_gpr_b_top_1_7_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_1_7_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_1_7_2: temp_5 = s_b_read_gpr_b_top_1_7_1 (const), dominates: s_b_read_gpr_b_top_1_9_0  */
    CV_temp_5 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_5), Operand(PrimitiveTypes.u8, CV_temp_5));
    /* F s_b_read_gpr_b_top_1_7_3: Jump b_read_gpr_b_top_1_9 (const) */
    goto block_b_read_gpr_b_top_1_9;
  }
  block_b_read_gpr_b_top_1_8: 
  {
    /* F s_b_read_gpr_b_top_1_8_0=top__Qscope_0x3257910inst->rt(const) */
    /* D s_b_read_gpr_b_top_1_8_1 = ReadRegBank 1:s_b_read_gpr_b_top_1_8_0 (uint32) */
    Statement& s_b_read_gpr_b_top_1_8_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))),Operand(s_b_read_gpr_b_top_1_8_1));
    }
    /* D s_b_read_gpr_b_top_1_8_2 = (uint64)s_b_read_gpr_b_top_1_8_1 */
    Statement& s_b_read_gpr_b_top_1_8_2 = builder.zx(Operand(s_b_read_gpr_b_top_1_8_1));
    /* D s_b_read_gpr_b_top_1_8_3: temp_5 = s_b_read_gpr_b_top_1_8_2, dominates: s_b_read_gpr_b_top_1_9_0  */
    builder.store(Operand(*ir_idx_temp_5), Operand(s_b_read_gpr_b_top_1_8_2));
    /* F s_b_read_gpr_b_top_1_8_4: Jump b_read_gpr_b_top_1_9 (const) */
    goto block_b_read_gpr_b_top_1_9;
  }
  block_b_read_gpr_b_top_1_9: 
  {
    /* D s_b_read_gpr_b_top_1_9_0 = temp_5 */
    /* F s_b_read_gpr_b_top_1_9_1: Free &temp_5 (8) */
    /* D s_b_read_gpr_b_top_1_9_2: read_gpr_b_top_1_0r = s_b_read_gpr_b_top_1_9_0, dominates: s_b_top_1_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_1_0r), Operand(*ir_idx_temp_5));
    /* F s_b_read_gpr_b_top_1_9_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  // BLOCK b_top_10 not fully fixed
  // BLOCK b_top_11 not fully fixed
  // BLOCK b_top_12 not fully fixed
  fixed_done:
  if (dynamic_block_queue.count() == 0) 
  {
    builder.jump(Operand(*__exit_block));
  }
  else 
  {
    Set<vrt::dbt::ir::BasicBlock *> emitted_blocks;
    while(dynamic_block_queue.count() > 0) 
    {
      vrt::dbt::ir::BasicBlock *block_index = dynamic_block_queue.dequeue();
      if (emitted_blocks.contains(block_index)) continue;
      emitted_blocks.insert(block_index);
      if (block_index == &block_idx_b_top_10) // BLOCK START LINE 241, END LINE 241
      {
        builder.set_block(block_idx_b_top_10);
        // STMT: LINE 0: [D] s_b_top_10_0 = ReadReg 2 (uint64)
        Statement& s_b_top_10_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 256));
        if (_trace) 
        {
          builder.trace_reg_read(Operand(PrimitiveTypes.u32, 256), Operand(s_b_top_10_0));
        }
        // STMT: LINE 52793384: [D] s_b_top_10_1 = (sint64)s_b_top_10_0
        Statement& s_b_top_10_1 = s_b_top_10_0;
        // STMT: LINE 1: [F] s_b_top_10_2=top__Qscope_0x3257910inst->imms64(const)
        // STMT: LINE 52794728: [D] s_b_top_10_3 = s_b_top_10_1+s_b_top_10_2
        Statement& s_b_top_10_3 = builder.add(Operand(s_b_top_10_1), Operand(PrimitiveTypes.s64, imms64));
        // STMT: LINE 0: [D] s_b_top_10_4 = (uint64)s_b_top_10_3
        Statement& s_b_top_10_4 = s_b_top_10_3;
        // STMT: LINE 1684370529: [D] s_b_top_10_5: WriteReg 2 = s_b_top_10_4
        if (_trace) 
        {
          builder.trace_reg_write(Operand(PrimitiveTypes.u32, 256), Operand(s_b_top_10_4));
        }
        builder.streg(Operand(s_b_top_10_4), Operand(PrimitiveTypes.u32, 256));
        // STMT: LINE 1: [F] s_b_top_10_6: Jump b_top_11 (const)
        {
          BasicBlock *block = &block_idx_b_top_11;
          dynamic_block_queue.enqueue(&block_idx_b_top_11);
          builder.jump(Operand(*block));
        }
        continue;
      }
      if (block_index == &block_idx_b_top_11) // BLOCK START LINE 240, END LINE 240
      {
        builder.set_block(block_idx_b_top_11);
        // STMT: LINE 0: [F] s_b_top_11_0: Return
        builder.jump(Operand(*__exit_block));
        continue;
      }
      if (block_index == &block_idx_b_top_12) // BLOCK START LINE 243, END LINE 243
      {
        builder.set_block(block_idx_b_top_12);
        // STMT: LINE 0: [D] s_b_top_12_0 = ReadReg 2 (uint64)
        Statement& s_b_top_12_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 256));
        if (_trace) 
        {
          builder.trace_reg_read(Operand(PrimitiveTypes.u32, 256), Operand(s_b_top_12_0));
        }
        // STMT: LINE 0: [D] s_b_top_12_1 = (uint64)s_b_top_12_0
        Statement& s_b_top_12_1 = s_b_top_12_0;
        // STMT: LINE 0: [F] s_b_top_12_2 = (const uint8) 4 (const)
        // STMT: LINE 0: [F] s_b_top_12_3 = (uint64) 4 (const)
        // STMT: LINE 0: [D] s_b_top_12_4 = s_b_top_12_1+s_b_top_12_3
        Statement& s_b_top_12_4 = builder.add(Operand(s_b_top_12_1), Operand(PrimitiveTypes.u64, (uint64)4ULL));
        // STMT: LINE 0: [D] s_b_top_12_5: WriteReg 2 = s_b_top_12_4
        if (_trace) 
        {
          builder.trace_reg_write(Operand(PrimitiveTypes.u32, 256), Operand(s_b_top_12_4));
        }
        builder.streg(Operand(s_b_top_12_4), Operand(PrimitiveTypes.u32, 256));
        // STMT: LINE 0: [F] s_b_top_12_6: Jump b_top_11 (const)
        {
          BasicBlock *block = &block_idx_b_top_11;
          dynamic_block_queue.enqueue(&block_idx_b_top_11);
          builder.jump(Operand(*block));
        }
        continue;
      }
    }
  }
  builder.set_block(*__exit_block);
  if (!is_end_of_block()) 
  {
    builder.inc_pc(Operand(PrimitiveTypes.u64, 4));
  }
  return true;
}
bool aarch64_insn_crc32c::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_eret::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_ldr::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_ldrhi::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_ldtrh::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_madd::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_msub::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_rev32::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_stp::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_0
  uint64 CV_top__Qscope_0x3306570address;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x3306570address = &builder.alloc(PrimitiveTypes.u64);
  // Reg s_b_0_1
  sint64 CV_top__Qscope_0x3306570offset;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x3306570offset = &builder.alloc(PrimitiveTypes.u64);
  // Reg s_b_0_29
  uint64 CV_temp_12;
  vrt::dbt::ir::Statement *ir_idx_temp_12 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_sp_b_top_2_1
  // Block b_read_gpr_sp_b_top_2_2
  // Block b_read_gpr_sp_b_top_2_3
  // Reg s_b_read_gpr_sp_b_top_2_3_11
  uint64 CV_read_gpr_b_top_12_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_12_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_4
  // Reg s_b_top_4_6
  uint64 CV_read_gpr_b_top_22_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_22_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_12_5
  // Reg s_b_read_gpr_b_top_12_5_3
  uint64 CV_temp_17;
  vrt::dbt::ir::Statement *ir_idx_temp_17 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_12_6
  // Reg s_b_read_gpr_b_top_12_6_3
  uint64 CV_temp_18;
  vrt::dbt::ir::Statement *ir_idx_temp_18 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_12_7
  // Block b_read_gpr_b_top_12_8
  // Block b_read_gpr_b_top_12_9
  // Block b_read_gpr_b_top_12_10
  // Block b_read_gpr_b_top_12_11
  // Block b_read_gpr_b_top_12_12
  // Block b_top_13
  // Block b_read_gpr_b_top_22_14
  // Reg s_b_read_gpr_b_top_22_14_3
  uint64 CV_temp_22;
  vrt::dbt::ir::Statement *ir_idx_temp_22 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_22_15
  // Reg s_b_read_gpr_b_top_22_15_3
  uint64 CV_temp_23;
  vrt::dbt::ir::Statement *ir_idx_temp_23 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_22_16
  // Block b_read_gpr_b_top_22_17
  // Block b_read_gpr_b_top_22_18
  // Block b_read_gpr_b_top_22_19
  // Block b_read_gpr_b_top_22_20
  // Block b_read_gpr_b_top_22_21
  // Block b_top_22
  // Block b_top_23
  // Block b_top_24
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0: &top__Qscope_0x3306570address = Alloc uint64 */
    /* F s_b_0_1: &top__Qscope_0x3306570offset = Alloc sint64 */
    /* F s_b_0_2 = (const uint8) 2 (const) */
    /* F s_b_0_3=top__Qscope_0x3306360inst->opc(const) */
    /* F s_b_0_4 = (const uint8) 1 (const) */
    /* F s_b_0_5 = s_b_0_3>>s_b_0_4 (const) */
    uint8 s_b_0_5 = ((uint8)(opc >> (uint8)1ULL));
    /* F s_b_0_6 = (const uint8) 1 (const) */
    /* F s_b_0_7 = s_b_0_5&s_b_0_6 (const) */
    uint8 s_b_0_7 = ((uint8)(s_b_0_5 & (uint8)1ULL));
    /* F s_b_0_8 = s_b_0_2+s_b_0_7 (const) */
    uint8 s_b_0_8 = ((uint8)((uint8)2ULL + s_b_0_7));
    /* F s_b_0_9=top__Qscope_0x3306360inst->imm7(const) */
    /* F s_b_0_10 = (uint64)s_b_0_9 (const) */
    /* F s_b_0_11 = (const uint8) 7 (const) */
    /* F s_b_0_12 = (sint64)s_b_0_10 (const) */
    /* F s_b_0_13 = (const uint8) 3f (const) */
    /* F s_b_0_14 = (const uint8) 38 (const) */
    /* F s_b_0_15 = (sint64) 38 (const) */
    /* F s_b_0_16 = s_b_0_12<<s_b_0_15 (const) */
    sint64 s_b_0_16 = ((sint64)(((sint64)((uint64)imm7)) << (sint64)56ULL));
    /* F s_b_0_17 = (const uint8) 3f (const) */
    /* F s_b_0_18 = (const uint8) 38 (const) */
    /* F s_b_0_19 = (sint64) 38 (const) */
    /* F s_b_0_20 = s_b_0_16>>s_b_0_19 (const) */
    sint64 s_b_0_20 = ((sint64)(s_b_0_16 >> (sint64)56ULL));
    /* F s_b_0_21 = (sint64)s_b_0_8 (const) */
    /* F s_b_0_22 = s_b_0_20<<s_b_0_21 (const) */
    sint64 s_b_0_22 = ((sint64)(s_b_0_20 << ((sint64)s_b_0_8)));
    /* F s_b_0_23: top__Qscope_0x3306570offset = s_b_0_22 (const), dominates: s_b_read_gpr_sp_b_top_2_3_2  */
    CV_top__Qscope_0x3306570offset = s_b_0_22;
    /* F s_b_0_24 = (const uint8) 1 (const) */
    /* F s_b_0_25=top__Qscope_0x3306360inst->rn(const) */
    /* F s_b_0_26=top__Qscope_0x3306360inst->rn(const) */
    /* F s_b_0_27 = (const uint8) 1f (const) */
    /* F s_b_0_28 = s_b_0_26==s_b_0_27 (const) */
    uint8 s_b_0_28 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_0_29: &temp_12 = Alloc uint64 */
    /* F s_b_0_30: If s_b_0_28: Jump b_read_gpr_sp_b_top_2_1 else b_read_gpr_sp_b_top_2_2 (const) */
    if (s_b_0_28) 
    {
      goto block_b_read_gpr_sp_b_top_2_1;
    }
    else 
    {
      goto block_b_read_gpr_sp_b_top_2_2;
    }
  }
  block_b_read_gpr_sp_b_top_2_1: 
  {
    /* D s_b_read_gpr_sp_b_top_2_1_0 = ReadReg 0 (uint64) */
    Statement& s_b_read_gpr_sp_b_top_2_1_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 248));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 248), Operand(s_b_read_gpr_sp_b_top_2_1_0));
    }
    /* D s_b_read_gpr_sp_b_top_2_1_1: temp_12 = s_b_read_gpr_sp_b_top_2_1_0, dominates: s_b_read_gpr_sp_b_top_2_3_0  */
    builder.store(Operand(*ir_idx_temp_12), Operand(s_b_read_gpr_sp_b_top_2_1_0));
    /* F s_b_read_gpr_sp_b_top_2_1_2: Jump b_read_gpr_sp_b_top_2_3 (const) */
    goto block_b_read_gpr_sp_b_top_2_3;
  }
  block_b_read_gpr_sp_b_top_2_2: 
  {
    /* F s_b_read_gpr_sp_b_top_2_2_0=top__Qscope_0x3306360inst->rn(const) */
    /* D s_b_read_gpr_sp_b_top_2_2_1 = ReadRegBank 0:s_b_read_gpr_sp_b_top_2_2_0 (uint64) */
    Statement& s_b_read_gpr_sp_b_top_2_2_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_sp_b_top_2_2_1));
    }
    /* D s_b_read_gpr_sp_b_top_2_2_2: temp_12 = s_b_read_gpr_sp_b_top_2_2_1, dominates: s_b_read_gpr_sp_b_top_2_3_0  */
    builder.store(Operand(*ir_idx_temp_12), Operand(s_b_read_gpr_sp_b_top_2_2_1));
    /* F s_b_read_gpr_sp_b_top_2_2_3: Jump b_read_gpr_sp_b_top_2_3 (const) */
    goto block_b_read_gpr_sp_b_top_2_3;
  }
  block_b_read_gpr_sp_b_top_2_3: 
  {
    /* D s_b_read_gpr_sp_b_top_2_3_0 = temp_12 */
    /* F s_b_read_gpr_sp_b_top_2_3_1: Free &temp_12 (8) */
    /* F s_b_read_gpr_sp_b_top_2_3_2 = top__Qscope_0x3306570offset (const) */
    /* D s_b_read_gpr_sp_b_top_2_3_3 = (sint64)s_b_read_gpr_sp_b_top_2_3_0 */
    Statement& s_b_read_gpr_sp_b_top_2_3_3 = *ir_idx_temp_12;
    /* D s_b_read_gpr_sp_b_top_2_3_4 = s_b_read_gpr_sp_b_top_2_3_3+s_b_read_gpr_sp_b_top_2_3_2 */
    Statement& s_b_read_gpr_sp_b_top_2_3_4 = builder.add(Operand(s_b_read_gpr_sp_b_top_2_3_3), Operand(PrimitiveTypes.s64, CV_top__Qscope_0x3306570offset));
    /* D s_b_read_gpr_sp_b_top_2_3_5 = (uint64)s_b_read_gpr_sp_b_top_2_3_4 */
    Statement& s_b_read_gpr_sp_b_top_2_3_5 = s_b_read_gpr_sp_b_top_2_3_4;
    /* D s_b_read_gpr_sp_b_top_2_3_6: top__Qscope_0x3306570address = s_b_read_gpr_sp_b_top_2_3_5, dominates: s_b_top_22_0 s_b_top_24_0  */
    builder.store(Operand(*ir_idx_top__Qscope_0x3306570address), Operand(s_b_read_gpr_sp_b_top_2_3_5));
    /* F s_b_read_gpr_sp_b_top_2_3_7=top__Qscope_0x3306360inst->opc(const) */
    /* F s_b_read_gpr_sp_b_top_2_3_8 = (const uint8) 2 (const) */
    /* F s_b_read_gpr_sp_b_top_2_3_9 = s_b_read_gpr_sp_b_top_2_3_7==s_b_read_gpr_sp_b_top_2_3_8 (const) */
    uint8 s_b_read_gpr_sp_b_top_2_3_9 = ((uint8)(opc == (uint8)2ULL));
    /* F s_b_read_gpr_sp_b_top_2_3_10=top__Qscope_0x3306360inst->rt(const) */
    /* F s_b_read_gpr_sp_b_top_2_3_11: &read_gpr_b_top_12_0r = Alloc uint64 */
    /* F s_b_read_gpr_sp_b_top_2_3_12: If s_b_read_gpr_sp_b_top_2_3_9: Jump b_read_gpr_b_top_12_5 else b_read_gpr_b_top_12_6 (const) */
    if (s_b_read_gpr_sp_b_top_2_3_9) 
    {
      goto block_b_read_gpr_b_top_12_5;
    }
    else 
    {
      goto block_b_read_gpr_b_top_12_6;
    }
  }
  block_b_top_4: 
  {
    /* D s_b_top_4_0 = read_gpr_b_top_12_0r */
    /* F s_b_top_4_1: Free &read_gpr_b_top_12_0r (8) */
    /* F s_b_top_4_2=top__Qscope_0x3306360inst->opc(const) */
    /* F s_b_top_4_3 = (const uint8) 2 (const) */
    /* F s_b_top_4_4 = s_b_top_4_2==s_b_top_4_3 (const) */
    uint8 s_b_top_4_4 = ((uint8)(opc == (uint8)2ULL));
    /* F s_b_top_4_5=top__Qscope_0x3306360inst->rt2(const) */
    /* F s_b_top_4_6: &read_gpr_b_top_22_0r = Alloc uint64 */
    /* F s_b_top_4_7: If s_b_top_4_4: Jump b_read_gpr_b_top_22_14 else b_read_gpr_b_top_22_15 (const) */
    if (s_b_top_4_4) 
    {
      goto block_b_read_gpr_b_top_22_14;
    }
    else 
    {
      goto block_b_read_gpr_b_top_22_15;
    }
  }
  block_b_read_gpr_b_top_12_5: 
  {
    /* F s_b_read_gpr_b_top_12_5_0=top__Qscope_0x3306360inst->rt(const) */
    /* F s_b_read_gpr_b_top_12_5_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_12_5_2 = s_b_read_gpr_b_top_12_5_0==s_b_read_gpr_b_top_12_5_1 (const) */
    uint8 s_b_read_gpr_b_top_12_5_2 = ((uint8)(rt == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_12_5_3: &temp_17 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_12_5_4: If s_b_read_gpr_b_top_12_5_2: Jump b_read_gpr_b_top_12_7 else b_read_gpr_b_top_12_8 (const) */
    if (s_b_read_gpr_b_top_12_5_2) 
    {
      goto block_b_read_gpr_b_top_12_7;
    }
    else 
    {
      goto block_b_read_gpr_b_top_12_8;
    }
  }
  block_b_read_gpr_b_top_12_6: 
  {
    /* F s_b_read_gpr_b_top_12_6_0=top__Qscope_0x3306360inst->rt(const) */
    /* F s_b_read_gpr_b_top_12_6_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_12_6_2 = s_b_read_gpr_b_top_12_6_0==s_b_read_gpr_b_top_12_6_1 (const) */
    uint8 s_b_read_gpr_b_top_12_6_2 = ((uint8)(rt == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_12_6_3: &temp_18 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_12_6_4: If s_b_read_gpr_b_top_12_6_2: Jump b_read_gpr_b_top_12_10 else b_read_gpr_b_top_12_11 (const) */
    if (s_b_read_gpr_b_top_12_6_2) 
    {
      goto block_b_read_gpr_b_top_12_10;
    }
    else 
    {
      goto block_b_read_gpr_b_top_12_11;
    }
  }
  block_b_read_gpr_b_top_12_7: 
  {
    /* F s_b_read_gpr_b_top_12_7_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_12_7_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_12_7_2: temp_17 = s_b_read_gpr_b_top_12_7_1 (const), dominates: s_b_read_gpr_b_top_12_9_0  */
    CV_temp_17 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_17), Operand(PrimitiveTypes.u8, CV_temp_17));
    /* F s_b_read_gpr_b_top_12_7_3: Jump b_read_gpr_b_top_12_9 (const) */
    goto block_b_read_gpr_b_top_12_9;
  }
  block_b_read_gpr_b_top_12_8: 
  {
    /* F s_b_read_gpr_b_top_12_8_0=top__Qscope_0x3306360inst->rt(const) */
    /* D s_b_read_gpr_b_top_12_8_1 = ReadRegBank 0:s_b_read_gpr_b_top_12_8_0 (uint64) */
    Statement& s_b_read_gpr_b_top_12_8_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))),Operand(s_b_read_gpr_b_top_12_8_1));
    }
    /* D s_b_read_gpr_b_top_12_8_2 = (uint64)s_b_read_gpr_b_top_12_8_1 */
    Statement& s_b_read_gpr_b_top_12_8_2 = s_b_read_gpr_b_top_12_8_1;
    /* D s_b_read_gpr_b_top_12_8_3: temp_17 = s_b_read_gpr_b_top_12_8_2, dominates: s_b_read_gpr_b_top_12_9_0  */
    builder.store(Operand(*ir_idx_temp_17), Operand(s_b_read_gpr_b_top_12_8_2));
    /* F s_b_read_gpr_b_top_12_8_4: Jump b_read_gpr_b_top_12_9 (const) */
    goto block_b_read_gpr_b_top_12_9;
  }
  block_b_read_gpr_b_top_12_9: 
  {
    /* D s_b_read_gpr_b_top_12_9_0 = temp_17 */
    /* F s_b_read_gpr_b_top_12_9_1: Free &temp_17 (8) */
    /* D s_b_read_gpr_b_top_12_9_2: read_gpr_b_top_12_0r = s_b_read_gpr_b_top_12_9_0, dominates: s_b_top_4_0 s_b_top_22_1 s_b_top_24_1  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_12_0r), Operand(*ir_idx_temp_17));
    /* F s_b_read_gpr_b_top_12_9_3: Jump b_top_4 (const) */
    goto block_b_top_4;
  }
  block_b_read_gpr_b_top_12_10: 
  {
    /* F s_b_read_gpr_b_top_12_10_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_12_10_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_12_10_2: temp_18 = s_b_read_gpr_b_top_12_10_1 (const), dominates: s_b_read_gpr_b_top_12_12_0  */
    CV_temp_18 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_18), Operand(PrimitiveTypes.u8, CV_temp_18));
    /* F s_b_read_gpr_b_top_12_10_3: Jump b_read_gpr_b_top_12_12 (const) */
    goto block_b_read_gpr_b_top_12_12;
  }
  block_b_read_gpr_b_top_12_11: 
  {
    /* F s_b_read_gpr_b_top_12_11_0=top__Qscope_0x3306360inst->rt(const) */
    /* D s_b_read_gpr_b_top_12_11_1 = ReadRegBank 1:s_b_read_gpr_b_top_12_11_0 (uint32) */
    Statement& s_b_read_gpr_b_top_12_11_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))),Operand(s_b_read_gpr_b_top_12_11_1));
    }
    /* D s_b_read_gpr_b_top_12_11_2 = (uint64)s_b_read_gpr_b_top_12_11_1 */
    Statement& s_b_read_gpr_b_top_12_11_2 = builder.zx(Operand(s_b_read_gpr_b_top_12_11_1));
    /* D s_b_read_gpr_b_top_12_11_3: temp_18 = s_b_read_gpr_b_top_12_11_2, dominates: s_b_read_gpr_b_top_12_12_0  */
    builder.store(Operand(*ir_idx_temp_18), Operand(s_b_read_gpr_b_top_12_11_2));
    /* F s_b_read_gpr_b_top_12_11_4: Jump b_read_gpr_b_top_12_12 (const) */
    goto block_b_read_gpr_b_top_12_12;
  }
  block_b_read_gpr_b_top_12_12: 
  {
    /* D s_b_read_gpr_b_top_12_12_0 = temp_18 */
    /* F s_b_read_gpr_b_top_12_12_1: Free &temp_18 (8) */
    /* D s_b_read_gpr_b_top_12_12_2: read_gpr_b_top_12_0r = s_b_read_gpr_b_top_12_12_0, dominates: s_b_top_4_0 s_b_top_22_1 s_b_top_24_1  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_12_0r), Operand(*ir_idx_temp_18));
    /* F s_b_read_gpr_b_top_12_12_3: Jump b_top_4 (const) */
    goto block_b_top_4;
  }
  block_b_top_13: 
  {
    /* D s_b_top_13_0 = read_gpr_b_top_22_0r */
    /* F s_b_top_13_1: Free &read_gpr_b_top_22_0r (8) */
    /* F s_b_top_13_2=top__Qscope_0x3306360inst->opc(const) */
    /* F s_b_top_13_3 = (const uint8) 2 (const) */
    /* F s_b_top_13_4 = s_b_top_13_2==s_b_top_13_3 (const) */
    uint8 s_b_top_13_4 = ((uint8)(opc == (uint8)2ULL));
    /* F s_b_top_13_5: If s_b_top_13_4: Jump b_top_22 else b_top_24 (const) */
    if (s_b_top_13_4) 
    {
      goto block_b_top_22;
    }
    else 
    {
      goto block_b_top_24;
    }
  }
  block_b_read_gpr_b_top_22_14: 
  {
    /* F s_b_read_gpr_b_top_22_14_0=top__Qscope_0x3306360inst->rt2(const) */
    /* F s_b_read_gpr_b_top_22_14_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_22_14_2 = s_b_read_gpr_b_top_22_14_0==s_b_read_gpr_b_top_22_14_1 (const) */
    uint8 s_b_read_gpr_b_top_22_14_2 = ((uint8)(rt2 == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_22_14_3: &temp_22 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_22_14_4: If s_b_read_gpr_b_top_22_14_2: Jump b_read_gpr_b_top_22_16 else b_read_gpr_b_top_22_17 (const) */
    if (s_b_read_gpr_b_top_22_14_2) 
    {
      goto block_b_read_gpr_b_top_22_16;
    }
    else 
    {
      goto block_b_read_gpr_b_top_22_17;
    }
  }
  block_b_read_gpr_b_top_22_15: 
  {
    /* F s_b_read_gpr_b_top_22_15_0=top__Qscope_0x3306360inst->rt2(const) */
    /* F s_b_read_gpr_b_top_22_15_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_22_15_2 = s_b_read_gpr_b_top_22_15_0==s_b_read_gpr_b_top_22_15_1 (const) */
    uint8 s_b_read_gpr_b_top_22_15_2 = ((uint8)(rt2 == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_22_15_3: &temp_23 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_22_15_4: If s_b_read_gpr_b_top_22_15_2: Jump b_read_gpr_b_top_22_19 else b_read_gpr_b_top_22_20 (const) */
    if (s_b_read_gpr_b_top_22_15_2) 
    {
      goto block_b_read_gpr_b_top_22_19;
    }
    else 
    {
      goto block_b_read_gpr_b_top_22_20;
    }
  }
  block_b_read_gpr_b_top_22_16: 
  {
    /* F s_b_read_gpr_b_top_22_16_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_22_16_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_22_16_2: temp_22 = s_b_read_gpr_b_top_22_16_1 (const), dominates: s_b_read_gpr_b_top_22_18_0  */
    CV_temp_22 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_22), Operand(PrimitiveTypes.u8, CV_temp_22));
    /* F s_b_read_gpr_b_top_22_16_3: Jump b_read_gpr_b_top_22_18 (const) */
    goto block_b_read_gpr_b_top_22_18;
  }
  block_b_read_gpr_b_top_22_17: 
  {
    /* F s_b_read_gpr_b_top_22_17_0=top__Qscope_0x3306360inst->rt2(const) */
    /* D s_b_read_gpr_b_top_22_17_1 = ReadRegBank 0:s_b_read_gpr_b_top_22_17_0 (uint64) */
    Statement& s_b_read_gpr_b_top_22_17_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt2))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt2))),Operand(s_b_read_gpr_b_top_22_17_1));
    }
    /* D s_b_read_gpr_b_top_22_17_2 = (uint64)s_b_read_gpr_b_top_22_17_1 */
    Statement& s_b_read_gpr_b_top_22_17_2 = s_b_read_gpr_b_top_22_17_1;
    /* D s_b_read_gpr_b_top_22_17_3: temp_22 = s_b_read_gpr_b_top_22_17_2, dominates: s_b_read_gpr_b_top_22_18_0  */
    builder.store(Operand(*ir_idx_temp_22), Operand(s_b_read_gpr_b_top_22_17_2));
    /* F s_b_read_gpr_b_top_22_17_4: Jump b_read_gpr_b_top_22_18 (const) */
    goto block_b_read_gpr_b_top_22_18;
  }
  block_b_read_gpr_b_top_22_18: 
  {
    /* D s_b_read_gpr_b_top_22_18_0 = temp_22 */
    /* F s_b_read_gpr_b_top_22_18_1: Free &temp_22 (8) */
    /* D s_b_read_gpr_b_top_22_18_2: read_gpr_b_top_22_0r = s_b_read_gpr_b_top_22_18_0, dominates: s_b_top_13_0 s_b_top_22_6 s_b_top_24_7  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_22_0r), Operand(*ir_idx_temp_22));
    /* F s_b_read_gpr_b_top_22_18_3: Jump b_top_13 (const) */
    goto block_b_top_13;
  }
  block_b_read_gpr_b_top_22_19: 
  {
    /* F s_b_read_gpr_b_top_22_19_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_22_19_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_22_19_2: temp_23 = s_b_read_gpr_b_top_22_19_1 (const), dominates: s_b_read_gpr_b_top_22_21_0  */
    CV_temp_23 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_23), Operand(PrimitiveTypes.u8, CV_temp_23));
    /* F s_b_read_gpr_b_top_22_19_3: Jump b_read_gpr_b_top_22_21 (const) */
    goto block_b_read_gpr_b_top_22_21;
  }
  block_b_read_gpr_b_top_22_20: 
  {
    /* F s_b_read_gpr_b_top_22_20_0=top__Qscope_0x3306360inst->rt2(const) */
    /* D s_b_read_gpr_b_top_22_20_1 = ReadRegBank 1:s_b_read_gpr_b_top_22_20_0 (uint32) */
    Statement& s_b_read_gpr_b_top_22_20_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt2))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt2))),Operand(s_b_read_gpr_b_top_22_20_1));
    }
    /* D s_b_read_gpr_b_top_22_20_2 = (uint64)s_b_read_gpr_b_top_22_20_1 */
    Statement& s_b_read_gpr_b_top_22_20_2 = builder.zx(Operand(s_b_read_gpr_b_top_22_20_1));
    /* D s_b_read_gpr_b_top_22_20_3: temp_23 = s_b_read_gpr_b_top_22_20_2, dominates: s_b_read_gpr_b_top_22_21_0  */
    builder.store(Operand(*ir_idx_temp_23), Operand(s_b_read_gpr_b_top_22_20_2));
    /* F s_b_read_gpr_b_top_22_20_4: Jump b_read_gpr_b_top_22_21 (const) */
    goto block_b_read_gpr_b_top_22_21;
  }
  block_b_read_gpr_b_top_22_21: 
  {
    /* D s_b_read_gpr_b_top_22_21_0 = temp_23 */
    /* F s_b_read_gpr_b_top_22_21_1: Free &temp_23 (8) */
    /* D s_b_read_gpr_b_top_22_21_2: read_gpr_b_top_22_0r = s_b_read_gpr_b_top_22_21_0, dominates: s_b_top_13_0 s_b_top_22_6 s_b_top_24_7  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_22_0r), Operand(*ir_idx_temp_23));
    /* F s_b_read_gpr_b_top_22_21_3: Jump b_top_13 (const) */
    goto block_b_top_13;
  }
  block_b_top_22: 
  {
    /* D s_b_top_22_0 = top__Qscope_0x3306570address */
    /* D s_b_top_22_1 = read_gpr_b_top_12_0r */
    /* D s_b_top_22_2: Store 8 s_b_top_22_0 <= s_b_top_22_1 */
    if (_trace) 
    {
      builder.trace_mem_write(Operand(*ir_idx_top__Qscope_0x3306570address), Operand(*ir_idx_read_gpr_b_top_12_0r));
    }
    Statement& s_b_top_22_2 = builder.stmem(Operand(*ir_idx_read_gpr_b_top_12_0r), Operand(*ir_idx_top__Qscope_0x3306570address));
    /* F s_b_top_22_3 = (const uint8) 8 (const) */
    /* F s_b_top_22_4 = (uint64) 8 (const) */
    /* D s_b_top_22_5 = s_b_top_22_0+s_b_top_22_4 */
    Statement& s_b_top_22_5 = builder.add(Operand(*ir_idx_top__Qscope_0x3306570address), Operand(PrimitiveTypes.u64, (uint64)8ULL));
    /* D s_b_top_22_6 = read_gpr_b_top_22_0r */
    /* D s_b_top_22_7: Store 8 s_b_top_22_5 <= s_b_top_22_6 */
    if (_trace) 
    {
      builder.trace_mem_write(Operand(s_b_top_22_5), Operand(*ir_idx_read_gpr_b_top_22_0r));
    }
    Statement& s_b_top_22_7 = builder.stmem(Operand(*ir_idx_read_gpr_b_top_22_0r), Operand(s_b_top_22_5));
    /* F s_b_top_22_8: Jump b_top_23 (const) */
    goto block_b_top_23;
  }
  block_b_top_23: 
  {
    /* F s_b_top_23_0: Free &top__Qscope_0x3306570address (8) */
    /* F s_b_top_23_1: Free &top__Qscope_0x3306570offset (8) */
    /* F s_b_top_23_2: Return */
    goto fixed_done;
  }
  block_b_top_24: 
  {
    /* D s_b_top_24_0 = top__Qscope_0x3306570address */
    /* D s_b_top_24_1 = read_gpr_b_top_12_0r */
    /* D s_b_top_24_2 = (uint32)s_b_top_24_1 */
    Statement& s_b_top_24_2 = builder.trunc(Operand(*ir_idx_read_gpr_b_top_12_0r));
    /* D s_b_top_24_3: Store 4 s_b_top_24_0 <= s_b_top_24_2 */
    if (_trace) 
    {
      builder.trace_mem_write(Operand(*ir_idx_top__Qscope_0x3306570address), Operand(s_b_top_24_2));
    }
    Statement& s_b_top_24_3 = builder.stmem(Operand(s_b_top_24_2), Operand(*ir_idx_top__Qscope_0x3306570address));
    /* F s_b_top_24_4 = (const uint8) 4 (const) */
    /* F s_b_top_24_5 = (uint64) 4 (const) */
    /* D s_b_top_24_6 = s_b_top_24_0+s_b_top_24_5 */
    Statement& s_b_top_24_6 = builder.add(Operand(*ir_idx_top__Qscope_0x3306570address), Operand(PrimitiveTypes.u64, (uint64)4ULL));
    /* D s_b_top_24_7 = read_gpr_b_top_22_0r */
    /* D s_b_top_24_8 = (uint32)s_b_top_24_7 */
    Statement& s_b_top_24_8 = builder.trunc(Operand(*ir_idx_read_gpr_b_top_22_0r));
    /* D s_b_top_24_9: Store 4 s_b_top_24_6 <= s_b_top_24_8 */
    if (_trace) 
    {
      builder.trace_mem_write(Operand(s_b_top_24_6), Operand(s_b_top_24_8));
    }
    Statement& s_b_top_24_9 = builder.stmem(Operand(s_b_top_24_8), Operand(s_b_top_24_6));
    /* F s_b_top_24_10: Jump b_top_23 (const) */
    goto block_b_top_23;
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
bool aarch64_insn_strh_reg::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_sturh::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_umaddl::translate(vrt::dbt::ir::Builder& builder) const
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
