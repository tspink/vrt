#include "aarch64-jit.h"
#include <vrt/util/list.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
using namespace vrt::arch::guest::aarch64;
using namespace vrt::dbt::ir;
using namespace vrt::util;
vrt::dbt::ir::Statement& aarch64_fmt_a64_COND_B_IMM::generate_predicate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::Statement *__result = nullptr;
  vrt::dbt::ir::BasicBlock *__exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_0
  uint8 CV_top__Qscope_0x33c75b0state;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x33c75b0state = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_1
  // Block b_top_2
  // Block b_top_3
  // Block b_top_4
  // Block b_top_5
  // Block b_top_6
  // Block b_top_7
  // Block b_top_8
  // Block b_top_9
  // Block b_top_10
  // Block b_top_11
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0: &top__Qscope_0x33c75b0state = Alloc uint8 */
    /* F s_b_0_1 = (const uint8) 0 (const) */
    /* F s_b_0_2: top__Qscope_0x33c75b0state = s_b_0_1 (const), dominates: s_b_top_10_0 s_b_top_11_0  */
    CV_top__Qscope_0x33c75b0state = (uint8)0ULL;
    builder.store(Operand(*ir_idx_top__Qscope_0x33c75b0state), Operand(PrimitiveTypes.u1, CV_top__Qscope_0x33c75b0state));
    /* F s_b_0_3=top__Qscope_0x33c7400inst->cond(const) */
    /* F s_b_0_4 = (const uint8) 1 (const) */
    /* F s_b_0_5 = s_b_0_3>>s_b_0_4 (const) */
    uint8 s_b_0_5 = ((uint8)(cond >> (uint8)1ULL));
    /* F s_b_0_6 = (const uint8) 0 (const) */
    /* F s_b_0_7 = (const uint8) 1 (const) */
    /* F s_b_0_8 = (const uint8) 2 (const) */
    /* F s_b_0_9 = (const uint8) 3 (const) */
    /* F s_b_0_10 = (const uint8) 4 (const) */
    /* F s_b_0_11 = (const uint8) 5 (const) */
    /* F s_b_0_12 = (const uint8) 6 (const) */
    /* F s_b_0_13 = (const uint8) 7 (const) */
    /* F s_b_0_14: Switch s_b_0_5: [s_b_0_6: b_top_2][s_b_0_7: b_top_3][s_b_0_8: b_top_4][s_b_0_9: b_top_5][s_b_0_10: b_top_6][s_b_0_11: b_top_7][s_b_0_12: b_top_8][s_b_0_13: b_top_9] def b_top_1 (const) -> b_top_1, b_top_2, b_top_3, b_top_4, b_top_5, b_top_6, b_top_7, b_top_8, b_top_9,  */
    switch (s_b_0_5) 
    {
    case (uint8)0ULL:
      goto block_b_top_2;
      break;
    case (uint8)1ULL:
      goto block_b_top_3;
      break;
    case (uint8)2ULL:
      goto block_b_top_4;
      break;
    case (uint8)3ULL:
      goto block_b_top_5;
      break;
    case (uint8)4ULL:
      goto block_b_top_6;
      break;
    case (uint8)5ULL:
      goto block_b_top_7;
      break;
    case (uint8)6ULL:
      goto block_b_top_8;
      break;
    case (uint8)7ULL:
      goto block_b_top_9;
      break;
    default:
      goto block_b_top_1;
    }
  }
  block_b_top_1: 
  {
    /* F s_b_top_1_0=top__Qscope_0x33c7400inst->cond(const) */
    /* F s_b_top_1_1 = (const uint8) 1 (const) */
    /* F s_b_top_1_2 = s_b_top_1_0&s_b_top_1_1 (const) */
    uint8 s_b_top_1_2 = ((uint8)(cond & (uint8)1ULL));
    /* F s_b_top_1_3: If s_b_top_1_2: Jump b_top_10 else b_top_11 (const) */
    if (s_b_top_1_2) 
    {
      goto block_b_top_10;
    }
    else 
    {
      goto block_b_top_11;
    }
  }
  block_b_top_2: 
  {
    /* D s_b_top_2_0 = ReadReg 4 (uint8) */
    Statement& s_b_top_2_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 265));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 265), Operand(s_b_top_2_0));
    }
    /* D s_b_top_2_1: top__Qscope_0x33c75b0state = s_b_top_2_0, dominates: s_b_top_10_0 s_b_top_11_0  */
    builder.store(Operand(*ir_idx_top__Qscope_0x33c75b0state), Operand(s_b_top_2_0));
    /* F s_b_top_2_2: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_3: 
  {
    /* D s_b_top_3_0 = ReadReg 5 (uint8) */
    Statement& s_b_top_3_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 266));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 266), Operand(s_b_top_3_0));
    }
    /* D s_b_top_3_1: top__Qscope_0x33c75b0state = s_b_top_3_0, dominates: s_b_top_10_0 s_b_top_11_0  */
    builder.store(Operand(*ir_idx_top__Qscope_0x33c75b0state), Operand(s_b_top_3_0));
    /* F s_b_top_3_2: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_4: 
  {
    /* D s_b_top_4_0 = ReadReg 3 (uint8) */
    Statement& s_b_top_4_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 264));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 264), Operand(s_b_top_4_0));
    }
    /* D s_b_top_4_1: top__Qscope_0x33c75b0state = s_b_top_4_0, dominates: s_b_top_10_0 s_b_top_11_0  */
    builder.store(Operand(*ir_idx_top__Qscope_0x33c75b0state), Operand(s_b_top_4_0));
    /* F s_b_top_4_2: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_5: 
  {
    /* D s_b_top_5_0 = ReadReg 6 (uint8) */
    Statement& s_b_top_5_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 267));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 267), Operand(s_b_top_5_0));
    }
    /* D s_b_top_5_1: top__Qscope_0x33c75b0state = s_b_top_5_0, dominates: s_b_top_10_0 s_b_top_11_0  */
    builder.store(Operand(*ir_idx_top__Qscope_0x33c75b0state), Operand(s_b_top_5_0));
    /* F s_b_top_5_2: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_6: 
  {
    /* D s_b_top_6_0 = ReadReg 5 (uint8) */
    Statement& s_b_top_6_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 266));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 266), Operand(s_b_top_6_0));
    }
    /* D s_b_top_6_1 = ReadReg 4 (uint8) */
    Statement& s_b_top_6_1 = builder.ldreg(Operand(PrimitiveTypes.u32, 265));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 265), Operand(s_b_top_6_1));
    }
    /* F s_b_top_6_2 = (uint8) 0 (const) */
    /* D s_b_top_6_3 = s_b_top_6_2==s_b_top_6_1 */
    Statement& s_b_top_6_3 = builder.cmpeq(Operand(PrimitiveTypes.u8, (uint8)0ULL), Operand(s_b_top_6_1));
    /* D s_b_top_6_4 = s_b_top_6_0&s_b_top_6_3 */
    Statement& s_b_top_6_4 = builder.band(Operand(s_b_top_6_0), Operand(s_b_top_6_3));
    /* D s_b_top_6_5: top__Qscope_0x33c75b0state = s_b_top_6_4, dominates: s_b_top_10_0 s_b_top_11_0  */
    builder.store(Operand(*ir_idx_top__Qscope_0x33c75b0state), Operand(s_b_top_6_4));
    /* F s_b_top_6_6: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_7: 
  {
    /* D s_b_top_7_0 = ReadReg 3 (uint8) */
    Statement& s_b_top_7_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 264));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 264), Operand(s_b_top_7_0));
    }
    /* D s_b_top_7_1 = ReadReg 6 (uint8) */
    Statement& s_b_top_7_1 = builder.ldreg(Operand(PrimitiveTypes.u32, 267));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 267), Operand(s_b_top_7_1));
    }
    /* D s_b_top_7_2 = s_b_top_7_0==s_b_top_7_1 */
    Statement& s_b_top_7_2 = builder.cmpeq(Operand(s_b_top_7_0), Operand(s_b_top_7_1));
    /* D s_b_top_7_3: top__Qscope_0x33c75b0state = s_b_top_7_2, dominates: s_b_top_10_0 s_b_top_11_0  */
    builder.store(Operand(*ir_idx_top__Qscope_0x33c75b0state), Operand(s_b_top_7_2));
    /* F s_b_top_7_4: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_8: 
  {
    /* D s_b_top_8_0 = ReadReg 3 (uint8) */
    Statement& s_b_top_8_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 264));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 264), Operand(s_b_top_8_0));
    }
    /* D s_b_top_8_1 = ReadReg 6 (uint8) */
    Statement& s_b_top_8_1 = builder.ldreg(Operand(PrimitiveTypes.u32, 267));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 267), Operand(s_b_top_8_1));
    }
    /* D s_b_top_8_2 = s_b_top_8_0==s_b_top_8_1 */
    Statement& s_b_top_8_2 = builder.cmpeq(Operand(s_b_top_8_0), Operand(s_b_top_8_1));
    /* D s_b_top_8_3 = ReadReg 4 (uint8) */
    Statement& s_b_top_8_3 = builder.ldreg(Operand(PrimitiveTypes.u32, 265));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 265), Operand(s_b_top_8_3));
    }
    /* F s_b_top_8_4 = (uint8) 0 (const) */
    /* D s_b_top_8_5 = s_b_top_8_4==s_b_top_8_3 */
    Statement& s_b_top_8_5 = builder.cmpeq(Operand(PrimitiveTypes.u8, (uint8)0ULL), Operand(s_b_top_8_3));
    /* D s_b_top_8_6 = s_b_top_8_2&s_b_top_8_5 */
    Statement& s_b_top_8_6 = builder.band(Operand(s_b_top_8_2), Operand(s_b_top_8_5));
    /* D s_b_top_8_7: top__Qscope_0x33c75b0state = s_b_top_8_6, dominates: s_b_top_10_0 s_b_top_11_0  */
    builder.store(Operand(*ir_idx_top__Qscope_0x33c75b0state), Operand(s_b_top_8_6));
    /* F s_b_top_8_8: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_9: 
  {
    /* F s_b_top_9_0 = (const uint8) 1 (const) */
    /* F s_b_top_9_1: top__Qscope_0x33c75b0state = s_b_top_9_0 (const), dominates: s_b_top_10_0 s_b_top_11_0  */
    CV_top__Qscope_0x33c75b0state = (uint8)1ULL;
    builder.store(Operand(*ir_idx_top__Qscope_0x33c75b0state), Operand(PrimitiveTypes.u1, CV_top__Qscope_0x33c75b0state));
    /* F s_b_top_9_2: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_10: 
  {
    /* D s_b_top_10_0 = top__Qscope_0x33c75b0state */
    /* F s_b_top_10_1 = (uint8) 0 (const) */
    /* D s_b_top_10_2 = s_b_top_10_1==s_b_top_10_0 */
    Statement& s_b_top_10_2 = builder.cmpeq(Operand(PrimitiveTypes.u8, (uint8)0ULL), Operand(*ir_idx_top__Qscope_0x33c75b0state));
    /* F s_b_top_10_3: Return s_b_top_10_2 */
    __result = &s_b_top_10_2;
    goto fixed_done;
  }
  block_b_top_11: 
  {
    /* D s_b_top_11_0 = top__Qscope_0x33c75b0state */
    /* F s_b_top_11_1: Return s_b_top_11_0 */
    __result = &*ir_idx_top__Qscope_0x33c75b0state;
    goto fixed_done;
  }
  fixed_done:
  builder.jump(Operand(*__exit_block));
  builder.set_block(*__exit_block);
  return *__result;
}
