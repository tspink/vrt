#include "aarch64-jit.h"
#include <vrt/util/list.h>
#include <vrt/util/set.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
using namespace vrt::arch::guest::aarch64;
using namespace vrt::dbt::ir;
using namespace vrt::util;
bool aarch64_insn_addi::translate(vrt::dbt::ir::Builder& builder) const
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
    /* F s_b_0_0=top__Qscope_0x31ebd00inst->imm12(const) */
    /* F s_b_0_1 = (uint32)s_b_0_0 (const) */
    /* F s_b_0_2=top__Qscope_0x31ebd00inst->shift(const) */
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
    /* F s_b_top_1_3=top__Qscope_0x31ebd00inst->sf(const) */
    /* F s_b_top_1_4=top__Qscope_0x31ebd00inst->rn(const) */
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
    /* F s_b_top_5_2=top__Qscope_0x31ebd00inst->S(const) */
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
    /* F s_b_read_gpr_sp_b_top_6_6_0=top__Qscope_0x31ebd00inst->rn(const) */
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
    /* F s_b_read_gpr_sp_b_top_6_7_0=top__Qscope_0x31ebd00inst->rn(const) */
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
    /* F s_b_read_gpr_sp_b_top_6_9_0=top__Qscope_0x31ebd00inst->rn(const) */
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
    /* F s_b_read_gpr_sp_b_top_6_12_0=top__Qscope_0x31ebd00inst->rn(const) */
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
    /* F s_b_top_14_0=top__Qscope_0x31ebd00inst->sf(const) */
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
    /* F s_b_top_16_0=top__Qscope_0x31ebd00inst->sf(const) */
    /* F s_b_top_16_1=top__Qscope_0x31ebd00inst->rd(const) */
    /* D s_b_top_16_2 = read_gpr_sp_b_top_6_0r */
    /* F s_b_top_16_3 = decode_imm_b_top_1_0r (const) */
    /* D s_b_top_16_4 = s_b_top_16_2+s_b_top_16_3 */
    Statement& s_b_top_16_4 = builder.add(Operand(*ir_idx_read_gpr_sp_b_top_6_0r), Operand(PrimitiveTypes.u64, CV_decode_imm_b_top_1_0r));
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
    /* F s_b_top_17_1=top__Qscope_0x31ebd00inst->rd(const) */
    /* D s_b_top_17_2 = read_gpr_sp_b_top_6_0r */
    /* D s_b_top_17_3 = (uint32)s_b_top_17_2 */
    Statement& s_b_top_17_3 = builder.trunc(Operand(*ir_idx_read_gpr_sp_b_top_6_0r));
    /* F s_b_top_17_4 = decode_imm_b_top_1_0r (const) */
    /* F s_b_top_17_5 = (uint32)s_b_top_17_4 (const) */
    /* F s_b_top_17_6 = (const uint8) 0 (const) */
    /* D s_b_top_17_7 = [unknown intrinsic 34] */
    Statement& s_b_top_17_7 = builder.adc_with_flags(Operand(s_b_top_17_3), Operand(PrimitiveTypes.u32, ((uint32)CV_decode_imm_b_top_1_0r)), Operand(PrimitiveTypes.u8, (uint8)0ULL));
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
    /* F s_b_top_19_1=top__Qscope_0x31ebd00inst->rd(const) */
    /* D s_b_top_19_2 = read_gpr_sp_b_top_6_0r */
    /* F s_b_top_19_3 = decode_imm_b_top_1_0r (const) */
    /* F s_b_top_19_4 = (const uint8) 0 (const) */
    /* D s_b_top_19_5 = [unknown intrinsic 34] */
    Statement& s_b_top_19_5 = builder.adc_with_flags(Operand(*ir_idx_read_gpr_sp_b_top_6_0r), Operand(PrimitiveTypes.u64, CV_decode_imm_b_top_1_0r), Operand(PrimitiveTypes.u8, (uint8)0ULL));
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
    /* F s_b_write_gpr_b_top_22_22_1=top__Qscope_0x31ebd00inst->rd(const) */
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
    /* F s_b_write_gpr_b_top_28_25_1=top__Qscope_0x31ebd00inst->rd(const) */
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
    /* F s_b_write_gpr_sp_b_top_34_27_0=top__Qscope_0x31ebd00inst->rd(const) */
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
    /* F s_b_write_gpr_sp_b_top_34_30_0=top__Qscope_0x31ebd00inst->rd(const) */
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
bool aarch64_insn_bfm::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_0
  uint64 CV_top__Qscope_0x3212200bits;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x3212200bits = &builder.alloc(PrimitiveTypes.u64);
  // Reg s_b_0_1
  uint8 CV_top__Qscope_0x3212200len;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x3212200len = &builder.alloc(PrimitiveTypes.u8);
  // Reg s_b_0_2
  uint8 CV_top__Qscope_0x3212200pos;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x3212200pos = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_1
  // Reg s_b_top_1_2
  uint64 CV_read_gpr_b_top_4_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_4_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_2
  // Reg s_b_top_2_2
  uint64 CV_read_gpr_b_top_26_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_26_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_3
  // Reg s_b_top_3_2
  uint64 CV_read_gpr_b_top_15_0r;
  vrt::dbt::ir::Statement *ir_idx_read_gpr_b_top_15_0r = &builder.alloc(PrimitiveTypes.u64);
  // Block b_top_4
  // Block b_read_gpr_b_top_4_5
  // Reg s_b_read_gpr_b_top_4_5_3
  uint64 CV_temp_8;
  vrt::dbt::ir::Statement *ir_idx_temp_8 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_4_6
  // Reg s_b_read_gpr_b_top_4_6_3
  uint64 CV_temp_9;
  vrt::dbt::ir::Statement *ir_idx_temp_9 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_4_7
  // Block b_read_gpr_b_top_4_8
  // Block b_read_gpr_b_top_4_9
  // Block b_read_gpr_b_top_4_10
  // Block b_read_gpr_b_top_4_11
  // Block b_read_gpr_b_top_4_12
  // Block b_top_13
  // Block b_read_gpr_b_top_15_14
  // Reg s_b_read_gpr_b_top_15_14_3
  uint64 CV_temp_17;
  vrt::dbt::ir::Statement *ir_idx_temp_17 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_15_15
  // Reg s_b_read_gpr_b_top_15_15_3
  uint64 CV_temp_18;
  vrt::dbt::ir::Statement *ir_idx_temp_18 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_15_16
  // Block b_read_gpr_b_top_15_17
  // Block b_read_gpr_b_top_15_18
  // Block b_read_gpr_b_top_15_19
  // Block b_read_gpr_b_top_15_20
  // Block b_read_gpr_b_top_15_21
  // Block b_top_22
  // Reg s_b_top_22_23
  uint64 CV_write_gpr_b_top_37__Qscope_0x33bbb30value;
  vrt::dbt::ir::Statement *ir_idx_write_gpr_b_top_37__Qscope_0x33bbb30value = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_26_23
  // Reg s_b_read_gpr_b_top_26_23_3
  uint64 CV_temp_26;
  vrt::dbt::ir::Statement *ir_idx_temp_26 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_26_24
  // Reg s_b_read_gpr_b_top_26_24_3
  uint64 CV_temp_27;
  vrt::dbt::ir::Statement *ir_idx_temp_27 = &builder.alloc(PrimitiveTypes.u64);
  // Block b_read_gpr_b_top_26_25
  // Block b_read_gpr_b_top_26_26
  // Block b_read_gpr_b_top_26_27
  // Block b_read_gpr_b_top_26_28
  // Block b_read_gpr_b_top_26_29
  // Block b_read_gpr_b_top_26_30
  // Block b_top_31
  // Block b_write_gpr_b_top_37_32
  // Block b_write_gpr_b_top_37_33
  // Block b_write_gpr_b_top_37_34
  // Block b_write_gpr_b_top_37_35
  // Block b_write_gpr_b_top_37_36
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0: &top__Qscope_0x3212200bits = Alloc uint64 */
    /* F s_b_0_1: &top__Qscope_0x3212200len = Alloc uint8 */
    /* F s_b_0_2: &top__Qscope_0x3212200pos = Alloc uint8 */
    /* F s_b_0_3=top__Qscope_0x3211ff0inst->imms(const) */
    /* F s_b_0_4=top__Qscope_0x3211ff0inst->immr(const) */
    /* F s_b_0_5 = s_b_0_3>=s_b_0_4 (const) */
    uint8 s_b_0_5 = ((uint8)(imms >= immr));
    /* F s_b_0_6: If s_b_0_5: Jump b_top_1 else b_top_3 (const) */
    if (s_b_0_5) 
    {
      goto block_b_top_1;
    }
    else 
    {
      goto block_b_top_3;
    }
  }
  block_b_top_1: 
  {
    /* F s_b_top_1_0=top__Qscope_0x3211ff0inst->sf(const) */
    /* F s_b_top_1_1=top__Qscope_0x3211ff0inst->rn(const) */
    /* F s_b_top_1_2: &read_gpr_b_top_4_0r = Alloc uint64 */
    /* F s_b_top_1_3: If s_b_top_1_0: Jump b_read_gpr_b_top_4_5 else b_read_gpr_b_top_4_6 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_4_5;
    }
    else 
    {
      goto block_b_read_gpr_b_top_4_6;
    }
  }
  block_b_top_2: 
  {
    /* F s_b_top_2_0=top__Qscope_0x3211ff0inst->sf(const) */
    /* F s_b_top_2_1=top__Qscope_0x3211ff0inst->rd(const) */
    /* F s_b_top_2_2: &read_gpr_b_top_26_0r = Alloc uint64 */
    /* F s_b_top_2_3: If s_b_top_2_0: Jump b_read_gpr_b_top_26_23 else b_read_gpr_b_top_26_24 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_26_23;
    }
    else 
    {
      goto block_b_read_gpr_b_top_26_24;
    }
  }
  block_b_top_3: 
  {
    /* F s_b_top_3_0=top__Qscope_0x3211ff0inst->sf(const) */
    /* F s_b_top_3_1=top__Qscope_0x3211ff0inst->rn(const) */
    /* F s_b_top_3_2: &read_gpr_b_top_15_0r = Alloc uint64 */
    /* F s_b_top_3_3: If s_b_top_3_0: Jump b_read_gpr_b_top_15_14 else b_read_gpr_b_top_15_15 (const) */
    if (sf) 
    {
      goto block_b_read_gpr_b_top_15_14;
    }
    else 
    {
      goto block_b_read_gpr_b_top_15_15;
    }
  }
  block_b_top_4: 
  {
    /* D s_b_top_4_0 = read_gpr_b_top_4_0r */
    /* F s_b_top_4_1: Free &read_gpr_b_top_4_0r (8) */
    /* F s_b_top_4_2=top__Qscope_0x3211ff0inst->immr(const) */
    /* F s_b_top_4_3=top__Qscope_0x3211ff0inst->imms(const) */
    /* F s_b_top_4_4 = (uint8)s_b_top_4_3 (const) */
    /* F s_b_top_4_5=top__Qscope_0x3211ff0inst->immr(const) */
    /* F s_b_top_4_6 = (uint8)s_b_top_4_5 (const) */
    /* F s_b_top_4_7 = s_b_top_4_4-s_b_top_4_6 (const) */
    uint8 s_b_top_4_7 = ((uint8)(((uint8)imms) - ((uint8)immr)));
    /* F s_b_top_4_8 = (const uint8) 1 (const) */
    /* F s_b_top_4_9 = s_b_top_4_7+s_b_top_4_8 (const) */
    uint8 s_b_top_4_9 = ((uint8)(s_b_top_4_7 + (uint8)1ULL));
    /* F s_b_top_4_10 = (uint64)s_b_top_4_2 (const) */
    /* D s_b_top_4_11 = s_b_top_4_0>>s_b_top_4_10 */
    Statement& s_b_top_4_11 = builder.shr(Operand(*ir_idx_read_gpr_b_top_4_0r), Operand(PrimitiveTypes.u64, ((uint64)immr)));
    /* F s_b_top_4_12 = (const uint8) 1 (const) */
    /* F s_b_top_4_13 = (uint64) 1 (const) */
    /* F s_b_top_4_14 = (uint64)s_b_top_4_9 (const) */
    /* F s_b_top_4_15 = s_b_top_4_13<<s_b_top_4_14 (const) */
    uint64 s_b_top_4_15 = ((uint64)((uint64)1ULL << ((uint64)s_b_top_4_9)));
    /* F s_b_top_4_16 = (const uint8) 1 (const) */
    /* F s_b_top_4_17 = (uint64) 1 (const) */
    /* F s_b_top_4_18 = s_b_top_4_15-s_b_top_4_17 (const) */
    uint64 s_b_top_4_18 = ((uint64)(s_b_top_4_15 - (uint64)1ULL));
    /* D s_b_top_4_19 = s_b_top_4_11&s_b_top_4_18 */
    Statement& s_b_top_4_19 = builder.band(Operand(s_b_top_4_11), Operand(PrimitiveTypes.u64, s_b_top_4_18));
    /* D s_b_top_4_20: top__Qscope_0x3212200bits = s_b_top_4_19, dominates: s_b_top_22_2  */
    builder.store(Operand(*ir_idx_top__Qscope_0x3212200bits), Operand(s_b_top_4_19));
    /* F s_b_top_4_21 = (const uint8) 0 (const) */
    /* F s_b_top_4_22: top__Qscope_0x3212200pos = s_b_top_4_21 (const), dominates: s_b_top_22_3  */
    CV_top__Qscope_0x3212200pos = (uint8)0ULL;
    /* F s_b_top_4_23=top__Qscope_0x3211ff0inst->imms(const) */
    /* F s_b_top_4_24 = (uint8)s_b_top_4_23 (const) */
    /* F s_b_top_4_25=top__Qscope_0x3211ff0inst->immr(const) */
    /* F s_b_top_4_26 = (uint8)s_b_top_4_25 (const) */
    /* F s_b_top_4_27 = s_b_top_4_24-s_b_top_4_26 (const) */
    uint8 s_b_top_4_27 = ((uint8)(((uint8)imms) - ((uint8)immr)));
    /* F s_b_top_4_28 = (const uint8) 1 (const) */
    /* F s_b_top_4_29 = s_b_top_4_27+s_b_top_4_28 (const) */
    uint8 s_b_top_4_29 = ((uint8)(s_b_top_4_27 + (uint8)1ULL));
    /* F s_b_top_4_30: top__Qscope_0x3212200len = s_b_top_4_29 (const), dominates: s_b_top_22_4  */
    CV_top__Qscope_0x3212200len = s_b_top_4_29;
    /* F s_b_top_4_31: Jump b_top_2 (const) */
    goto block_b_top_2;
  }
  block_b_read_gpr_b_top_4_5: 
  {
    /* F s_b_read_gpr_b_top_4_5_0=top__Qscope_0x3211ff0inst->rn(const) */
    /* F s_b_read_gpr_b_top_4_5_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_4_5_2 = s_b_read_gpr_b_top_4_5_0==s_b_read_gpr_b_top_4_5_1 (const) */
    uint8 s_b_read_gpr_b_top_4_5_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_4_5_3: &temp_8 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_4_5_4: If s_b_read_gpr_b_top_4_5_2: Jump b_read_gpr_b_top_4_7 else b_read_gpr_b_top_4_8 (const) */
    if (s_b_read_gpr_b_top_4_5_2) 
    {
      goto block_b_read_gpr_b_top_4_7;
    }
    else 
    {
      goto block_b_read_gpr_b_top_4_8;
    }
  }
  block_b_read_gpr_b_top_4_6: 
  {
    /* F s_b_read_gpr_b_top_4_6_0=top__Qscope_0x3211ff0inst->rn(const) */
    /* F s_b_read_gpr_b_top_4_6_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_4_6_2 = s_b_read_gpr_b_top_4_6_0==s_b_read_gpr_b_top_4_6_1 (const) */
    uint8 s_b_read_gpr_b_top_4_6_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_4_6_3: &temp_9 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_4_6_4: If s_b_read_gpr_b_top_4_6_2: Jump b_read_gpr_b_top_4_10 else b_read_gpr_b_top_4_11 (const) */
    if (s_b_read_gpr_b_top_4_6_2) 
    {
      goto block_b_read_gpr_b_top_4_10;
    }
    else 
    {
      goto block_b_read_gpr_b_top_4_11;
    }
  }
  block_b_read_gpr_b_top_4_7: 
  {
    /* F s_b_read_gpr_b_top_4_7_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_4_7_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_4_7_2: temp_8 = s_b_read_gpr_b_top_4_7_1 (const), dominates: s_b_read_gpr_b_top_4_9_0  */
    CV_temp_8 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_8), Operand(PrimitiveTypes.u8, CV_temp_8));
    /* F s_b_read_gpr_b_top_4_7_3: Jump b_read_gpr_b_top_4_9 (const) */
    goto block_b_read_gpr_b_top_4_9;
  }
  block_b_read_gpr_b_top_4_8: 
  {
    /* F s_b_read_gpr_b_top_4_8_0=top__Qscope_0x3211ff0inst->rn(const) */
    /* D s_b_read_gpr_b_top_4_8_1 = ReadRegBank 0:s_b_read_gpr_b_top_4_8_0 (uint64) */
    Statement& s_b_read_gpr_b_top_4_8_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_4_8_1));
    }
    /* D s_b_read_gpr_b_top_4_8_2 = (uint64)s_b_read_gpr_b_top_4_8_1 */
    Statement& s_b_read_gpr_b_top_4_8_2 = s_b_read_gpr_b_top_4_8_1;
    /* D s_b_read_gpr_b_top_4_8_3: temp_8 = s_b_read_gpr_b_top_4_8_2, dominates: s_b_read_gpr_b_top_4_9_0  */
    builder.store(Operand(*ir_idx_temp_8), Operand(s_b_read_gpr_b_top_4_8_2));
    /* F s_b_read_gpr_b_top_4_8_4: Jump b_read_gpr_b_top_4_9 (const) */
    goto block_b_read_gpr_b_top_4_9;
  }
  block_b_read_gpr_b_top_4_9: 
  {
    /* D s_b_read_gpr_b_top_4_9_0 = temp_8 */
    /* F s_b_read_gpr_b_top_4_9_1: Free &temp_8 (8) */
    /* D s_b_read_gpr_b_top_4_9_2: read_gpr_b_top_4_0r = s_b_read_gpr_b_top_4_9_0, dominates: s_b_top_4_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_4_0r), Operand(*ir_idx_temp_8));
    /* F s_b_read_gpr_b_top_4_9_3: Jump b_top_4 (const) */
    goto block_b_top_4;
  }
  block_b_read_gpr_b_top_4_10: 
  {
    /* F s_b_read_gpr_b_top_4_10_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_4_10_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_4_10_2: temp_9 = s_b_read_gpr_b_top_4_10_1 (const), dominates: s_b_read_gpr_b_top_4_12_0  */
    CV_temp_9 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_9), Operand(PrimitiveTypes.u8, CV_temp_9));
    /* F s_b_read_gpr_b_top_4_10_3: Jump b_read_gpr_b_top_4_12 (const) */
    goto block_b_read_gpr_b_top_4_12;
  }
  block_b_read_gpr_b_top_4_11: 
  {
    /* F s_b_read_gpr_b_top_4_11_0=top__Qscope_0x3211ff0inst->rn(const) */
    /* D s_b_read_gpr_b_top_4_11_1 = ReadRegBank 1:s_b_read_gpr_b_top_4_11_0 (uint32) */
    Statement& s_b_read_gpr_b_top_4_11_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_4_11_1));
    }
    /* D s_b_read_gpr_b_top_4_11_2 = (uint64)s_b_read_gpr_b_top_4_11_1 */
    Statement& s_b_read_gpr_b_top_4_11_2 = builder.zx(Operand(s_b_read_gpr_b_top_4_11_1));
    /* D s_b_read_gpr_b_top_4_11_3: temp_9 = s_b_read_gpr_b_top_4_11_2, dominates: s_b_read_gpr_b_top_4_12_0  */
    builder.store(Operand(*ir_idx_temp_9), Operand(s_b_read_gpr_b_top_4_11_2));
    /* F s_b_read_gpr_b_top_4_11_4: Jump b_read_gpr_b_top_4_12 (const) */
    goto block_b_read_gpr_b_top_4_12;
  }
  block_b_read_gpr_b_top_4_12: 
  {
    /* D s_b_read_gpr_b_top_4_12_0 = temp_9 */
    /* F s_b_read_gpr_b_top_4_12_1: Free &temp_9 (8) */
    /* D s_b_read_gpr_b_top_4_12_2: read_gpr_b_top_4_0r = s_b_read_gpr_b_top_4_12_0, dominates: s_b_top_4_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_4_0r), Operand(*ir_idx_temp_9));
    /* F s_b_read_gpr_b_top_4_12_3: Jump b_top_4 (const) */
    goto block_b_top_4;
  }
  block_b_top_13: 
  {
    /* D s_b_top_13_0 = read_gpr_b_top_15_0r */
    /* F s_b_top_13_1: Free &read_gpr_b_top_15_0r (8) */
    /* F s_b_top_13_2 = (const uint8) 0 (const) */
    /* F s_b_top_13_3=top__Qscope_0x3211ff0inst->imms(const) */
    /* F s_b_top_13_4 = (uint8)s_b_top_13_3 (const) */
    /* F s_b_top_13_5 = (const uint8) 1 (const) */
    /* F s_b_top_13_6 = (uint8) 1 (const) */
    /* F s_b_top_13_7 = s_b_top_13_4+s_b_top_13_6 (const) */
    uint8 s_b_top_13_7 = ((uint8)(((uint8)imms) + (uint8)1ULL));
    /* F s_b_top_13_8 = (uint64) 0 (const) */
    /* D s_b_top_13_9 = s_b_top_13_0>>s_b_top_13_8 */
    Statement& s_b_top_13_9 = builder.shr(Operand(*ir_idx_read_gpr_b_top_15_0r), Operand(PrimitiveTypes.u64, (uint64)0ULL));
    /* F s_b_top_13_10 = (const uint8) 1 (const) */
    /* F s_b_top_13_11 = (uint64) 1 (const) */
    /* F s_b_top_13_12 = (uint64)s_b_top_13_7 (const) */
    /* F s_b_top_13_13 = s_b_top_13_11<<s_b_top_13_12 (const) */
    uint64 s_b_top_13_13 = ((uint64)((uint64)1ULL << ((uint64)s_b_top_13_7)));
    /* F s_b_top_13_14 = (const uint8) 1 (const) */
    /* F s_b_top_13_15 = (uint64) 1 (const) */
    /* F s_b_top_13_16 = s_b_top_13_13-s_b_top_13_15 (const) */
    uint64 s_b_top_13_16 = ((uint64)(s_b_top_13_13 - (uint64)1ULL));
    /* D s_b_top_13_17 = s_b_top_13_9&s_b_top_13_16 */
    Statement& s_b_top_13_17 = builder.band(Operand(s_b_top_13_9), Operand(PrimitiveTypes.u64, s_b_top_13_16));
    /* D s_b_top_13_18: top__Qscope_0x3212200bits = s_b_top_13_17, dominates: s_b_top_22_2  */
    builder.store(Operand(*ir_idx_top__Qscope_0x3212200bits), Operand(s_b_top_13_17));
    /* F s_b_top_13_19=top__Qscope_0x3211ff0inst->sf(const) */
    /* F s_b_top_13_20 = (const uint8) 1 (const) */
    /* F s_b_top_13_21 = s_b_top_13_19==s_b_top_13_20 (const) */
    uint8 s_b_top_13_21 = ((uint8)(sf == (uint8)1ULL));
    /* F s_b_top_13_22 = (const uint8) 40 (const) */
    /* F s_b_top_13_23 = (uint8) 40 (const) */
    /* F s_b_top_13_24 = (const uint8) 20 (const) */
    /* F s_b_top_13_25 = (uint8) 20 (const) */
    /* F s_b_top_13_26: Select s_b_top_13_21 ? s_b_top_13_23 : s_b_top_13_25 (const) */
    uint8 s_b_top_13_26 = ((uint8)(s_b_top_13_21 ? ((uint8)64ULL) : ((uint8)32ULL)));
    /* F s_b_top_13_27=top__Qscope_0x3211ff0inst->immr(const) */
    /* F s_b_top_13_28 = (uint8)s_b_top_13_27 (const) */
    /* F s_b_top_13_29 = s_b_top_13_26-s_b_top_13_28 (const) */
    uint8 s_b_top_13_29 = ((uint8)(s_b_top_13_26 - ((uint8)immr)));
    /* F s_b_top_13_30: top__Qscope_0x3212200pos = s_b_top_13_29 (const), dominates: s_b_top_22_3  */
    CV_top__Qscope_0x3212200pos = s_b_top_13_29;
    /* F s_b_top_13_31=top__Qscope_0x3211ff0inst->imms(const) */
    /* F s_b_top_13_32 = (uint8)s_b_top_13_31 (const) */
    /* F s_b_top_13_33 = (const uint8) 1 (const) */
    /* F s_b_top_13_34 = s_b_top_13_32+s_b_top_13_33 (const) */
    uint8 s_b_top_13_34 = ((uint8)(((uint8)imms) + (uint8)1ULL));
    /* F s_b_top_13_35: top__Qscope_0x3212200len = s_b_top_13_34 (const), dominates: s_b_top_22_4  */
    CV_top__Qscope_0x3212200len = s_b_top_13_34;
    /* F s_b_top_13_36: Jump b_top_2 (const) */
    goto block_b_top_2;
  }
  block_b_read_gpr_b_top_15_14: 
  {
    /* F s_b_read_gpr_b_top_15_14_0=top__Qscope_0x3211ff0inst->rn(const) */
    /* F s_b_read_gpr_b_top_15_14_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_15_14_2 = s_b_read_gpr_b_top_15_14_0==s_b_read_gpr_b_top_15_14_1 (const) */
    uint8 s_b_read_gpr_b_top_15_14_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_15_14_3: &temp_17 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_15_14_4: If s_b_read_gpr_b_top_15_14_2: Jump b_read_gpr_b_top_15_16 else b_read_gpr_b_top_15_17 (const) */
    if (s_b_read_gpr_b_top_15_14_2) 
    {
      goto block_b_read_gpr_b_top_15_16;
    }
    else 
    {
      goto block_b_read_gpr_b_top_15_17;
    }
  }
  block_b_read_gpr_b_top_15_15: 
  {
    /* F s_b_read_gpr_b_top_15_15_0=top__Qscope_0x3211ff0inst->rn(const) */
    /* F s_b_read_gpr_b_top_15_15_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_15_15_2 = s_b_read_gpr_b_top_15_15_0==s_b_read_gpr_b_top_15_15_1 (const) */
    uint8 s_b_read_gpr_b_top_15_15_2 = ((uint8)(rn == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_15_15_3: &temp_18 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_15_15_4: If s_b_read_gpr_b_top_15_15_2: Jump b_read_gpr_b_top_15_19 else b_read_gpr_b_top_15_20 (const) */
    if (s_b_read_gpr_b_top_15_15_2) 
    {
      goto block_b_read_gpr_b_top_15_19;
    }
    else 
    {
      goto block_b_read_gpr_b_top_15_20;
    }
  }
  block_b_read_gpr_b_top_15_16: 
  {
    /* F s_b_read_gpr_b_top_15_16_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_15_16_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_15_16_2: temp_17 = s_b_read_gpr_b_top_15_16_1 (const), dominates: s_b_read_gpr_b_top_15_18_0  */
    CV_temp_17 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_17), Operand(PrimitiveTypes.u8, CV_temp_17));
    /* F s_b_read_gpr_b_top_15_16_3: Jump b_read_gpr_b_top_15_18 (const) */
    goto block_b_read_gpr_b_top_15_18;
  }
  block_b_read_gpr_b_top_15_17: 
  {
    /* F s_b_read_gpr_b_top_15_17_0=top__Qscope_0x3211ff0inst->rn(const) */
    /* D s_b_read_gpr_b_top_15_17_1 = ReadRegBank 0:s_b_read_gpr_b_top_15_17_0 (uint64) */
    Statement& s_b_read_gpr_b_top_15_17_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_15_17_1));
    }
    /* D s_b_read_gpr_b_top_15_17_2 = (uint64)s_b_read_gpr_b_top_15_17_1 */
    Statement& s_b_read_gpr_b_top_15_17_2 = s_b_read_gpr_b_top_15_17_1;
    /* D s_b_read_gpr_b_top_15_17_3: temp_17 = s_b_read_gpr_b_top_15_17_2, dominates: s_b_read_gpr_b_top_15_18_0  */
    builder.store(Operand(*ir_idx_temp_17), Operand(s_b_read_gpr_b_top_15_17_2));
    /* F s_b_read_gpr_b_top_15_17_4: Jump b_read_gpr_b_top_15_18 (const) */
    goto block_b_read_gpr_b_top_15_18;
  }
  block_b_read_gpr_b_top_15_18: 
  {
    /* D s_b_read_gpr_b_top_15_18_0 = temp_17 */
    /* F s_b_read_gpr_b_top_15_18_1: Free &temp_17 (8) */
    /* D s_b_read_gpr_b_top_15_18_2: read_gpr_b_top_15_0r = s_b_read_gpr_b_top_15_18_0, dominates: s_b_top_13_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_15_0r), Operand(*ir_idx_temp_17));
    /* F s_b_read_gpr_b_top_15_18_3: Jump b_top_13 (const) */
    goto block_b_top_13;
  }
  block_b_read_gpr_b_top_15_19: 
  {
    /* F s_b_read_gpr_b_top_15_19_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_15_19_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_15_19_2: temp_18 = s_b_read_gpr_b_top_15_19_1 (const), dominates: s_b_read_gpr_b_top_15_21_0  */
    CV_temp_18 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_18), Operand(PrimitiveTypes.u8, CV_temp_18));
    /* F s_b_read_gpr_b_top_15_19_3: Jump b_read_gpr_b_top_15_21 (const) */
    goto block_b_read_gpr_b_top_15_21;
  }
  block_b_read_gpr_b_top_15_20: 
  {
    /* F s_b_read_gpr_b_top_15_20_0=top__Qscope_0x3211ff0inst->rn(const) */
    /* D s_b_read_gpr_b_top_15_20_1 = ReadRegBank 1:s_b_read_gpr_b_top_15_20_0 (uint32) */
    Statement& s_b_read_gpr_b_top_15_20_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_15_20_1));
    }
    /* D s_b_read_gpr_b_top_15_20_2 = (uint64)s_b_read_gpr_b_top_15_20_1 */
    Statement& s_b_read_gpr_b_top_15_20_2 = builder.zx(Operand(s_b_read_gpr_b_top_15_20_1));
    /* D s_b_read_gpr_b_top_15_20_3: temp_18 = s_b_read_gpr_b_top_15_20_2, dominates: s_b_read_gpr_b_top_15_21_0  */
    builder.store(Operand(*ir_idx_temp_18), Operand(s_b_read_gpr_b_top_15_20_2));
    /* F s_b_read_gpr_b_top_15_20_4: Jump b_read_gpr_b_top_15_21 (const) */
    goto block_b_read_gpr_b_top_15_21;
  }
  block_b_read_gpr_b_top_15_21: 
  {
    /* D s_b_read_gpr_b_top_15_21_0 = temp_18 */
    /* F s_b_read_gpr_b_top_15_21_1: Free &temp_18 (8) */
    /* D s_b_read_gpr_b_top_15_21_2: read_gpr_b_top_15_0r = s_b_read_gpr_b_top_15_21_0, dominates: s_b_top_13_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_15_0r), Operand(*ir_idx_temp_18));
    /* F s_b_read_gpr_b_top_15_21_3: Jump b_top_13 (const) */
    goto block_b_top_13;
  }
  block_b_top_22: 
  {
    /* D s_b_top_22_0 = read_gpr_b_top_26_0r */
    /* F s_b_top_22_1: Free &read_gpr_b_top_26_0r (8) */
    /* D s_b_top_22_2 = top__Qscope_0x3212200bits */
    /* F s_b_top_22_3 = top__Qscope_0x3212200pos (const) */
    /* F s_b_top_22_4 = top__Qscope_0x3212200len (const) */
    /* F s_b_top_22_5 = (const uint8) 1 (const) */
    /* F s_b_top_22_6 = (uint64) 1 (const) */
    /* F s_b_top_22_7 = (uint64)s_b_top_22_4 (const) */
    /* F s_b_top_22_8 = s_b_top_22_6<<s_b_top_22_7 (const) */
    uint64 s_b_top_22_8 = ((uint64)((uint64)1ULL << ((uint64)CV_top__Qscope_0x3212200len)));
    /* F s_b_top_22_9 = (const uint8) 1 (const) */
    /* F s_b_top_22_10 = (uint64) 1 (const) */
    /* F s_b_top_22_11 = s_b_top_22_8-s_b_top_22_10 (const) */
    uint64 s_b_top_22_11 = ((uint64)(s_b_top_22_8 - (uint64)1ULL));
    /* F s_b_top_22_12 = (uint64)s_b_top_22_3 (const) */
    /* F s_b_top_22_13 = s_b_top_22_11<<s_b_top_22_12 (const) */
    uint64 s_b_top_22_13 = ((uint64)(s_b_top_22_11 << ((uint64)CV_top__Qscope_0x3212200pos)));
    /* D s_b_top_22_14 = (uint64)s_b_top_22_0 */
    Statement& s_b_top_22_14 = *ir_idx_read_gpr_b_top_26_0r;
    /* F s_b_top_22_15 = ?s_b_top_22_13 (const) */
    uint64 s_b_top_22_15 = ~s_b_top_22_13;
    /* D s_b_top_22_16 = s_b_top_22_14&s_b_top_22_15 */
    Statement& s_b_top_22_16 = builder.band(Operand(s_b_top_22_14), Operand(PrimitiveTypes.u64, s_b_top_22_15));
    /* D s_b_top_22_17 = (uint64)s_b_top_22_2 */
    Statement& s_b_top_22_17 = *ir_idx_top__Qscope_0x3212200bits;
    /* F s_b_top_22_18 = (uint64)s_b_top_22_3 (const) */
    /* D s_b_top_22_19 = s_b_top_22_17<<s_b_top_22_18 */
    Statement& s_b_top_22_19 = builder.shl(Operand(s_b_top_22_17), Operand(PrimitiveTypes.u64, ((uint64)CV_top__Qscope_0x3212200pos)));
    /* D s_b_top_22_20 = s_b_top_22_16|s_b_top_22_19 */
    Statement& s_b_top_22_20 = builder.bor(Operand(s_b_top_22_16), Operand(s_b_top_22_19));
    /* F s_b_top_22_21=top__Qscope_0x3211ff0inst->sf(const) */
    /* F s_b_top_22_22=top__Qscope_0x3211ff0inst->rd(const) */
    /* F s_b_top_22_23: &write_gpr_b_top_37__Qscope_0x33bbb30value = Alloc uint64 */
    /* D s_b_top_22_24: write_gpr_b_top_37__Qscope_0x33bbb30value = s_b_top_22_20, dominates: s_b_write_gpr_b_top_37_34_1 s_b_write_gpr_b_top_37_36_1  */
    builder.store(Operand(*ir_idx_write_gpr_b_top_37__Qscope_0x33bbb30value), Operand(s_b_top_22_20));
    /* F s_b_top_22_25 = (const uint8) 1f (const) */
    /* F s_b_top_22_26 = s_b_top_22_22==s_b_top_22_25 (const) */
    uint8 s_b_top_22_26 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_top_22_27: If s_b_top_22_26: Jump b_write_gpr_b_top_37_32 else b_write_gpr_b_top_37_33 (const) */
    if (s_b_top_22_26) 
    {
      goto block_b_write_gpr_b_top_37_32;
    }
    else 
    {
      goto block_b_write_gpr_b_top_37_33;
    }
  }
  block_b_read_gpr_b_top_26_23: 
  {
    /* F s_b_read_gpr_b_top_26_23_0=top__Qscope_0x3211ff0inst->rd(const) */
    /* F s_b_read_gpr_b_top_26_23_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_26_23_2 = s_b_read_gpr_b_top_26_23_0==s_b_read_gpr_b_top_26_23_1 (const) */
    uint8 s_b_read_gpr_b_top_26_23_2 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_26_23_3: &temp_26 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_26_23_4: If s_b_read_gpr_b_top_26_23_2: Jump b_read_gpr_b_top_26_25 else b_read_gpr_b_top_26_26 (const) */
    if (s_b_read_gpr_b_top_26_23_2) 
    {
      goto block_b_read_gpr_b_top_26_25;
    }
    else 
    {
      goto block_b_read_gpr_b_top_26_26;
    }
  }
  block_b_read_gpr_b_top_26_24: 
  {
    /* F s_b_read_gpr_b_top_26_24_0=top__Qscope_0x3211ff0inst->rd(const) */
    /* F s_b_read_gpr_b_top_26_24_1 = (const uint8) 1f (const) */
    /* F s_b_read_gpr_b_top_26_24_2 = s_b_read_gpr_b_top_26_24_0==s_b_read_gpr_b_top_26_24_1 (const) */
    uint8 s_b_read_gpr_b_top_26_24_2 = ((uint8)(rd == (uint8)31ULL));
    /* F s_b_read_gpr_b_top_26_24_3: &temp_27 = Alloc uint64 */
    /* F s_b_read_gpr_b_top_26_24_4: If s_b_read_gpr_b_top_26_24_2: Jump b_read_gpr_b_top_26_28 else b_read_gpr_b_top_26_29 (const) */
    if (s_b_read_gpr_b_top_26_24_2) 
    {
      goto block_b_read_gpr_b_top_26_28;
    }
    else 
    {
      goto block_b_read_gpr_b_top_26_29;
    }
  }
  block_b_read_gpr_b_top_26_25: 
  {
    /* F s_b_read_gpr_b_top_26_25_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_26_25_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_26_25_2: temp_26 = s_b_read_gpr_b_top_26_25_1 (const), dominates: s_b_read_gpr_b_top_26_27_0  */
    CV_temp_26 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_26), Operand(PrimitiveTypes.u8, CV_temp_26));
    /* F s_b_read_gpr_b_top_26_25_3: Jump b_read_gpr_b_top_26_27 (const) */
    goto block_b_read_gpr_b_top_26_27;
  }
  block_b_read_gpr_b_top_26_26: 
  {
    /* F s_b_read_gpr_b_top_26_26_0=top__Qscope_0x3211ff0inst->rd(const) */
    /* D s_b_read_gpr_b_top_26_26_1 = ReadRegBank 0:s_b_read_gpr_b_top_26_26_0 (uint64) */
    Statement& s_b_read_gpr_b_top_26_26_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_read_gpr_b_top_26_26_1));
    }
    /* D s_b_read_gpr_b_top_26_26_2 = (uint64)s_b_read_gpr_b_top_26_26_1 */
    Statement& s_b_read_gpr_b_top_26_26_2 = s_b_read_gpr_b_top_26_26_1;
    /* D s_b_read_gpr_b_top_26_26_3: temp_26 = s_b_read_gpr_b_top_26_26_2, dominates: s_b_read_gpr_b_top_26_27_0  */
    builder.store(Operand(*ir_idx_temp_26), Operand(s_b_read_gpr_b_top_26_26_2));
    /* F s_b_read_gpr_b_top_26_26_4: Jump b_read_gpr_b_top_26_27 (const) */
    goto block_b_read_gpr_b_top_26_27;
  }
  block_b_read_gpr_b_top_26_27: 
  {
    /* D s_b_read_gpr_b_top_26_27_0 = temp_26 */
    /* F s_b_read_gpr_b_top_26_27_1: Free &temp_26 (8) */
    /* D s_b_read_gpr_b_top_26_27_2: read_gpr_b_top_26_0r = s_b_read_gpr_b_top_26_27_0, dominates: s_b_top_22_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_26_0r), Operand(*ir_idx_temp_26));
    /* F s_b_read_gpr_b_top_26_27_3: Jump b_top_22 (const) */
    goto block_b_top_22;
  }
  block_b_read_gpr_b_top_26_28: 
  {
    /* F s_b_read_gpr_b_top_26_28_0 = (const uint8) 0 (const) */
    /* F s_b_read_gpr_b_top_26_28_1 = (uint64) 0 (const) */
    /* F s_b_read_gpr_b_top_26_28_2: temp_27 = s_b_read_gpr_b_top_26_28_1 (const), dominates: s_b_read_gpr_b_top_26_30_0  */
    CV_temp_27 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_27), Operand(PrimitiveTypes.u8, CV_temp_27));
    /* F s_b_read_gpr_b_top_26_28_3: Jump b_read_gpr_b_top_26_30 (const) */
    goto block_b_read_gpr_b_top_26_30;
  }
  block_b_read_gpr_b_top_26_29: 
  {
    /* F s_b_read_gpr_b_top_26_29_0=top__Qscope_0x3211ff0inst->rd(const) */
    /* D s_b_read_gpr_b_top_26_29_1 = ReadRegBank 1:s_b_read_gpr_b_top_26_29_0 (uint32) */
    Statement& s_b_read_gpr_b_top_26_29_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_read_gpr_b_top_26_29_1));
    }
    /* D s_b_read_gpr_b_top_26_29_2 = (uint64)s_b_read_gpr_b_top_26_29_1 */
    Statement& s_b_read_gpr_b_top_26_29_2 = builder.zx(Operand(s_b_read_gpr_b_top_26_29_1));
    /* D s_b_read_gpr_b_top_26_29_3: temp_27 = s_b_read_gpr_b_top_26_29_2, dominates: s_b_read_gpr_b_top_26_30_0  */
    builder.store(Operand(*ir_idx_temp_27), Operand(s_b_read_gpr_b_top_26_29_2));
    /* F s_b_read_gpr_b_top_26_29_4: Jump b_read_gpr_b_top_26_30 (const) */
    goto block_b_read_gpr_b_top_26_30;
  }
  block_b_read_gpr_b_top_26_30: 
  {
    /* D s_b_read_gpr_b_top_26_30_0 = temp_27 */
    /* F s_b_read_gpr_b_top_26_30_1: Free &temp_27 (8) */
    /* D s_b_read_gpr_b_top_26_30_2: read_gpr_b_top_26_0r = s_b_read_gpr_b_top_26_30_0, dominates: s_b_top_22_0  */
    builder.store(Operand(*ir_idx_read_gpr_b_top_26_0r), Operand(*ir_idx_temp_27));
    /* F s_b_read_gpr_b_top_26_30_3: Jump b_top_22 (const) */
    goto block_b_top_22;
  }
  block_b_top_31: 
  {
    /* F s_b_top_31_0: Free &write_gpr_b_top_37__Qscope_0x33bbb30value (8) */
    /* F s_b_top_31_1: Free &top__Qscope_0x3212200bits (8) */
    /* F s_b_top_31_2: Free &top__Qscope_0x3212200len (1) */
    /* F s_b_top_31_3: Free &top__Qscope_0x3212200pos (1) */
    /* F s_b_top_31_4: Return */
    goto fixed_done;
  }
  block_b_write_gpr_b_top_37_32: 
  {
    /* F s_b_write_gpr_b_top_37_32_0: Jump b_top_31 (const) */
    goto block_b_top_31;
  }
  block_b_write_gpr_b_top_37_33: 
  {
    /* F s_b_write_gpr_b_top_37_33_0=top__Qscope_0x3211ff0inst->sf(const) */
    /* F s_b_write_gpr_b_top_37_33_1: If s_b_write_gpr_b_top_37_33_0: Jump b_write_gpr_b_top_37_34 else b_write_gpr_b_top_37_36 (const) */
    if (sf) 
    {
      goto block_b_write_gpr_b_top_37_34;
    }
    else 
    {
      goto block_b_write_gpr_b_top_37_36;
    }
  }
  block_b_write_gpr_b_top_37_34: 
  {
    /* F s_b_write_gpr_b_top_37_34_0=top__Qscope_0x3211ff0inst->rd(const) */
    /* D s_b_write_gpr_b_top_37_34_1 = write_gpr_b_top_37__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_37_34_2: WriteRegBank 0:s_b_write_gpr_b_top_37_34_0 = s_b_write_gpr_b_top_37_34_1 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(*ir_idx_write_gpr_b_top_37__Qscope_0x33bbb30value));
    }
    builder.streg(Operand(*ir_idx_write_gpr_b_top_37__Qscope_0x33bbb30value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_37_34_3: Jump b_write_gpr_b_top_37_35 (const) */
    goto block_b_write_gpr_b_top_37_35;
  }
  block_b_write_gpr_b_top_37_35: 
  {
    /* F s_b_write_gpr_b_top_37_35_0: Jump b_top_31 (const) */
    goto block_b_top_31;
  }
  block_b_write_gpr_b_top_37_36: 
  {
    /* F s_b_write_gpr_b_top_37_36_0=top__Qscope_0x3211ff0inst->rd(const) */
    /* D s_b_write_gpr_b_top_37_36_1 = write_gpr_b_top_37__Qscope_0x33bbb30value */
    /* D s_b_write_gpr_b_top_37_36_2 = (uint32)s_b_write_gpr_b_top_37_36_1 */
    Statement& s_b_write_gpr_b_top_37_36_2 = builder.trunc(Operand(*ir_idx_write_gpr_b_top_37__Qscope_0x33bbb30value));
    /* D s_b_write_gpr_b_top_37_36_3 = (uint64)s_b_write_gpr_b_top_37_36_2 */
    Statement& s_b_write_gpr_b_top_37_36_3 = builder.zx(Operand(s_b_write_gpr_b_top_37_36_2));
    /* D s_b_write_gpr_b_top_37_36_4: WriteRegBank 0:s_b_write_gpr_b_top_37_36_0 = s_b_write_gpr_b_top_37_36_3 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))),Operand(s_b_write_gpr_b_top_37_36_3));
    }
    builder.streg(Operand(s_b_write_gpr_b_top_37_36_3), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rd))));
    /* F s_b_write_gpr_b_top_37_36_5: Jump b_write_gpr_b_top_37_35 (const) */
    goto block_b_write_gpr_b_top_37_35;
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
bool aarch64_insn_cls::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_drps::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_ldpi::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_ldrbi::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_ldrswi::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_ldursw::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_mrs::translate(vrt::dbt::ir::Builder& builder) const
{
  List<vrt::dbt::ir::BasicBlock *> dynamic_block_queue;
  vrt::dbt::ir::BasicBlock *__exit_block = nullptr;
  __exit_block = &builder.function().create_block();
  // Block b_0
  // Reg s_b_0_0
  uint64 CV_top__Qscope_0x327daf0value;
  vrt::dbt::ir::Statement *ir_idx_top__Qscope_0x327daf0value = &builder.alloc(PrimitiveTypes.u64);
  // Reg s_b_0_4
  uint8 CV_temp_2;
  vrt::dbt::ir::Statement *ir_idx_temp_2 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_1
  // Reg s_b_top_1_2
  uint8 CV_temp_3;
  vrt::dbt::ir::Statement *ir_idx_temp_3 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_2
  // Block b_top_3
  // Reg s_b_top_3_2
  uint8 CV_temp_4;
  vrt::dbt::ir::Statement *ir_idx_temp_4 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_4
  // Block b_top_5
  // Reg s_b_top_5_2
  uint8 CV_temp_5;
  vrt::dbt::ir::Statement *ir_idx_temp_5 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_6
  // Block b_top_7
  // Block b_top_8
  // Block b_top_9
  // Block b_top_10
  // Block b_top_11
  // Reg s_b_top_11_3
  uint8 CV_temp_6;
  vrt::dbt::ir::Statement *ir_idx_temp_6 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_12
  // Reg s_b_top_12_2
  uint8 CV_temp_7;
  vrt::dbt::ir::Statement *ir_idx_temp_7 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_13
  // Block b_top_14
  // Reg s_b_top_14_2
  uint8 CV_temp_8;
  vrt::dbt::ir::Statement *ir_idx_temp_8 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_15
  // Block b_top_16
  // Reg s_b_top_16_2
  uint8 CV_temp_9;
  vrt::dbt::ir::Statement *ir_idx_temp_9 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_17
  // Block b_top_18
  // Block b_top_19
  // Block b_top_20
  // Block b_top_21
  // Block b_top_22
  // Reg s_b_top_22_3
  uint8 CV_temp_10;
  vrt::dbt::ir::Statement *ir_idx_temp_10 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_23
  // Reg s_b_top_23_2
  uint8 CV_temp_11;
  vrt::dbt::ir::Statement *ir_idx_temp_11 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_24
  // Block b_top_25
  // Reg s_b_top_25_2
  uint8 CV_temp_12;
  vrt::dbt::ir::Statement *ir_idx_temp_12 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_26
  // Block b_top_27
  // Reg s_b_top_27_2
  uint8 CV_temp_13;
  vrt::dbt::ir::Statement *ir_idx_temp_13 = &builder.alloc(PrimitiveTypes.u8);
  // Block b_top_28
  // Block b_top_29
  // Block b_top_30
  // Block b_top_31
  // Block b_top_32
  // Block b_top_33
  // Block b_top_34
  // Block b_write_gpr_b_top_34_35
  // Block b_write_gpr_b_top_34_36
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0: &top__Qscope_0x327daf0value = Alloc uint64 */
    /* F s_b_0_1=top__Qscope_0x327d900inst->op0(const) */
    /* F s_b_0_2 = (const uint8) 2 (const) */
    /* F s_b_0_3 = s_b_0_1==s_b_0_2 (const) */
    uint8 s_b_0_3 = ((uint8)(op0 == (uint8)2ULL));
    /* F s_b_0_4: &temp_2 = Alloc uint8 */
    /* F s_b_0_5: temp_2 = s_b_0_3 (const), dominates: s_b_top_1_0  */
    CV_temp_2 = s_b_0_3;
    /* F s_b_0_6: If s_b_0_3: Jump b_top_2 else b_top_1 (const) */
    if (s_b_0_3) 
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
    /* F s_b_top_1_0 = temp_2 (const) */
    /* F s_b_top_1_1: Free &temp_2 (1) */
    /* F s_b_top_1_2: &temp_3 = Alloc uint8 */
    /* F s_b_top_1_3: temp_3 = s_b_top_1_0 (const), dominates: s_b_top_3_0  */
    CV_temp_3 = CV_temp_2;
    /* F s_b_top_1_4: If s_b_top_1_0: Jump b_top_4 else b_top_3 (const) */
    if (CV_temp_2) 
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
    /* F s_b_top_2_0=top__Qscope_0x327d900inst->op1(const) */
    /* F s_b_top_2_1 = (const uint8) 0 (const) */
    /* F s_b_top_2_2 = s_b_top_2_0==s_b_top_2_1 (const) */
    uint8 s_b_top_2_2 = ((uint8)(op1 == (uint8)0ULL));
    /* F s_b_top_2_3=top__Qscope_0x327d900inst->op1(const) */
    /* F s_b_top_2_4 = (const uint8) 4 (const) */
    /* F s_b_top_2_5 = s_b_top_2_3==s_b_top_2_4 (const) */
    uint8 s_b_top_2_5 = ((uint8)(op1 == (uint8)4ULL));
    /* F s_b_top_2_6 = s_b_top_2_2|s_b_top_2_5 (const) */
    uint8 s_b_top_2_6 = ((uint8)(s_b_top_2_2 | s_b_top_2_5));
    /* F s_b_top_2_7=top__Qscope_0x327d900inst->op1(const) */
    /* F s_b_top_2_8 = (const uint8) 6 (const) */
    /* F s_b_top_2_9 = s_b_top_2_7==s_b_top_2_8 (const) */
    uint8 s_b_top_2_9 = ((uint8)(op1 == (uint8)6ULL));
    /* F s_b_top_2_10 = s_b_top_2_6|s_b_top_2_9 (const) */
    uint8 s_b_top_2_10 = ((uint8)(s_b_top_2_6 | s_b_top_2_9));
    /* F s_b_top_2_11: temp_2 = s_b_top_2_10 (const), dominates: s_b_top_1_0  */
    CV_temp_2 = s_b_top_2_10;
    /* F s_b_top_2_12: Jump b_top_1 (const) */
    goto block_b_top_1;
  }
  block_b_top_3: 
  {
    /* F s_b_top_3_0 = temp_3 (const) */
    /* F s_b_top_3_1: Free &temp_3 (1) */
    /* F s_b_top_3_2: &temp_4 = Alloc uint8 */
    /* F s_b_top_3_3: temp_4 = s_b_top_3_0 (const), dominates: s_b_top_5_0  */
    CV_temp_4 = CV_temp_3;
    /* F s_b_top_3_4: If s_b_top_3_0: Jump b_top_6 else b_top_5 (const) */
    if (CV_temp_3) 
    {
      goto block_b_top_6;
    }
    else 
    {
      goto block_b_top_5;
    }
  }
  block_b_top_4: 
  {
    /* F s_b_top_4_0=top__Qscope_0x327d900inst->crn(const) */
    /* F s_b_top_4_1 = (const uint8) 2 (const) */
    /* F s_b_top_4_2 = s_b_top_4_0==s_b_top_4_1 (const) */
    uint8 s_b_top_4_2 = ((uint8)(crn == (uint8)2ULL));
    /* F s_b_top_4_3: temp_3 = s_b_top_4_2 (const), dominates: s_b_top_3_0  */
    CV_temp_3 = s_b_top_4_2;
    /* F s_b_top_4_4: Jump b_top_3 (const) */
    goto block_b_top_3;
  }
  block_b_top_5: 
  {
    /* F s_b_top_5_0 = temp_4 (const) */
    /* F s_b_top_5_1: Free &temp_4 (1) */
    /* F s_b_top_5_2: &temp_5 = Alloc uint8 */
    /* F s_b_top_5_3: temp_5 = s_b_top_5_0 (const), dominates: s_b_top_7_0  */
    CV_temp_5 = CV_temp_4;
    /* F s_b_top_5_4: If s_b_top_5_0: Jump b_top_8 else b_top_7 (const) */
    if (CV_temp_4) 
    {
      goto block_b_top_8;
    }
    else 
    {
      goto block_b_top_7;
    }
  }
  block_b_top_6: 
  {
    /* F s_b_top_6_0=top__Qscope_0x327d900inst->crm(const) */
    /* F s_b_top_6_1 = (const uint8) 0 (const) */
    /* F s_b_top_6_2 = s_b_top_6_0==s_b_top_6_1 (const) */
    uint8 s_b_top_6_2 = ((uint8)(crm == (uint8)0ULL));
    /* F s_b_top_6_3: temp_4 = s_b_top_6_2 (const), dominates: s_b_top_5_0  */
    CV_temp_4 = s_b_top_6_2;
    /* F s_b_top_6_4: Jump b_top_5 (const) */
    goto block_b_top_5;
  }
  block_b_top_7: 
  {
    /* F s_b_top_7_0 = temp_5 (const) */
    /* F s_b_top_7_1: Free &temp_5 (1) */
    /* F s_b_top_7_2: If s_b_top_7_0: Jump b_top_9 else b_top_11 (const) */
    if (CV_temp_5) 
    {
      goto block_b_top_9;
    }
    else 
    {
      goto block_b_top_11;
    }
  }
  block_b_top_8: 
  {
    /* F s_b_top_8_0=top__Qscope_0x327d900inst->op2(const) */
    /* F s_b_top_8_1 = (const uint8) 0 (const) */
    /* F s_b_top_8_2 = s_b_top_8_0==s_b_top_8_1 (const) */
    uint8 s_b_top_8_2 = ((uint8)(op2 == (uint8)0ULL));
    /* F s_b_top_8_3: temp_5 = s_b_top_8_2 (const), dominates: s_b_top_7_0  */
    CV_temp_5 = s_b_top_8_2;
    /* F s_b_top_8_4: Jump b_top_7 (const) */
    goto block_b_top_7;
  }
  block_b_top_9: 
  {
    /* D s_b_top_9_0 = ReadReg 12 (uint64) */
    Statement& s_b_top_9_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 273));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 273), Operand(s_b_top_9_0));
    }
    /* D s_b_top_9_1: top__Qscope_0x327daf0value = s_b_top_9_0, dominates: s_b_top_10_2 s_b_write_gpr_b_top_34_36_2  */
    builder.store(Operand(*ir_idx_top__Qscope_0x327daf0value), Operand(s_b_top_9_0));
    /* F s_b_top_9_2: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_top_10: 
  {
    /* F s_b_top_10_0 = (const uint8) 1 (const) */
    /* F s_b_top_10_1=top__Qscope_0x327d900inst->rt(const) */
    /* D s_b_top_10_2 = top__Qscope_0x327daf0value */
    /* F s_b_top_10_3 = (const uint8) 1f (const) */
    /* F s_b_top_10_4 = s_b_top_10_1==s_b_top_10_3 (const) */
    uint8 s_b_top_10_4 = ((uint8)(rt == (uint8)31ULL));
    /* F s_b_top_10_5: If s_b_top_10_4: Jump b_write_gpr_b_top_34_35 else b_write_gpr_b_top_34_36 (const) */
    if (s_b_top_10_4) 
    {
      goto block_b_write_gpr_b_top_34_35;
    }
    else 
    {
      goto block_b_write_gpr_b_top_34_36;
    }
  }
  block_b_top_11: 
  {
    /* F s_b_top_11_0=top__Qscope_0x327d900inst->op0(const) */
    /* F s_b_top_11_1 = (const uint8) 2 (const) */
    /* F s_b_top_11_2 = s_b_top_11_0==s_b_top_11_1 (const) */
    uint8 s_b_top_11_2 = ((uint8)(op0 == (uint8)2ULL));
    /* F s_b_top_11_3: &temp_6 = Alloc uint8 */
    /* F s_b_top_11_4: temp_6 = s_b_top_11_2 (const), dominates: s_b_top_12_0  */
    CV_temp_6 = s_b_top_11_2;
    /* F s_b_top_11_5: If s_b_top_11_2: Jump b_top_13 else b_top_12 (const) */
    if (s_b_top_11_2) 
    {
      goto block_b_top_13;
    }
    else 
    {
      goto block_b_top_12;
    }
  }
  block_b_top_12: 
  {
    /* F s_b_top_12_0 = temp_6 (const) */
    /* F s_b_top_12_1: Free &temp_6 (1) */
    /* F s_b_top_12_2: &temp_7 = Alloc uint8 */
    /* F s_b_top_12_3: temp_7 = s_b_top_12_0 (const), dominates: s_b_top_14_0  */
    CV_temp_7 = CV_temp_6;
    /* F s_b_top_12_4: If s_b_top_12_0: Jump b_top_15 else b_top_14 (const) */
    if (CV_temp_6) 
    {
      goto block_b_top_15;
    }
    else 
    {
      goto block_b_top_14;
    }
  }
  block_b_top_13: 
  {
    /* F s_b_top_13_0=top__Qscope_0x327d900inst->op1(const) */
    /* F s_b_top_13_1 = (const uint8) 0 (const) */
    /* F s_b_top_13_2 = s_b_top_13_0==s_b_top_13_1 (const) */
    uint8 s_b_top_13_2 = ((uint8)(op1 == (uint8)0ULL));
    /* F s_b_top_13_3: temp_6 = s_b_top_13_2 (const), dominates: s_b_top_12_0  */
    CV_temp_6 = s_b_top_13_2;
    /* F s_b_top_13_4: Jump b_top_12 (const) */
    goto block_b_top_12;
  }
  block_b_top_14: 
  {
    /* F s_b_top_14_0 = temp_7 (const) */
    /* F s_b_top_14_1: Free &temp_7 (1) */
    /* F s_b_top_14_2: &temp_8 = Alloc uint8 */
    /* F s_b_top_14_3: temp_8 = s_b_top_14_0 (const), dominates: s_b_top_16_0  */
    CV_temp_8 = CV_temp_7;
    /* F s_b_top_14_4: If s_b_top_14_0: Jump b_top_17 else b_top_16 (const) */
    if (CV_temp_7) 
    {
      goto block_b_top_17;
    }
    else 
    {
      goto block_b_top_16;
    }
  }
  block_b_top_15: 
  {
    /* F s_b_top_15_0=top__Qscope_0x327d900inst->crn(const) */
    /* F s_b_top_15_1 = (const uint8) 2 (const) */
    /* F s_b_top_15_2 = s_b_top_15_0==s_b_top_15_1 (const) */
    uint8 s_b_top_15_2 = ((uint8)(crn == (uint8)2ULL));
    /* F s_b_top_15_3: temp_7 = s_b_top_15_2 (const), dominates: s_b_top_14_0  */
    CV_temp_7 = s_b_top_15_2;
    /* F s_b_top_15_4: Jump b_top_14 (const) */
    goto block_b_top_14;
  }
  block_b_top_16: 
  {
    /* F s_b_top_16_0 = temp_8 (const) */
    /* F s_b_top_16_1: Free &temp_8 (1) */
    /* F s_b_top_16_2: &temp_9 = Alloc uint8 */
    /* F s_b_top_16_3: temp_9 = s_b_top_16_0 (const), dominates: s_b_top_18_0  */
    CV_temp_9 = CV_temp_8;
    /* F s_b_top_16_4: If s_b_top_16_0: Jump b_top_19 else b_top_18 (const) */
    if (CV_temp_8) 
    {
      goto block_b_top_19;
    }
    else 
    {
      goto block_b_top_18;
    }
  }
  block_b_top_17: 
  {
    /* F s_b_top_17_0=top__Qscope_0x327d900inst->crm(const) */
    /* F s_b_top_17_1 = (const uint8) 0 (const) */
    /* F s_b_top_17_2 = s_b_top_17_0==s_b_top_17_1 (const) */
    uint8 s_b_top_17_2 = ((uint8)(crm == (uint8)0ULL));
    /* F s_b_top_17_3: temp_8 = s_b_top_17_2 (const), dominates: s_b_top_16_0  */
    CV_temp_8 = s_b_top_17_2;
    /* F s_b_top_17_4: Jump b_top_16 (const) */
    goto block_b_top_16;
  }
  block_b_top_18: 
  {
    /* F s_b_top_18_0 = temp_9 (const) */
    /* F s_b_top_18_1: Free &temp_9 (1) */
    /* F s_b_top_18_2: If s_b_top_18_0: Jump b_top_20 else b_top_22 (const) */
    if (CV_temp_9) 
    {
      goto block_b_top_20;
    }
    else 
    {
      goto block_b_top_22;
    }
  }
  block_b_top_19: 
  {
    /* F s_b_top_19_0=top__Qscope_0x327d900inst->op2(const) */
    /* F s_b_top_19_1 = (const uint8) 1 (const) */
    /* F s_b_top_19_2 = s_b_top_19_0==s_b_top_19_1 (const) */
    uint8 s_b_top_19_2 = ((uint8)(op2 == (uint8)1ULL));
    /* F s_b_top_19_3: temp_9 = s_b_top_19_2 (const), dominates: s_b_top_18_0  */
    CV_temp_9 = s_b_top_19_2;
    /* F s_b_top_19_4: Jump b_top_18 (const) */
    goto block_b_top_18;
  }
  block_b_top_20: 
  {
    /* D s_b_top_20_0 = ReadReg 13 (uint64) */
    Statement& s_b_top_20_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 281));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 281), Operand(s_b_top_20_0));
    }
    /* D s_b_top_20_1: top__Qscope_0x327daf0value = s_b_top_20_0, dominates: s_b_top_10_2 s_b_write_gpr_b_top_34_36_2  */
    builder.store(Operand(*ir_idx_top__Qscope_0x327daf0value), Operand(s_b_top_20_0));
    /* F s_b_top_20_2: Jump b_top_21 (const) */
    goto block_b_top_21;
  }
  block_b_top_21: 
  {
    /* F s_b_top_21_0: Jump b_top_10 (const) */
    goto block_b_top_10;
  }
  block_b_top_22: 
  {
    /* F s_b_top_22_0=top__Qscope_0x327d900inst->op0(const) */
    /* F s_b_top_22_1 = (const uint8) 3 (const) */
    /* F s_b_top_22_2 = s_b_top_22_0==s_b_top_22_1 (const) */
    uint8 s_b_top_22_2 = ((uint8)(op0 == (uint8)3ULL));
    /* F s_b_top_22_3: &temp_10 = Alloc uint8 */
    /* F s_b_top_22_4: temp_10 = s_b_top_22_2 (const), dominates: s_b_top_23_0  */
    CV_temp_10 = s_b_top_22_2;
    /* F s_b_top_22_5: If s_b_top_22_2: Jump b_top_24 else b_top_23 (const) */
    if (s_b_top_22_2) 
    {
      goto block_b_top_24;
    }
    else 
    {
      goto block_b_top_23;
    }
  }
  block_b_top_23: 
  {
    /* F s_b_top_23_0 = temp_10 (const) */
    /* F s_b_top_23_1: Free &temp_10 (1) */
    /* F s_b_top_23_2: &temp_11 = Alloc uint8 */
    /* F s_b_top_23_3: temp_11 = s_b_top_23_0 (const), dominates: s_b_top_25_0  */
    CV_temp_11 = CV_temp_10;
    /* F s_b_top_23_4: If s_b_top_23_0: Jump b_top_26 else b_top_25 (const) */
    if (CV_temp_10) 
    {
      goto block_b_top_26;
    }
    else 
    {
      goto block_b_top_25;
    }
  }
  block_b_top_24: 
  {
    /* F s_b_top_24_0=top__Qscope_0x327d900inst->op1(const) */
    /* F s_b_top_24_1 = (const uint8) 0 (const) */
    /* F s_b_top_24_2 = s_b_top_24_0==s_b_top_24_1 (const) */
    uint8 s_b_top_24_2 = ((uint8)(op1 == (uint8)0ULL));
    /* F s_b_top_24_3: temp_10 = s_b_top_24_2 (const), dominates: s_b_top_23_0  */
    CV_temp_10 = s_b_top_24_2;
    /* F s_b_top_24_4: Jump b_top_23 (const) */
    goto block_b_top_23;
  }
  block_b_top_25: 
  {
    /* F s_b_top_25_0 = temp_11 (const) */
    /* F s_b_top_25_1: Free &temp_11 (1) */
    /* F s_b_top_25_2: &temp_12 = Alloc uint8 */
    /* F s_b_top_25_3: temp_12 = s_b_top_25_0 (const), dominates: s_b_top_27_0  */
    CV_temp_12 = CV_temp_11;
    /* F s_b_top_25_4: If s_b_top_25_0: Jump b_top_28 else b_top_27 (const) */
    if (CV_temp_11) 
    {
      goto block_b_top_28;
    }
    else 
    {
      goto block_b_top_27;
    }
  }
  block_b_top_26: 
  {
    /* F s_b_top_26_0=top__Qscope_0x327d900inst->crn(const) */
    /* F s_b_top_26_1 = (const uint8) 4 (const) */
    /* F s_b_top_26_2 = s_b_top_26_0==s_b_top_26_1 (const) */
    uint8 s_b_top_26_2 = ((uint8)(crn == (uint8)4ULL));
    /* F s_b_top_26_3: temp_11 = s_b_top_26_2 (const), dominates: s_b_top_25_0  */
    CV_temp_11 = s_b_top_26_2;
    /* F s_b_top_26_4: Jump b_top_25 (const) */
    goto block_b_top_25;
  }
  block_b_top_27: 
  {
    /* F s_b_top_27_0 = temp_12 (const) */
    /* F s_b_top_27_1: Free &temp_12 (1) */
    /* F s_b_top_27_2: &temp_13 = Alloc uint8 */
    /* F s_b_top_27_3: temp_13 = s_b_top_27_0 (const), dominates: s_b_top_29_0  */
    CV_temp_13 = CV_temp_12;
    /* F s_b_top_27_4: If s_b_top_27_0: Jump b_top_30 else b_top_29 (const) */
    if (CV_temp_12) 
    {
      goto block_b_top_30;
    }
    else 
    {
      goto block_b_top_29;
    }
  }
  block_b_top_28: 
  {
    /* F s_b_top_28_0=top__Qscope_0x327d900inst->crm(const) */
    /* F s_b_top_28_1 = (const uint8) 2 (const) */
    /* F s_b_top_28_2 = s_b_top_28_0==s_b_top_28_1 (const) */
    uint8 s_b_top_28_2 = ((uint8)(crm == (uint8)2ULL));
    /* F s_b_top_28_3: temp_12 = s_b_top_28_2 (const), dominates: s_b_top_27_0  */
    CV_temp_12 = s_b_top_28_2;
    /* F s_b_top_28_4: Jump b_top_27 (const) */
    goto block_b_top_27;
  }
  block_b_top_29: 
  {
    /* F s_b_top_29_0 = temp_13 (const) */
    /* F s_b_top_29_1: Free &temp_13 (1) */
    /* F s_b_top_29_2: If s_b_top_29_0: Jump b_top_31 else b_top_33 (const) */
    if (CV_temp_13) 
    {
      goto block_b_top_31;
    }
    else 
    {
      goto block_b_top_33;
    }
  }
  block_b_top_30: 
  {
    /* F s_b_top_30_0=top__Qscope_0x327d900inst->op2(const) */
    /* F s_b_top_30_1 = (const uint8) 2 (const) */
    /* F s_b_top_30_2 = s_b_top_30_0==s_b_top_30_1 (const) */
    uint8 s_b_top_30_2 = ((uint8)(op2 == (uint8)2ULL));
    /* F s_b_top_30_3: temp_13 = s_b_top_30_2 (const), dominates: s_b_top_29_0  */
    CV_temp_13 = s_b_top_30_2;
    /* F s_b_top_30_4: Jump b_top_29 (const) */
    goto block_b_top_29;
  }
  block_b_top_31: 
  {
    /* D s_b_top_31_0 = ReadReg 11 (uint8) */
    Statement& s_b_top_31_0 = builder.ldreg(Operand(PrimitiveTypes.u32, 272));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, 272), Operand(s_b_top_31_0));
    }
    /* D s_b_top_31_1 = (uint64)s_b_top_31_0 */
    Statement& s_b_top_31_1 = builder.zx(Operand(s_b_top_31_0));
    /* D s_b_top_31_2: top__Qscope_0x327daf0value = s_b_top_31_1, dominates: s_b_top_10_2 s_b_write_gpr_b_top_34_36_2  */
    builder.store(Operand(*ir_idx_top__Qscope_0x327daf0value), Operand(s_b_top_31_1));
    /* F s_b_top_31_3: Jump b_top_32 (const) */
    goto block_b_top_32;
  }
  block_b_top_32: 
  {
    /* F s_b_top_32_0: Jump b_top_21 (const) */
    goto block_b_top_21;
  }
  block_b_top_33: 
  {
    /* F s_b_top_33_0 = (const uint8) 10 (const) */
    /* F s_b_top_33_1=top__Qscope_0x327d900inst->ir(const) */
    /* F s_b_top_33_2 = (uint32) 10 (const) */
    /* D ??? */
    Statement& s_b_top_33_3 = builder.lddev(Operand(PrimitiveTypes.u32, (uint32)16ULL), Operand(PrimitiveTypes.u32, ir));
    if (_trace) 
    {
      builder.trace_dev_read(Operand(PrimitiveTypes.u32, (uint32)16ULL), Operand(PrimitiveTypes.u32, ir), Operand(*ir_idx_top__Qscope_0x327daf0value));
    }
    /* F s_b_top_33_4: Jump b_top_32 (const) */
    goto block_b_top_32;
  }
  block_b_top_34: 
  {
    /* F s_b_top_34_0: Free &top__Qscope_0x327daf0value (8) */
    /* F s_b_top_34_1: Return */
    goto fixed_done;
  }
  block_b_write_gpr_b_top_34_35: 
  {
    /* F s_b_write_gpr_b_top_34_35_0: Jump b_top_34 (const) */
    goto block_b_top_34;
  }
  block_b_write_gpr_b_top_34_36: 
  {
    /* F s_b_write_gpr_b_top_34_36_0 = (const uint8) 1 (const) */
    /* F s_b_write_gpr_b_top_34_36_1=top__Qscope_0x327d900inst->rt(const) */
    /* D s_b_write_gpr_b_top_34_36_2 = top__Qscope_0x327daf0value */
    /* D s_b_write_gpr_b_top_34_36_3: WriteRegBank 0:s_b_write_gpr_b_top_34_36_1 = s_b_write_gpr_b_top_34_36_2 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))),Operand(*ir_idx_top__Qscope_0x327daf0value));
    }
    builder.streg(Operand(*ir_idx_top__Qscope_0x327daf0value), Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rt))));
    /* F s_b_write_gpr_b_top_34_36_4: Jump b_top_34 (const) */
    goto block_b_top_34;
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
bool aarch64_insn_ret::translate(vrt::dbt::ir::Builder& builder) const
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
  goto block_b_0;
  block_b_0: 
  {
    /* F s_b_0_0 = (const uint8) 1 (const) */
    /* F s_b_0_1=top__Qscope_0x329bb30inst->rn(const) */
    /* F s_b_0_2=top__Qscope_0x329bb30inst->rn(const) */
    /* F s_b_0_3 = (const uint8) 1f (const) */
    /* F s_b_0_4 = s_b_0_2==s_b_0_3 (const) */
    uint8 s_b_0_4 = ((uint8)(rn == (uint8)31ULL));
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
    /* F s_b_read_gpr_b_top_1_1_2: temp_5 = s_b_read_gpr_b_top_1_1_1 (const), dominates: s_b_read_gpr_b_top_1_3_0  */
    CV_temp_5 = (uint64)0ULL;
    builder.store(Operand(*ir_idx_temp_5), Operand(PrimitiveTypes.u8, CV_temp_5));
    /* F s_b_read_gpr_b_top_1_1_3: Jump b_read_gpr_b_top_1_3 (const) */
    goto block_b_read_gpr_b_top_1_3;
  }
  block_b_read_gpr_b_top_1_2: 
  {
    /* F s_b_read_gpr_b_top_1_2_0=top__Qscope_0x329bb30inst->rn(const) */
    /* D s_b_read_gpr_b_top_1_2_1 = ReadRegBank 0:s_b_read_gpr_b_top_1_2_0 (uint64) */
    Statement& s_b_read_gpr_b_top_1_2_1 = builder.ldreg(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))));
    if (_trace) 
    {
      builder.trace_reg_read(Operand(PrimitiveTypes.u32, (uint32_t)(0 + (8 * rn))),Operand(s_b_read_gpr_b_top_1_2_1));
    }
    /* D s_b_read_gpr_b_top_1_2_2 = (uint64)s_b_read_gpr_b_top_1_2_1 */
    Statement& s_b_read_gpr_b_top_1_2_2 = s_b_read_gpr_b_top_1_2_1;
    /* D s_b_read_gpr_b_top_1_2_3: temp_5 = s_b_read_gpr_b_top_1_2_2, dominates: s_b_read_gpr_b_top_1_3_0  */
    builder.store(Operand(*ir_idx_temp_5), Operand(s_b_read_gpr_b_top_1_2_2));
    /* F s_b_read_gpr_b_top_1_2_4: Jump b_read_gpr_b_top_1_3 (const) */
    goto block_b_read_gpr_b_top_1_3;
  }
  block_b_read_gpr_b_top_1_3: 
  {
    /* D s_b_read_gpr_b_top_1_3_0 = temp_5 */
    /* F s_b_read_gpr_b_top_1_3_1: Free &temp_5 (8) */
    /* D s_b_read_gpr_b_top_1_3_2: WriteReg 2 = s_b_read_gpr_b_top_1_3_0 */
    if (_trace) 
    {
      builder.trace_reg_write(Operand(PrimitiveTypes.u32, 256), Operand(*ir_idx_temp_5));
    }
    builder.streg(Operand(*ir_idx_temp_5), Operand(PrimitiveTypes.u32, 256));
    /* F s_b_read_gpr_b_top_1_3_3: Return */
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
bool aarch64_insn_smaddl::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_strb_reg::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_sttrh::translate(vrt::dbt::ir::Builder& builder) const
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
bool aarch64_insn_tbz::translate(vrt::dbt::ir::Builder& builder) const
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
