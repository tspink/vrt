#pragma once
#include <arch/guest/guest-instruction-decoder.h>
#include <arch/guest/guest-instruction.h>
namespace vrt 
{
  namespace arch 
  {
    namespace guest 
    {
      namespace aarch64 
      {
        namespace opcodes 
        {
          enum opcodes 
          {
            aarch64_a64_adc,
            aarch64_a64_add_ereg,
            aarch64_a64_add_sreg,
            aarch64_a64_addi,
            aarch64_a64_adr,
            aarch64_a64_andi,
            aarch64_a64_andsr,
            aarch64_a64_asrv,
            aarch64_a64_b,
            aarch64_a64_barrier,
            aarch64_a64_bcond,
            aarch64_a64_bfm,
            aarch64_a64_bicsr,
            aarch64_a64_br,
            aarch64_a64_cbz,
            aarch64_a64_ccmni,
            aarch64_a64_ccmnr,
            aarch64_a64_ccmpi,
            aarch64_a64_ccmpr,
            aarch64_a64_cls,
            aarch64_a64_clz,
            aarch64_a64_crc32,
            aarch64_a64_crc32c,
            aarch64_a64_csel,
            aarch64_a64_csinc,
            aarch64_a64_csinv,
            aarch64_a64_csneg,
            aarch64_a64_drps,
            aarch64_a64_eori,
            aarch64_a64_eorsr,
            aarch64_a64_eret,
            aarch64_a64_exgen,
            aarch64_a64_extr,
            aarch64_a64_hint,
            aarch64_a64_ldp,
            aarch64_a64_ldpi,
            aarch64_a64_ldpsw,
            aarch64_a64_ldpswi,
            aarch64_a64_ldr,
            aarch64_a64_ldr_lit,
            aarch64_a64_ldr_reg,
            aarch64_a64_ldrb,
            aarch64_a64_ldrb_reg,
            aarch64_a64_ldrbi,
            aarch64_a64_ldrh,
            aarch64_a64_ldrh_reg,
            aarch64_a64_ldrhi,
            aarch64_a64_ldri,
            aarch64_a64_ldrsw,
            aarch64_a64_ldrsw_lit,
            aarch64_a64_ldrsw_reg,
            aarch64_a64_ldrswi,
            aarch64_a64_ldtr,
            aarch64_a64_ldtrb,
            aarch64_a64_ldtrh,
            aarch64_a64_ldtrsw,
            aarch64_a64_ldur,
            aarch64_a64_ldurb,
            aarch64_a64_ldurh,
            aarch64_a64_ldursw,
            aarch64_a64_lslv,
            aarch64_a64_lsrv,
            aarch64_a64_madd,
            aarch64_a64_mov,
            aarch64_a64_movk,
            aarch64_a64_movn,
            aarch64_a64_movz,
            aarch64_a64_mrs,
            aarch64_a64_msr_imm,
            aarch64_a64_msr_reg,
            aarch64_a64_msub,
            aarch64_a64_orri,
            aarch64_a64_orrsr,
            aarch64_a64_prfm,
            aarch64_a64_rbit,
            aarch64_a64_ret,
            aarch64_a64_rev,
            aarch64_a64_rev16,
            aarch64_a64_rev32,
            aarch64_a64_rorv,
            aarch64_a64_sbc,
            aarch64_a64_sbfm,
            aarch64_a64_sdiv,
            aarch64_a64_smaddl,
            aarch64_a64_smsubl,
            aarch64_a64_smulh,
            aarch64_a64_stp,
            aarch64_a64_stpi,
            aarch64_a64_str,
            aarch64_a64_str_reg,
            aarch64_a64_strb,
            aarch64_a64_strb_reg,
            aarch64_a64_strbi,
            aarch64_a64_strh,
            aarch64_a64_strh_reg,
            aarch64_a64_strhi,
            aarch64_a64_stri,
            aarch64_a64_sttr,
            aarch64_a64_sttrb,
            aarch64_a64_sttrh,
            aarch64_a64_stur,
            aarch64_a64_sturb,
            aarch64_a64_sturh,
            aarch64_a64_sub_ereg,
            aarch64_a64_sub_sreg,
            aarch64_a64_subi,
            aarch64_a64_sys,
            aarch64_a64_tbz,
            aarch64_a64_ubfm,
            aarch64_a64_udiv,
            aarch64_a64_umaddl,
            aarch64_a64_umsubl,
            aarch64_a64_umulh,
            aarch64_unknown = -1
          }
          ;
        }
        class aarch64_decode : public GuestInstructionDecoder
        {
          public:
        }
        ;
        class aarch64_decode_a64 : public aarch64_decode
        {
          public:
          Instruction* decode(hva_t va) override;
        }
        ;
        class aarch64_arch : public GuestInstruction
        {
          public:
          aarch64_arch(uint64_t opcode) : GuestInstruction(opcode) 
          {
          }
          virtual ~aarch64_arch() 
          {
          }
          uint32_t ir;
          bool is_predicated;
          const ControlFlowInfo control_flow_info() const override 
          {
            return _cfi;
          }
          ControlFlowInfo _cfi;
        }
        ;
        class aarch64_isa_a64 : public aarch64_arch
        {
          public:
          aarch64_isa_a64(uint64_t opcode) : aarch64_arch(opcode) 
          {
          }
          virtual ~aarch64_isa_a64() 
          {
          }
          uint32_t immu32;
          int32_t imms32;
          uint64_t immu64;
          int64_t imms64;
          uint8_t shift;
        }
        ;
        class aarch64_fmt_a64_ADD_SUB_CARRY : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_ADD_SUB_CARRY(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_ADD_SUB_CARRY() 
          {
          }
          uint8_t sf;
          uint8_t op;
          uint8_t S;
          uint8_t rm;
          uint8_t opcode2;
          uint8_t rn;
          uint8_t rd;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_adc : public aarch64_fmt_a64_ADD_SUB_CARRY
        {
          public:
          aarch64_insn_adc();
          virtual ~aarch64_insn_adc() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_sbc : public aarch64_fmt_a64_ADD_SUB_CARRY
        {
          public:
          aarch64_insn_sbc();
          virtual ~aarch64_insn_sbc() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_ADD_SUB_EREG : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_ADD_SUB_EREG(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_ADD_SUB_EREG() 
          {
          }
          uint8_t sf;
          uint8_t op;
          uint8_t S;
          uint8_t opt;
          uint8_t rm;
          uint8_t option;
          uint8_t imm3;
          uint8_t rn;
          uint8_t rd;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_add_ereg : public aarch64_fmt_a64_ADD_SUB_EREG
        {
          public:
          aarch64_insn_add_ereg();
          virtual ~aarch64_insn_add_ereg() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_sub_ereg : public aarch64_fmt_a64_ADD_SUB_EREG
        {
          public:
          aarch64_insn_sub_ereg();
          virtual ~aarch64_insn_sub_ereg() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_ADD_SUB_IMM : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_ADD_SUB_IMM(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_ADD_SUB_IMM() 
          {
          }
          uint8_t sf;
          uint8_t op;
          uint8_t S;
          uint8_t shift;
          uint16_t imm12;
          uint8_t rn;
          uint8_t rd;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_addi : public aarch64_fmt_a64_ADD_SUB_IMM
        {
          public:
          aarch64_insn_addi();
          virtual ~aarch64_insn_addi() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_subi : public aarch64_fmt_a64_ADD_SUB_IMM
        {
          public:
          aarch64_insn_subi();
          virtual ~aarch64_insn_subi() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_ADD_SUB_SREG : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_ADD_SUB_SREG(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_ADD_SUB_SREG() 
          {
          }
          uint8_t sf;
          uint8_t op;
          uint8_t S;
          uint8_t shift;
          uint8_t rm;
          uint8_t imm6;
          uint8_t rn;
          uint8_t rd;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_add_sreg : public aarch64_fmt_a64_ADD_SUB_SREG
        {
          public:
          aarch64_insn_add_sreg();
          virtual ~aarch64_insn_add_sreg() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_sub_sreg : public aarch64_fmt_a64_ADD_SUB_SREG
        {
          public:
          aarch64_insn_sub_sreg();
          virtual ~aarch64_insn_sub_sreg() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_BITFIELD : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_BITFIELD(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_BITFIELD() 
          {
          }
          uint8_t sf;
          uint8_t opc;
          uint8_t N;
          uint8_t immr;
          uint8_t imms;
          uint8_t rn;
          uint8_t rd;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_sbfm : public aarch64_fmt_a64_BITFIELD
        {
          public:
          aarch64_insn_sbfm();
          virtual ~aarch64_insn_sbfm() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_bfm : public aarch64_fmt_a64_BITFIELD
        {
          public:
          aarch64_insn_bfm();
          virtual ~aarch64_insn_bfm() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ubfm : public aarch64_fmt_a64_BITFIELD
        {
          public:
          aarch64_insn_ubfm();
          virtual ~aarch64_insn_ubfm() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_CMP_B_IMM : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_CMP_B_IMM(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_CMP_B_IMM() 
          {
          }
          uint8_t sf;
          uint8_t op;
          uint32_t imm19;
          uint8_t rt;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_cbz : public aarch64_fmt_a64_CMP_B_IMM
        {
          public:
          aarch64_insn_cbz();
          virtual ~aarch64_insn_cbz() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_COND_B_IMM : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_COND_B_IMM(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_COND_B_IMM() 
          {
          }
          uint8_t o1;
          uint32_t imm19;
          uint8_t o0;
          uint8_t cond;
          inline void decode_behaviour()
          {
            {
              imms64 = ((int64_t)imm19 << (64 - 19)) >> (64 - 21);
            }
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_bcond : public aarch64_fmt_a64_COND_B_IMM
        {
          public:
          aarch64_insn_bcond();
          virtual ~aarch64_insn_bcond() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_COND_CMP_IMM : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_COND_CMP_IMM(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_COND_CMP_IMM() 
          {
          }
          uint8_t sf;
          uint8_t op;
          uint8_t S;
          uint8_t imm5;
          uint8_t cond;
          uint8_t o2;
          uint8_t rn;
          uint8_t o3;
          uint8_t nzcv;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_ccmpi : public aarch64_fmt_a64_COND_CMP_IMM
        {
          public:
          aarch64_insn_ccmpi();
          virtual ~aarch64_insn_ccmpi() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ccmni : public aarch64_fmt_a64_COND_CMP_IMM
        {
          public:
          aarch64_insn_ccmni();
          virtual ~aarch64_insn_ccmni() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_COND_CMP_REG : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_COND_CMP_REG(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_COND_CMP_REG() 
          {
          }
          uint8_t sf;
          uint8_t op;
          uint8_t S;
          uint8_t rm;
          uint8_t cond;
          uint8_t o2;
          uint8_t rn;
          uint8_t o3;
          uint8_t nzcv;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_ccmpr : public aarch64_fmt_a64_COND_CMP_REG
        {
          public:
          aarch64_insn_ccmpr();
          virtual ~aarch64_insn_ccmpr() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ccmnr : public aarch64_fmt_a64_COND_CMP_REG
        {
          public:
          aarch64_insn_ccmnr();
          virtual ~aarch64_insn_ccmnr() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_COND_SEL : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_COND_SEL(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_COND_SEL() 
          {
          }
          uint8_t sf;
          uint8_t op;
          uint8_t S;
          uint8_t rm;
          uint8_t cond;
          uint8_t op2;
          uint8_t rn;
          uint8_t rd;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_csel : public aarch64_fmt_a64_COND_SEL
        {
          public:
          aarch64_insn_csel();
          virtual ~aarch64_insn_csel() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_csinc : public aarch64_fmt_a64_COND_SEL
        {
          public:
          aarch64_insn_csinc();
          virtual ~aarch64_insn_csinc() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_csinv : public aarch64_fmt_a64_COND_SEL
        {
          public:
          aarch64_insn_csinv();
          virtual ~aarch64_insn_csinv() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_csneg : public aarch64_fmt_a64_COND_SEL
        {
          public:
          aarch64_insn_csneg();
          virtual ~aarch64_insn_csneg() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_DP_1S : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_DP_1S(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_DP_1S() 
          {
          }
          uint8_t sf;
          uint8_t S;
          uint8_t opcode2;
          uint8_t opcode;
          uint8_t rn;
          uint8_t rd;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_rbit : public aarch64_fmt_a64_DP_1S
        {
          public:
          aarch64_insn_rbit();
          virtual ~aarch64_insn_rbit() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_rev16 : public aarch64_fmt_a64_DP_1S
        {
          public:
          aarch64_insn_rev16();
          virtual ~aarch64_insn_rev16() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_rev : public aarch64_fmt_a64_DP_1S
        {
          public:
          aarch64_insn_rev();
          virtual ~aarch64_insn_rev() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_rev32 : public aarch64_fmt_a64_DP_1S
        {
          public:
          aarch64_insn_rev32();
          virtual ~aarch64_insn_rev32() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_clz : public aarch64_fmt_a64_DP_1S
        {
          public:
          aarch64_insn_clz();
          virtual ~aarch64_insn_clz() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_cls : public aarch64_fmt_a64_DP_1S
        {
          public:
          aarch64_insn_cls();
          virtual ~aarch64_insn_cls() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_DP_2S : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_DP_2S(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_DP_2S() 
          {
          }
          uint8_t sf;
          uint8_t S;
          uint8_t rm;
          uint8_t opcode;
          uint8_t rn;
          uint8_t rd;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_udiv : public aarch64_fmt_a64_DP_2S
        {
          public:
          aarch64_insn_udiv();
          virtual ~aarch64_insn_udiv() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_sdiv : public aarch64_fmt_a64_DP_2S
        {
          public:
          aarch64_insn_sdiv();
          virtual ~aarch64_insn_sdiv() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_lslv : public aarch64_fmt_a64_DP_2S
        {
          public:
          aarch64_insn_lslv();
          virtual ~aarch64_insn_lslv() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_lsrv : public aarch64_fmt_a64_DP_2S
        {
          public:
          aarch64_insn_lsrv();
          virtual ~aarch64_insn_lsrv() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_asrv : public aarch64_fmt_a64_DP_2S
        {
          public:
          aarch64_insn_asrv();
          virtual ~aarch64_insn_asrv() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_rorv : public aarch64_fmt_a64_DP_2S
        {
          public:
          aarch64_insn_rorv();
          virtual ~aarch64_insn_rorv() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_crc32 : public aarch64_fmt_a64_DP_2S
        {
          public:
          aarch64_insn_crc32();
          virtual ~aarch64_insn_crc32() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_crc32c : public aarch64_fmt_a64_DP_2S
        {
          public:
          aarch64_insn_crc32c();
          virtual ~aarch64_insn_crc32c() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_DP_3S : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_DP_3S(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_DP_3S() 
          {
          }
          uint8_t sf;
          uint8_t op54;
          uint8_t op31;
          uint8_t rm;
          uint8_t o0;
          uint8_t ra;
          uint8_t rn;
          uint8_t rd;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_madd : public aarch64_fmt_a64_DP_3S
        {
          public:
          aarch64_insn_madd();
          virtual ~aarch64_insn_madd() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_msub : public aarch64_fmt_a64_DP_3S
        {
          public:
          aarch64_insn_msub();
          virtual ~aarch64_insn_msub() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_smaddl : public aarch64_fmt_a64_DP_3S
        {
          public:
          aarch64_insn_smaddl();
          virtual ~aarch64_insn_smaddl() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_smsubl : public aarch64_fmt_a64_DP_3S
        {
          public:
          aarch64_insn_smsubl();
          virtual ~aarch64_insn_smsubl() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_smulh : public aarch64_fmt_a64_DP_3S
        {
          public:
          aarch64_insn_smulh();
          virtual ~aarch64_insn_smulh() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_umaddl : public aarch64_fmt_a64_DP_3S
        {
          public:
          aarch64_insn_umaddl();
          virtual ~aarch64_insn_umaddl() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_umsubl : public aarch64_fmt_a64_DP_3S
        {
          public:
          aarch64_insn_umsubl();
          virtual ~aarch64_insn_umsubl() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_umulh : public aarch64_fmt_a64_DP_3S
        {
          public:
          aarch64_insn_umulh();
          virtual ~aarch64_insn_umulh() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_EXTRACT : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_EXTRACT(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_EXTRACT() 
          {
          }
          uint8_t sf;
          uint8_t op21;
          uint8_t N;
          uint8_t o0;
          uint8_t rm;
          uint8_t imms;
          uint8_t rn;
          uint8_t rd;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_extr : public aarch64_fmt_a64_EXTRACT
        {
          public:
          aarch64_insn_extr();
          virtual ~aarch64_insn_extr() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_EX_GEN : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_EX_GEN(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_EX_GEN() 
          {
          }
          uint8_t opc;
          uint16_t imm16;
          uint8_t op2;
          uint8_t ll;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_exgen : public aarch64_fmt_a64_EX_GEN
        {
          public:
          aarch64_insn_exgen();
          virtual ~aarch64_insn_exgen() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_LOAD_REG_LIT : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_LOAD_REG_LIT(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_LOAD_REG_LIT() 
          {
          }
          uint8_t opc;
          uint8_t V;
          uint32_t imm19;
          uint8_t rt;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_ldr_lit : public aarch64_fmt_a64_LOAD_REG_LIT
        {
          public:
          aarch64_insn_ldr_lit();
          virtual ~aarch64_insn_ldr_lit() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldrsw_lit : public aarch64_fmt_a64_LOAD_REG_LIT
        {
          public:
          aarch64_insn_ldrsw_lit();
          virtual ~aarch64_insn_ldrsw_lit() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_prfm : public aarch64_fmt_a64_LOAD_REG_LIT
        {
          public:
          aarch64_insn_prfm();
          virtual ~aarch64_insn_prfm() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_LOGICAL_IMM : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_LOGICAL_IMM(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_LOGICAL_IMM() 
          {
          }
          uint8_t sf;
          uint8_t opc;
          uint8_t N;
          uint8_t immr;
          uint8_t imms;
          uint8_t rn;
          uint8_t rd;
          inline void decode_behaviour()
          {
            {
              if (sf == 0) 
              {
                immu32 = __ROR32(((1 << (imms + 1)) - 1), immr);
              }
              else 
              {
                immu64 = __ROR64(((1 << (imms + 1)) - 1), immr);
              }
            }
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_andi : public aarch64_fmt_a64_LOGICAL_IMM
        {
          public:
          aarch64_insn_andi();
          virtual ~aarch64_insn_andi() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_orri : public aarch64_fmt_a64_LOGICAL_IMM
        {
          public:
          aarch64_insn_orri();
          virtual ~aarch64_insn_orri() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_eori : public aarch64_fmt_a64_LOGICAL_IMM
        {
          public:
          aarch64_insn_eori();
          virtual ~aarch64_insn_eori() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_LOGICAL_SR : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_LOGICAL_SR(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_LOGICAL_SR() 
          {
          }
          uint8_t sf;
          uint8_t opc;
          uint8_t shift;
          uint8_t N;
          uint8_t rm;
          uint8_t imm6;
          uint8_t rn;
          uint8_t rd;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_andsr : public aarch64_fmt_a64_LOGICAL_SR
        {
          public:
          aarch64_insn_andsr();
          virtual ~aarch64_insn_andsr() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_bicsr : public aarch64_fmt_a64_LOGICAL_SR
        {
          public:
          aarch64_insn_bicsr();
          virtual ~aarch64_insn_bicsr() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_orrsr : public aarch64_fmt_a64_LOGICAL_SR
        {
          public:
          aarch64_insn_orrsr();
          virtual ~aarch64_insn_orrsr() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_eorsr : public aarch64_fmt_a64_LOGICAL_SR
        {
          public:
          aarch64_insn_eorsr();
          virtual ~aarch64_insn_eorsr() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_mov : public aarch64_fmt_a64_LOGICAL_SR
        {
          public:
          aarch64_insn_mov();
          virtual ~aarch64_insn_mov() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_LS_REG_IMM_POST : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_LS_REG_IMM_POST(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_LS_REG_IMM_POST() 
          {
          }
          uint8_t size;
          uint8_t V;
          uint8_t X;
          uint8_t L;
          uint16_t imm9;
          uint8_t P;
          uint8_t rn;
          uint8_t rt;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_ldrb : public aarch64_fmt_a64_LS_REG_IMM_POST
        {
          public:
          aarch64_insn_ldrb();
          virtual ~aarch64_insn_ldrb() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldrh : public aarch64_fmt_a64_LS_REG_IMM_POST
        {
          public:
          aarch64_insn_ldrh();
          virtual ~aarch64_insn_ldrh() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldr : public aarch64_fmt_a64_LS_REG_IMM_POST
        {
          public:
          aarch64_insn_ldr();
          virtual ~aarch64_insn_ldr() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldrsw : public aarch64_fmt_a64_LS_REG_IMM_POST
        {
          public:
          aarch64_insn_ldrsw();
          virtual ~aarch64_insn_ldrsw() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_strb : public aarch64_fmt_a64_LS_REG_IMM_POST
        {
          public:
          aarch64_insn_strb();
          virtual ~aarch64_insn_strb() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_strh : public aarch64_fmt_a64_LS_REG_IMM_POST
        {
          public:
          aarch64_insn_strh();
          virtual ~aarch64_insn_strh() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_str : public aarch64_fmt_a64_LS_REG_IMM_POST
        {
          public:
          aarch64_insn_str();
          virtual ~aarch64_insn_str() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_LS_REG_PAIR_IDX : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_LS_REG_PAIR_IDX(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_LS_REG_PAIR_IDX() 
          {
          }
          uint8_t opc;
          uint8_t V;
          uint8_t P;
          uint8_t L;
          uint8_t imm7;
          uint8_t rt2;
          uint8_t rn;
          uint8_t rt;
          inline void decode_behaviour()
          {
            {
              int scale = 2 + (opc >> 1);
              immu64 = (((int64_t)imm7 << (64 - 7)) >> (64 - 7)) << scale;
            }
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_stpi : public aarch64_fmt_a64_LS_REG_PAIR_IDX
        {
          public:
          aarch64_insn_stpi();
          virtual ~aarch64_insn_stpi() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldpi : public aarch64_fmt_a64_LS_REG_PAIR_IDX
        {
          public:
          aarch64_insn_ldpi();
          virtual ~aarch64_insn_ldpi() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldpswi : public aarch64_fmt_a64_LS_REG_PAIR_IDX
        {
          public:
          aarch64_insn_ldpswi();
          virtual ~aarch64_insn_ldpswi() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_LS_REG_PAIR_OFF : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_LS_REG_PAIR_OFF(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_LS_REG_PAIR_OFF() 
          {
          }
          uint8_t opc;
          uint8_t V;
          uint8_t L;
          uint8_t imm7;
          uint8_t rt2;
          uint8_t rn;
          uint8_t rt;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_stp : public aarch64_fmt_a64_LS_REG_PAIR_OFF
        {
          public:
          aarch64_insn_stp();
          virtual ~aarch64_insn_stp() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldp : public aarch64_fmt_a64_LS_REG_PAIR_OFF
        {
          public:
          aarch64_insn_ldp();
          virtual ~aarch64_insn_ldp() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldpsw : public aarch64_fmt_a64_LS_REG_PAIR_OFF
        {
          public:
          aarch64_insn_ldpsw();
          virtual ~aarch64_insn_ldpsw() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_LS_REG_REG_OFF : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_LS_REG_REG_OFF(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_LS_REG_REG_OFF() 
          {
          }
          uint8_t size;
          uint8_t V;
          uint8_t X;
          uint8_t L;
          uint8_t rm;
          uint8_t option;
          uint8_t S;
          uint8_t rn;
          uint8_t rt;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_strb_reg : public aarch64_fmt_a64_LS_REG_REG_OFF
        {
          public:
          aarch64_insn_strb_reg();
          virtual ~aarch64_insn_strb_reg() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_strh_reg : public aarch64_fmt_a64_LS_REG_REG_OFF
        {
          public:
          aarch64_insn_strh_reg();
          virtual ~aarch64_insn_strh_reg() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_str_reg : public aarch64_fmt_a64_LS_REG_REG_OFF
        {
          public:
          aarch64_insn_str_reg();
          virtual ~aarch64_insn_str_reg() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldrb_reg : public aarch64_fmt_a64_LS_REG_REG_OFF
        {
          public:
          aarch64_insn_ldrb_reg();
          virtual ~aarch64_insn_ldrb_reg() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldrh_reg : public aarch64_fmt_a64_LS_REG_REG_OFF
        {
          public:
          aarch64_insn_ldrh_reg();
          virtual ~aarch64_insn_ldrh_reg() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldr_reg : public aarch64_fmt_a64_LS_REG_REG_OFF
        {
          public:
          aarch64_insn_ldr_reg();
          virtual ~aarch64_insn_ldr_reg() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldrsw_reg : public aarch64_fmt_a64_LS_REG_REG_OFF
        {
          public:
          aarch64_insn_ldrsw_reg();
          virtual ~aarch64_insn_ldrsw_reg() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_LS_REG_UIMM : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_LS_REG_UIMM(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_LS_REG_UIMM() 
          {
          }
          uint8_t size;
          uint8_t V;
          uint8_t opc;
          uint16_t imm12;
          uint8_t rn;
          uint8_t rt;
          inline void decode_behaviour()
          {
            {
              immu64 = ((uint64_t)imm12) << size;
            }
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_strbi : public aarch64_fmt_a64_LS_REG_UIMM
        {
          public:
          aarch64_insn_strbi();
          virtual ~aarch64_insn_strbi() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldrbi : public aarch64_fmt_a64_LS_REG_UIMM
        {
          public:
          aarch64_insn_ldrbi();
          virtual ~aarch64_insn_ldrbi() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_strhi : public aarch64_fmt_a64_LS_REG_UIMM
        {
          public:
          aarch64_insn_strhi();
          virtual ~aarch64_insn_strhi() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldrhi : public aarch64_fmt_a64_LS_REG_UIMM
        {
          public:
          aarch64_insn_ldrhi();
          virtual ~aarch64_insn_ldrhi() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_stri : public aarch64_fmt_a64_LS_REG_UIMM
        {
          public:
          aarch64_insn_stri();
          virtual ~aarch64_insn_stri() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldri : public aarch64_fmt_a64_LS_REG_UIMM
        {
          public:
          aarch64_insn_ldri();
          virtual ~aarch64_insn_ldri() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldrswi : public aarch64_fmt_a64_LS_REG_UIMM
        {
          public:
          aarch64_insn_ldrswi();
          virtual ~aarch64_insn_ldrswi() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_LS_REG_UNPRIV : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_LS_REG_UNPRIV(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_LS_REG_UNPRIV() 
          {
          }
          uint8_t size;
          uint8_t V;
          uint8_t opc;
          uint16_t imm9;
          uint8_t rn;
          uint8_t rt;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_sttrb : public aarch64_fmt_a64_LS_REG_UNPRIV
        {
          public:
          aarch64_insn_sttrb();
          virtual ~aarch64_insn_sttrb() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldtrb : public aarch64_fmt_a64_LS_REG_UNPRIV
        {
          public:
          aarch64_insn_ldtrb();
          virtual ~aarch64_insn_ldtrb() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_sttrh : public aarch64_fmt_a64_LS_REG_UNPRIV
        {
          public:
          aarch64_insn_sttrh();
          virtual ~aarch64_insn_sttrh() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldtrh : public aarch64_fmt_a64_LS_REG_UNPRIV
        {
          public:
          aarch64_insn_ldtrh();
          virtual ~aarch64_insn_ldtrh() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_sttr : public aarch64_fmt_a64_LS_REG_UNPRIV
        {
          public:
          aarch64_insn_sttr();
          virtual ~aarch64_insn_sttr() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldtr : public aarch64_fmt_a64_LS_REG_UNPRIV
        {
          public:
          aarch64_insn_ldtr();
          virtual ~aarch64_insn_ldtr() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldtrsw : public aarch64_fmt_a64_LS_REG_UNPRIV
        {
          public:
          aarch64_insn_ldtrsw();
          virtual ~aarch64_insn_ldtrsw() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_LS_REG_USIMM : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_LS_REG_USIMM(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_LS_REG_USIMM() 
          {
          }
          uint8_t size;
          uint8_t V;
          uint8_t opc;
          uint16_t imm9;
          uint8_t rn;
          uint8_t rt;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_sturb : public aarch64_fmt_a64_LS_REG_USIMM
        {
          public:
          aarch64_insn_sturb();
          virtual ~aarch64_insn_sturb() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldurb : public aarch64_fmt_a64_LS_REG_USIMM
        {
          public:
          aarch64_insn_ldurb();
          virtual ~aarch64_insn_ldurb() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_sturh : public aarch64_fmt_a64_LS_REG_USIMM
        {
          public:
          aarch64_insn_sturh();
          virtual ~aarch64_insn_sturh() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldurh : public aarch64_fmt_a64_LS_REG_USIMM
        {
          public:
          aarch64_insn_ldurh();
          virtual ~aarch64_insn_ldurh() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_stur : public aarch64_fmt_a64_LS_REG_USIMM
        {
          public:
          aarch64_insn_stur();
          virtual ~aarch64_insn_stur() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldur : public aarch64_fmt_a64_LS_REG_USIMM
        {
          public:
          aarch64_insn_ldur();
          virtual ~aarch64_insn_ldur() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ldursw : public aarch64_fmt_a64_LS_REG_USIMM
        {
          public:
          aarch64_insn_ldursw();
          virtual ~aarch64_insn_ldursw() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_MOVE_WIDE_IMM : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_MOVE_WIDE_IMM(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_MOVE_WIDE_IMM() 
          {
          }
          uint8_t sf;
          uint8_t opc;
          uint8_t hw;
          uint16_t imm16;
          uint8_t rd;
          inline void decode_behaviour()
          {
            {
              shift = hw << 4;
            }
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_movn : public aarch64_fmt_a64_MOVE_WIDE_IMM
        {
          public:
          aarch64_insn_movn();
          virtual ~aarch64_insn_movn() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_movz : public aarch64_fmt_a64_MOVE_WIDE_IMM
        {
          public:
          aarch64_insn_movz();
          virtual ~aarch64_insn_movz() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_movk : public aarch64_fmt_a64_MOVE_WIDE_IMM
        {
          public:
          aarch64_insn_movk();
          virtual ~aarch64_insn_movk() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_PC_REL : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_PC_REL(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_PC_REL() 
          {
          }
          uint8_t op;
          uint8_t immlo;
          uint32_t immhi;
          uint8_t rd;
          inline void decode_behaviour()
          {
            {
              if (op == 0) 
              {
                imms64 = ((immhi << 2) | immlo);
              }
              else if (op == 1) 
              {
                imms64 = (((immhi << 2) | immlo) << 12);
              }
            }
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_adr : public aarch64_fmt_a64_PC_REL
        {
          public:
          aarch64_insn_adr();
          virtual ~aarch64_insn_adr() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_SYSTEM : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_SYSTEM(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_SYSTEM() 
          {
          }
          uint8_t l;
          uint8_t op0;
          uint8_t op1;
          uint8_t crn;
          uint8_t crm;
          uint8_t op2;
          uint8_t rt;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_msr_imm : public aarch64_fmt_a64_SYSTEM
        {
          public:
          aarch64_insn_msr_imm();
          virtual ~aarch64_insn_msr_imm() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_msr_reg : public aarch64_fmt_a64_SYSTEM
        {
          public:
          aarch64_insn_msr_reg();
          virtual ~aarch64_insn_msr_reg() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_mrs : public aarch64_fmt_a64_SYSTEM
        {
          public:
          aarch64_insn_mrs();
          virtual ~aarch64_insn_mrs() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_hint : public aarch64_fmt_a64_SYSTEM
        {
          public:
          aarch64_insn_hint();
          virtual ~aarch64_insn_hint() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_barrier : public aarch64_fmt_a64_SYSTEM
        {
          public:
          aarch64_insn_barrier();
          virtual ~aarch64_insn_barrier() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_sys : public aarch64_fmt_a64_SYSTEM
        {
          public:
          aarch64_insn_sys();
          virtual ~aarch64_insn_sys() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_TEST_B_IMM : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_TEST_B_IMM(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_TEST_B_IMM() 
          {
          }
          uint8_t b5;
          uint8_t op;
          uint8_t b40;
          uint16_t imm14;
          uint8_t rt;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_tbz : public aarch64_fmt_a64_TEST_B_IMM
        {
          public:
          aarch64_insn_tbz();
          virtual ~aarch64_insn_tbz() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_UB_IMM : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_UB_IMM(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_UB_IMM() 
          {
          }
          uint8_t op;
          uint32_t imm26;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_b : public aarch64_fmt_a64_UB_IMM
        {
          public:
          aarch64_insn_b();
          virtual ~aarch64_insn_b() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_fmt_a64_UB_REG : public aarch64_isa_a64
        {
          public:
          aarch64_fmt_a64_UB_REG(uint64_t opcode) : aarch64_isa_a64(opcode) 
          {
          }
          virtual ~aarch64_fmt_a64_UB_REG() 
          {
          }
          uint8_t opc;
          uint8_t op2;
          uint8_t op3;
          uint8_t rn;
          uint8_t op4;
          inline void decode_behaviour()
          {
          }
          inline bool decode_is_predicated() const
          {
            {
              return ((opcodes::opcodes)internal_opcode()) == opcodes::aarch64_a64_bcond;
            }
          }
          uint8_t length() const override 
          {
            return 4;
          }
        }
        ;
        class aarch64_insn_br : public aarch64_fmt_a64_UB_REG
        {
          public:
          aarch64_insn_br();
          virtual ~aarch64_insn_br() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_ret : public aarch64_fmt_a64_UB_REG
        {
          public:
          aarch64_insn_ret();
          virtual ~aarch64_insn_ret() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_eret : public aarch64_fmt_a64_UB_REG
        {
          public:
          aarch64_insn_eret();
          virtual ~aarch64_insn_eret() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
        class aarch64_insn_drps : public aarch64_fmt_a64_UB_REG
        {
          public:
          aarch64_insn_drps();
          virtual ~aarch64_insn_drps() 
          {
          }
          const char *disassemble(gpa_t pc) const override;
          bool translate(dbt::ir::Function& fn) const override;
        }
        ;
      }
    }
  }
}
