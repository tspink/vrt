#include "aarch64-jit.h"
#include <vrt/util/list.h>
#include <vrt/util/set.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
using namespace vrt::arch::guest::aarch64;
using namespace vrt::dbt::ir;
using namespace vrt::util;
bool aarch64_insn_add_ereg::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_barrier::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0: Return */
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
bool aarch64_insn_ccmpi::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_csinv::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_hint::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0: Return */
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
bool aarch64_insn_ldrb::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_ldrsw_lit::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_ldurb::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_movn::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_prfm::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_sbfm::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_3
  uint8 CV_temp_1;
  vrt::dbt::ir::Statement *ir_idx_temp_1 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_1
  // Reg s_b_top_1_5
  uint8 CV_temp_2;
  vrt::dbt::ir::Statement *ir_idx_temp_2 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_2
  // Block b_top_3
  // Block b_top_4
  // Block b_top_5
  // Block b_top_6
  // Block b_top_7
  // Reg s_b_top_7_0
  uint64 CV_top__Qscope_0x3204070value;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x3204070value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_8
  // Reg s_b_top_8_4
  uint64 CV_read_gpr_b_top_11_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_11_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_9
  // Block b_top_10
  // Reg s_b_top_10_4
  uint64 CV_read_gpr_b_top_27_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_27_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_11
  // Reg s_b_top_11_11
  uint64 CV_write_gpr_b_top_21__Qscope_0x33bbb30value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_b_top_21__Qscope_0x33bbb30value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_11_12
  // Reg s_b_read_gpr_b_top_11_12_3
  uint64 CV_temp_6;
  vrt::dbt::ir::Statement *ir_idx_temp_6 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_11_13
  // Reg s_b_read_gpr_b_top_11_13_3
  uint64 CV_temp_7;
  vrt::dbt::ir::Statement *ir_idx_temp_7 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_11_14
  // Block b_read_gpr_b_top_11_15
  // Block b_read_gpr_b_top_11_16
  // Block b_read_gpr_b_top_11_17
  // Block b_read_gpr_b_top_11_18
  // Block b_read_gpr_b_top_11_19
  // Block b_top_20
  // Block b_write_gpr_b_top_21_21
  // Block b_write_gpr_b_top_21_22
  // Block b_write_gpr_b_top_21_23
  // Block b_write_gpr_b_top_21_24
  // Block b_write_gpr_b_top_21_25
  // Block b_top_26
  // Reg s_b_top_26_11
  uint64 CV_write_gpr_b_top_37__Qscope_0x33bbb30value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_b_top_37__Qscope_0x33bbb30value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_27_27
  // Reg s_b_read_gpr_b_top_27_27_3
  uint64 CV_temp_14;
  vrt::dbt::ir::Statement *ir_idx_temp_14 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_27_28
  // Reg s_b_read_gpr_b_top_27_28_3
  uint64 CV_temp_15;
  vrt::dbt::ir::Statement *ir_idx_temp_15 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_27_29
  // Block b_read_gpr_b_top_27_30
  // Block b_read_gpr_b_top_27_31
  // Block b_read_gpr_b_top_27_32
  // Block b_read_gpr_b_top_27_33
  // Block b_read_gpr_b_top_27_34
  // Block b_top_35
  // Block b_write_gpr_b_top_37_36
  // Block b_write_gpr_b_top_37_37
  // Block b_write_gpr_b_top_37_38
  // Block b_write_gpr_b_top_37_39
  // Block b_write_gpr_b_top_37_40
  // Block b_top_41
  // Reg s_b_top_41_2
  uint64 CV_read_gpr_b_top_46_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_46_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_42
  // Block b_top_43
  // Reg s_b_top_43_0
  uint64 CV_top__Qscope_0x32081a0bits;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x32081a0bits = &builder.alloc(PrimitiveTypes.u64);
  // Reg s_b_top_43_3
  uint64 CV_read_gpr_b_top_58_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_58_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_44
  // Block b_read_gpr_b_top_46_45
  // Reg s_b_read_gpr_b_top_46_45_3
  uint64 CV_temp_23;
  vrt::dbt::ir::Statement *ir_idx_temp_23 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_46_46
  // Reg s_b_read_gpr_b_top_46_46_3
  uint64 CV_temp_24;
  vrt::dbt::ir::Statement *ir_idx_temp_24 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_46_47
  // Block b_read_gpr_b_top_46_48
  // Block b_read_gpr_b_top_46_49
  // Block b_read_gpr_b_top_46_50
  // Block b_read_gpr_b_top_46_51
  // Block b_read_gpr_b_top_46_52
  // Block b_top_53
  // Block b_read_gpr_b_top_58_54
  // Reg s_b_read_gpr_b_top_58_54_3
  uint64 CV_temp_36;
  vrt::dbt::ir::Statement *ir_idx_temp_36 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_58_55
  // Reg s_b_read_gpr_b_top_58_55_3
  uint64 CV_temp_37;
  vrt::dbt::ir::Statement *ir_idx_temp_37 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_58_56
  // Block b_read_gpr_b_top_58_57
  // Block b_read_gpr_b_top_58_58
  // Block b_read_gpr_b_top_58_59
  // Block b_read_gpr_b_top_58_60
  // Block b_read_gpr_b_top_58_61
  // Block b_top_62
  // Block b_top_63
  // Block b_top_64
  // Block b_top_65
  // Block b_write_gpr_b_top_74_66
  // Block b_write_gpr_b_top_74_67
  // Block b_write_gpr_b_top_74_68
  // Block b_write_gpr_b_top_74_69
  // Block b_write_gpr_b_top_74_70
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0=top__Qscope_0x31fb450inst->sf(const) */
    /* F s_b_0_1 = (const uint8) 0 (const) */
    /* F s_b_0_2 = s_b_0_0==s_b_0_1 (const) */
    uint8 s_b_0_2 = ((uint8)(sf == (uint8)0ULL));
    /* F s_b_0_3: &temp_1 = Alloc uint8 */
    /* F s_b_0_4: temp_1 = s_b_0_2 (const), dominates: s_b_top_1_0 s_b_top_3_2  */
    CV_temp_1 = s_b_0_2;
    /* F s_b_0_5: If s_b_0_2: Jump b_top_2 else b_top_1 (const) */
    if (s_b_0_2) 
    {
      goto block_b_top_2;
    }
    else 
    {
      goto block_b_top_1;
    }
  }
  block_b_top_1: 
  {
    /* F s_b_top_1_0 = temp_1 (const) */
    /* F s_b_top_1_1: Free &temp_1 (1) */
    /* F s_b_top_1_2=top__Qscope_0x31fb450inst->sf(const) */
    /* F s_b_top_1_3 = (const uint8) 1 (const) */
    /* F s_b_top_1_4 = s_b_top_1_2==s_b_top_1_3 (const) */
    uint8 s_b_top_1_4 = ((uint8)(sf == (uint8)1ULL));
    /* F s_b_top_1_5: &temp_2 = Alloc uint8 */
    /* F s_b_top_1_6: temp_2 = s_b_top_1_4 (const), dominates: s_b_top_3_0  */
    CV_temp_2 = s_b_top_1_4;
    /* F s_b_top_1_7: If s_b_top_1_4: Jump b_top_4 else b_top_3 (const) */
    if (s_b_top_1_4) 
    {
      goto block_b_top_4;
    }
    else 
    {
      goto block_b_top_3;
    }
  }
  block_b_top_2: 
  {
    /* F s_b_top_2_0=top__Qscope_0x31fb450inst->imms(const) */
    /* F s_b_top_2_1 = (const uint8) 1f (const) */
    /* F s_b_top_2_2 = s_b_top_2_0==s_b_top_2_1 (const) */
    uint8 s_b_top_2_2 = ((uint8)(imms == (uint8)31ULL));
    /* F s_b_top_2_3: temp_1 = s_b_top_2_2 (const), dominates: s_b_top_1_0 s_b_top_3_2  */
    CV_temp_1 = s_b_top_2_2;
    /* F s_b_top_2_4: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_3: 
  {
    /* F s_b_top_3_0 = temp_2 (const) */
    /* F s_b_top_3_1: Free &temp_2 (1) */
    /* F s_b_top_3_2 = temp_1 (const) */
    /* F s_b_top_3_3 = s_b_top_3_2|s_b_top_3_0 (const) */
    uint8 s_b_top_3_3 = ((uint8)(CV_temp_1 | CV_temp_2));
    /* F s_b_top_3_4: If s_b_top_3_3: Jump b_top_5 else b_top_7 (const) */
    if (s_b_top_3_3) 
    {
      goto block_b_top_5;
    }
    else 
    {
      goto block_b_top_7;
    }
  }
  block_b_top_4: 
  {
    /* F s_b_top_4_0=top__Qscope_0x31fb450inst->imms(const) */
    /* F s_b_top_4_1 = (const uint8) 3f (const) */
    /* F s_b_top_4_2 = s_b_top_4_0==s_b_top_4_1 (const) */
    uint8 s_b_top_4_2 = ((uint8)(imms == (uint8)63ULL));
    /* F s_b_top_4_3: temp_2 = s_b_top_4_2 (const), dominates: s_b_top_3_0  */
    CV_temp_2 = s_b_top_4_2;
    /* F s_b_top_4_4: Jump b_top_3 (const) */
    goto block_b_top_3;
  }
  block_b_top_5: 
  {
    /* F s_b_top_5_0=top__Qscope_0x31fb450inst->sf(const) */
    /* F s_b_top_5_1 = (const uint8) 0 (const) */
    /* F s_b_top_5_2 = s_b_top_5_0==s_b_top_5_1 (const) */
    uint8 s_b_top_5_2 = ((uint8)(sf == (uint8)0ULL));
    /* F s_b_top_5_3: If s_b_top_5_2: Jump b_top_8 else b_top_10 (const) */
    if (s_b_top_5_2) 
    {
      goto block_b_top_8;
    }
    else 
    {
      goto block_b_top_10;
    }
  }
  block_b_top_6: 
  {
    /* F s_b_top_6_0: Return */
    goto fixed_done;
  }
  block_b_top_7: 
  {
    /* F s_b_top_7_0: &top__Qscope_0x3204070value = Alloc uint64 */
    /* F s_b_top_7_1=top__Qscope_0x31fb450inst->imms(const) */
    /* F s_b_top_7_2=top__Qscope_0x31fb450inst->immr(const) */
    /* F s_b_top_7_3 = s_b_top_7_1>=s_b_top_7_2 (const) */
    uint8 s_b_top_7_3 = ((uint8)(imms >= immr));
    /* F s_b_top_7_4: If s_b_top_7_3: Jump b_top_41 else b_top_43 (const) */
    if (s_b_top_7_3) 
    {
      goto block_b_top_41;
    }
    else 
    {
      goto block_b_top_43;
    }
  }
  block_b_top_8: 
  {
    /* F s_b_top_8_0=top__Qscope_0x31fb450inst->sf(const) */
    /* F s_b_top_8_1=top__Qscope_0x31fb450inst->rd(const) */
    /* F s_b_top_8_2=top__Qscope_0x31fb450inst->sf(const) */
    /* F s_b_top_8_3=top__Qscope_0x31fb450inst->rn(const) */
    /* F s_b_top_8_4: &read_gpr_b_top_11_0r = Alloc uint64 */
    /* F s_b_top_8_5: If s_b_top_8_2: Jump b_read_gpr_b_top_11_12 else b_read_gpr_b_top_11_13 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_11_12;
    }
    else 
    {
      goto block_b_read_gpr_b_top_11_13;
    }
  }
  block_b_top_9: 
  {
    /* F s_b_top_9_0: Jump b_top_6 (const) */
    goto block_b_top_6;
  }
  block_b_top_10: 
  {
    /* F s_b_top_10_0=top__Qscope_0x31fb450inst->sf(const) */
    /* F s_b_top_10_1=top__Qscope_0x31fb450inst->rd(const) */
    /* F s_b_top_10_2=top__Qscope_0x31fb450inst->sf(const) */
    /* F s_b_top_10_3=top__Qscope_0x31fb450inst->rn(const) */
    /* F s_b_top_10_4: &read_gpr_b_top_27_0r = Alloc uint64 */
    /* F s_b_top_10_5: If s_b_top_10_2: Jump b_read_gpr_b_top_27_27 else b_read_gpr_b_top_27_28 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_27_27;
    }
    else 
    {
      goto block_b_read_gpr_b_top_27_28;
    }
  }
  block_b_top_11: 
  {
    /* D s_b_top_11_0 = read_gpr_b_top_11_0r */
    /* F s_b_top_11_1: Free &read_gpr_b_top_11_0r (8) */
    /* D s_b_top_11_2 = (sint32)s_b_top_11_0 */
    Statement& s_b_top_11_2 = builder.trunc(Operand(*ir_idx_read_gpr_b_top_11_0r));
    /* F s_b_top_11_3 = (const uint8) 20 (const) */
    /* F s_b_top_11_4=top__Qscope_0x31fb450inst->immr(const) */
    /* F s_b_top_11_5 = s_b_top_11_3-s_b_top_11_4 (const) */
    uint8 s_b_top_11_5 = ((uint8)((uint8)32ULL - immr));
    /* F s_b_top_11_6 = (sint32)s_b_top_11_5 (const) */
    /* D s_b_top_11_7 = s_b_top_11_2>>s_b_top_11_6 */
    Statement& s_b_top_11_7 = builder.sar(Operand(s_b_top_11_2), Operand(PrimitiveTypes.s32, ((sint32)s_b_top_11_5)));
    /* D s_b_top_11_8 = (uint64)s_b_top_11_7 */
    Statement& s_b_top_11_8 = builder.zx(Operand(s_b_top_11_7));
    /* F s_b_top_11_9=top__Qscope_0x31fb450inst->sf(const) */
    /* F s_b_top_11_10=top__Qscope_0x31fb450inst->rd(const) */
    /* F s_b_top_11_11: &write_gpr_b_top_21__Qscope_0x33bbb30value = Alloc uint64 */
    /* D s_b_top_11_12: write_gpr_b_top_21__Qscope_0x33bbb30value = s_b_top_11_8, dominates: s_b_write_gpr_b_top_21_23_1 s_b_write_gpr_b_top_21_25_1  */
    builder.store(Operand(*ir_idx_write_gpr_b_top_21__Qscope_0x33bbb30value), Operand(s_b_top_11_8));
    /* F s_b_top_11_13 = (const uint8) 1f (const) */
    /* F s_b_top_11_14 = s_b_top_11_10==s_b_top_11_13 (const) */
    uint8 s_b_top_11_14 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_11_15: If s_b_top_11_14: Jump b_write_gpr_b_top_21_21 else b_write_gpr_b_top_21_22 (const) */
    if (s_b_top_11_14) 
    {
      goto block_b_write_gpr_b_top_21_21;
    }
    else 
    {
      goto block_b_write_gpr_b_top_21_22;
    }
  }
  block_b_read_gpr_b_top_11_12: 
  {
    /* F s_b_read_gpr_b_top_11_12_0=top__Qscope_0x31fb450inst->rn(const) */
    /* F s_b_read_gpr_b_top_11_12_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_11_12_2 = s_b_read_gpr_b_top_11_12_0==s_b_read_gpr_b_top_11_12_1 (const) */
    uint8 s_b_read_gpr_b_top_11_12_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_11_12_3: &temp_6 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_11_12_4: If s_b_read_gpr_b_top_11_12_2: Jump b_read_gpr_b_top_11_14 else b_read_gpr_b_top_11_15 (const) */
    if (s_b_read_gpr_b_top_11_12_2) 
    {
      goto block_b_read_gpr_b_top_11_14;
    }
    else 
    {
      goto block_b_read_gpr_b_top_11_15;
    }
  }
  block_b_read_gpr_b_top_11_13: 
  {
    /* F s_b_read_gpr_b_top_11_13_0=top__Qscope_0x31fb450inst->rn(const) */
    /* F s_b_read_gpr_b_top_11_13_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_11_13_2 = s_b_read_gpr_b_top_11_13_0==s_b_read_gpr_b_top_11_13_1 (const) */
    uint8 s_b_read_gpr_b_top_11_13_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_11_13_3: &temp_7 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_11_13_4: If s_b_read_gpr_b_top_11_13_2: Jump b_read_gpr_b_top_11_17 else b_read_gpr_b_top_11_18 (const) */
    if (s_b_read_gpr_b_top_11_13_2) 
    {
      goto block_b_read_gpr_b_top_11_17;
    }
    else 
    {
      goto block_b_read_gpr_b_top_11_18;
    }
  }
  block_b_read_gpr_b_top_11_14: 
  {
    /* F s_b_read_gpr_b_top_11_14_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_11_14_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_11_14_2: temp_6 = s_b_read_gpr_b_top_11_14_1 (const), dominates: s_b_read_gpr_b_top_11_16_0  */
    CV_temp_6 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_6), Operand(PrimitiveTypes.u8, CV_temp_6));
    /* F s_b_read_gpr_b_top_11_14_3: Jump b_read_gpr_b_top_11_16 (const) */
    goto block_b_read_gpr_b_top_11_16;
  }
  block_b_read_gpr_b_top_11_15: 
  {
    /* F s_b_read_gpr_b_top_11_15_0=top__Qscope_0x31fb450inst->rn(const) */
    /* D s_b_read_gpr_b_top_11_15_1 = ReadRegBank 0:s_b_read_gpr_b_top_11_15_0 (uint64) */
    Statement& s_b_read_gpr_b_top_11_15_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_11_15_1));
    }
    /* D s_b_read_gpr_b_top_11_15_2 = (uint64)s_b_read_gpr_b_top_11_15_1 */
    Statement& s_b_read_gpr_b_top_11_15_2 = s_b_read_gpr_b_top_11_15_1;
    /* D s_b_read_gpr_b_top_11_15_3: temp_6 = s_b_read_gpr_b_top_11_15_2, dominates: s_b_read_gpr_b_top_11_16_0  */
    builder.store(Operand(*ir_idx_temp_6), Operand(s_b_read_gpr_b_top_11_15_2));
    /* F s_b_read_gpr_b_top_11_15_4: Jump b_read_gpr_b_top_11_16 (const) */
    goto block_b_read_gpr_b_top_11_16;
  }
  block_b_read_gpr_b_top_11_16: 
  {
    /* D s_b_read_gpr_b_top_11_16_0 = temp_6 */
    /* F s_b_read_gpr_b_top_11_16_1: Free &temp_6 (8) */
    /* D s_b_read_gpr_b_top_11_16_2: read_gpr_b_top_11_0r = s_b_read_gpr_b_top_11_16_0, dominates: s_b_top_11_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_11_0r), Operand(*ir_idx_temp_6));
    /* F s_b_read_gpr_b_top_11_16_3: Jump b_top_11 (const) */
    goto block_b_top_11;
  }
  block_b_read_gpr_b_top_11_17: 
  {
    /* F s_b_read_gpr_b_top_11_17_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_11_17_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_11_17_2: temp_7 = s_b_read_gpr_b_top_11_17_1 (const), dominates: s_b_read_gpr_b_top_11_19_0  */
    CV_temp_7 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_7), Operand(PrimitiveTypes.u8, CV_temp_7));
    /* F s_b_read_gpr_b_top_11_17_3: Jump b_read_gpr_b_top_11_19 (const) */
    goto block_b_read_gpr_b_top_11_19;
  }
  block_b_read_gpr_b_top_11_18: 
  {
    /* F s_b_read_gpr_b_top_11_18_0=top__Qscope_0x31fb450inst->rn(const) */
    /* D s_b_read_gpr_b_top_11_18_1 = ReadRegBank 1:s_b_read_gpr_b_top_11_18_0 (uint32) */
    Statement& s_b_read_gpr_b_top_11_18_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_11_18_1));
    }
    /* D s_b_read_gpr_b_top_11_18_2 = (uint64)s_b_read_gpr_b_top_11_18_1 */
    Statement& s_b_read_gpr_b_top_11_18_2 = builder.zx(Operand(s_b_read_gpr_b_top_11_18_1));
    /* D s_b_read_gpr_b_top_11_18_3: temp_7 = s_b_read_gpr_b_top_11_18_2, dominates: s_b_read_gpr_b_top_11_19_0  */
    builder.store(Operand(*ir_idx_temp_7), Operand(s_b_read_gpr_b_top_11_18_2));
    /* F s_b_read_gpr_b_top_11_18_4: Jump b_read_gpr_b_top_11_19 (const) */
    goto block_b_read_gpr_b_top_11_19;
  }
  block_b_read_gpr_b_top_11_19: 
  {
    /* D s_b_read_gpr_b_top_11_19_0 = temp_7 */
    /* F s_b_read_gpr_b_top_11_19_1: Free &temp_7 (8) */
    /* D s_b_read_gpr_b_top_11_19_2: read_gpr_b_top_11_0r = s_b_read_gpr_b_top_11_19_0, dominates: s_b_top_11_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_11_0r), Operand(*ir_idx_temp_7));
    /* F s_b_read_gpr_b_top_11_19_3: Jump b_top_11 (const) */
    goto block_b_top_11;
  }
  block_b_top_20: 
  {
    /* F s_b_top_20_0: Free &write_gpr_b_top_21__Qscope_0x33bbb30value (8) */
    /* F s_b_top_20_1: Jump b_top_9 (const) */
    goto block_b_top_9;
  }
  block_b_write_gpr_b_top_21_21: 
  {
    /* F s_b_write_gpr_b_top_21_21_0: Jump b_top_20 (const) */
    goto block_b_top_20;
  }
  block_b_write_gpr_b_top_21_22: 
  {
    /* F s_b_write_gpr_b_top_21_22_0=top__Qscope_0x31fb450inst->sf(const) */
    /* F s_b_write_gpr_b_top_21_22_1: If s_b_write_gpr_b_top_21_22_0: Jump b_write_gpr_b_top_21_23 else b_write_gpr_b_top_21_25 (const) */
    if (sf) 
    {
      goto block_b_write_gpr_b_top_21_23;
    }
    else 
    {
      goto block_b_write_gpr_b_top_21_25;
    }
  }
  block_b_write_gpr_b_top_21_23: 
  {
    /* F s_b_write_gpr_b_top_21_23_0=top__Qscope_0x31fb450inst->rd(const) */
    /* D s_b_write_gpr_b_top_21_23_1 = write_gpr_b_top_21__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_21_23_2: WriteRegBank 0:s_b_write_gpr_b_top_21_23_0 = s_b_write_gpr_b_top_21_23_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_write_gpr_b_top_21__Qscope_0x33bbb30value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_b_top_21__Qscope_0x33bbb30value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_21_23_3: Jump b_write_gpr_b_top_21_24 (const) */
    goto block_b_write_gpr_b_top_21_24;
  }
  block_b_write_gpr_b_top_21_24: 
  {
    /* F s_b_write_gpr_b_top_21_24_0: Jump b_top_20 (const) */
    goto block_b_top_20;
  }
  block_b_write_gpr_b_top_21_25: 
  {
    /* F s_b_write_gpr_b_top_21_25_0=top__Qscope_0x31fb450inst->rd(const) */
    /* D s_b_write_gpr_b_top_21_25_1 = write_gpr_b_top_21__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_21_25_2 = (uint32)s_b_write_gpr_b_top_21_25_1 */
    Statement& s_b_write_gpr_b_top_21_25_2 = builder.trunc(Operand(*ir_idx_write_gpr_b_top_21__Qscope_0x33bbb30value));
    /* D s_b_write_gpr_b_top_21_25_3 = (uint64)s_b_write_gpr_b_top_21_25_2 */
    Statement& s_b_write_gpr_b_top_21_25_3 = builder.zx(Operand(s_b_write_gpr_b_top_21_25_2));
    /* D s_b_write_gpr_b_top_21_25_4: WriteRegBank 0:s_b_write_gpr_b_top_21_25_0 = s_b_write_gpr_b_top_21_25_3 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_write_gpr_b_top_21_25_3));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_21_25_3), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_21_25_5: Jump b_write_gpr_b_top_21_24 (const) */
    goto block_b_write_gpr_b_top_21_24;
  }
  block_b_top_26: 
  {
    /* D s_b_top_26_0 = read_gpr_b_top_27_0r */
    /* F s_b_top_26_1: Free &read_gpr_b_top_27_0r (8) */
    /* D s_b_top_26_2 = (sint64)s_b_top_26_0 */
    Statement& s_b_top_26_2 = *ir_idx_read_gpr_b_top_27_0r;
    /* F s_b_top_26_3 = (const uint8) 40 (const) */
    /* F s_b_top_26_4=top__Qscope_0x31fb450inst->immr(const) */
    /* F s_b_top_26_5 = s_b_top_26_3-s_b_top_26_4 (const) */
    uint8 s_b_top_26_5 = ((uint8)((uint8)64ULL - immr));
    /* F s_b_top_26_6 = (sint64)s_b_top_26_5 (const) */
    /* D s_b_top_26_7 = s_b_top_26_2>>s_b_top_26_6 */
    Statement& s_b_top_26_7 = builder.sar(Operand(s_b_top_26_2), Operand(PrimitiveTypes.s64, ((sint64)s_b_top_26_5)));
    /* D s_b_top_26_8 = (uint64)s_b_top_26_7 */
    Statement& s_b_top_26_8 = s_b_top_26_7;
    /* F s_b_top_26_9=top__Qscope_0x31fb450inst->sf(const) */
    /* F s_b_top_26_10=top__Qscope_0x31fb450inst->rd(const) */
    /* F s_b_top_26_11: &write_gpr_b_top_37__Qscope_0x33bbb30value = Alloc uint64 */
    /* D s_b_top_26_12: write_gpr_b_top_37__Qscope_0x33bbb30value = s_b_top_26_8, dominates: s_b_write_gpr_b_top_37_38_1 s_b_write_gpr_b_top_37_40_1  */
    builder.store(Operand(*ir_idx_write_gpr_b_top_37__Qscope_0x33bbb30value), Operand(s_b_top_26_8));
    /* F s_b_top_26_13 = (const uint8) 1f (const) */
    /* F s_b_top_26_14 = s_b_top_26_10==s_b_top_26_13 (const) */
    uint8 s_b_top_26_14 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_26_15: If s_b_top_26_14: Jump b_write_gpr_b_top_37_36 else b_write_gpr_b_top_37_37 (const) */
    if (s_b_top_26_14) 
    {
      goto block_b_write_gpr_b_top_37_36;
    }
    else 
    {
      goto block_b_write_gpr_b_top_37_37;
    }
  }
  block_b_read_gpr_b_top_27_27: 
  {
    /* F s_b_read_gpr_b_top_27_27_0=top__Qscope_0x31fb450inst->rn(const) */
    /* F s_b_read_gpr_b_top_27_27_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_27_27_2 = s_b_read_gpr_b_top_27_27_0==s_b_read_gpr_b_top_27_27_1 (const) */
    uint8 s_b_read_gpr_b_top_27_27_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_27_27_3: &temp_14 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_27_27_4: If s_b_read_gpr_b_top_27_27_2: Jump b_read_gpr_b_top_27_29 else b_read_gpr_b_top_27_30 (const) */
    if (s_b_read_gpr_b_top_27_27_2) 
    {
      goto block_b_read_gpr_b_top_27_29;
    }
    else 
    {
      goto block_b_read_gpr_b_top_27_30;
    }
  }
  block_b_read_gpr_b_top_27_28: 
  {
    /* F s_b_read_gpr_b_top_27_28_0=top__Qscope_0x31fb450inst->rn(const) */
    /* F s_b_read_gpr_b_top_27_28_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_27_28_2 = s_b_read_gpr_b_top_27_28_0==s_b_read_gpr_b_top_27_28_1 (const) */
    uint8 s_b_read_gpr_b_top_27_28_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_27_28_3: &temp_15 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_27_28_4: If s_b_read_gpr_b_top_27_28_2: Jump b_read_gpr_b_top_27_32 else b_read_gpr_b_top_27_33 (const) */
    if (s_b_read_gpr_b_top_27_28_2) 
    {
      goto block_b_read_gpr_b_top_27_32;
    }
    else 
    {
      goto block_b_read_gpr_b_top_27_33;
    }
  }
  block_b_read_gpr_b_top_27_29: 
  {
    /* F s_b_read_gpr_b_top_27_29_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_27_29_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_27_29_2: temp_14 = s_b_read_gpr_b_top_27_29_1 (const), dominates: s_b_read_gpr_b_top_27_31_0  */
    CV_temp_14 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_14), Operand(PrimitiveTypes.u8, CV_temp_14));
    /* F s_b_read_gpr_b_top_27_29_3: Jump b_read_gpr_b_top_27_31 (const) */
    goto block_b_read_gpr_b_top_27_31;
  }
  block_b_read_gpr_b_top_27_30: 
  {
    /* F s_b_read_gpr_b_top_27_30_0=top__Qscope_0x31fb450inst->rn(const) */
    /* D s_b_read_gpr_b_top_27_30_1 = ReadRegBank 0:s_b_read_gpr_b_top_27_30_0 (uint64) */
    Statement& s_b_read_gpr_b_top_27_30_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_27_30_1));
    }
    /* D s_b_read_gpr_b_top_27_30_2 = (uint64)s_b_read_gpr_b_top_27_30_1 */
    Statement& s_b_read_gpr_b_top_27_30_2 = s_b_read_gpr_b_top_27_30_1;
    /* D s_b_read_gpr_b_top_27_30_3: temp_14 = s_b_read_gpr_b_top_27_30_2, dominates: s_b_read_gpr_b_top_27_31_0  */
    builder.store(Operand(*ir_idx_temp_14), Operand(s_b_read_gpr_b_top_27_30_2));
    /* F s_b_read_gpr_b_top_27_30_4: Jump b_read_gpr_b_top_27_31 (const) */
    goto block_b_read_gpr_b_top_27_31;
  }
  block_b_read_gpr_b_top_27_31: 
  {
    /* D s_b_read_gpr_b_top_27_31_0 = temp_14 */
    /* F s_b_read_gpr_b_top_27_31_1: Free &temp_14 (8) */
    /* D s_b_read_gpr_b_top_27_31_2: read_gpr_b_top_27_0r = s_b_read_gpr_b_top_27_31_0, dominates: s_b_top_26_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_27_0r), Operand(*ir_idx_temp_14));
    /* F s_b_read_gpr_b_top_27_31_3: Jump b_top_26 (const) */
    goto block_b_top_26;
  }
  block_b_read_gpr_b_top_27_32: 
  {
    /* F s_b_read_gpr_b_top_27_32_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_27_32_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_27_32_2: temp_15 = s_b_read_gpr_b_top_27_32_1 (const), dominates: s_b_read_gpr_b_top_27_34_0  */
    CV_temp_15 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_15), Operand(PrimitiveTypes.u8, CV_temp_15));
    /* F s_b_read_gpr_b_top_27_32_3: Jump b_read_gpr_b_top_27_34 (const) */
    goto block_b_read_gpr_b_top_27_34;
  }
  block_b_read_gpr_b_top_27_33: 
  {
    /* F s_b_read_gpr_b_top_27_33_0=top__Qscope_0x31fb450inst->rn(const) */
    /* D s_b_read_gpr_b_top_27_33_1 = ReadRegBank 1:s_b_read_gpr_b_top_27_33_0 (uint32) */
    Statement& s_b_read_gpr_b_top_27_33_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_27_33_1));
    }
    /* D s_b_read_gpr_b_top_27_33_2 = (uint64)s_b_read_gpr_b_top_27_33_1 */
    Statement& s_b_read_gpr_b_top_27_33_2 = builder.zx(Operand(s_b_read_gpr_b_top_27_33_1));
    /* D s_b_read_gpr_b_top_27_33_3: temp_15 = s_b_read_gpr_b_top_27_33_2, dominates: s_b_read_gpr_b_top_27_34_0  */
    builder.store(Operand(*ir_idx_temp_15), Operand(s_b_read_gpr_b_top_27_33_2));
    /* F s_b_read_gpr_b_top_27_33_4: Jump b_read_gpr_b_top_27_34 (const) */
    goto block_b_read_gpr_b_top_27_34;
  }
  block_b_read_gpr_b_top_27_34: 
  {
    /* D s_b_read_gpr_b_top_27_34_0 = temp_15 */
    /* F s_b_read_gpr_b_top_27_34_1: Free &temp_15 (8) */
    /* D s_b_read_gpr_b_top_27_34_2: read_gpr_b_top_27_0r = s_b_read_gpr_b_top_27_34_0, dominates: s_b_top_26_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_27_0r), Operand(*ir_idx_temp_15));
    /* F s_b_read_gpr_b_top_27_34_3: Jump b_top_26 (const) */
    goto block_b_top_26;
  }
  block_b_top_35: 
  {
    /* F s_b_top_35_0: Free &write_gpr_b_top_37__Qscope_0x33bbb30value (8) */
    /* F s_b_top_35_1: Jump b_top_9 (const) */
    goto block_b_top_9;
  }
  block_b_write_gpr_b_top_37_36: 
  {
    /* F s_b_write_gpr_b_top_37_36_0: Jump b_top_35 (const) */
    goto block_b_top_35;
  }
  block_b_write_gpr_b_top_37_37: 
  {
    /* F s_b_write_gpr_b_top_37_37_0=top__Qscope_0x31fb450inst->sf(const) */
    /* F s_b_write_gpr_b_top_37_37_1: If s_b_write_gpr_b_top_37_37_0: Jump b_write_gpr_b_top_37_38 else b_write_gpr_b_top_37_40 (const) */
    if (sf) 
    {
      goto block_b_write_gpr_b_top_37_38;
    }
    else 
    {
      goto block_b_write_gpr_b_top_37_40;
    }
  }
  block_b_write_gpr_b_top_37_38: 
  {
    /* F s_b_write_gpr_b_top_37_38_0=top__Qscope_0x31fb450inst->rd(const) */
    /* D s_b_write_gpr_b_top_37_38_1 = write_gpr_b_top_37__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_37_38_2: WriteRegBank 0:s_b_write_gpr_b_top_37_38_0 = s_b_write_gpr_b_top_37_38_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_write_gpr_b_top_37__Qscope_0x33bbb30value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_b_top_37__Qscope_0x33bbb30value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_37_38_3: Jump b_write_gpr_b_top_37_39 (const) */
    goto block_b_write_gpr_b_top_37_39;
  }
  block_b_write_gpr_b_top_37_39: 
  {
    /* F s_b_write_gpr_b_top_37_39_0: Jump b_top_35 (const) */
    goto block_b_top_35;
  }
  block_b_write_gpr_b_top_37_40: 
  {
    /* F s_b_write_gpr_b_top_37_40_0=top__Qscope_0x31fb450inst->rd(const) */
    /* D s_b_write_gpr_b_top_37_40_1 = write_gpr_b_top_37__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_37_40_2 = (uint32)s_b_write_gpr_b_top_37_40_1 */
    Statement& s_b_write_gpr_b_top_37_40_2 = builder.trunc(Operand(*ir_idx_write_gpr_b_top_37__Qscope_0x33bbb30value));
    /* D s_b_write_gpr_b_top_37_40_3 = (uint64)s_b_write_gpr_b_top_37_40_2 */
    Statement& s_b_write_gpr_b_top_37_40_3 = builder.zx(Operand(s_b_write_gpr_b_top_37_40_2));
    /* D s_b_write_gpr_b_top_37_40_4: WriteRegBank 0:s_b_write_gpr_b_top_37_40_0 = s_b_write_gpr_b_top_37_40_3 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_write_gpr_b_top_37_40_3));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_37_40_3), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_37_40_5: Jump b_write_gpr_b_top_37_39 (const) */
    goto block_b_write_gpr_b_top_37_39;
  }
  block_b_top_41: 
  {
    /* F s_b_top_41_0=top__Qscope_0x31fb450inst->sf(const) */
    /* F s_b_top_41_1=top__Qscope_0x31fb450inst->rn(const) */
    /* F s_b_top_41_2: &read_gpr_b_top_46_0r = Alloc uint64 */
    /* F s_b_top_41_3: If s_b_top_41_0: Jump b_read_gpr_b_top_46_45 else b_read_gpr_b_top_46_46 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_46_45;
    }
    else 
    {
      goto block_b_read_gpr_b_top_46_46;
    }
  }
  block_b_top_42: 
  {
    /* F s_b_top_42_0=top__Qscope_0x31fb450inst->sf(const) */
    /* F s_b_top_42_1=top__Qscope_0x31fb450inst->rd(const) */
    /* D s_b_top_42_2 = top__Qscope_0x3204070value */
    /* F s_b_top_42_3 = (const uint8) 1f (const) */
    /* F s_b_top_42_4 = s_b_top_42_1==s_b_top_42_3 (const) */
    uint8 s_b_top_42_4 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_42_5: If s_b_top_42_4: Jump b_write_gpr_b_top_74_66 else b_write_gpr_b_top_74_67 (const) */
    if (s_b_top_42_4) 
    {
      goto block_b_write_gpr_b_top_74_66;
    }
    else 
    {
      goto block_b_write_gpr_b_top_74_67;
    }
  }
  block_b_top_43: 
  {
    /* F s_b_top_43_0: &top__Qscope_0x32081a0bits = Alloc uint64 */
    /* F s_b_top_43_1=top__Qscope_0x31fb450inst->sf(const) */
    /* F s_b_top_43_2=top__Qscope_0x31fb450inst->rn(const) */
    /* F s_b_top_43_3: &read_gpr_b_top_58_0r = Alloc uint64 */
    /* F s_b_top_43_4: If s_b_top_43_1: Jump b_read_gpr_b_top_58_54 else b_read_gpr_b_top_58_55 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_58_54;
    }
    else 
    {
      goto block_b_read_gpr_b_top_58_55;
    }
  }
  block_b_top_44: 
  {
    /* D s_b_top_44_0 = read_gpr_b_top_46_0r */
    /* F s_b_top_44_1: Free &read_gpr_b_top_46_0r (8) */
    /* F s_b_top_44_2=top__Qscope_0x31fb450inst->immr(const) */
    /* F s_b_top_44_3=top__Qscope_0x31fb450inst->imms(const) */
    /* F s_b_top_44_4=top__Qscope_0x31fb450inst->immr(const) */
    /* F s_b_top_44_5 = s_b_top_44_3-s_b_top_44_4 (const) */
    uint8 s_b_top_44_5 = ((uint8)(imms - immr));
    /* F s_b_top_44_6 = (const uint8) 1 (const) */
    /* F s_b_top_44_7 = s_b_top_44_5+s_b_top_44_6 (const) */
    uint8 s_b_top_44_7 = ((uint8)(s_b_top_44_5 + (uint8)1ULL));
    /* F s_b_top_44_8 = (uint64)s_b_top_44_2 (const) */
    /* D s_b_top_44_9 = s_b_top_44_0>>s_b_top_44_8 */
    Statement& s_b_top_44_9 = builder.shr(Operand(*ir_idx_read_gpr_b_top_46_0r), Operand(PrimitiveTypes.u64, ((uint64)immr)));
    /* F s_b_top_44_10 = (const uint8) 1 (const) */
    /* F s_b_top_44_11 = (uint64) 1 (const) */
    /* F s_b_top_44_12 = (uint64)s_b_top_44_7 (const) */
    /* F s_b_top_44_13 = s_b_top_44_11<<s_b_top_44_12 (const) */
    uint64 s_b_top_44_13 = ((uint64)((uint64)1ULL << ((uint64)s_b_top_44_7)));
    /* F s_b_top_44_14 = (const uint8) 1 (const) */
    /* F s_b_top_44_15 = (uint64) 1 (const) */
    /* F s_b_top_44_16 = s_b_top_44_13-s_b_top_44_15 (const) */
    uint64 s_b_top_44_16 = ((uint64)(s_b_top_44_13 - (uint64)1ULL));
    /* D s_b_top_44_17 = s_b_top_44_9&s_b_top_44_16 */
    Statement& s_b_top_44_17 = builder.band(Operand(s_b_top_44_9), Operand(PrimitiveTypes.u64, s_b_top_44_16));
    /* F s_b_top_44_18 = (const uint8) 40 (const) */
    /* F s_b_top_44_19=top__Qscope_0x31fb450inst->imms(const) */
    /* F s_b_top_44_20=top__Qscope_0x31fb450inst->immr(const) */
    /* F s_b_top_44_21 = s_b_top_44_19-s_b_top_44_20 (const) */
    uint8 s_b_top_44_21 = ((uint8)(imms - immr));
    /* F s_b_top_44_22 = (const uint8) 1 (const) */
    /* F s_b_top_44_23 = s_b_top_44_21+s_b_top_44_22 (const) */
    uint8 s_b_top_44_23 = ((uint8)(s_b_top_44_21 + (uint8)1ULL));
    /* F s_b_top_44_24 = s_b_top_44_18-s_b_top_44_23 (const) */
    uint8 s_b_top_44_24 = ((uint8)((uint8)64ULL - s_b_top_44_23));
    /* D s_b_top_44_25 = (sint64)s_b_top_44_17 */
    Statement& s_b_top_44_25 = s_b_top_44_17;
    /* F s_b_top_44_26 = (const uint8) 3f (const) */
    /* F s_b_top_44_27 = s_b_top_44_26-s_b_top_44_24 (const) */
    uint8 s_b_top_44_27 = ((uint8)((uint8)63ULL - s_b_top_44_24));
    /* F s_b_top_44_28 = (sint64)s_b_top_44_27 (const) */
    /* D s_b_top_44_29 = s_b_top_44_25<<s_b_top_44_28 */
    Statement& s_b_top_44_29 = builder.shl(Operand(s_b_top_44_25), Operand(PrimitiveTypes.s64, ((sint64)s_b_top_44_27)));
    /* F s_b_top_44_30 = (const uint8) 3f (const) */
    /* F s_b_top_44_31 = s_b_top_44_30-s_b_top_44_24 (const) */
    uint8 s_b_top_44_31 = ((uint8)((uint8)63ULL - s_b_top_44_24));
    /* F s_b_top_44_32 = (sint64)s_b_top_44_31 (const) */
    /* D s_b_top_44_33 = s_b_top_44_29>>s_b_top_44_32 */
    Statement& s_b_top_44_33 = builder.sar(Operand(s_b_top_44_29), Operand(PrimitiveTypes.s64, ((sint64)s_b_top_44_31)));
    /* D s_b_top_44_34 = (uint64)s_b_top_44_33 */
    Statement& s_b_top_44_34 = s_b_top_44_33;
    /* D s_b_top_44_35: top__Qscope_0x3204070value = s_b_top_44_34, dominates: s_b_top_42_2 s_b_write_gpr_b_top_74_68_1 s_b_write_gpr_b_top_74_70_1  */
    builder.store(Operand(*ir_idx_top__Qscope_0x3204070value), Operand(s_b_top_44_34));
    /* F s_b_top_44_36: Jump b_top_42 (const) */
    goto block_b_top_42;
  }
  block_b_read_gpr_b_top_46_45: 
  {
    /* F s_b_read_gpr_b_top_46_45_0=top__Qscope_0x31fb450inst->rn(const) */
    /* F s_b_read_gpr_b_top_46_45_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_46_45_2 = s_b_read_gpr_b_top_46_45_0==s_b_read_gpr_b_top_46_45_1 (const) */
    uint8 s_b_read_gpr_b_top_46_45_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_46_45_3: &temp_23 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_46_45_4: If s_b_read_gpr_b_top_46_45_2: Jump b_read_gpr_b_top_46_47 else b_read_gpr_b_top_46_48 (const) */
    if (s_b_read_gpr_b_top_46_45_2) 
    {
      goto block_b_read_gpr_b_top_46_47;
    }
    else 
    {
      goto block_b_read_gpr_b_top_46_48;
    }
  }
  block_b_read_gpr_b_top_46_46: 
  {
    /* F s_b_read_gpr_b_top_46_46_0=top__Qscope_0x31fb450inst->rn(const) */
    /* F s_b_read_gpr_b_top_46_46_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_46_46_2 = s_b_read_gpr_b_top_46_46_0==s_b_read_gpr_b_top_46_46_1 (const) */
    uint8 s_b_read_gpr_b_top_46_46_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_46_46_3: &temp_24 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_46_46_4: If s_b_read_gpr_b_top_46_46_2: Jump b_read_gpr_b_top_46_50 else b_read_gpr_b_top_46_51 (const) */
    if (s_b_read_gpr_b_top_46_46_2) 
    {
      goto block_b_read_gpr_b_top_46_50;
    }
    else 
    {
      goto block_b_read_gpr_b_top_46_51;
    }
  }
  block_b_read_gpr_b_top_46_47: 
  {
    /* F s_b_read_gpr_b_top_46_47_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_46_47_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_46_47_2: temp_23 = s_b_read_gpr_b_top_46_47_1 (const), dominates: s_b_read_gpr_b_top_46_49_0  */
    CV_temp_23 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_23), Operand(PrimitiveTypes.u8, CV_temp_23));
    /* F s_b_read_gpr_b_top_46_47_3: Jump b_read_gpr_b_top_46_49 (const) */
    goto block_b_read_gpr_b_top_46_49;
  }
  block_b_read_gpr_b_top_46_48: 
  {
    /* F s_b_read_gpr_b_top_46_48_0=top__Qscope_0x31fb450inst->rn(const) */
    /* D s_b_read_gpr_b_top_46_48_1 = ReadRegBank 0:s_b_read_gpr_b_top_46_48_0 (uint64) */
    Statement& s_b_read_gpr_b_top_46_48_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_46_48_1));
    }
    /* D s_b_read_gpr_b_top_46_48_2 = (uint64)s_b_read_gpr_b_top_46_48_1 */
    Statement& s_b_read_gpr_b_top_46_48_2 = s_b_read_gpr_b_top_46_48_1;
    /* D s_b_read_gpr_b_top_46_48_3: temp_23 = s_b_read_gpr_b_top_46_48_2, dominates: s_b_read_gpr_b_top_46_49_0  */
    builder.store(Operand(*ir_idx_temp_23), Operand(s_b_read_gpr_b_top_46_48_2));
    /* F s_b_read_gpr_b_top_46_48_4: Jump b_read_gpr_b_top_46_49 (const) */
    goto block_b_read_gpr_b_top_46_49;
  }
  block_b_read_gpr_b_top_46_49: 
  {
    /* D s_b_read_gpr_b_top_46_49_0 = temp_23 */
    /* F s_b_read_gpr_b_top_46_49_1: Free &temp_23 (8) */
    /* D s_b_read_gpr_b_top_46_49_2: read_gpr_b_top_46_0r = s_b_read_gpr_b_top_46_49_0, dominates: s_b_top_44_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_46_0r), Operand(*ir_idx_temp_23));
    /* F s_b_read_gpr_b_top_46_49_3: Jump b_top_44 (const) */
    goto block_b_top_44;
  }
  block_b_read_gpr_b_top_46_50: 
  {
    /* F s_b_read_gpr_b_top_46_50_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_46_50_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_46_50_2: temp_24 = s_b_read_gpr_b_top_46_50_1 (const), dominates: s_b_read_gpr_b_top_46_52_0  */
    CV_temp_24 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_24), Operand(PrimitiveTypes.u8, CV_temp_24));
    /* F s_b_read_gpr_b_top_46_50_3: Jump b_read_gpr_b_top_46_52 (const) */
    goto block_b_read_gpr_b_top_46_52;
  }
  block_b_read_gpr_b_top_46_51: 
  {
    /* F s_b_read_gpr_b_top_46_51_0=top__Qscope_0x31fb450inst->rn(const) */
    /* D s_b_read_gpr_b_top_46_51_1 = ReadRegBank 1:s_b_read_gpr_b_top_46_51_0 (uint32) */
    Statement& s_b_read_gpr_b_top_46_51_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_46_51_1));
    }
    /* D s_b_read_gpr_b_top_46_51_2 = (uint64)s_b_read_gpr_b_top_46_51_1 */
    Statement& s_b_read_gpr_b_top_46_51_2 = builder.zx(Operand(s_b_read_gpr_b_top_46_51_1));
    /* D s_b_read_gpr_b_top_46_51_3: temp_24 = s_b_read_gpr_b_top_46_51_2, dominates: s_b_read_gpr_b_top_46_52_0  */
    builder.store(Operand(*ir_idx_temp_24), Operand(s_b_read_gpr_b_top_46_51_2));
    /* F s_b_read_gpr_b_top_46_51_4: Jump b_read_gpr_b_top_46_52 (const) */
    goto block_b_read_gpr_b_top_46_52;
  }
  block_b_read_gpr_b_top_46_52: 
  {
    /* D s_b_read_gpr_b_top_46_52_0 = temp_24 */
    /* F s_b_read_gpr_b_top_46_52_1: Free &temp_24 (8) */
    /* D s_b_read_gpr_b_top_46_52_2: read_gpr_b_top_46_0r = s_b_read_gpr_b_top_46_52_0, dominates: s_b_top_44_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_46_0r), Operand(*ir_idx_temp_24));
    /* F s_b_read_gpr_b_top_46_52_3: Jump b_top_44 (const) */
    goto block_b_top_44;
  }
  block_b_top_53: 
  {
    /* D s_b_top_53_0 = read_gpr_b_top_58_0r */
    /* F s_b_top_53_1: Free &read_gpr_b_top_58_0r (8) */
    /* F s_b_top_53_2 = (const uint8) 0 (const) */
    /* F s_b_top_53_3=top__Qscope_0x31fb450inst->imms(const) */
    /* F s_b_top_53_4 = (uint8)s_b_top_53_3 (const) */
    /* F s_b_top_53_5 = (const uint8) 1 (const) */
    /* F s_b_top_53_6 = (uint8) 1 (const) */
    /* F s_b_top_53_7 = s_b_top_53_4+s_b_top_53_6 (const) */
    uint8 s_b_top_53_7 = ((uint8)(((uint8)imms) + (uint8)1ULL));
    /* F s_b_top_53_8 = (uint64) 0 (const) */
    /* D s_b_top_53_9 = s_b_top_53_0>>s_b_top_53_8 */
    Statement& s_b_top_53_9 = builder.shr(Operand(*ir_idx_read_gpr_b_top_58_0r), Operand(PrimitiveTypes.u64, (uint64)0ULL));
    /* F s_b_top_53_10 = (const uint8) 1 (const) */
    /* F s_b_top_53_11 = (uint64) 1 (const) */
    /* F s_b_top_53_12 = (uint64)s_b_top_53_7 (const) */
    /* F s_b_top_53_13 = s_b_top_53_11<<s_b_top_53_12 (const) */
    uint64 s_b_top_53_13 = ((uint64)((uint64)1ULL << ((uint64)s_b_top_53_7)));
    /* F s_b_top_53_14 = (const uint8) 1 (const) */
    /* F s_b_top_53_15 = (uint64) 1 (const) */
    /* F s_b_top_53_16 = s_b_top_53_13-s_b_top_53_15 (const) */
    uint64 s_b_top_53_16 = ((uint64)(s_b_top_53_13 - (uint64)1ULL));
    /* D s_b_top_53_17 = s_b_top_53_9&s_b_top_53_16 */
    Statement& s_b_top_53_17 = builder.band(Operand(s_b_top_53_9), Operand(PrimitiveTypes.u64, s_b_top_53_16));
    /* D s_b_top_53_18: top__Qscope_0x32081a0bits = s_b_top_53_17, dominates: s_b_top_62_0 s_b_top_64_0  */
    builder.store(Operand(*ir_idx_top__Qscope_0x32081a0bits), Operand(s_b_top_53_17));
    /* F s_b_top_53_19=top__Qscope_0x31fb450inst->sf(const) */
    /* F s_b_top_53_20: If s_b_top_53_19: Jump b_top_62 else b_top_64 (const) */
    if (sf) 
    {
      goto block_b_top_62;
    }
    else 
    {
      goto block_b_top_64;
    }
  }
  block_b_read_gpr_b_top_58_54: 
  {
    /* F s_b_read_gpr_b_top_58_54_0=top__Qscope_0x31fb450inst->rn(const) */
    /* F s_b_read_gpr_b_top_58_54_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_58_54_2 = s_b_read_gpr_b_top_58_54_0==s_b_read_gpr_b_top_58_54_1 (const) */
    uint8 s_b_read_gpr_b_top_58_54_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_58_54_3: &temp_36 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_58_54_4: If s_b_read_gpr_b_top_58_54_2: Jump b_read_gpr_b_top_58_56 else b_read_gpr_b_top_58_57 (const) */
    if (s_b_read_gpr_b_top_58_54_2) 
    {
      goto block_b_read_gpr_b_top_58_56;
    }
    else 
    {
      goto block_b_read_gpr_b_top_58_57;
    }
  }
  block_b_read_gpr_b_top_58_55: 
  {
    /* F s_b_read_gpr_b_top_58_55_0=top__Qscope_0x31fb450inst->rn(const) */
    /* F s_b_read_gpr_b_top_58_55_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_58_55_2 = s_b_read_gpr_b_top_58_55_0==s_b_read_gpr_b_top_58_55_1 (const) */
    uint8 s_b_read_gpr_b_top_58_55_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_58_55_3: &temp_37 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_58_55_4: If s_b_read_gpr_b_top_58_55_2: Jump b_read_gpr_b_top_58_59 else b_read_gpr_b_top_58_60 (const) */
    if (s_b_read_gpr_b_top_58_55_2) 
    {
      goto block_b_read_gpr_b_top_58_59;
    }
    else 
    {
      goto block_b_read_gpr_b_top_58_60;
    }
  }
  block_b_read_gpr_b_top_58_56: 
  {
    /* F s_b_read_gpr_b_top_58_56_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_58_56_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_58_56_2: temp_36 = s_b_read_gpr_b_top_58_56_1 (const), dominates: s_b_read_gpr_b_top_58_58_0  */
    CV_temp_36 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_36), Operand(PrimitiveTypes.u8, CV_temp_36));
    /* F s_b_read_gpr_b_top_58_56_3: Jump b_read_gpr_b_top_58_58 (const) */
    goto block_b_read_gpr_b_top_58_58;
  }
  block_b_read_gpr_b_top_58_57: 
  {
    /* F s_b_read_gpr_b_top_58_57_0=top__Qscope_0x31fb450inst->rn(const) */
    /* D s_b_read_gpr_b_top_58_57_1 = ReadRegBank 0:s_b_read_gpr_b_top_58_57_0 (uint64) */
    Statement& s_b_read_gpr_b_top_58_57_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_58_57_1));
    }
    /* D s_b_read_gpr_b_top_58_57_2 = (uint64)s_b_read_gpr_b_top_58_57_1 */
    Statement& s_b_read_gpr_b_top_58_57_2 = s_b_read_gpr_b_top_58_57_1;
    /* D s_b_read_gpr_b_top_58_57_3: temp_36 = s_b_read_gpr_b_top_58_57_2, dominates: s_b_read_gpr_b_top_58_58_0  */
    builder.store(Operand(*ir_idx_temp_36), Operand(s_b_read_gpr_b_top_58_57_2));
    /* F s_b_read_gpr_b_top_58_57_4: Jump b_read_gpr_b_top_58_58 (const) */
    goto block_b_read_gpr_b_top_58_58;
  }
  block_b_read_gpr_b_top_58_58: 
  {
    /* D s_b_read_gpr_b_top_58_58_0 = temp_36 */
    /* F s_b_read_gpr_b_top_58_58_1: Free &temp_36 (8) */
    /* D s_b_read_gpr_b_top_58_58_2: read_gpr_b_top_58_0r = s_b_read_gpr_b_top_58_58_0, dominates: s_b_top_53_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_58_0r), Operand(*ir_idx_temp_36));
    /* F s_b_read_gpr_b_top_58_58_3: Jump b_top_53 (const) */
    goto block_b_top_53;
  }
  block_b_read_gpr_b_top_58_59: 
  {
    /* F s_b_read_gpr_b_top_58_59_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_58_59_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_58_59_2: temp_37 = s_b_read_gpr_b_top_58_59_1 (const), dominates: s_b_read_gpr_b_top_58_61_0  */
    CV_temp_37 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_37), Operand(PrimitiveTypes.u8, CV_temp_37));
    /* F s_b_read_gpr_b_top_58_59_3: Jump b_read_gpr_b_top_58_61 (const) */
    goto block_b_read_gpr_b_top_58_61;
  }
  block_b_read_gpr_b_top_58_60: 
  {
    /* F s_b_read_gpr_b_top_58_60_0=top__Qscope_0x31fb450inst->rn(const) */
    /* D s_b_read_gpr_b_top_58_60_1 = ReadRegBank 1:s_b_read_gpr_b_top_58_60_0 (uint32) */
    Statement& s_b_read_gpr_b_top_58_60_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_58_60_1));
    }
    /* D s_b_read_gpr_b_top_58_60_2 = (uint64)s_b_read_gpr_b_top_58_60_1 */
    Statement& s_b_read_gpr_b_top_58_60_2 = builder.zx(Operand(s_b_read_gpr_b_top_58_60_1));
    /* D s_b_read_gpr_b_top_58_60_3: temp_37 = s_b_read_gpr_b_top_58_60_2, dominates: s_b_read_gpr_b_top_58_61_0  */
    builder.store(Operand(*ir_idx_temp_37), Operand(s_b_read_gpr_b_top_58_60_2));
    /* F s_b_read_gpr_b_top_58_60_4: Jump b_read_gpr_b_top_58_61 (const) */
    goto block_b_read_gpr_b_top_58_61;
  }
  block_b_read_gpr_b_top_58_61: 
  {
    /* D s_b_read_gpr_b_top_58_61_0 = temp_37 */
    /* F s_b_read_gpr_b_top_58_61_1: Free &temp_37 (8) */
    /* D s_b_read_gpr_b_top_58_61_2: read_gpr_b_top_58_0r = s_b_read_gpr_b_top_58_61_0, dominates: s_b_top_53_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_58_0r), Operand(*ir_idx_temp_37));
    /* F s_b_read_gpr_b_top_58_61_3: Jump b_top_53 (const) */
    goto block_b_top_53;
  }
  block_b_top_62: 
  {
    /* D s_b_top_62_0 = top__Qscope_0x32081a0bits */
    /* D s_b_top_62_1 = (uint64)s_b_top_62_0 */
    Statement& s_b_top_62_1 = *ir_idx_top__Qscope_0x32081a0bits;
    /* F s_b_top_62_2 = (const uint8) 40 (const) */
    /* F s_b_top_62_3 = (uint8) 40 (const) */
    /* F s_b_top_62_4=top__Qscope_0x31fb450inst->immr(const) */
    /* F s_b_top_62_5 = (uint8)s_b_top_62_4 (const) */
    /* F s_b_top_62_6 = s_b_top_62_3-s_b_top_62_5 (const) */
    uint8 s_b_top_62_6 = ((uint8)((uint8)64ULL - ((uint8)immr)));
    /* F s_b_top_62_7 = (uint64)s_b_top_62_6 (const) */
    /* D s_b_top_62_8 = s_b_top_62_1<<s_b_top_62_7 */
    Statement& s_b_top_62_8 = builder.shl(Operand(s_b_top_62_1), Operand(PrimitiveTypes.u64, ((uint64)s_b_top_62_6)));
    /* F s_b_top_62_9 = (const uint8) 40 (const) */
    /* F s_b_top_62_10 = (uint8) 40 (const) */
    /* F s_b_top_62_11 = (const uint8) 40 (const) */
    /* F s_b_top_62_12 = (uint8) 40 (const) */
    /* F s_b_top_62_13=top__Qscope_0x31fb450inst->immr(const) */
    /* F s_b_top_62_14 = (uint8)s_b_top_62_13 (const) */
    /* F s_b_top_62_15 = s_b_top_62_12-s_b_top_62_14 (const) */
    uint8 s_b_top_62_15 = ((uint8)((uint8)64ULL - ((uint8)immr)));
    /* F s_b_top_62_16=top__Qscope_0x31fb450inst->imms(const) */
    /* F s_b_top_62_17 = (uint8)s_b_top_62_16 (const) */
    /* F s_b_top_62_18 = (const uint8) 1 (const) */
    /* F s_b_top_62_19 = (uint8) 1 (const) */
    /* F s_b_top_62_20 = s_b_top_62_17+s_b_top_62_19 (const) */
    uint8 s_b_top_62_20 = ((uint8)(((uint8)imms) + (uint8)1ULL));
    /* F s_b_top_62_21 = s_b_top_62_15+s_b_top_62_20 (const) */
    uint8 s_b_top_62_21 = ((uint8)(s_b_top_62_15 + s_b_top_62_20));
    /* F s_b_top_62_22 = s_b_top_62_10-s_b_top_62_21 (const) */
    uint8 s_b_top_62_22 = ((uint8)((uint8)64ULL - s_b_top_62_21));
    /* D s_b_top_62_23 = (sint64)s_b_top_62_8 */
    Statement& s_b_top_62_23 = s_b_top_62_8;
    /* F s_b_top_62_24 = (const uint8) 3f (const) */
    /* F s_b_top_62_25 = s_b_top_62_24-s_b_top_62_22 (const) */
    uint8 s_b_top_62_25 = ((uint8)((uint8)63ULL - s_b_top_62_22));
    /* F s_b_top_62_26 = (sint64)s_b_top_62_25 (const) */
    /* D s_b_top_62_27 = s_b_top_62_23<<s_b_top_62_26 */
    Statement& s_b_top_62_27 = builder.shl(Operand(s_b_top_62_23), Operand(PrimitiveTypes.s64, ((sint64)s_b_top_62_25)));
    /* F s_b_top_62_28 = (const uint8) 3f (const) */
    /* F s_b_top_62_29 = s_b_top_62_28-s_b_top_62_22 (const) */
    uint8 s_b_top_62_29 = ((uint8)((uint8)63ULL - s_b_top_62_22));
    /* F s_b_top_62_30 = (sint64)s_b_top_62_29 (const) */
    /* D s_b_top_62_31 = s_b_top_62_27>>s_b_top_62_30 */
    Statement& s_b_top_62_31 = builder.sar(Operand(s_b_top_62_27), Operand(PrimitiveTypes.s64, ((sint64)s_b_top_62_29)));
    /* D s_b_top_62_32 = (uint64)s_b_top_62_31 */
    Statement& s_b_top_62_32 = s_b_top_62_31;
    /* D s_b_top_62_33: top__Qscope_0x3204070value = s_b_top_62_32, dominates: s_b_top_42_2 s_b_write_gpr_b_top_74_68_1 s_b_write_gpr_b_top_74_70_1  */
    builder.store(Operand(*ir_idx_top__Qscope_0x3204070value), Operand(s_b_top_62_32));
    /* F s_b_top_62_34: Jump b_top_63 (const) */
    goto block_b_top_63;
  }
  block_b_top_63: 
  {
    /* F s_b_top_63_0: Free &top__Qscope_0x32081a0bits (8) */
    /* F s_b_top_63_1: Jump b_top_42 (const) */
    goto block_b_top_42;
  }
  block_b_top_64: 
  {
    /* D s_b_top_64_0 = top__Qscope_0x32081a0bits */
    /* D s_b_top_64_1 = (uint64)s_b_top_64_0 */
    Statement& s_b_top_64_1 = *ir_idx_top__Qscope_0x32081a0bits;
    /* F s_b_top_64_2 = (const uint8) 20 (const) */
    /* F s_b_top_64_3 = (uint8) 20 (const) */
    /* F s_b_top_64_4=top__Qscope_0x31fb450inst->immr(const) */
    /* F s_b_top_64_5 = (uint8)s_b_top_64_4 (const) */
    /* F s_b_top_64_6 = s_b_top_64_3-s_b_top_64_5 (const) */
    uint8 s_b_top_64_6 = ((uint8)((uint8)32ULL - ((uint8)immr)));
    /* F s_b_top_64_7 = (uint64)s_b_top_64_6 (const) */
    /* D s_b_top_64_8 = s_b_top_64_1<<s_b_top_64_7 */
    Statement& s_b_top_64_8 = builder.shl(Operand(s_b_top_64_1), Operand(PrimitiveTypes.u64, ((uint64)s_b_top_64_6)));
    /* F s_b_top_64_9 = (const uint8) 40 (const) */
    /* F s_b_top_64_10 = (uint8) 40 (const) */
    /* F s_b_top_64_11 = (const uint8) 20 (const) */
    /* F s_b_top_64_12 = (uint8) 20 (const) */
    /* F s_b_top_64_13=top__Qscope_0x31fb450inst->immr(const) */
    /* F s_b_top_64_14 = (uint8)s_b_top_64_13 (const) */
    /* F s_b_top_64_15 = s_b_top_64_12-s_b_top_64_14 (const) */
    uint8 s_b_top_64_15 = ((uint8)((uint8)32ULL - ((uint8)immr)));
    /* F s_b_top_64_16=top__Qscope_0x31fb450inst->imms(const) */
    /* F s_b_top_64_17 = (uint8)s_b_top_64_16 (const) */
    /* F s_b_top_64_18 = (const uint8) 1 (const) */
    /* F s_b_top_64_19 = (uint8) 1 (const) */
    /* F s_b_top_64_20 = s_b_top_64_17+s_b_top_64_19 (const) */
    uint8 s_b_top_64_20 = ((uint8)(((uint8)imms) + (uint8)1ULL));
    /* F s_b_top_64_21 = s_b_top_64_15+s_b_top_64_20 (const) */
    uint8 s_b_top_64_21 = ((uint8)(s_b_top_64_15 + s_b_top_64_20));
    /* F s_b_top_64_22 = s_b_top_64_10-s_b_top_64_21 (const) */
    uint8 s_b_top_64_22 = ((uint8)((uint8)64ULL - s_b_top_64_21));
    /* D s_b_top_64_23 = (sint64)s_b_top_64_8 */
    Statement& s_b_top_64_23 = s_b_top_64_8;
    /* F s_b_top_64_24 = (const uint8) 3f (const) */
    /* F s_b_top_64_25 = s_b_top_64_24-s_b_top_64_22 (const) */
    uint8 s_b_top_64_25 = ((uint8)((uint8)63ULL - s_b_top_64_22));
    /* F s_b_top_64_26 = (sint64)s_b_top_64_25 (const) */
    /* D s_b_top_64_27 = s_b_top_64_23<<s_b_top_64_26 */
    Statement& s_b_top_64_27 = builder.shl(Operand(s_b_top_64_23), Operand(PrimitiveTypes.s64, ((sint64)s_b_top_64_25)));
    /* F s_b_top_64_28 = (const uint8) 3f (const) */
    /* F s_b_top_64_29 = s_b_top_64_28-s_b_top_64_22 (const) */
    uint8 s_b_top_64_29 = ((uint8)((uint8)63ULL - s_b_top_64_22));
    /* F s_b_top_64_30 = (sint64)s_b_top_64_29 (const) */
    /* D s_b_top_64_31 = s_b_top_64_27>>s_b_top_64_30 */
    Statement& s_b_top_64_31 = builder.sar(Operand(s_b_top_64_27), Operand(PrimitiveTypes.s64, ((sint64)s_b_top_64_29)));
    /* D s_b_top_64_32 = (uint64)s_b_top_64_31 */
    Statement& s_b_top_64_32 = s_b_top_64_31;
    /* D s_b_top_64_33: top__Qscope_0x3204070value = s_b_top_64_32, dominates: s_b_top_42_2 s_b_write_gpr_b_top_74_68_1 s_b_write_gpr_b_top_74_70_1  */
    builder.store(Operand(*ir_idx_top__Qscope_0x3204070value), Operand(s_b_top_64_32));
    /* F s_b_top_64_34: Jump b_top_63 (const) */
    goto block_b_top_63;
  }
  block_b_top_65: 
  {
    /* F s_b_top_65_0: Free &top__Qscope_0x3204070value (8) */
    /* F s_b_top_65_1: Jump b_top_6 (const) */
    goto block_b_top_6;
  }
  block_b_write_gpr_b_top_74_66: 
  {
    /* F s_b_write_gpr_b_top_74_66_0: Jump b_top_65 (const) */
    goto block_b_top_65;
  }
  block_b_write_gpr_b_top_74_67: 
  {
    /* F s_b_write_gpr_b_top_74_67_0=top__Qscope_0x31fb450inst->sf(const) */
    /* F s_b_write_gpr_b_top_74_67_1: If s_b_write_gpr_b_top_74_67_0: Jump b_write_gpr_b_top_74_68 else b_write_gpr_b_top_74_70 (const) */
    if (sf) 
    {
      goto block_b_write_gpr_b_top_74_68;
    }
    else 
    {
      goto block_b_write_gpr_b_top_74_70;
    }
  }
  block_b_write_gpr_b_top_74_68: 
  {
    /* F s_b_write_gpr_b_top_74_68_0=top__Qscope_0x31fb450inst->rd(const) */
    /* D s_b_write_gpr_b_top_74_68_1 = top__Qscope_0x3204070value */
    /* D s_b_write_gpr_b_top_74_68_2: WriteRegBank 0:s_b_write_gpr_b_top_74_68_0 = s_b_write_gpr_b_top_74_68_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_top__Qscope_0x3204070value));
    }
    builder.streg(Operand(*ir_idx_top__Qscope_0x3204070value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_74_68_3: Jump b_write_gpr_b_top_74_69 (const) */
    goto block_b_write_gpr_b_top_74_69;
  }
  block_b_write_gpr_b_top_74_69: 
  {
    /* F s_b_write_gpr_b_top_74_69_0: Jump b_top_65 (const) */
    goto block_b_top_65;
  }
  block_b_write_gpr_b_top_74_70: 
  {
    /* F s_b_write_gpr_b_top_74_70_0=top__Qscope_0x31fb450inst->rd(const) */
    /* D s_b_write_gpr_b_top_74_70_1 = top__Qscope_0x3204070value */
    /* D s_b_write_gpr_b_top_74_70_2 = (uint32)s_b_write_gpr_b_top_74_70_1 */
    Statement& s_b_write_gpr_b_top_74_70_2 = builder.trunc(Operand(*ir_idx_top__Qscope_0x3204070value));
    /* D s_b_write_gpr_b_top_74_70_3 = (uint64)s_b_write_gpr_b_top_74_70_2 */
    Statement& s_b_write_gpr_b_top_74_70_3 = builder.zx(Operand(s_b_write_gpr_b_top_74_70_2));
    /* D s_b_write_gpr_b_top_74_70_4: WriteRegBank 0:s_b_write_gpr_b_top_74_70_0 = s_b_write_gpr_b_top_74_70_3 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_write_gpr_b_top_74_70_3));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_74_70_3), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_74_70_5: Jump b_write_gpr_b_top_74_69 (const) */
    goto block_b_write_gpr_b_top_74_69;
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
bool aarch64_insn_str_reg::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_0
  uint64 CV_top__Qscope_0x32c70f0address;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x32c70f0address = &builder.alloc(PrimitiveTypes.u64);
  // Reg s_b_0_1
  uint64 CV_top__Qscope_0x32c70f0rm;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x32c70f0rm = &builder.alloc(PrimitiveTypes.u64);
  // Reg s_b_0_7
  uint64 CV_temp_8;
  vrt::dbt::ir::Statement *ir_idx_temp_8 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_sp_b_top_1_1
  // Block b_read_gpr_sp_b_top_1_2
  // Block b_read_gpr_sp_b_top_1_3
  // Reg s_b_read_gpr_sp_b_top_1_3_6
  uint64 CV_read_gpr_b_top_11_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_11_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_4
  // Reg s_b_top_4_6
  uint64 CV_read_gpr_b_top_21_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_21_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_11_5
  // Reg s_b_read_gpr_b_top_11_5_3
  uint64 CV_temp_13;
  vrt::dbt::ir::Statement *ir_idx_temp_13 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_11_6
  // Reg s_b_read_gpr_b_top_11_6_3
  uint64 CV_temp_14;
  vrt::dbt::ir::Statement *ir_idx_temp_14 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_11_7
  // Block b_read_gpr_b_top_11_8
  // Block b_read_gpr_b_top_11_9
  // Block b_read_gpr_b_top_11_10
  // Block b_read_gpr_b_top_11_11
  // Block b_read_gpr_b_top_11_12
  // Block b_top_13
  // Reg s_b_top_13_6
  uint8 CV_temp_20;
  vrt::dbt::ir::Statement *ir_idx_temp_20 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_read_gpr_b_top_21_14
  // Reg s_b_read_gpr_b_top_21_14_3
  uint64 CV_temp_18;
  vrt::dbt::ir::Statement *ir_idx_temp_18 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_21_15
  // Reg s_b_read_gpr_b_top_21_15_3
  uint64 CV_temp_19;
  vrt::dbt::ir::Statement *ir_idx_temp_19 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_21_16
  // Block b_read_gpr_b_top_21_17
  // Block b_read_gpr_b_top_21_18
  // Block b_read_gpr_b_top_21_19
  // Block b_read_gpr_b_top_21_20
  // Block b_read_gpr_b_top_21_21
  // Block b_top_22
  // Block b_top_23
  // Block b_top_24
  // Block b_top_25
  // Block b_top_26
  // Reg s_b_top_26_3
  uint8 CV_temp_21;
  vrt::dbt::ir::Statement *ir_idx_temp_21 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_27
  // Block b_top_28
  // Block b_top_29
  // Block b_top_30
  // Block b_top_31
  // Reg s_b_top_31_3
  uint8 CV_temp_22;
  vrt::dbt::ir::Statement *ir_idx_temp_22 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_32
  // Block b_top_33
  // Block b_top_34
  // Block b_top_35
  // Block b_top_36
  // Reg s_b_top_36_3
  uint8 CV_temp_23;
  vrt::dbt::ir::Statement *ir_idx_temp_23 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_37
  // Block b_top_38
  // Block b_top_39
  // Block b_top_40
  // Block b_top_41
  // Block b_top_42
  // Block b_top_43
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0: &top__Qscope_0x32c70f0address = Alloc uint64 */
    /* F s_b_0_1: &top__Qscope_0x32c70f0rm = Alloc uint64 */
    /* F s_b_0_2 = (const uint8) 1 (const) */
    /* F s_b_0_3=top__Qscope_0x32c6ee0inst->rn(const) */
    /* F s_b_0_4=top__Qscope_0x32c6ee0inst->rn(const) */
    /* F s_b_0_5 = (const uint8) 1f (const) */
    /* F s_b_0_6 = s_b_0_4==s_b_0_5 (const) */
    uint8 s_b_0_6 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_0_7: &temp_8 = Alloc uint64 */
    /* F s_b_0_8: If s_b_0_6: Jump b_read_gpr_sp_b_top_1_1 else b_read_gpr_sp_b_top_1_2 (const) */
    if (s_b_0_6) 
    {
      goto block_b_read_gpr_sp_b_top_1_1;
    }
    else 
    {
      goto block_b_read_gpr_sp_b_top_1_2;
    }
  }
  block_b_read_gpr_sp_b_top_1_1: 
  {
    /* D s_b_read_gpr_sp_b_top_1_1_0 = ReadReg 0 (uint64) */
    Statement& s_b_read_gpr_sp_b_top_1_1_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 248));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 248), Operand(s_b_read_gpr_sp_b_top_1_1_0));
    }
    /* D s_b_read_gpr_sp_b_top_1_1_1: temp_8 = s_b_read_gpr_sp_b_top_1_1_0, dominates: s_b_read_gpr_sp_b_top_1_3_0 s_b_top_25_0  */
    builder.store(Operand(*ir_idx_temp_8), Operand(s_b_read_gpr_sp_b_top_1_1_0));
    /* F s_b_read_gpr_sp_b_top_1_1_2: Jump b_read_gpr_sp_b_top_1_3 (const) */
    goto block_b_read_gpr_sp_b_top_1_3;
  }
  block_b_read_gpr_sp_b_top_1_2: 
  {
    /* F s_b_read_gpr_sp_b_top_1_2_0=top__Qscope_0x32c6ee0inst->rn(const) */
    /* D s_b_read_gpr_sp_b_top_1_2_1 = ReadRegBank 0:s_b_read_gpr_sp_b_top_1_2_0 (uint64) */
    Statement& s_b_read_gpr_sp_b_top_1_2_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_sp_b_top_1_2_1));
    }
    /* D s_b_read_gpr_sp_b_top_1_2_2: temp_8 = s_b_read_gpr_sp_b_top_1_2_1, dominates: s_b_read_gpr_sp_b_top_1_3_0 s_b_top_25_0  */
    builder.store(Operand(*ir_idx_temp_8), Operand(s_b_read_gpr_sp_b_top_1_2_1));
    /* F s_b_read_gpr_sp_b_top_1_2_3: Jump b_read_gpr_sp_b_top_1_3 (const) */
    goto block_b_read_gpr_sp_b_top_1_3;
  }
  block_b_read_gpr_sp_b_top_1_3: 
  {
    /* D s_b_read_gpr_sp_b_top_1_3_0 = temp_8 */
    /* F s_b_read_gpr_sp_b_top_1_3_1: Free &temp_8 (8) */
    /* F s_b_read_gpr_sp_b_top_1_3_2=top__Qscope_0x32c6ee0inst->size(const) */
    /* F s_b_read_gpr_sp_b_top_1_3_3 = (const uint8) 3 (const) */
    /* F s_b_read_gpr_sp_b_top_1_3_4 = s_b_read_gpr_sp_b_top_1_3_2==s_b_read_gpr_sp_b_top_1_3_3 (const) */
    uint8 s_b_read_gpr_sp_b_top_1_3_4 = ((uint8)(size == (uint8)3ULL));
    /* F s_b_read_gpr_sp_b_top_1_3_5=top__Qscope_0x32c6ee0inst->rt(const) */
    /* F s_b_read_gpr_sp_b_top_1_3_6: &read_gpr_b_top_11_0r = Alloc uint64 */
    /* F s_b_read_gpr_sp_b_top_1_3_7: If s_b_read_gpr_sp_b_top_1_3_4: Jump b_read_gpr_b_top_11_5 else b_read_gpr_b_top_11_6 (const) */
    if (s_b_read_gpr_sp_b_top_1_3_4) 
    {
      goto block_b_read_gpr_b_top_11_5;
    }
    else 
    {
      goto block_b_read_gpr_b_top_11_6;
    }
  }
  block_b_top_4: 
  {
    /* D s_b_top_4_0 = read_gpr_b_top_11_0r */
    /* F s_b_top_4_1: Free &read_gpr_b_top_11_0r (8) */
    /* F s_b_top_4_2=top__Qscope_0x32c6ee0inst->option0(const) */
    /* F s_b_top_4_3 = (const uint8) 1 (const) */
    /* F s_b_top_4_4 = s_b_top_4_2==s_b_top_4_3 (const) */
    uint8 s_b_top_4_4 = ((uint8)(option0 == (uint8)1ULL));
    /* F s_b_top_4_5=top__Qscope_0x32c6ee0inst->rm(const) */
    /* F s_b_top_4_6: &read_gpr_b_top_21_0r = Alloc uint64 */
    /* F s_b_top_4_7: If s_b_top_4_4: Jump b_read_gpr_b_top_21_14 else b_read_gpr_b_top_21_15 (const) */
    if (s_b_top_4_4) 
    {
      goto block_b_read_gpr_b_top_21_14;
    }
    else 
    {
      goto block_b_read_gpr_b_top_21_15;
    }
  }
  block_b_read_gpr_b_top_11_5: 
  {
    /* F s_b_read_gpr_b_top_11_5_0=top__Qscope_0x32c6ee0inst->rt(const) */
    /* F s_b_read_gpr_b_top_11_5_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_11_5_2 = s_b_read_gpr_b_top_11_5_0==s_b_read_gpr_b_top_11_5_1 (const) */
    uint8 s_b_read_gpr_b_top_11_5_2 = ((uint8)(rt == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_11_5_3: &temp_13 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_11_5_4: If s_b_read_gpr_b_top_11_5_2: Jump b_read_gpr_b_top_11_7 else b_read_gpr_b_top_11_8 (const) */
    if (s_b_read_gpr_b_top_11_5_2) 
    {
      goto block_b_read_gpr_b_top_11_7;
    }
    else 
    {
      goto block_b_read_gpr_b_top_11_8;
    }
  }
  block_b_read_gpr_b_top_11_6: 
  {
    /* F s_b_read_gpr_b_top_11_6_0=top__Qscope_0x32c6ee0inst->rt(const) */
    /* F s_b_read_gpr_b_top_11_6_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_11_6_2 = s_b_read_gpr_b_top_11_6_0==s_b_read_gpr_b_top_11_6_1 (const) */
    uint8 s_b_read_gpr_b_top_11_6_2 = ((uint8)(rt == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_11_6_3: &temp_14 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_11_6_4: If s_b_read_gpr_b_top_11_6_2: Jump b_read_gpr_b_top_11_10 else b_read_gpr_b_top_11_11 (const) */
    if (s_b_read_gpr_b_top_11_6_2) 
    {
      goto block_b_read_gpr_b_top_11_10;
    }
    else 
    {
      goto block_b_read_gpr_b_top_11_11;
    }
  }
  block_b_read_gpr_b_top_11_7: 
  {
    /* F s_b_read_gpr_b_top_11_7_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_11_7_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_11_7_2: temp_13 = s_b_read_gpr_b_top_11_7_1 (const), dominates: s_b_read_gpr_b_top_11_9_0  */
    CV_temp_13 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_13), Operand(PrimitiveTypes.u8, CV_temp_13));
    /* F s_b_read_gpr_b_top_11_7_3: Jump b_read_gpr_b_top_11_9 (const) */
    goto block_b_read_gpr_b_top_11_9;
  }
  block_b_read_gpr_b_top_11_8: 
  {
    /* F s_b_read_gpr_b_top_11_8_0=top__Qscope_0x32c6ee0inst->rt(const) */
    /* D s_b_read_gpr_b_top_11_8_1 = ReadRegBank 0:s_b_read_gpr_b_top_11_8_0 (uint64) */
    Statement& s_b_read_gpr_b_top_11_8_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))),Operand(s_b_read_gpr_b_top_11_8_1));
    }
    /* D s_b_read_gpr_b_top_11_8_2 = (uint64)s_b_read_gpr_b_top_11_8_1 */
    Statement& s_b_read_gpr_b_top_11_8_2 = s_b_read_gpr_b_top_11_8_1;
    /* D s_b_read_gpr_b_top_11_8_3: temp_13 = s_b_read_gpr_b_top_11_8_2, dominates: s_b_read_gpr_b_top_11_9_0  */
    builder.store(Operand(*ir_idx_temp_13), Operand(s_b_read_gpr_b_top_11_8_2));
    /* F s_b_read_gpr_b_top_11_8_4: Jump b_read_gpr_b_top_11_9 (const) */
    goto block_b_read_gpr_b_top_11_9;
  }
  block_b_read_gpr_b_top_11_9: 
  {
    /* D s_b_read_gpr_b_top_11_9_0 = temp_13 */
    /* F s_b_read_gpr_b_top_11_9_1: Free &temp_13 (8) */
    /* D s_b_read_gpr_b_top_11_9_2: read_gpr_b_top_11_0r = s_b_read_gpr_b_top_11_9_0, dominates: s_b_top_4_0 s_b_top_41_1 s_b_top_43_1  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_11_0r), Operand(*ir_idx_temp_13));
    /* F s_b_read_gpr_b_top_11_9_3: Jump b_top_4 (const) */
    goto block_b_top_4;
  }
  block_b_read_gpr_b_top_11_10: 
  {
    /* F s_b_read_gpr_b_top_11_10_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_11_10_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_11_10_2: temp_14 = s_b_read_gpr_b_top_11_10_1 (const), dominates: s_b_read_gpr_b_top_11_12_0  */
    CV_temp_14 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_14), Operand(PrimitiveTypes.u8, CV_temp_14));
    /* F s_b_read_gpr_b_top_11_10_3: Jump b_read_gpr_b_top_11_12 (const) */
    goto block_b_read_gpr_b_top_11_12;
  }
  block_b_read_gpr_b_top_11_11: 
  {
    /* F s_b_read_gpr_b_top_11_11_0=top__Qscope_0x32c6ee0inst->rt(const) */
    /* D s_b_read_gpr_b_top_11_11_1 = ReadRegBank 1:s_b_read_gpr_b_top_11_11_0 (uint32) */
    Statement& s_b_read_gpr_b_top_11_11_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))),Operand(s_b_read_gpr_b_top_11_11_1));
    }
    /* D s_b_read_gpr_b_top_11_11_2 = (uint64)s_b_read_gpr_b_top_11_11_1 */
    Statement& s_b_read_gpr_b_top_11_11_2 = builder.zx(Operand(s_b_read_gpr_b_top_11_11_1));
    /* D s_b_read_gpr_b_top_11_11_3: temp_14 = s_b_read_gpr_b_top_11_11_2, dominates: s_b_read_gpr_b_top_11_12_0  */
    builder.store(Operand(*ir_idx_temp_14), Operand(s_b_read_gpr_b_top_11_11_2));
    /* F s_b_read_gpr_b_top_11_11_4: Jump b_read_gpr_b_top_11_12 (const) */
    goto block_b_read_gpr_b_top_11_12;
  }
  block_b_read_gpr_b_top_11_12: 
  {
    /* D s_b_read_gpr_b_top_11_12_0 = temp_14 */
    /* F s_b_read_gpr_b_top_11_12_1: Free &temp_14 (8) */
    /* D s_b_read_gpr_b_top_11_12_2: read_gpr_b_top_11_0r = s_b_read_gpr_b_top_11_12_0, dominates: s_b_top_4_0 s_b_top_41_1 s_b_top_43_1  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_11_0r), Operand(*ir_idx_temp_14));
    /* F s_b_read_gpr_b_top_11_12_3: Jump b_top_4 (const) */
    goto block_b_top_4;
  }
  block_b_top_13: 
  {
    /* D s_b_top_13_0 = read_gpr_b_top_21_0r */
    /* F s_b_top_13_1: Free &read_gpr_b_top_21_0r (8) */
    /* D s_b_top_13_2: top__Qscope_0x32c70f0rm = s_b_top_13_0, dominates: s_b_top_25_1 s_b_top_34_0  */
    builder.store(Operand(*ir_idx_top__Qscope_0x32c70f0rm), Operand(*ir_idx_read_gpr_b_top_21_0r));
    /* F s_b_top_13_3=top__Qscope_0x32c6ee0inst->option0(const) */
    /* F s_b_top_13_4 = (const uint8) 0 (const) */
    /* F s_b_top_13_5 = s_b_top_13_3==s_b_top_13_4 (const) */
    uint8 s_b_top_13_5 = ((uint8)(option0 == (uint8)0ULL));
    /* F s_b_top_13_6: &temp_20 = Alloc uint8 */
    /* F s_b_top_13_7: temp_20 = s_b_top_13_5 (const), dominates: s_b_top_22_0  */
    CV_temp_20 = s_b_top_13_5;
    /* F s_b_top_13_8: If s_b_top_13_5: Jump b_top_23 else b_top_22 (const) */
    if (s_b_top_13_5) 
    {
      goto block_b_top_23;
    }
    else 
    {
      goto block_b_top_22;
    }
  }
  block_b_read_gpr_b_top_21_14: 
  {
    /* F s_b_read_gpr_b_top_21_14_0=top__Qscope_0x32c6ee0inst->rm(const) */
    /* F s_b_read_gpr_b_top_21_14_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_21_14_2 = s_b_read_gpr_b_top_21_14_0==s_b_read_gpr_b_top_21_14_1 (const) */
    uint8 s_b_read_gpr_b_top_21_14_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_21_14_3: &temp_18 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_21_14_4: If s_b_read_gpr_b_top_21_14_2: Jump b_read_gpr_b_top_21_16 else b_read_gpr_b_top_21_17 (const) */
    if (s_b_read_gpr_b_top_21_14_2) 
    {
      goto block_b_read_gpr_b_top_21_16;
    }
    else 
    {
      goto block_b_read_gpr_b_top_21_17;
    }
  }
  block_b_read_gpr_b_top_21_15: 
  {
    /* F s_b_read_gpr_b_top_21_15_0=top__Qscope_0x32c6ee0inst->rm(const) */
    /* F s_b_read_gpr_b_top_21_15_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_21_15_2 = s_b_read_gpr_b_top_21_15_0==s_b_read_gpr_b_top_21_15_1 (const) */
    uint8 s_b_read_gpr_b_top_21_15_2 = ((uint8)(rm == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_21_15_3: &temp_19 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_21_15_4: If s_b_read_gpr_b_top_21_15_2: Jump b_read_gpr_b_top_21_19 else b_read_gpr_b_top_21_20 (const) */
    if (s_b_read_gpr_b_top_21_15_2) 
    {
      goto block_b_read_gpr_b_top_21_19;
    }
    else 
    {
      goto block_b_read_gpr_b_top_21_20;
    }
  }
  block_b_read_gpr_b_top_21_16: 
  {
    /* F s_b_read_gpr_b_top_21_16_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_21_16_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_21_16_2: temp_18 = s_b_read_gpr_b_top_21_16_1 (const), dominates: s_b_read_gpr_b_top_21_18_0  */
    CV_temp_18 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_18), Operand(PrimitiveTypes.u8, CV_temp_18));
    /* F s_b_read_gpr_b_top_21_16_3: Jump b_read_gpr_b_top_21_18 (const) */
    goto block_b_read_gpr_b_top_21_18;
  }
  block_b_read_gpr_b_top_21_17: 
  {
    /* F s_b_read_gpr_b_top_21_17_0=top__Qscope_0x32c6ee0inst->rm(const) */
    /* D s_b_read_gpr_b_top_21_17_1 = ReadRegBank 0:s_b_read_gpr_b_top_21_17_0 (uint64) */
    Statement& s_b_read_gpr_b_top_21_17_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_top_21_17_1));
    }
    /* D s_b_read_gpr_b_top_21_17_2 = (uint64)s_b_read_gpr_b_top_21_17_1 */
    Statement& s_b_read_gpr_b_top_21_17_2 = s_b_read_gpr_b_top_21_17_1;
    /* D s_b_read_gpr_b_top_21_17_3: temp_18 = s_b_read_gpr_b_top_21_17_2, dominates: s_b_read_gpr_b_top_21_18_0  */
    builder.store(Operand(*ir_idx_temp_18), Operand(s_b_read_gpr_b_top_21_17_2));
    /* F s_b_read_gpr_b_top_21_17_4: Jump b_read_gpr_b_top_21_18 (const) */
    goto block_b_read_gpr_b_top_21_18;
  }
  block_b_read_gpr_b_top_21_18: 
  {
    /* D s_b_read_gpr_b_top_21_18_0 = temp_18 */
    /* F s_b_read_gpr_b_top_21_18_1: Free &temp_18 (8) */
    /* D s_b_read_gpr_b_top_21_18_2: read_gpr_b_top_21_0r = s_b_read_gpr_b_top_21_18_0, dominates: s_b_top_13_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_21_0r), Operand(*ir_idx_temp_18));
    /* F s_b_read_gpr_b_top_21_18_3: Jump b_top_13 (const) */
    goto block_b_top_13;
  }
  block_b_read_gpr_b_top_21_19: 
  {
    /* F s_b_read_gpr_b_top_21_19_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_21_19_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_21_19_2: temp_19 = s_b_read_gpr_b_top_21_19_1 (const), dominates: s_b_read_gpr_b_top_21_21_0  */
    CV_temp_19 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_19), Operand(PrimitiveTypes.u8, CV_temp_19));
    /* F s_b_read_gpr_b_top_21_19_3: Jump b_read_gpr_b_top_21_21 (const) */
    goto block_b_read_gpr_b_top_21_21;
  }
  block_b_read_gpr_b_top_21_20: 
  {
    /* F s_b_read_gpr_b_top_21_20_0=top__Qscope_0x32c6ee0inst->rm(const) */
    /* D s_b_read_gpr_b_top_21_20_1 = ReadRegBank 1:s_b_read_gpr_b_top_21_20_0 (uint32) */
    Statement& s_b_read_gpr_b_top_21_20_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rm))),Operand(s_b_read_gpr_b_top_21_20_1));
    }
    /* D s_b_read_gpr_b_top_21_20_2 = (uint64)s_b_read_gpr_b_top_21_20_1 */
    Statement& s_b_read_gpr_b_top_21_20_2 = builder.zx(Operand(s_b_read_gpr_b_top_21_20_1));
    /* D s_b_read_gpr_b_top_21_20_3: temp_19 = s_b_read_gpr_b_top_21_20_2, dominates: s_b_read_gpr_b_top_21_21_0  */
    builder.store(Operand(*ir_idx_temp_19), Operand(s_b_read_gpr_b_top_21_20_2));
    /* F s_b_read_gpr_b_top_21_20_4: Jump b_read_gpr_b_top_21_21 (const) */
    goto block_b_read_gpr_b_top_21_21;
  }
  block_b_read_gpr_b_top_21_21: 
  {
    /* D s_b_read_gpr_b_top_21_21_0 = temp_19 */
    /* F s_b_read_gpr_b_top_21_21_1: Free &temp_19 (8) */
    /* D s_b_read_gpr_b_top_21_21_2: read_gpr_b_top_21_0r = s_b_read_gpr_b_top_21_21_0, dominates: s_b_top_13_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_21_0r), Operand(*ir_idx_temp_19));
    /* F s_b_read_gpr_b_top_21_21_3: Jump b_top_13 (const) */
    goto block_b_top_13;
  }
  block_b_top_22: 
  {
    /* F s_b_top_22_0 = temp_20 (const) */
    /* F s_b_top_22_1: Free &temp_20 (1) */
    /* F s_b_top_22_2: If s_b_top_22_0: Jump b_top_24 else b_top_26 (const) */
    if (CV_temp_20) 
    {
      goto block_b_top_24;
    }
    else 
    {
      goto block_b_top_26;
    }
  }
  block_b_top_23: 
  {
    /* F s_b_top_23_0=top__Qscope_0x32c6ee0inst->option21(const) */
    /* F s_b_top_23_1 = (const uint8) 1 (const) */
    /* F s_b_top_23_2 = s_b_top_23_0==s_b_top_23_1 (const) */
    uint8 s_b_top_23_2 = ((uint8)(option21 == (uint8)1ULL));
    /* F s_b_top_23_3: temp_20 = s_b_top_23_2 (const), dominates: s_b_top_22_0  */
    CV_temp_20 = s_b_top_23_2;
    /* F s_b_top_23_4: Jump b_top_22 (const) */
    goto block_b_top_22;
  }
  block_b_top_24: 
  {
    /* D s_b_top_24_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_top_24_1: Jump b_top_25 (const) */
    goto block_b_top_25;
  }
  block_b_top_25: 
  {
    /* D s_b_top_25_0 = temp_8 */
    /* D s_b_top_25_1 = top__Qscope_0x32c70f0rm */
    /* D s_b_top_25_2 = s_b_top_25_0+s_b_top_25_1 */
    Statement& s_b_top_25_2 = builder.add(Operand(*ir_idx_temp_8), Operand(*ir_idx_top__Qscope_0x32c70f0rm));
    /* D s_b_top_25_3: top__Qscope_0x32c70f0address = s_b_top_25_2, dominates: s_b_top_41_0 s_b_top_43_0  */
    builder.store(Operand(*ir_idx_top__Qscope_0x32c70f0address), Operand(s_b_top_25_2));
    /* F s_b_top_25_4=top__Qscope_0x32c6ee0inst->size(const) */
    /* F s_b_top_25_5 = (const uint8) 3 (const) */
    /* F s_b_top_25_6 = s_b_top_25_4==s_b_top_25_5 (const) */
    uint8 s_b_top_25_6 = ((uint8)(size == (uint8)3ULL));
    /* F s_b_top_25_7: If s_b_top_25_6: Jump b_top_41 else b_top_43 (const) */
    if (s_b_top_25_6) 
    {
      goto block_b_top_41;
    }
    else 
    {
      goto block_b_top_43;
    }
  }
  block_b_top_26: 
  {
    /* F s_b_top_26_0=top__Qscope_0x32c6ee0inst->option0(const) */
    /* F s_b_top_26_1 = (const uint8) 0 (const) */
    /* F s_b_top_26_2 = s_b_top_26_0==s_b_top_26_1 (const) */
    uint8 s_b_top_26_2 = ((uint8)(option0 == (uint8)0ULL));
    /* F s_b_top_26_3: &temp_21 = Alloc uint8 */
    /* F s_b_top_26_4: temp_21 = s_b_top_26_2 (const), dominates: s_b_top_27_0  */
    CV_temp_21 = s_b_top_26_2;
    /* F s_b_top_26_5: If s_b_top_26_2: Jump b_top_28 else b_top_27 (const) */
    if (s_b_top_26_2) 
    {
      goto block_b_top_28;
    }
    else 
    {
      goto block_b_top_27;
    }
  }
  block_b_top_27: 
  {
    /* F s_b_top_27_0 = temp_21 (const) */
    /* F s_b_top_27_1: Free &temp_21 (1) */
    /* F s_b_top_27_2: If s_b_top_27_0: Jump b_top_29 else b_top_31 (const) */
    if (CV_temp_21) 
    {
      goto block_b_top_29;
    }
    else 
    {
      goto block_b_top_31;
    }
  }
  block_b_top_28: 
  {
    /* F s_b_top_28_0=top__Qscope_0x32c6ee0inst->option21(const) */
    /* F s_b_top_28_1 = (const uint8) 3 (const) */
    /* F s_b_top_28_2 = s_b_top_28_0==s_b_top_28_1 (const) */
    uint8 s_b_top_28_2 = ((uint8)(option21 == (uint8)3ULL));
    /* F s_b_top_28_3: temp_21 = s_b_top_28_2 (const), dominates: s_b_top_27_0  */
    CV_temp_21 = s_b_top_28_2;
    /* F s_b_top_28_4: Jump b_top_27 (const) */
    goto block_b_top_27;
  }
  block_b_top_29: 
  {
    /* D s_b_top_29_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_top_29_1: Jump b_top_30 (const) */
    goto block_b_top_30;
  }
  block_b_top_30: 
  {
    /* F s_b_top_30_0: Jump b_top_25 (const) */
    goto block_b_top_25;
  }
  block_b_top_31: 
  {
    /* F s_b_top_31_0=top__Qscope_0x32c6ee0inst->option0(const) */
    /* F s_b_top_31_1 = (const uint8) 1 (const) */
    /* F s_b_top_31_2 = s_b_top_31_0==s_b_top_31_1 (const) */
    uint8 s_b_top_31_2 = ((uint8)(option0 == (uint8)1ULL));
    /* F s_b_top_31_3: &temp_22 = Alloc uint8 */
    /* F s_b_top_31_4: temp_22 = s_b_top_31_2 (const), dominates: s_b_top_32_0  */
    CV_temp_22 = s_b_top_31_2;
    /* F s_b_top_31_5: If s_b_top_31_2: Jump b_top_33 else b_top_32 (const) */
    if (s_b_top_31_2) 
    {
      goto block_b_top_33;
    }
    else 
    {
      goto block_b_top_32;
    }
  }
  block_b_top_32: 
  {
    /* F s_b_top_32_0 = temp_22 (const) */
    /* F s_b_top_32_1: Free &temp_22 (1) */
    /* F s_b_top_32_2: If s_b_top_32_0: Jump b_top_34 else b_top_36 (const) */
    if (CV_temp_22) 
    {
      goto block_b_top_34;
    }
    else 
    {
      goto block_b_top_36;
    }
  }
  block_b_top_33: 
  {
    /* F s_b_top_33_0=top__Qscope_0x32c6ee0inst->option21(const) */
    /* F s_b_top_33_1 = (const uint8) 1 (const) */
    /* F s_b_top_33_2 = s_b_top_33_0==s_b_top_33_1 (const) */
    uint8 s_b_top_33_2 = ((uint8)(option21 == (uint8)1ULL));
    /* F s_b_top_33_3: temp_22 = s_b_top_33_2 (const), dominates: s_b_top_32_0  */
    CV_temp_22 = s_b_top_33_2;
    /* F s_b_top_33_4: Jump b_top_32 (const) */
    goto block_b_top_32;
  }
  block_b_top_34: 
  {
    /* D s_b_top_34_0 = top__Qscope_0x32c70f0rm */
    /* F s_b_top_34_1=top__Qscope_0x32c6ee0inst->size(const) */
    /* F s_b_top_34_2 = (uint64)s_b_top_34_1 (const) */
    /* D s_b_top_34_3 = s_b_top_34_0<<s_b_top_34_2 */
    Statement& s_b_top_34_3 = builder.shl(Operand(*ir_idx_top__Qscope_0x32c70f0rm), Operand(PrimitiveTypes.u64, ((uint64)size)));
    /* D s_b_top_34_4: top__Qscope_0x32c70f0rm = s_b_top_34_3, dominates: s_b_top_25_1  */
    builder.store(Operand(*ir_idx_top__Qscope_0x32c70f0rm), Operand(s_b_top_34_3));
    /* F s_b_top_34_5: Jump b_top_35 (const) */
    goto block_b_top_35;
  }
  block_b_top_35: 
  {
    /* F s_b_top_35_0: Jump b_top_30 (const) */
    goto block_b_top_30;
  }
  block_b_top_36: 
  {
    /* F s_b_top_36_0=top__Qscope_0x32c6ee0inst->option0(const) */
    /* F s_b_top_36_1 = (const uint8) 1 (const) */
    /* F s_b_top_36_2 = s_b_top_36_0==s_b_top_36_1 (const) */
    uint8 s_b_top_36_2 = ((uint8)(option0 == (uint8)1ULL));
    /* F s_b_top_36_3: &temp_23 = Alloc uint8 */
    /* F s_b_top_36_4: temp_23 = s_b_top_36_2 (const), dominates: s_b_top_37_0  */
    CV_temp_23 = s_b_top_36_2;
    /* F s_b_top_36_5: If s_b_top_36_2: Jump b_top_38 else b_top_37 (const) */
    if (s_b_top_36_2) 
    {
      goto block_b_top_38;
    }
    else 
    {
      goto block_b_top_37;
    }
  }
  block_b_top_37: 
  {
    /* F s_b_top_37_0 = temp_23 (const) */
    /* F s_b_top_37_1: Free &temp_23 (1) */
    /* F s_b_top_37_2: If s_b_top_37_0: Jump b_top_39 else b_top_40 (const) */
    if (CV_temp_23) 
    {
      goto block_b_top_39;
    }
    else 
    {
      goto block_b_top_40;
    }
  }
  block_b_top_38: 
  {
    /* F s_b_top_38_0=top__Qscope_0x32c6ee0inst->option21(const) */
    /* F s_b_top_38_1 = (const uint8) 3 (const) */
    /* F s_b_top_38_2 = s_b_top_38_0==s_b_top_38_1 (const) */
    uint8 s_b_top_38_2 = ((uint8)(option21 == (uint8)3ULL));
    /* F s_b_top_38_3: temp_23 = s_b_top_38_2 (const), dominates: s_b_top_37_0  */
    CV_temp_23 = s_b_top_38_2;
    /* F s_b_top_38_4: Jump b_top_37 (const) */
    goto block_b_top_37;
  }
  block_b_top_39: 
  {
    /* D s_b_top_39_0 = [unknown intrinsic 7] */
    builder.trap();
    /* F s_b_top_39_1: Jump b_top_40 (const) */
    goto block_b_top_40;
  }
  block_b_top_40: 
  {
    /* F s_b_top_40_0: Jump b_top_35 (const) */
    goto block_b_top_35;
  }
  block_b_top_41: 
  {
    /* D s_b_top_41_0 = top__Qscope_0x32c70f0address */
    /* D s_b_top_41_1 = read_gpr_b_top_11_0r */
    /* D s_b_top_41_2: Store 8 s_b_top_41_0 <= s_b_top_41_1 */
    if (_trace) 
    {
      builder.trace_mem_write(Operand(*ir_idx_top__Qscope_0x32c70f0address), Operand(*ir_idx_read_gpr_b_top_11_0r));
    }
    Statement& s_b_top_41_2 = builder.stmem(Operand(*ir_idx_read_gpr_b_top_11_0r), Operand(*ir_idx_top__Qscope_0x32c70f0address));
    /* F s_b_top_41_3: Jump b_top_42 (const) */
    goto block_b_top_42;
  }
  block_b_top_42: 
  {
    /* F s_b_top_42_0: Free &top__Qscope_0x32c70f0address (8) */
    /* F s_b_top_42_1: Free &top__Qscope_0x32c70f0rm (8) */
    /* F s_b_top_42_2: Return */
    goto fixed_done;
  }
  block_b_top_43: 
  {
    /* D s_b_top_43_0 = top__Qscope_0x32c70f0address */
    /* D s_b_top_43_1 = read_gpr_b_top_11_0r */
    /* D s_b_top_43_2 = (uint32)s_b_top_43_1 */
    Statement& s_b_top_43_2 = builder.trunc(Operand(*ir_idx_read_gpr_b_top_11_0r));
    /* D s_b_top_43_3: Store 4 s_b_top_43_0 <= s_b_top_43_2 */
    if (_trace) 
    {
      builder.trace_mem_write(Operand(*ir_idx_top__Qscope_0x32c70f0address), Operand(s_b_top_43_2));
    }
    Statement& s_b_top_43_3 = builder.stmem(Operand(s_b_top_43_2), Operand(*ir_idx_top__Qscope_0x32c70f0address));
    /* F s_b_top_43_4: Jump b_top_42 (const) */
    goto block_b_top_42;
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
bool aarch64_insn_sttr::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_subi::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_3
  uint64 CV_decode_imm_b_top_1_0r;
  vrt::dbt::ir::Statement *ir_idx_decode_imm_b_top_1_0r = &builder.alloc(PrimitiveTypes.u64);
  // Reg s_b_0_4
  uint32 CV_decode_imm_b_top_1__Qscope_0x33c3880imm;
  vrt::dbt::ir::Statement *ir_idx_decode_imm_b_top_1__Qscope_0x33c3880imm = &builder.alloc(PrimitiveTypes.u32);
  // Block b_top_1
  // Reg s_b_top_1_5
  uint64 CV_read_gpr_sp_b_top_6_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_sp_b_top_6_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_decode_imm_b_top_1_2
  // Block b_decode_imm_b_top_1_3
  // Block b_decode_imm_b_top_1_4
  // Block b_top_5
  // Block b_read_gpr_sp_b_top_6_6
  // Reg s_b_read_gpr_sp_b_top_6_6_3
  uint64 CV_temp_9;
  vrt::dbt::ir::Statement *ir_idx_temp_9 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_sp_b_top_6_7
  // Reg s_b_read_gpr_sp_b_top_6_7_3
  uint64 CV_temp_10;
  vrt::dbt::ir::Statement *ir_idx_temp_10 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_sp_b_top_6_8
  // Block b_read_gpr_sp_b_top_6_9
  // Block b_read_gpr_sp_b_top_6_10
  // Block b_read_gpr_sp_b_top_6_11
  // Block b_read_gpr_sp_b_top_6_12
  // Block b_read_gpr_sp_b_top_6_13
  // Block b_top_14
  // Block b_top_15
  // Block b_top_16
  // Reg s_b_top_16_5
  uint64 CV_write_gpr_sp_b_top_34__Qscope_0x33c0ff0value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_sp_b_top_34__Qscope_0x33c0ff0value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_17
  // Reg s_b_top_17_8
  uint64 CV_write_gpr_b_top_22__Qscope_0x33bbb30value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_b_top_22__Qscope_0x33bbb30value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_18
  // Block b_top_19
  // Reg s_b_top_19_6
  uint64 CV_write_gpr_b_top_28__Qscope_0x33bbb30value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_b_top_28__Qscope_0x33bbb30value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_20
  // Block b_write_gpr_b_top_22_21
  // Block b_write_gpr_b_top_22_22
  // Block b_top_23
  // Block b_write_gpr_b_top_28_24
  // Block b_write_gpr_b_top_28_25
  // Block b_write_gpr_sp_b_top_34_26
  // Block b_write_gpr_sp_b_top_34_27
  // Block b_write_gpr_sp_b_top_34_28
  // Block b_write_gpr_sp_b_top_34_29
  // Block b_write_gpr_sp_b_top_34_30
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0=top__Qscope_0x31f3850inst->imm12(const) */
    /* F s_b_0_1 = (uint32)s_b_0_0 (const) */
    /* F s_b_0_2=top__Qscope_0x31f3850inst->shift(const) */
    /* F s_b_0_3: &decode_imm_b_top_1_0r = Alloc uint64 */
    /* F s_b_0_4: &decode_imm_b_top_1__Qscope_0x33c3880imm = Alloc uint32 */
    /* F s_b_0_5: decode_imm_b_top_1__Qscope_0x33c3880imm = s_b_0_1 (const), dominates: s_b_decode_imm_b_top_1_2_0 s_b_decode_imm_b_top_1_3_0  */
    CV_decode_imm_b_top_1__Qscope_0x33c3880imm = ((uint32)imm12);
    /* F s_b_0_6 = (const uint8) 0 (const) */
    /* F s_b_0_7 = (const uint8) 1 (const) */
    /* F s_b_0_8: Switch s_b_0_2: [s_b_0_6: b_decode_imm_b_top_1_2][s_b_0_7: b_decode_imm_b_top_1_3] def b_decode_imm_b_top_1_4 (const) -> b_decode_imm_b_top_1_2, b_decode_imm_b_top_1_3, b_decode_imm_b_top_1_4,  */
    switch (shift) 
    {
    case (uint8)0ULL:
      goto block_b_decode_imm_b_top_1_2;
      break;
    case (uint8)1ULL:
      goto block_b_decode_imm_b_top_1_3;
      break;
    default:
      goto block_b_decode_imm_b_top_1_4;
    }
  }
  block_b_top_1: 
  {
    /* F s_b_top_1_0: Free &decode_imm_b_top_1__Qscope_0x33c3880imm (4) */
    /* F s_b_top_1_1 = decode_imm_b_top_1_0r (const) */
    /* F s_b_top_1_2: Free &decode_imm_b_top_1_0r (8) */
    /* F s_b_top_1_3=top__Qscope_0x31f3850inst->sf(const) */
    /* F s_b_top_1_4=top__Qscope_0x31f3850inst->rn(const) */
    /* F s_b_top_1_5: &read_gpr_sp_b_top_6_0r = Alloc uint64 */
    /* F s_b_top_1_6: If s_b_top_1_3: Jump b_read_gpr_sp_b_top_6_6 else b_read_gpr_sp_b_top_6_7 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_sp_b_top_6_6;
    }
    else 
    {
      goto block_b_read_gpr_sp_b_top_6_7;
    }
  }
  block_b_decode_imm_b_top_1_2: 
  {
    /* F s_b_decode_imm_b_top_1_2_0 = decode_imm_b_top_1__Qscope_0x33c3880imm (const) */
    /* F s_b_decode_imm_b_top_1_2_1 = (uint64)s_b_decode_imm_b_top_1_2_0 (const) */
    /* F s_b_decode_imm_b_top_1_2_2: decode_imm_b_top_1_0r = s_b_decode_imm_b_top_1_2_1 (const), dominates: s_b_top_1_1 s_b_top_17_4 s_b_top_19_3 s_b_top_16_3  */
    CV_decode_imm_b_top_1_0r = ((uint64)CV_decode_imm_b_top_1__Qscope_0x33c3880imm);
    /* F s_b_decode_imm_b_top_1_2_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_decode_imm_b_top_1_3: 
  {
    /* F s_b_decode_imm_b_top_1_3_0 = decode_imm_b_top_1__Qscope_0x33c3880imm (const) */
    /* F s_b_decode_imm_b_top_1_3_1 = (const uint8) c (const) */
    /* F s_b_decode_imm_b_top_1_3_2 = (uint32) c (const) */
    /* F s_b_decode_imm_b_top_1_3_3 = s_b_decode_imm_b_top_1_3_0<<s_b_decode_imm_b_top_1_3_2 (const) */
    uint32 s_b_decode_imm_b_top_1_3_3 = ((uint32)(CV_decode_imm_b_top_1__Qscope_0x33c3880imm << (uint32)12ULL));
    /* F s_b_decode_imm_b_top_1_3_4 = (uint64)s_b_decode_imm_b_top_1_3_3 (const) */
    /* F s_b_decode_imm_b_top_1_3_5: decode_imm_b_top_1_0r = s_b_decode_imm_b_top_1_3_4 (const), dominates: s_b_top_1_1 s_b_top_17_4 s_b_top_19_3 s_b_top_16_3  */
    CV_decode_imm_b_top_1_0r = ((uint64)s_b_decode_imm_b_top_1_3_3);
    /* F s_b_decode_imm_b_top_1_3_6: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_decode_imm_b_top_1_4: 
  {
    /* F s_b_decode_imm_b_top_1_4_0 = (const uint8) 0 (const) */
    /* F s_b_decode_imm_b_top_1_4_1 = (uint64) 0 (const) */
    /* F s_b_decode_imm_b_top_1_4_2: decode_imm_b_top_1_0r = s_b_decode_imm_b_top_1_4_1 (const), dominates: s_b_top_1_1 s_b_top_17_4 s_b_top_19_3 s_b_top_16_3  */
    CV_decode_imm_b_top_1_0r = (uint64)0ULL;
    /* F s_b_decode_imm_b_top_1_4_3: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_5: 
  {
    /* D s_b_top_5_0 = read_gpr_sp_b_top_6_0r */
    /* F s_b_top_5_1: Free &read_gpr_sp_b_top_6_0r (8) */
    /* F s_b_top_5_2=top__Qscope_0x31f3850inst->S(const) */
    /* F s_b_top_5_3: If s_b_top_5_2: Jump b_top_14 else b_top_16 (const) */
    if (S) 
    {
      goto block_b_top_14;
    }
    else 
    {
      goto block_b_top_16;
    }
  }
  block_b_read_gpr_sp_b_top_6_6: 
  {
    /* F s_b_read_gpr_sp_b_top_6_6_0=top__Qscope_0x31f3850inst->rn(const) */
    /* F s_b_read_gpr_sp_b_top_6_6_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_sp_b_top_6_6_2 = s_b_read_gpr_sp_b_top_6_6_0==s_b_read_gpr_sp_b_top_6_6_1 (const) */
    uint8 s_b_read_gpr_sp_b_top_6_6_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_sp_b_top_6_6_3: &temp_9 = Alloc uint64 */
    /* F s_b_read_gpr_sp_b_top_6_6_4: If s_b_read_gpr_sp_b_top_6_6_2: Jump b_read_gpr_sp_b_top_6_8 else b_read_gpr_sp_b_top_6_9 (const) */
    if (s_b_read_gpr_sp_b_top_6_6_2) 
    {
      goto block_b_read_gpr_sp_b_top_6_8;
    }
    else 
    {
      goto block_b_read_gpr_sp_b_top_6_9;
    }
  }
  block_b_read_gpr_sp_b_top_6_7: 
  {
    /* F s_b_read_gpr_sp_b_top_6_7_0=top__Qscope_0x31f3850inst->rn(const) */
    /* F s_b_read_gpr_sp_b_top_6_7_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_sp_b_top_6_7_2 = s_b_read_gpr_sp_b_top_6_7_0==s_b_read_gpr_sp_b_top_6_7_1 (const) */
    uint8 s_b_read_gpr_sp_b_top_6_7_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_sp_b_top_6_7_3: &temp_10 = Alloc uint64 */
    /* F s_b_read_gpr_sp_b_top_6_7_4: If s_b_read_gpr_sp_b_top_6_7_2: Jump b_read_gpr_sp_b_top_6_11 else b_read_gpr_sp_b_top_6_12 (const) */
    if (s_b_read_gpr_sp_b_top_6_7_2) 
    {
      goto block_b_read_gpr_sp_b_top_6_11;
    }
    else 
    {
      goto block_b_read_gpr_sp_b_top_6_12;
    }
  }
  block_b_read_gpr_sp_b_top_6_8: 
  {
    /* D s_b_read_gpr_sp_b_top_6_8_0 = ReadReg 0 (uint64) */
    Statement& s_b_read_gpr_sp_b_top_6_8_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 248));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 248), Operand(s_b_read_gpr_sp_b_top_6_8_0));
    }
    /* D s_b_read_gpr_sp_b_top_6_8_1: temp_9 = s_b_read_gpr_sp_b_top_6_8_0, dominates: s_b_read_gpr_sp_b_top_6_10_0  */
    builder.store(Operand(*ir_idx_temp_9), Operand(s_b_read_gpr_sp_b_top_6_8_0));
    /* F s_b_read_gpr_sp_b_top_6_8_2: Jump b_read_gpr_sp_b_top_6_10 (const) */
    goto block_b_read_gpr_sp_b_top_6_10;
  }
  block_b_read_gpr_sp_b_top_6_9: 
  {
    /* F s_b_read_gpr_sp_b_top_6_9_0=top__Qscope_0x31f3850inst->rn(const) */
    /* D s_b_read_gpr_sp_b_top_6_9_1 = ReadRegBank 0:s_b_read_gpr_sp_b_top_6_9_0 (uint64) */
    Statement& s_b_read_gpr_sp_b_top_6_9_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_sp_b_top_6_9_1));
    }
    /* D s_b_read_gpr_sp_b_top_6_9_2: temp_9 = s_b_read_gpr_sp_b_top_6_9_1, dominates: s_b_read_gpr_sp_b_top_6_10_0  */
    builder.store(Operand(*ir_idx_temp_9), Operand(s_b_read_gpr_sp_b_top_6_9_1));
    /* F s_b_read_gpr_sp_b_top_6_9_3: Jump b_read_gpr_sp_b_top_6_10 (const) */
    goto block_b_read_gpr_sp_b_top_6_10;
  }
  block_b_read_gpr_sp_b_top_6_10: 
  {
    /* D s_b_read_gpr_sp_b_top_6_10_0 = temp_9 */
    /* F s_b_read_gpr_sp_b_top_6_10_1: Free &temp_9 (8) */
    /* D s_b_read_gpr_sp_b_top_6_10_2: read_gpr_sp_b_top_6_0r = s_b_read_gpr_sp_b_top_6_10_0, dominates: s_b_top_5_0 s_b_top_17_2 s_b_top_19_2 s_b_top_16_2  */
    builder.store(Operand(*ir_idx_read_gpr_sp_b_top_6_0r), Operand(*ir_idx_temp_9));
    /* F s_b_read_gpr_sp_b_top_6_10_3: Jump b_top_5 (const) */
    goto block_b_top_5;
  }
  block_b_read_gpr_sp_b_top_6_11: 
  {
    /* D s_b_read_gpr_sp_b_top_6_11_0 = ReadReg 1 (uint32) */
    Statement& s_b_read_gpr_sp_b_top_6_11_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 248));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 248), Operand(s_b_read_gpr_sp_b_top_6_11_0));
    }
    /* D s_b_read_gpr_sp_b_top_6_11_1 = (uint64)s_b_read_gpr_sp_b_top_6_11_0 */
    Statement& s_b_read_gpr_sp_b_top_6_11_1 = builder.zx(Operand(s_b_read_gpr_sp_b_top_6_11_0));
    /* D s_b_read_gpr_sp_b_top_6_11_2: temp_10 = s_b_read_gpr_sp_b_top_6_11_1, dominates: s_b_read_gpr_sp_b_top_6_13_0  */
    builder.store(Operand(*ir_idx_temp_10), Operand(s_b_read_gpr_sp_b_top_6_11_1));
    /* F s_b_read_gpr_sp_b_top_6_11_3: Jump b_read_gpr_sp_b_top_6_13 (const) */
    goto block_b_read_gpr_sp_b_top_6_13;
  }
  block_b_read_gpr_sp_b_top_6_12: 
  {
    /* F s_b_read_gpr_sp_b_top_6_12_0=top__Qscope_0x31f3850inst->rn(const) */
    /* D s_b_read_gpr_sp_b_top_6_12_1 = ReadRegBank 1:s_b_read_gpr_sp_b_top_6_12_0 (uint32) */
    Statement& s_b_read_gpr_sp_b_top_6_12_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_sp_b_top_6_12_1));
    }
    /* D s_b_read_gpr_sp_b_top_6_12_2 = (uint64)s_b_read_gpr_sp_b_top_6_12_1 */
    Statement& s_b_read_gpr_sp_b_top_6_12_2 = builder.zx(Operand(s_b_read_gpr_sp_b_top_6_12_1));
    /* D s_b_read_gpr_sp_b_top_6_12_3: temp_10 = s_b_read_gpr_sp_b_top_6_12_2, dominates: s_b_read_gpr_sp_b_top_6_13_0  */
    builder.store(Operand(*ir_idx_temp_10), Operand(s_b_read_gpr_sp_b_top_6_12_2));
    /* F s_b_read_gpr_sp_b_top_6_12_4: Jump b_read_gpr_sp_b_top_6_13 (const) */
    goto block_b_read_gpr_sp_b_top_6_13;
  }
  block_b_read_gpr_sp_b_top_6_13: 
  {
    /* D s_b_read_gpr_sp_b_top_6_13_0 = temp_10 */
    /* F s_b_read_gpr_sp_b_top_6_13_1: Free &temp_10 (8) */
    /* D s_b_read_gpr_sp_b_top_6_13_2: read_gpr_sp_b_top_6_0r = s_b_read_gpr_sp_b_top_6_13_0, dominates: s_b_top_5_0 s_b_top_17_2 s_b_top_19_2 s_b_top_16_2  */
    builder.store(Operand(*ir_idx_read_gpr_sp_b_top_6_0r), Operand(*ir_idx_temp_10));
    /* F s_b_read_gpr_sp_b_top_6_13_3: Jump b_top_5 (const) */
    goto block_b_top_5;
  }
  block_b_top_14: 
  {
    /* F s_b_top_14_0=top__Qscope_0x31f3850inst->sf(const) */
    /* F s_b_top_14_1 = (const uint8) 0 (const) */
    /* F s_b_top_14_2 = s_b_top_14_0==s_b_top_14_1 (const) */
    uint8 s_b_top_14_2 = ((uint8)(sf == (uint8)0ULL));
    /* F s_b_top_14_3: If s_b_top_14_2: Jump b_top_17 else b_top_19 (const) */
    if (s_b_top_14_2) 
    {
      goto block_b_top_17;
    }
    else 
    {
      goto block_b_top_19;
    }
  }
  block_b_top_15: 
  {
    /* F s_b_top_15_0: Return */
    goto fixed_done;
  }
  block_b_top_16: 
  {
    /* F s_b_top_16_0=top__Qscope_0x31f3850inst->sf(const) */
    /* F s_b_top_16_1=top__Qscope_0x31f3850inst->rd(const) */
    /* D s_b_top_16_2 = read_gpr_sp_b_top_6_0r */
    /* F s_b_top_16_3 = decode_imm_b_top_1_0r (const) */
    /* D s_b_top_16_4 = s_b_top_16_2-s_b_top_16_3 */
    Statement& s_b_top_16_4 = builder.sub(Operand(*ir_idx_read_gpr_sp_b_top_6_0r), Operand(PrimitiveTypes.u64, CV_decode_imm_b_top_1_0r));
    /* F s_b_top_16_5: &write_gpr_sp_b_top_34__Qscope_0x33c0ff0value = Alloc uint64 */
    /* D s_b_top_16_6: write_gpr_sp_b_top_34__Qscope_0x33c0ff0value = s_b_top_16_4, dominates: s_b_write_gpr_sp_b_top_34_26_0 s_b_write_gpr_sp_b_top_34_28_0 s_b_write_gpr_sp_b_top_34_30_1  */
    builder.store(Operand(*ir_idx_write_gpr_sp_b_top_34__Qscope_0x33c0ff0value), Operand(s_b_top_16_4));
    /* F s_b_top_16_7 = (uint8) 0 (const) */
    /* F s_b_top_16_8 = s_b_top_16_7==s_b_top_16_0 (const) */
    uint8 s_b_top_16_8 = ((uint8)((uint8)0ULL == sf));
    /* F s_b_top_16_9: If s_b_top_16_8: Jump b_write_gpr_sp_b_top_34_26 else b_write_gpr_sp_b_top_34_27 (const) */
    if (s_b_top_16_8) 
    {
      goto block_b_write_gpr_sp_b_top_34_26;
    }
    else 
    {
      goto block_b_write_gpr_sp_b_top_34_27;
    }
  }
  block_b_top_17: 
  {
    /* F s_b_top_17_0 = (const uint8) 0 (const) */
    /* F s_b_top_17_1=top__Qscope_0x31f3850inst->rd(const) */
    /* D s_b_top_17_2 = read_gpr_sp_b_top_6_0r */
    /* D s_b_top_17_3 = (uint32)s_b_top_17_2 */
    Statement& s_b_top_17_3 = builder.trunc(Operand(*ir_idx_read_gpr_sp_b_top_6_0r));
    /* F s_b_top_17_4 = decode_imm_b_top_1_0r (const) */
    /* F s_b_top_17_5 = (uint32)s_b_top_17_4 (const) */
    /* F s_b_top_17_6 = (const uint8) 1 (const) */
    /* D s_b_top_17_7 = [unknown intrinsic 36] */
    Statement& s_b_top_17_7 = builder.sbc_with_flags(Operand(s_b_top_17_3), Operand(PrimitiveTypes.u32, ((uint32)CV_decode_imm_b_top_1_0r)), Operand(PrimitiveTypes.u8, (uint8)1ULL));
    /* F s_b_top_17_8: &write_gpr_b_top_22__Qscope_0x33bbb30value = Alloc uint64 */
    /* D s_b_top_17_9: write_gpr_b_top_22__Qscope_0x33bbb30value = s_b_top_17_7, dominates: s_b_write_gpr_b_top_22_22_2  */
    builder.store(Operand(*ir_idx_write_gpr_b_top_22__Qscope_0x33bbb30value), Operand(s_b_top_17_7));
    /* F s_b_top_17_10 = (const uint8) 1f (const) */
    /* F s_b_top_17_11 = s_b_top_17_1==s_b_top_17_10 (const) */
    uint8 s_b_top_17_11 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_17_12: If s_b_top_17_11: Jump b_write_gpr_b_top_22_21 else b_write_gpr_b_top_22_22 (const) */
    if (s_b_top_17_11) 
    {
      goto block_b_write_gpr_b_top_22_21;
    }
    else 
    {
      goto block_b_write_gpr_b_top_22_22;
    }
  }
  block_b_top_18: 
  {
    /* F s_b_top_18_0: Jump b_top_15 (const) */
    goto block_b_top_15;
  }
  block_b_top_19: 
  {
    /* F s_b_top_19_0 = (const uint8) 1 (const) */
    /* F s_b_top_19_1=top__Qscope_0x31f3850inst->rd(const) */
    /* D s_b_top_19_2 = read_gpr_sp_b_top_6_0r */
    /* F s_b_top_19_3 = decode_imm_b_top_1_0r (const) */
    /* F s_b_top_19_4 = (const uint8) 1 (const) */
    /* D s_b_top_19_5 = [unknown intrinsic 36] */
    Statement& s_b_top_19_5 = builder.sbc_with_flags(Operand(*ir_idx_read_gpr_sp_b_top_6_0r), Operand(PrimitiveTypes.u64, CV_decode_imm_b_top_1_0r), Operand(PrimitiveTypes.u8, (uint8)1ULL));
    /* F s_b_top_19_6: &write_gpr_b_top_28__Qscope_0x33bbb30value = Alloc uint64 */
    /* D s_b_top_19_7: write_gpr_b_top_28__Qscope_0x33bbb30value = s_b_top_19_5, dominates: s_b_write_gpr_b_top_28_25_2  */
    builder.store(Operand(*ir_idx_write_gpr_b_top_28__Qscope_0x33bbb30value), Operand(s_b_top_19_5));
    /* F s_b_top_19_8 = (const uint8) 1f (const) */
    /* F s_b_top_19_9 = s_b_top_19_1==s_b_top_19_8 (const) */
    uint8 s_b_top_19_9 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_19_10: If s_b_top_19_9: Jump b_write_gpr_b_top_28_24 else b_write_gpr_b_top_28_25 (const) */
    if (s_b_top_19_9) 
    {
      goto block_b_write_gpr_b_top_28_24;
    }
    else 
    {
      goto block_b_write_gpr_b_top_28_25;
    }
  }
  block_b_top_20: 
  {
    /* F s_b_top_20_0: Free &write_gpr_b_top_22__Qscope_0x33bbb30value (8) */
    /* F s_b_top_20_1: Jump b_top_18 (const) */
    goto block_b_top_18;
  }
  block_b_write_gpr_b_top_22_21: 
  {
    /* F s_b_write_gpr_b_top_22_21_0: Jump b_top_20 (const) */
    goto block_b_top_20;
  }
  block_b_write_gpr_b_top_22_22: 
  {
    /* F s_b_write_gpr_b_top_22_22_0 = (const uint8) 0 (const) */
    /* F s_b_write_gpr_b_top_22_22_1=top__Qscope_0x31f3850inst->rd(const) */
    /* D s_b_write_gpr_b_top_22_22_2 = write_gpr_b_top_22__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_22_22_3 = (uint32)s_b_write_gpr_b_top_22_22_2 */
    Statement& s_b_write_gpr_b_top_22_22_3 = builder.trunc(Operand(*ir_idx_write_gpr_b_top_22__Qscope_0x33bbb30value));
    /* D s_b_write_gpr_b_top_22_22_4 = (uint64)s_b_write_gpr_b_top_22_22_3 */
    Statement& s_b_write_gpr_b_top_22_22_4 = builder.zx(Operand(s_b_write_gpr_b_top_22_22_3));
    /* D s_b_write_gpr_b_top_22_22_5: WriteRegBank 0:s_b_write_gpr_b_top_22_22_1 = s_b_write_gpr_b_top_22_22_4 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_write_gpr_b_top_22_22_4));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_22_22_4), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_22_22_6: Jump b_top_20 (const) */
    goto block_b_top_20;
  }
  block_b_top_23: 
  {
    /* F s_b_top_23_0: Free &write_gpr_b_top_28__Qscope_0x33bbb30value (8) */
    /* F s_b_top_23_1: Jump b_top_18 (const) */
    goto block_b_top_18;
  }
  block_b_write_gpr_b_top_28_24: 
  {
    /* F s_b_write_gpr_b_top_28_24_0: Jump b_top_23 (const) */
    goto block_b_top_23;
  }
  block_b_write_gpr_b_top_28_25: 
  {
    /* F s_b_write_gpr_b_top_28_25_0 = (const uint8) 1 (const) */
    /* F s_b_write_gpr_b_top_28_25_1=top__Qscope_0x31f3850inst->rd(const) */
    /* D s_b_write_gpr_b_top_28_25_2 = write_gpr_b_top_28__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_28_25_3: WriteRegBank 0:s_b_write_gpr_b_top_28_25_1 = s_b_write_gpr_b_top_28_25_2 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_write_gpr_b_top_28__Qscope_0x33bbb30value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_b_top_28__Qscope_0x33bbb30value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_28_25_4: Jump b_top_23 (const) */
    goto block_b_top_23;
  }
  block_b_write_gpr_sp_b_top_34_26: 
  {
    /* D s_b_write_gpr_sp_b_top_34_26_0 = write_gpr_sp_b_top_34__Qscope_0x33c0ff0value */
    /* F s_b_write_gpr_sp_b_top_34_26_1 = (const uint32) ffffffff (const) */
    /* F s_b_write_gpr_sp_b_top_34_26_2 = (uint64) ffffffff (const) */
    /* D s_b_write_gpr_sp_b_top_34_26_3 = s_b_write_gpr_sp_b_top_34_26_0&s_b_write_gpr_sp_b_top_34_26_2 */
    Statement& s_b_write_gpr_sp_b_top_34_26_3 = builder.band(Operand(*ir_idx_write_gpr_sp_b_top_34__Qscope_0x33c0ff0value), Operand(PrimitiveTypes.u64, (uint64)4294967295ULL));
    /* D s_b_write_gpr_sp_b_top_34_26_4: write_gpr_sp_b_top_34__Qscope_0x33c0ff0value = s_b_write_gpr_sp_b_top_34_26_3, dominates: s_b_write_gpr_sp_b_top_34_28_0 s_b_write_gpr_sp_b_top_34_30_1  */
    builder.store(Operand(*ir_idx_write_gpr_sp_b_top_34__Qscope_0x33c0ff0value), Operand(s_b_write_gpr_sp_b_top_34_26_3));
    /* F s_b_write_gpr_sp_b_top_34_26_5: Jump b_write_gpr_sp_b_top_34_27 (const) */
    goto block_b_write_gpr_sp_b_top_34_27;
  }
  block_b_write_gpr_sp_b_top_34_27: 
  {
    /* F s_b_write_gpr_sp_b_top_34_27_0=top__Qscope_0x31f3850inst->rd(const) */
    /* F s_b_write_gpr_sp_b_top_34_27_1 = (const uint8) 1f (const) */
    /* F s_b_write_gpr_sp_b_top_34_27_2 = s_b_write_gpr_sp_b_top_34_27_0==s_b_write_gpr_sp_b_top_34_27_1 (const) */
    uint8 s_b_write_gpr_sp_b_top_34_27_2 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_write_gpr_sp_b_top_34_27_3: If s_b_write_gpr_sp_b_top_34_27_2: Jump b_write_gpr_sp_b_top_34_28 else b_write_gpr_sp_b_top_34_30 (const) */
    if (s_b_write_gpr_sp_b_top_34_27_2) 
    {
      goto block_b_write_gpr_sp_b_top_34_28;
    }
    else 
    {
      goto block_b_write_gpr_sp_b_top_34_30;
    }
  }
  block_b_write_gpr_sp_b_top_34_28: 
  {
    /* D s_b_write_gpr_sp_b_top_34_28_0 = write_gpr_sp_b_top_34__Qscope_0x33c0ff0value */
    /* D s_b_write_gpr_sp_b_top_34_28_1: WriteReg 0 = s_b_write_gpr_sp_b_top_34_28_0 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 248), Operand(*ir_idx_write_gpr_sp_b_top_34__Qscope_0x33c0ff0value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_sp_b_top_34__Qscope_0x33c0ff0value), Operand(PrimitiveTypes.u32, 248));
    /* F s_b_write_gpr_sp_b_top_34_28_2: Jump b_write_gpr_sp_b_top_34_29 (const) */
    goto block_b_write_gpr_sp_b_top_34_29;
  }
  block_b_write_gpr_sp_b_top_34_29: 
  {
    /* F s_b_write_gpr_sp_b_top_34_29_0: Free &write_gpr_sp_b_top_34__Qscope_0x33c0ff0value (8) */
    /* F s_b_write_gpr_sp_b_top_34_29_1: Jump b_top_15 (const) */
    goto block_b_top_15;
  }
  block_b_write_gpr_sp_b_top_34_30: 
  {
    /* F s_b_write_gpr_sp_b_top_34_30_0=top__Qscope_0x31f3850inst->rd(const) */
    /* D s_b_write_gpr_sp_b_top_34_30_1 = write_gpr_sp_b_top_34__Qscope_0x33c0ff0value */
    /* D s_b_write_gpr_sp_b_top_34_30_2: WriteRegBank 0:s_b_write_gpr_sp_b_top_34_30_0 = s_b_write_gpr_sp_b_top_34_30_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_write_gpr_sp_b_top_34__Qscope_0x33c0ff0value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_sp_b_top_34__Qscope_0x33c0ff0value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_sp_b_top_34_30_3: Jump b_write_gpr_sp_b_top_34_29 (const) */
    goto block_b_write_gpr_sp_b_top_34_29;
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
