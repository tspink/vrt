#include "aarch64-decode.h"
using namespace vrt::arch;
using namespace vrt::arch::guest;
using namespace vrt::arch::guest::aarch64;
static char decode_object[256];
Instruction* aarch64_decode_a64::decode(hva_t va_ptr) 
{
  uint32_t ir = *(const uint32_t *)va_ptr;
  // Node 0
  switch (UNSIGNED_BITS(ir, 31,30)) 
  {
  case 3:
    {
      // Node 494
      switch (UNSIGNED_BITS(ir, 29,28)) 
      {
      case 1:
        {
          // Node 498
          switch (UNSIGNED_BITS(ir, 27,10)) 
          {
          case 176131:
            {
              // Node 362
              // Node 363
              aarch64_insn_rev *insn = new (decode_object) aarch64_insn_rev();
              insn->ir = ir;
              ((aarch64_insn_rev*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_rev*)insn)->S = BITSEL(ir, 29);
              ((aarch64_insn_rev*)insn)->opcode2 = UNSIGNED_BITS(ir, 20,16);
              ((aarch64_insn_rev*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_rev*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_rev*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_rev*)insn)->decode_behaviour();
              ((aarch64_insn_rev*)insn)->is_predicated = false;
              return insn;
              break;
            }
          case 176130:
            {
              // Node 368
              // Node 369
              aarch64_insn_rev32 *insn = new (decode_object) aarch64_insn_rev32();
              insn->ir = ir;
              ((aarch64_insn_rev32*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_rev32*)insn)->S = BITSEL(ir, 29);
              ((aarch64_insn_rev32*)insn)->opcode2 = UNSIGNED_BITS(ir, 20,16);
              ((aarch64_insn_rev32*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_rev32*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_rev32*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_rev32*)insn)->decode_behaviour();
              ((aarch64_insn_rev32*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          switch (UNSIGNED_BITS(ir, 27,22)) 
          {
          case 9:
            {
              // Node 129
              // Node 130
              aarch64_insn_eori *insn = new (decode_object) aarch64_insn_eori();
              insn->ir = ir;
              ((aarch64_insn_eori*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_eori*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_eori*)insn)->N = BITSEL(ir, 22);
              ((aarch64_insn_eori*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
              ((aarch64_insn_eori*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_eori*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_eori*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_eori*)insn)->decode_behaviour();
              ((aarch64_insn_eori*)insn)->is_predicated = false;
              return insn;
              break;
            }
          case 8:
            {
              // Node 131
              // Node 132
              aarch64_insn_eori *insn = new (decode_object) aarch64_insn_eori();
              insn->ir = ir;
              ((aarch64_insn_eori*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_eori*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_eori*)insn)->N = BITSEL(ir, 22);
              ((aarch64_insn_eori*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
              ((aarch64_insn_eori*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_eori*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_eori*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_eori*)insn)->decode_behaviour();
              ((aarch64_insn_eori*)insn)->is_predicated = false;
              return insn;
              break;
            }
          case 13:
            {
              // Node 478
              // Node 479
              aarch64_insn_ubfm *insn = new (decode_object) aarch64_insn_ubfm();
              insn->ir = ir;
              ((aarch64_insn_ubfm*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_ubfm*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_ubfm*)insn)->N = BITSEL(ir, 22);
              ((aarch64_insn_ubfm*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
              ((aarch64_insn_ubfm*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_ubfm*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_ubfm*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_ubfm*)insn)->decode_behaviour();
              ((aarch64_insn_ubfm*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          switch (UNSIGNED_BITS(ir, 27,24)) 
          {
          case 8:
            {
              // Node 355
              // Node 356
              aarch64_insn_prfm *insn = new (decode_object) aarch64_insn_prfm();
              insn->ir = ir;
              ((aarch64_insn_prfm*)insn)->opc = UNSIGNED_BITS(ir, 31,30);
              ((aarch64_insn_prfm*)insn)->V = BITSEL(ir, 26);
              ((aarch64_insn_prfm*)insn)->imm19 = UNSIGNED_BITS(ir, 23,5);
              ((aarch64_insn_prfm*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_prfm*)insn)->decode_behaviour();
              ((aarch64_insn_prfm*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          switch (UNSIGNED_BITS(ir, 27,26)) 
          {
          case 1:
            {
              // Node 500
              switch (UNSIGNED_BITS(ir, 25,21)) 
              {
              case 2:
                {
                  // Node 138
                  // Node 139
                  switch (UNSIGNED_BITS(ir, 4,0)) 
                  {
                  case 0:
                    {
                      // Node 140
                      aarch64_insn_exgen *insn = new (decode_object) aarch64_insn_exgen();
                      insn->ir = ir;
                      ((aarch64_insn_exgen*)insn)->opc = UNSIGNED_BITS(ir, 23,21);
                      ((aarch64_insn_exgen*)insn)->imm16 = UNSIGNED_BITS(ir, 20,5);
                      ((aarch64_insn_exgen*)insn)->op2 = UNSIGNED_BITS(ir, 4,2);
                      ((aarch64_insn_exgen*)insn)->ll = UNSIGNED_BITS(ir, 1,0);
                      ((aarch64_insn_exgen*)insn)->decode_behaviour();
                      ((aarch64_insn_exgen*)insn)->_cfi.IsControlFlow = true;
                      ((aarch64_insn_exgen*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  }
                  break;
                }
              case 1:
                {
                  // Node 141
                  // Node 142
                  switch (UNSIGNED_BITS(ir, 4,0)) 
                  {
                  case 0:
                    {
                      // Node 143
                      aarch64_insn_exgen *insn = new (decode_object) aarch64_insn_exgen();
                      insn->ir = ir;
                      ((aarch64_insn_exgen*)insn)->opc = UNSIGNED_BITS(ir, 23,21);
                      ((aarch64_insn_exgen*)insn)->imm16 = UNSIGNED_BITS(ir, 20,5);
                      ((aarch64_insn_exgen*)insn)->op2 = UNSIGNED_BITS(ir, 4,2);
                      ((aarch64_insn_exgen*)insn)->ll = UNSIGNED_BITS(ir, 1,0);
                      ((aarch64_insn_exgen*)insn)->decode_behaviour();
                      ((aarch64_insn_exgen*)insn)->_cfi.IsControlFlow = true;
                      ((aarch64_insn_exgen*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  }
                  break;
                }
              case 0:
                {
                  // Node 144
                  // Node 145
                  switch (UNSIGNED_BITS(ir, 4,0)) 
                  {
                  case 3:
                    {
                      // Node 146
                      aarch64_insn_exgen *insn = new (decode_object) aarch64_insn_exgen();
                      insn->ir = ir;
                      ((aarch64_insn_exgen*)insn)->opc = UNSIGNED_BITS(ir, 23,21);
                      ((aarch64_insn_exgen*)insn)->imm16 = UNSIGNED_BITS(ir, 20,5);
                      ((aarch64_insn_exgen*)insn)->op2 = UNSIGNED_BITS(ir, 4,2);
                      ((aarch64_insn_exgen*)insn)->ll = UNSIGNED_BITS(ir, 1,0);
                      ((aarch64_insn_exgen*)insn)->decode_behaviour();
                      ((aarch64_insn_exgen*)insn)->_cfi.IsControlFlow = true;
                      ((aarch64_insn_exgen*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 2:
                    {
                      // Node 147
                      aarch64_insn_exgen *insn = new (decode_object) aarch64_insn_exgen();
                      insn->ir = ir;
                      ((aarch64_insn_exgen*)insn)->opc = UNSIGNED_BITS(ir, 23,21);
                      ((aarch64_insn_exgen*)insn)->imm16 = UNSIGNED_BITS(ir, 20,5);
                      ((aarch64_insn_exgen*)insn)->op2 = UNSIGNED_BITS(ir, 4,2);
                      ((aarch64_insn_exgen*)insn)->ll = UNSIGNED_BITS(ir, 1,0);
                      ((aarch64_insn_exgen*)insn)->decode_behaviour();
                      ((aarch64_insn_exgen*)insn)->_cfi.IsControlFlow = true;
                      ((aarch64_insn_exgen*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 1:
                    {
                      // Node 148
                      aarch64_insn_exgen *insn = new (decode_object) aarch64_insn_exgen();
                      insn->ir = ir;
                      ((aarch64_insn_exgen*)insn)->opc = UNSIGNED_BITS(ir, 23,21);
                      ((aarch64_insn_exgen*)insn)->imm16 = UNSIGNED_BITS(ir, 20,5);
                      ((aarch64_insn_exgen*)insn)->op2 = UNSIGNED_BITS(ir, 4,2);
                      ((aarch64_insn_exgen*)insn)->ll = UNSIGNED_BITS(ir, 1,0);
                      ((aarch64_insn_exgen*)insn)->decode_behaviour();
                      ((aarch64_insn_exgen*)insn)->_cfi.IsControlFlow = true;
                      ((aarch64_insn_exgen*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  }
                  break;
                }
              }
              switch (UNSIGNED_BITS(ir, 25,22)) 
              {
              case 4:
                {
                  // Node 501
                  switch (UNSIGNED_BITS(ir, 21,12)) 
                  {
                  case 51:
                    {
                      // Node 47
                      // Node 48
                      switch (UNSIGNED_BITS(ir, 7,0)) 
                      {
                      case 223:
                        {
                          // Node 49
                          aarch64_insn_barrier *insn = new (decode_object) aarch64_insn_barrier();
                          insn->ir = ir;
                          ((aarch64_insn_barrier*)insn)->l = BITSEL(ir, 21);
                          ((aarch64_insn_barrier*)insn)->op0 = UNSIGNED_BITS(ir, 20,19);
                          ((aarch64_insn_barrier*)insn)->op1 = UNSIGNED_BITS(ir, 18,16);
                          ((aarch64_insn_barrier*)insn)->crn = UNSIGNED_BITS(ir, 15,12);
                          ((aarch64_insn_barrier*)insn)->crm = UNSIGNED_BITS(ir, 11,8);
                          ((aarch64_insn_barrier*)insn)->op2 = UNSIGNED_BITS(ir, 7,5);
                          ((aarch64_insn_barrier*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_barrier*)insn)->decode_behaviour();
                          ((aarch64_insn_barrier*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      case 191:
                        {
                          // Node 50
                          aarch64_insn_barrier *insn = new (decode_object) aarch64_insn_barrier();
                          insn->ir = ir;
                          ((aarch64_insn_barrier*)insn)->l = BITSEL(ir, 21);
                          ((aarch64_insn_barrier*)insn)->op0 = UNSIGNED_BITS(ir, 20,19);
                          ((aarch64_insn_barrier*)insn)->op1 = UNSIGNED_BITS(ir, 18,16);
                          ((aarch64_insn_barrier*)insn)->crn = UNSIGNED_BITS(ir, 15,12);
                          ((aarch64_insn_barrier*)insn)->crm = UNSIGNED_BITS(ir, 11,8);
                          ((aarch64_insn_barrier*)insn)->op2 = UNSIGNED_BITS(ir, 7,5);
                          ((aarch64_insn_barrier*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_barrier*)insn)->decode_behaviour();
                          ((aarch64_insn_barrier*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      case 159:
                        {
                          // Node 51
                          aarch64_insn_barrier *insn = new (decode_object) aarch64_insn_barrier();
                          insn->ir = ir;
                          ((aarch64_insn_barrier*)insn)->l = BITSEL(ir, 21);
                          ((aarch64_insn_barrier*)insn)->op0 = UNSIGNED_BITS(ir, 20,19);
                          ((aarch64_insn_barrier*)insn)->op1 = UNSIGNED_BITS(ir, 18,16);
                          ((aarch64_insn_barrier*)insn)->crn = UNSIGNED_BITS(ir, 15,12);
                          ((aarch64_insn_barrier*)insn)->crm = UNSIGNED_BITS(ir, 11,8);
                          ((aarch64_insn_barrier*)insn)->op2 = UNSIGNED_BITS(ir, 7,5);
                          ((aarch64_insn_barrier*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_barrier*)insn)->decode_behaviour();
                          ((aarch64_insn_barrier*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 50:
                    {
                      // Node 153
                      // Node 154
                      switch (UNSIGNED_BITS(ir, 4,0)) 
                      {
                      case 31:
                        {
                          // Node 155
                          aarch64_insn_hint *insn = new (decode_object) aarch64_insn_hint();
                          insn->ir = ir;
                          ((aarch64_insn_hint*)insn)->l = BITSEL(ir, 21);
                          ((aarch64_insn_hint*)insn)->op0 = UNSIGNED_BITS(ir, 20,19);
                          ((aarch64_insn_hint*)insn)->op1 = UNSIGNED_BITS(ir, 18,16);
                          ((aarch64_insn_hint*)insn)->crn = UNSIGNED_BITS(ir, 15,12);
                          ((aarch64_insn_hint*)insn)->crm = UNSIGNED_BITS(ir, 11,8);
                          ((aarch64_insn_hint*)insn)->op2 = UNSIGNED_BITS(ir, 7,5);
                          ((aarch64_insn_hint*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_hint*)insn)->decode_behaviour();
                          ((aarch64_insn_hint*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  }
                  switch (UNSIGNED_BITS(ir, 21,19)) 
                  {
                  case 7:
                    {
                      // Node 333
                      // Node 334
                      aarch64_insn_mrs *insn = new (decode_object) aarch64_insn_mrs();
                      insn->ir = ir;
                      ((aarch64_insn_mrs*)insn)->l = BITSEL(ir, 21);
                      ((aarch64_insn_mrs*)insn)->op0 = UNSIGNED_BITS(ir, 20,19);
                      ((aarch64_insn_mrs*)insn)->op1 = UNSIGNED_BITS(ir, 18,16);
                      ((aarch64_insn_mrs*)insn)->crn = UNSIGNED_BITS(ir, 15,12);
                      ((aarch64_insn_mrs*)insn)->crm = UNSIGNED_BITS(ir, 11,8);
                      ((aarch64_insn_mrs*)insn)->op2 = UNSIGNED_BITS(ir, 7,5);
                      ((aarch64_insn_mrs*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_mrs*)insn)->decode_behaviour();
                      ((aarch64_insn_mrs*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 6:
                    {
                      // Node 335
                      // Node 336
                      aarch64_insn_mrs *insn = new (decode_object) aarch64_insn_mrs();
                      insn->ir = ir;
                      ((aarch64_insn_mrs*)insn)->l = BITSEL(ir, 21);
                      ((aarch64_insn_mrs*)insn)->op0 = UNSIGNED_BITS(ir, 20,19);
                      ((aarch64_insn_mrs*)insn)->op1 = UNSIGNED_BITS(ir, 18,16);
                      ((aarch64_insn_mrs*)insn)->crn = UNSIGNED_BITS(ir, 15,12);
                      ((aarch64_insn_mrs*)insn)->crm = UNSIGNED_BITS(ir, 11,8);
                      ((aarch64_insn_mrs*)insn)->op2 = UNSIGNED_BITS(ir, 7,5);
                      ((aarch64_insn_mrs*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_mrs*)insn)->decode_behaviour();
                      ((aarch64_insn_mrs*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 0:
                    {
                      // Node 337
                      // Node 338
                      switch (UNSIGNED_BITS(ir, 15,12)) 
                      {
                      case 4:
                        {
                          // Node 339
                          // Node 340
                          switch (UNSIGNED_BITS(ir, 4,0)) 
                          {
                          case 31:
                            {
                              // Node 341
                              aarch64_insn_msr_imm *insn = new (decode_object) aarch64_insn_msr_imm();
                              insn->ir = ir;
                              ((aarch64_insn_msr_imm*)insn)->l = BITSEL(ir, 21);
                              ((aarch64_insn_msr_imm*)insn)->op0 = UNSIGNED_BITS(ir, 20,19);
                              ((aarch64_insn_msr_imm*)insn)->op1 = UNSIGNED_BITS(ir, 18,16);
                              ((aarch64_insn_msr_imm*)insn)->crn = UNSIGNED_BITS(ir, 15,12);
                              ((aarch64_insn_msr_imm*)insn)->crm = UNSIGNED_BITS(ir, 11,8);
                              ((aarch64_insn_msr_imm*)insn)->op2 = UNSIGNED_BITS(ir, 7,5);
                              ((aarch64_insn_msr_imm*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                              ((aarch64_insn_msr_imm*)insn)->decode_behaviour();
                              ((aarch64_insn_msr_imm*)insn)->is_predicated = false;
                              return insn;
                              break;
                            }
                          }
                          break;
                        }
                      }
                      break;
                    }
                  case 3:
                    {
                      // Node 342
                      // Node 343
                      aarch64_insn_msr_reg *insn = new (decode_object) aarch64_insn_msr_reg();
                      insn->ir = ir;
                      ((aarch64_insn_msr_reg*)insn)->l = BITSEL(ir, 21);
                      ((aarch64_insn_msr_reg*)insn)->op0 = UNSIGNED_BITS(ir, 20,19);
                      ((aarch64_insn_msr_reg*)insn)->op1 = UNSIGNED_BITS(ir, 18,16);
                      ((aarch64_insn_msr_reg*)insn)->crn = UNSIGNED_BITS(ir, 15,12);
                      ((aarch64_insn_msr_reg*)insn)->crm = UNSIGNED_BITS(ir, 11,8);
                      ((aarch64_insn_msr_reg*)insn)->op2 = UNSIGNED_BITS(ir, 7,5);
                      ((aarch64_insn_msr_reg*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_msr_reg*)insn)->decode_behaviour();
                      ((aarch64_insn_msr_reg*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 2:
                    {
                      // Node 344
                      // Node 345
                      aarch64_insn_msr_reg *insn = new (decode_object) aarch64_insn_msr_reg();
                      insn->ir = ir;
                      ((aarch64_insn_msr_reg*)insn)->l = BITSEL(ir, 21);
                      ((aarch64_insn_msr_reg*)insn)->op0 = UNSIGNED_BITS(ir, 20,19);
                      ((aarch64_insn_msr_reg*)insn)->op1 = UNSIGNED_BITS(ir, 18,16);
                      ((aarch64_insn_msr_reg*)insn)->crn = UNSIGNED_BITS(ir, 15,12);
                      ((aarch64_insn_msr_reg*)insn)->crm = UNSIGNED_BITS(ir, 11,8);
                      ((aarch64_insn_msr_reg*)insn)->op2 = UNSIGNED_BITS(ir, 7,5);
                      ((aarch64_insn_msr_reg*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_msr_reg*)insn)->decode_behaviour();
                      ((aarch64_insn_msr_reg*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 1:
                    {
                      // Node 474
                      // Node 475
                      aarch64_insn_sys *insn = new (decode_object) aarch64_insn_sys();
                      insn->ir = ir;
                      ((aarch64_insn_sys*)insn)->l = BITSEL(ir, 21);
                      ((aarch64_insn_sys*)insn)->op0 = UNSIGNED_BITS(ir, 20,19);
                      ((aarch64_insn_sys*)insn)->op1 = UNSIGNED_BITS(ir, 18,16);
                      ((aarch64_insn_sys*)insn)->crn = UNSIGNED_BITS(ir, 15,12);
                      ((aarch64_insn_sys*)insn)->crm = UNSIGNED_BITS(ir, 11,8);
                      ((aarch64_insn_sys*)insn)->op2 = UNSIGNED_BITS(ir, 7,5);
                      ((aarch64_insn_sys*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_sys*)insn)->decode_behaviour();
                      ((aarch64_insn_sys*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  }
                  break;
                }
              }
              switch (UNSIGNED_BITS(ir, 25,24)) 
              {
              case 2:
                {
                  // Node 502
                  switch (UNSIGNED_BITS(ir, 23,0)) 
                  {
                  case 12518368:
                    {
                      // Node 128
                      aarch64_insn_drps *insn = new (decode_object) aarch64_insn_drps();
                      insn->ir = ir;
                      ((aarch64_insn_drps*)insn)->opc = UNSIGNED_BITS(ir, 24,21);
                      ((aarch64_insn_drps*)insn)->op2 = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_drps*)insn)->op3 = UNSIGNED_BITS(ir, 15,10);
                      ((aarch64_insn_drps*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_drps*)insn)->op4 = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_drps*)insn)->decode_behaviour();
                      ((aarch64_insn_drps*)insn)->_cfi.IsControlFlow = true;
                      ((aarch64_insn_drps*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 10421216:
                    {
                      // Node 137
                      aarch64_insn_eret *insn = new (decode_object) aarch64_insn_eret();
                      insn->ir = ir;
                      ((aarch64_insn_eret*)insn)->opc = UNSIGNED_BITS(ir, 24,21);
                      ((aarch64_insn_eret*)insn)->op2 = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_eret*)insn)->op3 = UNSIGNED_BITS(ir, 15,10);
                      ((aarch64_insn_eret*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_eret*)insn)->op4 = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_eret*)insn)->decode_behaviour();
                      ((aarch64_insn_eret*)insn)->_cfi.IsControlFlow = true;
                      ((aarch64_insn_eret*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  }
                  switch (UNSIGNED_BITS(ir, 23,10)) 
                  {
                  case 4032:
                    {
                      // Node 64
                      // Node 65
                      switch (UNSIGNED_BITS(ir, 4,0)) 
                      {
                      case 0:
                        {
                          // Node 66
                          aarch64_insn_br *insn = new (decode_object) aarch64_insn_br();
                          insn->ir = ir;
                          ((aarch64_insn_br*)insn)->opc = UNSIGNED_BITS(ir, 24,21);
                          ((aarch64_insn_br*)insn)->op2 = UNSIGNED_BITS(ir, 20,16);
                          ((aarch64_insn_br*)insn)->op3 = UNSIGNED_BITS(ir, 15,10);
                          ((aarch64_insn_br*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_br*)insn)->op4 = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_br*)insn)->decode_behaviour();
                          ((aarch64_insn_br*)insn)->_cfi.IsControlFlow = true;
                          ((aarch64_insn_br*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 1984:
                    {
                      // Node 67
                      // Node 68
                      switch (UNSIGNED_BITS(ir, 4,0)) 
                      {
                      case 0:
                        {
                          // Node 69
                          aarch64_insn_br *insn = new (decode_object) aarch64_insn_br();
                          insn->ir = ir;
                          ((aarch64_insn_br*)insn)->opc = UNSIGNED_BITS(ir, 24,21);
                          ((aarch64_insn_br*)insn)->op2 = UNSIGNED_BITS(ir, 20,16);
                          ((aarch64_insn_br*)insn)->op3 = UNSIGNED_BITS(ir, 15,10);
                          ((aarch64_insn_br*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_br*)insn)->op4 = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_br*)insn)->decode_behaviour();
                          ((aarch64_insn_br*)insn)->_cfi.IsControlFlow = true;
                          ((aarch64_insn_br*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 6080:
                    {
                      // Node 359
                      // Node 360
                      switch (UNSIGNED_BITS(ir, 4,0)) 
                      {
                      case 0:
                        {
                          // Node 361
                          aarch64_insn_ret *insn = new (decode_object) aarch64_insn_ret();
                          insn->ir = ir;
                          ((aarch64_insn_ret*)insn)->opc = UNSIGNED_BITS(ir, 24,21);
                          ((aarch64_insn_ret*)insn)->op2 = UNSIGNED_BITS(ir, 20,16);
                          ((aarch64_insn_ret*)insn)->op3 = UNSIGNED_BITS(ir, 15,10);
                          ((aarch64_insn_ret*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ret*)insn)->op4 = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ret*)insn)->decode_behaviour();
                          ((aarch64_insn_ret*)insn)->_cfi.IsControlFlow = true;
                          ((aarch64_insn_ret*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  }
                  break;
                }
              }
              break;
            }
          }
          break;
        }
      case 3:
        {
          // Node 499
          switch (UNSIGNED_BITS(ir, 27,22)) 
          {
          case 9:
            {
              // Node 21
              // Node 22
              aarch64_insn_andi *insn = new (decode_object) aarch64_insn_andi();
              insn->ir = ir;
              ((aarch64_insn_andi*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_andi*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_andi*)insn)->N = BITSEL(ir, 22);
              ((aarch64_insn_andi*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
              ((aarch64_insn_andi*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_andi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_andi*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_andi*)insn)->decode_behaviour();
              ((aarch64_insn_andi*)insn)->is_predicated = false;
              return insn;
              break;
            }
          case 8:
            {
              // Node 23
              // Node 24
              aarch64_insn_andi *insn = new (decode_object) aarch64_insn_andi();
              insn->ir = ir;
              ((aarch64_insn_andi*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_andi*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_andi*)insn)->N = BITSEL(ir, 22);
              ((aarch64_insn_andi*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
              ((aarch64_insn_andi*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_andi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_andi*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_andi*)insn)->decode_behaviour();
              ((aarch64_insn_andi*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          switch (UNSIGNED_BITS(ir, 27,25)) 
          {
          case 4:
            {
              // Node 503
              switch (UNSIGNED_BITS(ir, 24,22)) 
              {
              case 5:
                {
                  // Node 250
                  // Node 251
                  aarch64_insn_ldri *insn = new (decode_object) aarch64_insn_ldri();
                  insn->ir = ir;
                  ((aarch64_insn_ldri*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                  ((aarch64_insn_ldri*)insn)->V = BITSEL(ir, 26);
                  ((aarch64_insn_ldri*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                  ((aarch64_insn_ldri*)insn)->imm12 = UNSIGNED_BITS(ir, 21,10);
                  ((aarch64_insn_ldri*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_ldri*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_ldri*)insn)->decode_behaviour();
                  ((aarch64_insn_ldri*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              case 4:
                {
                  // Node 438
                  // Node 439
                  aarch64_insn_stri *insn = new (decode_object) aarch64_insn_stri();
                  insn->ir = ir;
                  ((aarch64_insn_stri*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                  ((aarch64_insn_stri*)insn)->V = BITSEL(ir, 26);
                  ((aarch64_insn_stri*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                  ((aarch64_insn_stri*)insn)->imm12 = UNSIGNED_BITS(ir, 21,10);
                  ((aarch64_insn_stri*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_stri*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_stri*)insn)->decode_behaviour();
                  ((aarch64_insn_stri*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              }
              switch (UNSIGNED_BITS(ir, 24,23)) 
              {
              case 0:
                {
                  // Node 504
                  switch (UNSIGNED_BITS(ir, 22,21)) 
                  {
                  case 2:
                    {
                      // Node 174
                      // Node 266
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 267
                          // Node 268
                          aarch64_insn_ldtr *insn = new (decode_object) aarch64_insn_ldtr();
                          insn->ir = ir;
                          ((aarch64_insn_ldtr*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldtr*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldtr*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_ldtr*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldtr*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldtr*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldtr*)insn)->decode_behaviour();
                          ((aarch64_insn_ldtr*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      case 0:
                        {
                          // Node 297
                          // Node 298
                          aarch64_insn_ldur *insn = new (decode_object) aarch64_insn_ldur();
                          insn->ir = ir;
                          ((aarch64_insn_ldur*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldur*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldur*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_ldur*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldur*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldur*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldur*)insn)->decode_behaviour();
                          ((aarch64_insn_ldur*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      // Node 175
                      switch ((ir & BIT_LSB(10)) >> 10)
                      {
                      case 1:
                        {
                          // Node 176
                          // Node 177
                          aarch64_insn_ldr *insn = new (decode_object) aarch64_insn_ldr();
                          insn->ir = ir;
                          ((aarch64_insn_ldr*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldr*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldr*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_ldr*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_ldr*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldr*)insn)->P = BITSEL(ir, 11);
                          ((aarch64_insn_ldr*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldr*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldr*)insn)->decode_behaviour();
                          ((aarch64_insn_ldr*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 3:
                    {
                      // Node 186
                      // Node 187
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 188
                          // Node 189
                          aarch64_insn_ldr_reg *insn = new (decode_object) aarch64_insn_ldr_reg();
                          insn->ir = ir;
                          ((aarch64_insn_ldr_reg*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldr_reg*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldr_reg*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_ldr_reg*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_ldr_reg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                          ((aarch64_insn_ldr_reg*)insn)->option = UNSIGNED_BITS(ir, 15,13);
                          ((aarch64_insn_ldr_reg*)insn)->S = BITSEL(ir, 12);
                          ((aarch64_insn_ldr_reg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldr_reg*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldr_reg*)insn)->decode_behaviour();
                          ((aarch64_insn_ldr_reg*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 0:
                    {
                      // Node 402
                      // Node 442
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 443
                          // Node 444
                          aarch64_insn_sttr *insn = new (decode_object) aarch64_insn_sttr();
                          insn->ir = ir;
                          ((aarch64_insn_sttr*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_sttr*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_sttr*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_sttr*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_sttr*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_sttr*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_sttr*)insn)->decode_behaviour();
                          ((aarch64_insn_sttr*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      case 0:
                        {
                          // Node 454
                          // Node 455
                          aarch64_insn_stur *insn = new (decode_object) aarch64_insn_stur();
                          insn->ir = ir;
                          ((aarch64_insn_stur*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_stur*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_stur*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_stur*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_stur*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_stur*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_stur*)insn)->decode_behaviour();
                          ((aarch64_insn_stur*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      // Node 403
                      switch ((ir & BIT_LSB(10)) >> 10)
                      {
                      case 1:
                        {
                          // Node 404
                          // Node 405
                          aarch64_insn_str *insn = new (decode_object) aarch64_insn_str();
                          insn->ir = ir;
                          ((aarch64_insn_str*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_str*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_str*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_str*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_str*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_str*)insn)->P = BITSEL(ir, 11);
                          ((aarch64_insn_str*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_str*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_str*)insn)->decode_behaviour();
                          ((aarch64_insn_str*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 1:
                    {
                      // Node 410
                      // Node 411
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 412
                          // Node 413
                          aarch64_insn_str_reg *insn = new (decode_object) aarch64_insn_str_reg();
                          insn->ir = ir;
                          ((aarch64_insn_str_reg*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_str_reg*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_str_reg*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_str_reg*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_str_reg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                          ((aarch64_insn_str_reg*)insn)->option = UNSIGNED_BITS(ir, 15,13);
                          ((aarch64_insn_str_reg*)insn)->S = BITSEL(ir, 12);
                          ((aarch64_insn_str_reg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_str_reg*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_str_reg*)insn)->decode_behaviour();
                          ((aarch64_insn_str_reg*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  }
                  break;
                }
              }
              break;
            }
          }
          break;
        }
      }
      break;
    }
  case 2:
    {
      // Node 495
      switch (UNSIGNED_BITS(ir, 29,22)) 
      {
      case 165:
        {
          // Node 156
          // Node 157
          aarch64_insn_ldp *insn = new (decode_object) aarch64_insn_ldp();
          insn->ir = ir;
          ((aarch64_insn_ldp*)insn)->opc = UNSIGNED_BITS(ir, 31,30);
          ((aarch64_insn_ldp*)insn)->V = BITSEL(ir, 26);
          ((aarch64_insn_ldp*)insn)->L = BITSEL(ir, 22);
          ((aarch64_insn_ldp*)insn)->imm7 = UNSIGNED_BITS(ir, 21,15);
          ((aarch64_insn_ldp*)insn)->rt2 = UNSIGNED_BITS(ir, 14,10);
          ((aarch64_insn_ldp*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
          ((aarch64_insn_ldp*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
          ((aarch64_insn_ldp*)insn)->decode_behaviour();
          ((aarch64_insn_ldp*)insn)->is_predicated = false;
          return insn;
          break;
        }
      case 164:
        {
          // Node 394
          // Node 395
          aarch64_insn_stp *insn = new (decode_object) aarch64_insn_stp();
          insn->ir = ir;
          ((aarch64_insn_stp*)insn)->opc = UNSIGNED_BITS(ir, 31,30);
          ((aarch64_insn_stp*)insn)->V = BITSEL(ir, 26);
          ((aarch64_insn_stp*)insn)->L = BITSEL(ir, 22);
          ((aarch64_insn_stp*)insn)->imm7 = UNSIGNED_BITS(ir, 21,15);
          ((aarch64_insn_stp*)insn)->rt2 = UNSIGNED_BITS(ir, 14,10);
          ((aarch64_insn_stp*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
          ((aarch64_insn_stp*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
          ((aarch64_insn_stp*)insn)->decode_behaviour();
          ((aarch64_insn_stp*)insn)->is_predicated = false;
          return insn;
          break;
        }
      }
      switch (UNSIGNED_BITS(ir, 29,25)) 
      {
      case 20:
        {
          // Node 160
          // Node 161
          switch (UNSIGNED_BITS(ir, 23,22)) 
          {
          case 3:
            {
              // Node 162
              // Node 163
              aarch64_insn_ldpi *insn = new (decode_object) aarch64_insn_ldpi();
              insn->ir = ir;
              ((aarch64_insn_ldpi*)insn)->opc = UNSIGNED_BITS(ir, 31,30);
              ((aarch64_insn_ldpi*)insn)->V = BITSEL(ir, 26);
              ((aarch64_insn_ldpi*)insn)->P = BITSEL(ir, 24);
              ((aarch64_insn_ldpi*)insn)->L = BITSEL(ir, 22);
              ((aarch64_insn_ldpi*)insn)->imm7 = UNSIGNED_BITS(ir, 21,15);
              ((aarch64_insn_ldpi*)insn)->rt2 = UNSIGNED_BITS(ir, 14,10);
              ((aarch64_insn_ldpi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_ldpi*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_ldpi*)insn)->decode_behaviour();
              ((aarch64_insn_ldpi*)insn)->is_predicated = false;
              return insn;
              break;
            }
          case 2:
            {
              // Node 398
              // Node 399
              aarch64_insn_stpi *insn = new (decode_object) aarch64_insn_stpi();
              insn->ir = ir;
              ((aarch64_insn_stpi*)insn)->opc = UNSIGNED_BITS(ir, 31,30);
              ((aarch64_insn_stpi*)insn)->V = BITSEL(ir, 26);
              ((aarch64_insn_stpi*)insn)->P = BITSEL(ir, 24);
              ((aarch64_insn_stpi*)insn)->L = BITSEL(ir, 22);
              ((aarch64_insn_stpi*)insn)->imm7 = UNSIGNED_BITS(ir, 21,15);
              ((aarch64_insn_stpi*)insn)->rt2 = UNSIGNED_BITS(ir, 14,10);
              ((aarch64_insn_stpi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_stpi*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_stpi*)insn)->decode_behaviour();
              ((aarch64_insn_stpi*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          break;
        }
      }
      switch (UNSIGNED_BITS(ir, 29,28)) 
      {
      case 3:
        {
          // Node 505
          switch (UNSIGNED_BITS(ir, 27,22)) 
          {
          case 13:
            {
              // Node 56
              // Node 57
              aarch64_insn_bfm *insn = new (decode_object) aarch64_insn_bfm();
              insn->ir = ir;
              ((aarch64_insn_bfm*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_bfm*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_bfm*)insn)->N = BITSEL(ir, 22);
              ((aarch64_insn_bfm*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
              ((aarch64_insn_bfm*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_bfm*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_bfm*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_bfm*)insn)->decode_behaviour();
              ((aarch64_insn_bfm*)insn)->is_predicated = false;
              return insn;
              break;
            }
          case 9:
            {
              // Node 348
              // Node 349
              aarch64_insn_orri *insn = new (decode_object) aarch64_insn_orri();
              insn->ir = ir;
              ((aarch64_insn_orri*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_orri*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_orri*)insn)->N = BITSEL(ir, 22);
              ((aarch64_insn_orri*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
              ((aarch64_insn_orri*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_orri*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_orri*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_orri*)insn)->decode_behaviour();
              ((aarch64_insn_orri*)insn)->is_predicated = false;
              return insn;
              break;
            }
          case 8:
            {
              // Node 350
              // Node 351
              aarch64_insn_orri *insn = new (decode_object) aarch64_insn_orri();
              insn->ir = ir;
              ((aarch64_insn_orri*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_orri*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_orri*)insn)->N = BITSEL(ir, 22);
              ((aarch64_insn_orri*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
              ((aarch64_insn_orri*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_orri*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_orri*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_orri*)insn)->decode_behaviour();
              ((aarch64_insn_orri*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          switch (UNSIGNED_BITS(ir, 27,25)) 
          {
          case 4:
            {
              // Node 507
              switch (UNSIGNED_BITS(ir, 24,21)) 
              {
              case 4:
                {
                  // Node 254
                  // Node 294
                  switch (UNSIGNED_BITS(ir, 11,10)) 
                  {
                  case 2:
                    {
                      // Node 295
                      // Node 296
                      aarch64_insn_ldtrsw *insn = new (decode_object) aarch64_insn_ldtrsw();
                      insn->ir = ir;
                      ((aarch64_insn_ldtrsw*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                      ((aarch64_insn_ldtrsw*)insn)->V = BITSEL(ir, 26);
                      ((aarch64_insn_ldtrsw*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                      ((aarch64_insn_ldtrsw*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                      ((aarch64_insn_ldtrsw*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_ldtrsw*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_ldtrsw*)insn)->decode_behaviour();
                      ((aarch64_insn_ldtrsw*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 0:
                    {
                      // Node 313
                      // Node 314
                      aarch64_insn_ldursw *insn = new (decode_object) aarch64_insn_ldursw();
                      insn->ir = ir;
                      ((aarch64_insn_ldursw*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                      ((aarch64_insn_ldursw*)insn)->V = BITSEL(ir, 26);
                      ((aarch64_insn_ldursw*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                      ((aarch64_insn_ldursw*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                      ((aarch64_insn_ldursw*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_ldursw*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_ldursw*)insn)->decode_behaviour();
                      ((aarch64_insn_ldursw*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  }
                  // Node 255
                  switch ((ir & BIT_LSB(10)) >> 10)
                  {
                  case 1:
                    {
                      // Node 256
                      // Node 257
                      aarch64_insn_ldrsw *insn = new (decode_object) aarch64_insn_ldrsw();
                      insn->ir = ir;
                      ((aarch64_insn_ldrsw*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                      ((aarch64_insn_ldrsw*)insn)->V = BITSEL(ir, 26);
                      ((aarch64_insn_ldrsw*)insn)->X = BITSEL(ir, 23);
                      ((aarch64_insn_ldrsw*)insn)->L = BITSEL(ir, 22);
                      ((aarch64_insn_ldrsw*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                      ((aarch64_insn_ldrsw*)insn)->P = BITSEL(ir, 11);
                      ((aarch64_insn_ldrsw*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_ldrsw*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_ldrsw*)insn)->decode_behaviour();
                      ((aarch64_insn_ldrsw*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  }
                  break;
                }
              case 5:
                {
                  // Node 260
                  // Node 261
                  switch (UNSIGNED_BITS(ir, 11,10)) 
                  {
                  case 2:
                    {
                      // Node 262
                      // Node 263
                      aarch64_insn_ldrsw_reg *insn = new (decode_object) aarch64_insn_ldrsw_reg();
                      insn->ir = ir;
                      ((aarch64_insn_ldrsw_reg*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                      ((aarch64_insn_ldrsw_reg*)insn)->V = BITSEL(ir, 26);
                      ((aarch64_insn_ldrsw_reg*)insn)->X = BITSEL(ir, 23);
                      ((aarch64_insn_ldrsw_reg*)insn)->L = BITSEL(ir, 22);
                      ((aarch64_insn_ldrsw_reg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_ldrsw_reg*)insn)->option = UNSIGNED_BITS(ir, 15,13);
                      ((aarch64_insn_ldrsw_reg*)insn)->S = BITSEL(ir, 12);
                      ((aarch64_insn_ldrsw_reg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_ldrsw_reg*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_ldrsw_reg*)insn)->decode_behaviour();
                      ((aarch64_insn_ldrsw_reg*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  }
                  break;
                }
              }
              switch (UNSIGNED_BITS(ir, 24,22)) 
              {
              case 5:
                {
                  // Node 252
                  // Node 253
                  aarch64_insn_ldri *insn = new (decode_object) aarch64_insn_ldri();
                  insn->ir = ir;
                  ((aarch64_insn_ldri*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                  ((aarch64_insn_ldri*)insn)->V = BITSEL(ir, 26);
                  ((aarch64_insn_ldri*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                  ((aarch64_insn_ldri*)insn)->imm12 = UNSIGNED_BITS(ir, 21,10);
                  ((aarch64_insn_ldri*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_ldri*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_ldri*)insn)->decode_behaviour();
                  ((aarch64_insn_ldri*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              case 6:
                {
                  // Node 264
                  // Node 265
                  aarch64_insn_ldrswi *insn = new (decode_object) aarch64_insn_ldrswi();
                  insn->ir = ir;
                  ((aarch64_insn_ldrswi*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                  ((aarch64_insn_ldrswi*)insn)->V = BITSEL(ir, 26);
                  ((aarch64_insn_ldrswi*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                  ((aarch64_insn_ldrswi*)insn)->imm12 = UNSIGNED_BITS(ir, 21,10);
                  ((aarch64_insn_ldrswi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_ldrswi*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_ldrswi*)insn)->decode_behaviour();
                  ((aarch64_insn_ldrswi*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              case 4:
                {
                  // Node 440
                  // Node 441
                  aarch64_insn_stri *insn = new (decode_object) aarch64_insn_stri();
                  insn->ir = ir;
                  ((aarch64_insn_stri*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                  ((aarch64_insn_stri*)insn)->V = BITSEL(ir, 26);
                  ((aarch64_insn_stri*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                  ((aarch64_insn_stri*)insn)->imm12 = UNSIGNED_BITS(ir, 21,10);
                  ((aarch64_insn_stri*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_stri*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_stri*)insn)->decode_behaviour();
                  ((aarch64_insn_stri*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              }
              switch (UNSIGNED_BITS(ir, 24,23)) 
              {
              case 0:
                {
                  // Node 508
                  switch (UNSIGNED_BITS(ir, 22,21)) 
                  {
                  case 2:
                    {
                      // Node 178
                      // Node 269
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 270
                          // Node 271
                          aarch64_insn_ldtr *insn = new (decode_object) aarch64_insn_ldtr();
                          insn->ir = ir;
                          ((aarch64_insn_ldtr*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldtr*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldtr*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_ldtr*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldtr*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldtr*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldtr*)insn)->decode_behaviour();
                          ((aarch64_insn_ldtr*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      case 0:
                        {
                          // Node 299
                          // Node 300
                          aarch64_insn_ldur *insn = new (decode_object) aarch64_insn_ldur();
                          insn->ir = ir;
                          ((aarch64_insn_ldur*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldur*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldur*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_ldur*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldur*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldur*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldur*)insn)->decode_behaviour();
                          ((aarch64_insn_ldur*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      // Node 179
                      switch ((ir & BIT_LSB(10)) >> 10)
                      {
                      case 1:
                        {
                          // Node 180
                          // Node 181
                          aarch64_insn_ldr *insn = new (decode_object) aarch64_insn_ldr();
                          insn->ir = ir;
                          ((aarch64_insn_ldr*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldr*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldr*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_ldr*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_ldr*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldr*)insn)->P = BITSEL(ir, 11);
                          ((aarch64_insn_ldr*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldr*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldr*)insn)->decode_behaviour();
                          ((aarch64_insn_ldr*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 3:
                    {
                      // Node 190
                      // Node 191
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 192
                          // Node 193
                          aarch64_insn_ldr_reg *insn = new (decode_object) aarch64_insn_ldr_reg();
                          insn->ir = ir;
                          ((aarch64_insn_ldr_reg*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldr_reg*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldr_reg*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_ldr_reg*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_ldr_reg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                          ((aarch64_insn_ldr_reg*)insn)->option = UNSIGNED_BITS(ir, 15,13);
                          ((aarch64_insn_ldr_reg*)insn)->S = BITSEL(ir, 12);
                          ((aarch64_insn_ldr_reg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldr_reg*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldr_reg*)insn)->decode_behaviour();
                          ((aarch64_insn_ldr_reg*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 0:
                    {
                      // Node 406
                      // Node 445
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 446
                          // Node 447
                          aarch64_insn_sttr *insn = new (decode_object) aarch64_insn_sttr();
                          insn->ir = ir;
                          ((aarch64_insn_sttr*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_sttr*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_sttr*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_sttr*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_sttr*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_sttr*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_sttr*)insn)->decode_behaviour();
                          ((aarch64_insn_sttr*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      case 0:
                        {
                          // Node 456
                          // Node 457
                          aarch64_insn_stur *insn = new (decode_object) aarch64_insn_stur();
                          insn->ir = ir;
                          ((aarch64_insn_stur*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_stur*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_stur*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_stur*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_stur*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_stur*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_stur*)insn)->decode_behaviour();
                          ((aarch64_insn_stur*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      // Node 407
                      switch ((ir & BIT_LSB(10)) >> 10)
                      {
                      case 1:
                        {
                          // Node 408
                          // Node 409
                          aarch64_insn_str *insn = new (decode_object) aarch64_insn_str();
                          insn->ir = ir;
                          ((aarch64_insn_str*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_str*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_str*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_str*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_str*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_str*)insn)->P = BITSEL(ir, 11);
                          ((aarch64_insn_str*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_str*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_str*)insn)->decode_behaviour();
                          ((aarch64_insn_str*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 1:
                    {
                      // Node 414
                      // Node 415
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 416
                          // Node 417
                          aarch64_insn_str_reg *insn = new (decode_object) aarch64_insn_str_reg();
                          insn->ir = ir;
                          ((aarch64_insn_str_reg*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_str_reg*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_str_reg*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_str_reg*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_str_reg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                          ((aarch64_insn_str_reg*)insn)->option = UNSIGNED_BITS(ir, 15,13);
                          ((aarch64_insn_str_reg*)insn)->S = BITSEL(ir, 12);
                          ((aarch64_insn_str_reg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_str_reg*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_str_reg*)insn)->decode_behaviour();
                          ((aarch64_insn_str_reg*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  }
                  break;
                }
              }
              break;
            }
          }
          break;
        }
      case 1:
        {
          // Node 506
          switch (UNSIGNED_BITS(ir, 27,21)) 
          {
          case 86:
            {
              // Node 96
              // Node 97
              switch (UNSIGNED_BITS(ir, 15,10)) 
              {
              case 19:
                {
                  // Node 98
                  // Node 99
                  aarch64_insn_crc32 *insn = new (decode_object) aarch64_insn_crc32();
                  insn->ir = ir;
                  ((aarch64_insn_crc32*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_crc32*)insn)->S = BITSEL(ir, 29);
                  ((aarch64_insn_crc32*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                  ((aarch64_insn_crc32*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                  ((aarch64_insn_crc32*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_crc32*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_crc32*)insn)->decode_behaviour();
                  ((aarch64_insn_crc32*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              case 23:
                {
                  // Node 108
                  // Node 109
                  aarch64_insn_crc32c *insn = new (decode_object) aarch64_insn_crc32c();
                  insn->ir = ir;
                  ((aarch64_insn_crc32c*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_crc32c*)insn)->S = BITSEL(ir, 29);
                  ((aarch64_insn_crc32c*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                  ((aarch64_insn_crc32c*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                  ((aarch64_insn_crc32c*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_crc32c*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_crc32c*)insn)->decode_behaviour();
                  ((aarch64_insn_crc32c*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              }
              break;
            }
          }
          switch (UNSIGNED_BITS(ir, 27,24)) 
          {
          case 8:
            {
              // Node 258
              // Node 259
              aarch64_insn_ldrsw_lit *insn = new (decode_object) aarch64_insn_ldrsw_lit();
              insn->ir = ir;
              ((aarch64_insn_ldrsw_lit*)insn)->opc = UNSIGNED_BITS(ir, 31,30);
              ((aarch64_insn_ldrsw_lit*)insn)->V = BITSEL(ir, 26);
              ((aarch64_insn_ldrsw_lit*)insn)->imm19 = UNSIGNED_BITS(ir, 23,5);
              ((aarch64_insn_ldrsw_lit*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_ldrsw_lit*)insn)->decode_behaviour();
              ((aarch64_insn_ldrsw_lit*)insn)->is_predicated = false;
              return insn;
              break;
            }
          case 13:
            {
              // Node 509
              switch (UNSIGNED_BITS(ir, 23,21)) 
              {
              case 1:
                {
                  // Node 384
                  // Node 385
                  switch ((ir & BIT_LSB(15)) >> 15)
                  {
                  case 0:
                    {
                      // Node 386
                      // Node 387
                      aarch64_insn_smaddl *insn = new (decode_object) aarch64_insn_smaddl();
                      insn->ir = ir;
                      ((aarch64_insn_smaddl*)insn)->sf = BITSEL(ir, 31);
                      ((aarch64_insn_smaddl*)insn)->op54 = UNSIGNED_BITS(ir, 30,29);
                      ((aarch64_insn_smaddl*)insn)->op31 = UNSIGNED_BITS(ir, 23,21);
                      ((aarch64_insn_smaddl*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_smaddl*)insn)->o0 = BITSEL(ir, 15);
                      ((aarch64_insn_smaddl*)insn)->ra = UNSIGNED_BITS(ir, 14,10);
                      ((aarch64_insn_smaddl*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_smaddl*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_smaddl*)insn)->decode_behaviour();
                      ((aarch64_insn_smaddl*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 1:
                    {
                      // Node 388
                      // Node 389
                      aarch64_insn_smsubl *insn = new (decode_object) aarch64_insn_smsubl();
                      insn->ir = ir;
                      ((aarch64_insn_smsubl*)insn)->sf = BITSEL(ir, 31);
                      ((aarch64_insn_smsubl*)insn)->op54 = UNSIGNED_BITS(ir, 30,29);
                      ((aarch64_insn_smsubl*)insn)->op31 = UNSIGNED_BITS(ir, 23,21);
                      ((aarch64_insn_smsubl*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_smsubl*)insn)->o0 = BITSEL(ir, 15);
                      ((aarch64_insn_smsubl*)insn)->ra = UNSIGNED_BITS(ir, 14,10);
                      ((aarch64_insn_smsubl*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_smsubl*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_smsubl*)insn)->decode_behaviour();
                      ((aarch64_insn_smsubl*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  }
                  break;
                }
              case 2:
                {
                  // Node 390
                  // Node 391
                  switch ((ir & BIT_LSB(15)) >> 15)
                  {
                  case 0:
                    {
                      // Node 392
                      // Node 393
                      aarch64_insn_smulh *insn = new (decode_object) aarch64_insn_smulh();
                      insn->ir = ir;
                      ((aarch64_insn_smulh*)insn)->sf = BITSEL(ir, 31);
                      ((aarch64_insn_smulh*)insn)->op54 = UNSIGNED_BITS(ir, 30,29);
                      ((aarch64_insn_smulh*)insn)->op31 = UNSIGNED_BITS(ir, 23,21);
                      ((aarch64_insn_smulh*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_smulh*)insn)->o0 = BITSEL(ir, 15);
                      ((aarch64_insn_smulh*)insn)->ra = UNSIGNED_BITS(ir, 14,10);
                      ((aarch64_insn_smulh*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_smulh*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_smulh*)insn)->decode_behaviour();
                      ((aarch64_insn_smulh*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  }
                  break;
                }
              case 5:
                {
                  // Node 484
                  // Node 485
                  switch ((ir & BIT_LSB(15)) >> 15)
                  {
                  case 0:
                    {
                      // Node 486
                      // Node 487
                      aarch64_insn_umaddl *insn = new (decode_object) aarch64_insn_umaddl();
                      insn->ir = ir;
                      ((aarch64_insn_umaddl*)insn)->sf = BITSEL(ir, 31);
                      ((aarch64_insn_umaddl*)insn)->op54 = UNSIGNED_BITS(ir, 30,29);
                      ((aarch64_insn_umaddl*)insn)->op31 = UNSIGNED_BITS(ir, 23,21);
                      ((aarch64_insn_umaddl*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_umaddl*)insn)->o0 = BITSEL(ir, 15);
                      ((aarch64_insn_umaddl*)insn)->ra = UNSIGNED_BITS(ir, 14,10);
                      ((aarch64_insn_umaddl*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_umaddl*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_umaddl*)insn)->decode_behaviour();
                      ((aarch64_insn_umaddl*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 1:
                    {
                      // Node 488
                      // Node 489
                      aarch64_insn_umsubl *insn = new (decode_object) aarch64_insn_umsubl();
                      insn->ir = ir;
                      ((aarch64_insn_umsubl*)insn)->sf = BITSEL(ir, 31);
                      ((aarch64_insn_umsubl*)insn)->op54 = UNSIGNED_BITS(ir, 30,29);
                      ((aarch64_insn_umsubl*)insn)->op31 = UNSIGNED_BITS(ir, 23,21);
                      ((aarch64_insn_umsubl*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_umsubl*)insn)->o0 = BITSEL(ir, 15);
                      ((aarch64_insn_umsubl*)insn)->ra = UNSIGNED_BITS(ir, 14,10);
                      ((aarch64_insn_umsubl*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_umsubl*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_umsubl*)insn)->decode_behaviour();
                      ((aarch64_insn_umsubl*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  }
                  break;
                }
              case 6:
                {
                  // Node 490
                  // Node 491
                  switch ((ir & BIT_LSB(15)) >> 15)
                  {
                  case 0:
                    {
                      // Node 492
                      // Node 493
                      aarch64_insn_umulh *insn = new (decode_object) aarch64_insn_umulh();
                      insn->ir = ir;
                      ((aarch64_insn_umulh*)insn)->sf = BITSEL(ir, 31);
                      ((aarch64_insn_umulh*)insn)->op54 = UNSIGNED_BITS(ir, 30,29);
                      ((aarch64_insn_umulh*)insn)->op31 = UNSIGNED_BITS(ir, 23,21);
                      ((aarch64_insn_umulh*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_umulh*)insn)->o0 = BITSEL(ir, 15);
                      ((aarch64_insn_umulh*)insn)->ra = UNSIGNED_BITS(ir, 14,10);
                      ((aarch64_insn_umulh*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_umulh*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_umulh*)insn)->decode_behaviour();
                      ((aarch64_insn_umulh*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  }
                  break;
                }
              }
              break;
            }
          }
          switch (UNSIGNED_BITS(ir, 27,25)) 
          {
          case 1:
            {
              // Node 510
              switch (UNSIGNED_BITS(ir, 24,21)) 
              {
              case 14:
                {
                  // Node 149
                  // Node 150
                  aarch64_insn_extr *insn = new (decode_object) aarch64_insn_extr();
                  insn->ir = ir;
                  ((aarch64_insn_extr*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_extr*)insn)->op21 = UNSIGNED_BITS(ir, 30,29);
                  ((aarch64_insn_extr*)insn)->N = BITSEL(ir, 22);
                  ((aarch64_insn_extr*)insn)->o0 = BITSEL(ir, 21);
                  ((aarch64_insn_extr*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                  ((aarch64_insn_extr*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
                  ((aarch64_insn_extr*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_extr*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_extr*)insn)->decode_behaviour();
                  ((aarch64_insn_extr*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              }
              switch (UNSIGNED_BITS(ir, 24,22)) 
              {
              case 1:
                {
                  // Node 27
                  // Node 28
                  aarch64_insn_andi *insn = new (decode_object) aarch64_insn_andi();
                  insn->ir = ir;
                  ((aarch64_insn_andi*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_andi*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
                  ((aarch64_insn_andi*)insn)->N = BITSEL(ir, 22);
                  ((aarch64_insn_andi*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
                  ((aarch64_insn_andi*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
                  ((aarch64_insn_andi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_andi*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_andi*)insn)->decode_behaviour();
                  ((aarch64_insn_andi*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              case 0:
                {
                  // Node 29
                  // Node 30
                  aarch64_insn_andi *insn = new (decode_object) aarch64_insn_andi();
                  insn->ir = ir;
                  ((aarch64_insn_andi*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_andi*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
                  ((aarch64_insn_andi*)insn)->N = BITSEL(ir, 22);
                  ((aarch64_insn_andi*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
                  ((aarch64_insn_andi*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
                  ((aarch64_insn_andi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_andi*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_andi*)insn)->decode_behaviour();
                  ((aarch64_insn_andi*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              case 5:
                {
                  // Node 378
                  // Node 379
                  aarch64_insn_sbfm *insn = new (decode_object) aarch64_insn_sbfm();
                  insn->ir = ir;
                  ((aarch64_insn_sbfm*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_sbfm*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
                  ((aarch64_insn_sbfm*)insn)->N = BITSEL(ir, 22);
                  ((aarch64_insn_sbfm*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
                  ((aarch64_insn_sbfm*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
                  ((aarch64_insn_sbfm*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_sbfm*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_sbfm*)insn)->decode_behaviour();
                  ((aarch64_insn_sbfm*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              }
              break;
            }
          }
          break;
        }
      }
      break;
    }
  case 0:
    {
      // Node 496
      switch (UNSIGNED_BITS(ir, 29,22)) 
      {
      case 165:
        {
          // Node 158
          // Node 159
          aarch64_insn_ldp *insn = new (decode_object) aarch64_insn_ldp();
          insn->ir = ir;
          ((aarch64_insn_ldp*)insn)->opc = UNSIGNED_BITS(ir, 31,30);
          ((aarch64_insn_ldp*)insn)->V = BITSEL(ir, 26);
          ((aarch64_insn_ldp*)insn)->L = BITSEL(ir, 22);
          ((aarch64_insn_ldp*)insn)->imm7 = UNSIGNED_BITS(ir, 21,15);
          ((aarch64_insn_ldp*)insn)->rt2 = UNSIGNED_BITS(ir, 14,10);
          ((aarch64_insn_ldp*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
          ((aarch64_insn_ldp*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
          ((aarch64_insn_ldp*)insn)->decode_behaviour();
          ((aarch64_insn_ldp*)insn)->is_predicated = false;
          return insn;
          break;
        }
      case 164:
        {
          // Node 396
          // Node 397
          aarch64_insn_stp *insn = new (decode_object) aarch64_insn_stp();
          insn->ir = ir;
          ((aarch64_insn_stp*)insn)->opc = UNSIGNED_BITS(ir, 31,30);
          ((aarch64_insn_stp*)insn)->V = BITSEL(ir, 26);
          ((aarch64_insn_stp*)insn)->L = BITSEL(ir, 22);
          ((aarch64_insn_stp*)insn)->imm7 = UNSIGNED_BITS(ir, 21,15);
          ((aarch64_insn_stp*)insn)->rt2 = UNSIGNED_BITS(ir, 14,10);
          ((aarch64_insn_stp*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
          ((aarch64_insn_stp*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
          ((aarch64_insn_stp*)insn)->decode_behaviour();
          ((aarch64_insn_stp*)insn)->is_predicated = false;
          return insn;
          break;
        }
      }
      switch (UNSIGNED_BITS(ir, 29,25)) 
      {
      case 20:
        {
          // Node 164
          // Node 165
          switch (UNSIGNED_BITS(ir, 23,22)) 
          {
          case 3:
            {
              // Node 166
              // Node 167
              aarch64_insn_ldpi *insn = new (decode_object) aarch64_insn_ldpi();
              insn->ir = ir;
              ((aarch64_insn_ldpi*)insn)->opc = UNSIGNED_BITS(ir, 31,30);
              ((aarch64_insn_ldpi*)insn)->V = BITSEL(ir, 26);
              ((aarch64_insn_ldpi*)insn)->P = BITSEL(ir, 24);
              ((aarch64_insn_ldpi*)insn)->L = BITSEL(ir, 22);
              ((aarch64_insn_ldpi*)insn)->imm7 = UNSIGNED_BITS(ir, 21,15);
              ((aarch64_insn_ldpi*)insn)->rt2 = UNSIGNED_BITS(ir, 14,10);
              ((aarch64_insn_ldpi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_ldpi*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_ldpi*)insn)->decode_behaviour();
              ((aarch64_insn_ldpi*)insn)->is_predicated = false;
              return insn;
              break;
            }
          case 2:
            {
              // Node 400
              // Node 401
              aarch64_insn_stpi *insn = new (decode_object) aarch64_insn_stpi();
              insn->ir = ir;
              ((aarch64_insn_stpi*)insn)->opc = UNSIGNED_BITS(ir, 31,30);
              ((aarch64_insn_stpi*)insn)->V = BITSEL(ir, 26);
              ((aarch64_insn_stpi*)insn)->P = BITSEL(ir, 24);
              ((aarch64_insn_stpi*)insn)->L = BITSEL(ir, 22);
              ((aarch64_insn_stpi*)insn)->imm7 = UNSIGNED_BITS(ir, 21,15);
              ((aarch64_insn_stpi*)insn)->rt2 = UNSIGNED_BITS(ir, 14,10);
              ((aarch64_insn_stpi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_stpi*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_stpi*)insn)->decode_behaviour();
              ((aarch64_insn_stpi*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          break;
        }
      }
      switch (UNSIGNED_BITS(ir, 29,28)) 
      {
      case 3:
        {
          // Node 511
          switch (UNSIGNED_BITS(ir, 27,22)) 
          {
          case 12:
            {
              // Node 58
              // Node 59
              aarch64_insn_bfm *insn = new (decode_object) aarch64_insn_bfm();
              insn->ir = ir;
              ((aarch64_insn_bfm*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_bfm*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_bfm*)insn)->N = BITSEL(ir, 22);
              ((aarch64_insn_bfm*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
              ((aarch64_insn_bfm*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_bfm*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_bfm*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_bfm*)insn)->decode_behaviour();
              ((aarch64_insn_bfm*)insn)->is_predicated = false;
              return insn;
              break;
            }
          case 8:
            {
              // Node 352
              // Node 353
              aarch64_insn_orri *insn = new (decode_object) aarch64_insn_orri();
              insn->ir = ir;
              ((aarch64_insn_orri*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_orri*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_orri*)insn)->N = BITSEL(ir, 22);
              ((aarch64_insn_orri*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
              ((aarch64_insn_orri*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_orri*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_orri*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_orri*)insn)->decode_behaviour();
              ((aarch64_insn_orri*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          switch (UNSIGNED_BITS(ir, 27,26)) 
          {
          case 2:
            {
              // Node 513
              switch (UNSIGNED_BITS(ir, 25,24)) 
              {
              case 0:
                {
                  // Node 514
                  switch (UNSIGNED_BITS(ir, 23,21)) 
                  {
                  case 4:
                    {
                      // Node 194
                      // Node 276
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 277
                          // Node 278
                          aarch64_insn_ldtrb *insn = new (decode_object) aarch64_insn_ldtrb();
                          insn->ir = ir;
                          ((aarch64_insn_ldtrb*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldtrb*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldtrb*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_ldtrb*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldtrb*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldtrb*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldtrb*)insn)->decode_behaviour();
                          ((aarch64_insn_ldtrb*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      case 0:
                        {
                          // Node 303
                          // Node 304
                          aarch64_insn_ldurb *insn = new (decode_object) aarch64_insn_ldurb();
                          insn->ir = ir;
                          ((aarch64_insn_ldurb*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldurb*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldurb*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_ldurb*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldurb*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldurb*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldurb*)insn)->decode_behaviour();
                          ((aarch64_insn_ldurb*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      // Node 195
                      switch ((ir & BIT_LSB(10)) >> 10)
                      {
                      case 1:
                        {
                          // Node 196
                          // Node 197
                          aarch64_insn_ldrb *insn = new (decode_object) aarch64_insn_ldrb();
                          insn->ir = ir;
                          ((aarch64_insn_ldrb*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldrb*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldrb*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_ldrb*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_ldrb*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldrb*)insn)->P = BITSEL(ir, 11);
                          ((aarch64_insn_ldrb*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldrb*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldrb*)insn)->decode_behaviour();
                          ((aarch64_insn_ldrb*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 7:
                    {
                      // Node 204
                      // Node 205
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 206
                          // Node 207
                          aarch64_insn_ldrb_reg *insn = new (decode_object) aarch64_insn_ldrb_reg();
                          insn->ir = ir;
                          ((aarch64_insn_ldrb_reg*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldrb_reg*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldrb_reg*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_ldrb_reg*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_ldrb_reg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                          ((aarch64_insn_ldrb_reg*)insn)->option = UNSIGNED_BITS(ir, 15,13);
                          ((aarch64_insn_ldrb_reg*)insn)->S = BITSEL(ir, 12);
                          ((aarch64_insn_ldrb_reg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldrb_reg*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldrb_reg*)insn)->decode_behaviour();
                          ((aarch64_insn_ldrb_reg*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 5:
                    {
                      // Node 208
                      // Node 209
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 210
                          // Node 211
                          aarch64_insn_ldrb_reg *insn = new (decode_object) aarch64_insn_ldrb_reg();
                          insn->ir = ir;
                          ((aarch64_insn_ldrb_reg*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldrb_reg*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldrb_reg*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_ldrb_reg*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_ldrb_reg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                          ((aarch64_insn_ldrb_reg*)insn)->option = UNSIGNED_BITS(ir, 15,13);
                          ((aarch64_insn_ldrb_reg*)insn)->S = BITSEL(ir, 12);
                          ((aarch64_insn_ldrb_reg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldrb_reg*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldrb_reg*)insn)->decode_behaviour();
                          ((aarch64_insn_ldrb_reg*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 3:
                    {
                      // Node 212
                      // Node 213
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 214
                          // Node 215
                          aarch64_insn_ldrb_reg *insn = new (decode_object) aarch64_insn_ldrb_reg();
                          insn->ir = ir;
                          ((aarch64_insn_ldrb_reg*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldrb_reg*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldrb_reg*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_ldrb_reg*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_ldrb_reg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                          ((aarch64_insn_ldrb_reg*)insn)->option = UNSIGNED_BITS(ir, 15,13);
                          ((aarch64_insn_ldrb_reg*)insn)->S = BITSEL(ir, 12);
                          ((aarch64_insn_ldrb_reg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldrb_reg*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldrb_reg*)insn)->decode_behaviour();
                          ((aarch64_insn_ldrb_reg*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 6:
                    {
                      // Node 272
                      // Node 273
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 274
                          // Node 275
                          aarch64_insn_ldtrb *insn = new (decode_object) aarch64_insn_ldtrb();
                          insn->ir = ir;
                          ((aarch64_insn_ldtrb*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldtrb*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldtrb*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_ldtrb*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldtrb*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldtrb*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldtrb*)insn)->decode_behaviour();
                          ((aarch64_insn_ldtrb*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      case 0:
                        {
                          // Node 301
                          // Node 302
                          aarch64_insn_ldurb *insn = new (decode_object) aarch64_insn_ldurb();
                          insn->ir = ir;
                          ((aarch64_insn_ldurb*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldurb*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldurb*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_ldurb*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldurb*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldurb*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldurb*)insn)->decode_behaviour();
                          ((aarch64_insn_ldurb*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 2:
                    {
                      // Node 279
                      // Node 280
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 281
                          // Node 282
                          aarch64_insn_ldtrb *insn = new (decode_object) aarch64_insn_ldtrb();
                          insn->ir = ir;
                          ((aarch64_insn_ldtrb*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldtrb*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldtrb*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_ldtrb*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldtrb*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldtrb*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldtrb*)insn)->decode_behaviour();
                          ((aarch64_insn_ldtrb*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      case 0:
                        {
                          // Node 305
                          // Node 306
                          aarch64_insn_ldurb *insn = new (decode_object) aarch64_insn_ldurb();
                          insn->ir = ir;
                          ((aarch64_insn_ldurb*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldurb*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldurb*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_ldurb*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldurb*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldurb*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldurb*)insn)->decode_behaviour();
                          ((aarch64_insn_ldurb*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 0:
                    {
                      // Node 418
                      // Node 448
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 449
                          // Node 450
                          aarch64_insn_sttrb *insn = new (decode_object) aarch64_insn_sttrb();
                          insn->ir = ir;
                          ((aarch64_insn_sttrb*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_sttrb*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_sttrb*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_sttrb*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_sttrb*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_sttrb*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_sttrb*)insn)->decode_behaviour();
                          ((aarch64_insn_sttrb*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      case 0:
                        {
                          // Node 458
                          // Node 459
                          aarch64_insn_sturb *insn = new (decode_object) aarch64_insn_sturb();
                          insn->ir = ir;
                          ((aarch64_insn_sturb*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_sturb*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_sturb*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_sturb*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_sturb*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_sturb*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_sturb*)insn)->decode_behaviour();
                          ((aarch64_insn_sturb*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      // Node 419
                      switch ((ir & BIT_LSB(10)) >> 10)
                      {
                      case 1:
                        {
                          // Node 420
                          // Node 421
                          aarch64_insn_strb *insn = new (decode_object) aarch64_insn_strb();
                          insn->ir = ir;
                          ((aarch64_insn_strb*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_strb*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_strb*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_strb*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_strb*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_strb*)insn)->P = BITSEL(ir, 11);
                          ((aarch64_insn_strb*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_strb*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_strb*)insn)->decode_behaviour();
                          ((aarch64_insn_strb*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 1:
                    {
                      // Node 422
                      // Node 423
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 424
                          // Node 425
                          aarch64_insn_strb_reg *insn = new (decode_object) aarch64_insn_strb_reg();
                          insn->ir = ir;
                          ((aarch64_insn_strb_reg*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_strb_reg*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_strb_reg*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_strb_reg*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_strb_reg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                          ((aarch64_insn_strb_reg*)insn)->option = UNSIGNED_BITS(ir, 15,13);
                          ((aarch64_insn_strb_reg*)insn)->S = BITSEL(ir, 12);
                          ((aarch64_insn_strb_reg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_strb_reg*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_strb_reg*)insn)->decode_behaviour();
                          ((aarch64_insn_strb_reg*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  }
                  // Node 198
                  // Node 199
                  switch (UNSIGNED_BITS(ir, 22,21)) 
                  {
                  case 2:
                    {
                      // Node 200
                      // Node 201
                      switch ((ir & BIT_LSB(10)) >> 10)
                      {
                      case 1:
                        {
                          // Node 202
                          // Node 203
                          aarch64_insn_ldrb *insn = new (decode_object) aarch64_insn_ldrb();
                          insn->ir = ir;
                          ((aarch64_insn_ldrb*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldrb*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldrb*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_ldrb*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_ldrb*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldrb*)insn)->P = BITSEL(ir, 11);
                          ((aarch64_insn_ldrb*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldrb*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldrb*)insn)->decode_behaviour();
                          ((aarch64_insn_ldrb*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  }
                  break;
                }
              case 1:
                {
                  // Node 515
                  switch (UNSIGNED_BITS(ir, 23,22)) 
                  {
                  case 3:
                    {
                      // Node 216
                      // Node 217
                      aarch64_insn_ldrbi *insn = new (decode_object) aarch64_insn_ldrbi();
                      insn->ir = ir;
                      ((aarch64_insn_ldrbi*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                      ((aarch64_insn_ldrbi*)insn)->V = BITSEL(ir, 26);
                      ((aarch64_insn_ldrbi*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                      ((aarch64_insn_ldrbi*)insn)->imm12 = UNSIGNED_BITS(ir, 21,10);
                      ((aarch64_insn_ldrbi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_ldrbi*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_ldrbi*)insn)->decode_behaviour();
                      ((aarch64_insn_ldrbi*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 2:
                    {
                      // Node 218
                      // Node 219
                      aarch64_insn_ldrbi *insn = new (decode_object) aarch64_insn_ldrbi();
                      insn->ir = ir;
                      ((aarch64_insn_ldrbi*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                      ((aarch64_insn_ldrbi*)insn)->V = BITSEL(ir, 26);
                      ((aarch64_insn_ldrbi*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                      ((aarch64_insn_ldrbi*)insn)->imm12 = UNSIGNED_BITS(ir, 21,10);
                      ((aarch64_insn_ldrbi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_ldrbi*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_ldrbi*)insn)->decode_behaviour();
                      ((aarch64_insn_ldrbi*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 1:
                    {
                      // Node 220
                      // Node 221
                      aarch64_insn_ldrbi *insn = new (decode_object) aarch64_insn_ldrbi();
                      insn->ir = ir;
                      ((aarch64_insn_ldrbi*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                      ((aarch64_insn_ldrbi*)insn)->V = BITSEL(ir, 26);
                      ((aarch64_insn_ldrbi*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                      ((aarch64_insn_ldrbi*)insn)->imm12 = UNSIGNED_BITS(ir, 21,10);
                      ((aarch64_insn_ldrbi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_ldrbi*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_ldrbi*)insn)->decode_behaviour();
                      ((aarch64_insn_ldrbi*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 0:
                    {
                      // Node 426
                      // Node 427
                      aarch64_insn_strbi *insn = new (decode_object) aarch64_insn_strbi();
                      insn->ir = ir;
                      ((aarch64_insn_strbi*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                      ((aarch64_insn_strbi*)insn)->V = BITSEL(ir, 26);
                      ((aarch64_insn_strbi*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                      ((aarch64_insn_strbi*)insn)->imm12 = UNSIGNED_BITS(ir, 21,10);
                      ((aarch64_insn_strbi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_strbi*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_strbi*)insn)->decode_behaviour();
                      ((aarch64_insn_strbi*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  }
                  break;
                }
              }
              break;
            }
          }
          break;
        }
      case 1:
        {
          // Node 512
          switch (UNSIGNED_BITS(ir, 27,21)) 
          {
          case 86:
            {
              // Node 100
              // Node 101
              switch (UNSIGNED_BITS(ir, 15,13)) 
              {
              case 2:
                {
                  // Node 516
                  switch (UNSIGNED_BITS(ir, 12,10)) 
                  {
                  case 2:
                    {
                      // Node 102
                      // Node 103
                      aarch64_insn_crc32 *insn = new (decode_object) aarch64_insn_crc32();
                      insn->ir = ir;
                      ((aarch64_insn_crc32*)insn)->sf = BITSEL(ir, 31);
                      ((aarch64_insn_crc32*)insn)->S = BITSEL(ir, 29);
                      ((aarch64_insn_crc32*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_crc32*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                      ((aarch64_insn_crc32*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_crc32*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_crc32*)insn)->decode_behaviour();
                      ((aarch64_insn_crc32*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 1:
                    {
                      // Node 104
                      // Node 105
                      aarch64_insn_crc32 *insn = new (decode_object) aarch64_insn_crc32();
                      insn->ir = ir;
                      ((aarch64_insn_crc32*)insn)->sf = BITSEL(ir, 31);
                      ((aarch64_insn_crc32*)insn)->S = BITSEL(ir, 29);
                      ((aarch64_insn_crc32*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_crc32*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                      ((aarch64_insn_crc32*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_crc32*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_crc32*)insn)->decode_behaviour();
                      ((aarch64_insn_crc32*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 0:
                    {
                      // Node 106
                      // Node 107
                      aarch64_insn_crc32 *insn = new (decode_object) aarch64_insn_crc32();
                      insn->ir = ir;
                      ((aarch64_insn_crc32*)insn)->sf = BITSEL(ir, 31);
                      ((aarch64_insn_crc32*)insn)->S = BITSEL(ir, 29);
                      ((aarch64_insn_crc32*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_crc32*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                      ((aarch64_insn_crc32*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_crc32*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_crc32*)insn)->decode_behaviour();
                      ((aarch64_insn_crc32*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 6:
                    {
                      // Node 110
                      // Node 111
                      aarch64_insn_crc32c *insn = new (decode_object) aarch64_insn_crc32c();
                      insn->ir = ir;
                      ((aarch64_insn_crc32c*)insn)->sf = BITSEL(ir, 31);
                      ((aarch64_insn_crc32c*)insn)->S = BITSEL(ir, 29);
                      ((aarch64_insn_crc32c*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_crc32c*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                      ((aarch64_insn_crc32c*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_crc32c*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_crc32c*)insn)->decode_behaviour();
                      ((aarch64_insn_crc32c*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 5:
                    {
                      // Node 112
                      // Node 113
                      aarch64_insn_crc32c *insn = new (decode_object) aarch64_insn_crc32c();
                      insn->ir = ir;
                      ((aarch64_insn_crc32c*)insn)->sf = BITSEL(ir, 31);
                      ((aarch64_insn_crc32c*)insn)->S = BITSEL(ir, 29);
                      ((aarch64_insn_crc32c*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_crc32c*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                      ((aarch64_insn_crc32c*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_crc32c*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_crc32c*)insn)->decode_behaviour();
                      ((aarch64_insn_crc32c*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 4:
                    {
                      // Node 114
                      // Node 115
                      aarch64_insn_crc32c *insn = new (decode_object) aarch64_insn_crc32c();
                      insn->ir = ir;
                      ((aarch64_insn_crc32c*)insn)->sf = BITSEL(ir, 31);
                      ((aarch64_insn_crc32c*)insn)->S = BITSEL(ir, 29);
                      ((aarch64_insn_crc32c*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_crc32c*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                      ((aarch64_insn_crc32c*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_crc32c*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_crc32c*)insn)->decode_behaviour();
                      ((aarch64_insn_crc32c*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  }
                  break;
                }
              }
              break;
            }
          case 28:
            {
              // Node 151
              // Node 152
              aarch64_insn_extr *insn = new (decode_object) aarch64_insn_extr();
              insn->ir = ir;
              ((aarch64_insn_extr*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_extr*)insn)->op21 = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_extr*)insn)->N = BITSEL(ir, 22);
              ((aarch64_insn_extr*)insn)->o0 = BITSEL(ir, 21);
              ((aarch64_insn_extr*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
              ((aarch64_insn_extr*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_extr*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_extr*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_extr*)insn)->decode_behaviour();
              ((aarch64_insn_extr*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          switch (UNSIGNED_BITS(ir, 27,22)) 
          {
          case 8:
            {
              // Node 31
              // Node 32
              aarch64_insn_andi *insn = new (decode_object) aarch64_insn_andi();
              insn->ir = ir;
              ((aarch64_insn_andi*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_andi*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_andi*)insn)->N = BITSEL(ir, 22);
              ((aarch64_insn_andi*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
              ((aarch64_insn_andi*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_andi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_andi*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_andi*)insn)->decode_behaviour();
              ((aarch64_insn_andi*)insn)->is_predicated = false;
              return insn;
              break;
            }
          case 12:
            {
              // Node 380
              // Node 381
              aarch64_insn_sbfm *insn = new (decode_object) aarch64_insn_sbfm();
              insn->ir = ir;
              ((aarch64_insn_sbfm*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_sbfm*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_sbfm*)insn)->N = BITSEL(ir, 22);
              ((aarch64_insn_sbfm*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
              ((aarch64_insn_sbfm*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_sbfm*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_sbfm*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_sbfm*)insn)->decode_behaviour();
              ((aarch64_insn_sbfm*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          switch (UNSIGNED_BITS(ir, 27,24)) 
          {
          case 8:
            {
              // Node 184
              // Node 185
              aarch64_insn_ldr_lit *insn = new (decode_object) aarch64_insn_ldr_lit();
              insn->ir = ir;
              ((aarch64_insn_ldr_lit*)insn)->opc = UNSIGNED_BITS(ir, 31,30);
              ((aarch64_insn_ldr_lit*)insn)->V = BITSEL(ir, 26);
              ((aarch64_insn_ldr_lit*)insn)->imm19 = UNSIGNED_BITS(ir, 23,5);
              ((aarch64_insn_ldr_lit*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_ldr_lit*)insn)->decode_behaviour();
              ((aarch64_insn_ldr_lit*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          break;
        }
      }
      break;
    }
  case 1:
    {
      // Node 497
      switch (UNSIGNED_BITS(ir, 29,22)) 
      {
      case 165:
        {
          // Node 168
          // Node 169
          aarch64_insn_ldpsw *insn = new (decode_object) aarch64_insn_ldpsw();
          insn->ir = ir;
          ((aarch64_insn_ldpsw*)insn)->opc = UNSIGNED_BITS(ir, 31,30);
          ((aarch64_insn_ldpsw*)insn)->V = BITSEL(ir, 26);
          ((aarch64_insn_ldpsw*)insn)->L = BITSEL(ir, 22);
          ((aarch64_insn_ldpsw*)insn)->imm7 = UNSIGNED_BITS(ir, 21,15);
          ((aarch64_insn_ldpsw*)insn)->rt2 = UNSIGNED_BITS(ir, 14,10);
          ((aarch64_insn_ldpsw*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
          ((aarch64_insn_ldpsw*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
          ((aarch64_insn_ldpsw*)insn)->decode_behaviour();
          ((aarch64_insn_ldpsw*)insn)->is_predicated = false;
          return insn;
          break;
        }
      }
      switch (UNSIGNED_BITS(ir, 29,25)) 
      {
      case 20:
        {
          // Node 170
          // Node 171
          switch (UNSIGNED_BITS(ir, 23,22)) 
          {
          case 3:
            {
              // Node 172
              // Node 173
              aarch64_insn_ldpswi *insn = new (decode_object) aarch64_insn_ldpswi();
              insn->ir = ir;
              ((aarch64_insn_ldpswi*)insn)->opc = UNSIGNED_BITS(ir, 31,30);
              ((aarch64_insn_ldpswi*)insn)->V = BITSEL(ir, 26);
              ((aarch64_insn_ldpswi*)insn)->P = BITSEL(ir, 24);
              ((aarch64_insn_ldpswi*)insn)->L = BITSEL(ir, 22);
              ((aarch64_insn_ldpswi*)insn)->imm7 = UNSIGNED_BITS(ir, 21,15);
              ((aarch64_insn_ldpswi*)insn)->rt2 = UNSIGNED_BITS(ir, 14,10);
              ((aarch64_insn_ldpswi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_ldpswi*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_ldpswi*)insn)->decode_behaviour();
              ((aarch64_insn_ldpswi*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          break;
        }
      }
      switch (UNSIGNED_BITS(ir, 29,28)) 
      {
      case 3:
        {
          // Node 517
          switch (UNSIGNED_BITS(ir, 27,22)) 
          {
          case 8:
            {
              // Node 25
              // Node 26
              aarch64_insn_andi *insn = new (decode_object) aarch64_insn_andi();
              insn->ir = ir;
              ((aarch64_insn_andi*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_andi*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_andi*)insn)->N = BITSEL(ir, 22);
              ((aarch64_insn_andi*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
              ((aarch64_insn_andi*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_andi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_andi*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_andi*)insn)->decode_behaviour();
              ((aarch64_insn_andi*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          switch (UNSIGNED_BITS(ir, 27,26)) 
          {
          case 2:
            {
              // Node 519
              switch (UNSIGNED_BITS(ir, 25,24)) 
              {
              case 0:
                {
                  // Node 520
                  switch (UNSIGNED_BITS(ir, 23,21)) 
                  {
                  case 4:
                    {
                      // Node 222
                      // Node 287
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 288
                          // Node 289
                          aarch64_insn_ldtrh *insn = new (decode_object) aarch64_insn_ldtrh();
                          insn->ir = ir;
                          ((aarch64_insn_ldtrh*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldtrh*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldtrh*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_ldtrh*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldtrh*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldtrh*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldtrh*)insn)->decode_behaviour();
                          ((aarch64_insn_ldtrh*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      case 0:
                        {
                          // Node 309
                          // Node 310
                          aarch64_insn_ldurh *insn = new (decode_object) aarch64_insn_ldurh();
                          insn->ir = ir;
                          ((aarch64_insn_ldurh*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldurh*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldurh*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_ldurh*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldurh*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldurh*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldurh*)insn)->decode_behaviour();
                          ((aarch64_insn_ldurh*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      // Node 223
                      switch ((ir & BIT_LSB(10)) >> 10)
                      {
                      case 1:
                        {
                          // Node 224
                          // Node 225
                          aarch64_insn_ldrh *insn = new (decode_object) aarch64_insn_ldrh();
                          insn->ir = ir;
                          ((aarch64_insn_ldrh*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldrh*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldrh*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_ldrh*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_ldrh*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldrh*)insn)->P = BITSEL(ir, 11);
                          ((aarch64_insn_ldrh*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldrh*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldrh*)insn)->decode_behaviour();
                          ((aarch64_insn_ldrh*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 7:
                    {
                      // Node 232
                      // Node 233
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 234
                          // Node 235
                          aarch64_insn_ldrh_reg *insn = new (decode_object) aarch64_insn_ldrh_reg();
                          insn->ir = ir;
                          ((aarch64_insn_ldrh_reg*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldrh_reg*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldrh_reg*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_ldrh_reg*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_ldrh_reg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                          ((aarch64_insn_ldrh_reg*)insn)->option = UNSIGNED_BITS(ir, 15,13);
                          ((aarch64_insn_ldrh_reg*)insn)->S = BITSEL(ir, 12);
                          ((aarch64_insn_ldrh_reg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldrh_reg*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldrh_reg*)insn)->decode_behaviour();
                          ((aarch64_insn_ldrh_reg*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 5:
                    {
                      // Node 236
                      // Node 237
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 238
                          // Node 239
                          aarch64_insn_ldrh_reg *insn = new (decode_object) aarch64_insn_ldrh_reg();
                          insn->ir = ir;
                          ((aarch64_insn_ldrh_reg*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldrh_reg*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldrh_reg*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_ldrh_reg*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_ldrh_reg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                          ((aarch64_insn_ldrh_reg*)insn)->option = UNSIGNED_BITS(ir, 15,13);
                          ((aarch64_insn_ldrh_reg*)insn)->S = BITSEL(ir, 12);
                          ((aarch64_insn_ldrh_reg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldrh_reg*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldrh_reg*)insn)->decode_behaviour();
                          ((aarch64_insn_ldrh_reg*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 3:
                    {
                      // Node 240
                      // Node 241
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 242
                          // Node 243
                          aarch64_insn_ldrh_reg *insn = new (decode_object) aarch64_insn_ldrh_reg();
                          insn->ir = ir;
                          ((aarch64_insn_ldrh_reg*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldrh_reg*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldrh_reg*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_ldrh_reg*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_ldrh_reg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                          ((aarch64_insn_ldrh_reg*)insn)->option = UNSIGNED_BITS(ir, 15,13);
                          ((aarch64_insn_ldrh_reg*)insn)->S = BITSEL(ir, 12);
                          ((aarch64_insn_ldrh_reg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldrh_reg*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldrh_reg*)insn)->decode_behaviour();
                          ((aarch64_insn_ldrh_reg*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 6:
                    {
                      // Node 283
                      // Node 284
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 285
                          // Node 286
                          aarch64_insn_ldtrh *insn = new (decode_object) aarch64_insn_ldtrh();
                          insn->ir = ir;
                          ((aarch64_insn_ldtrh*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldtrh*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldtrh*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_ldtrh*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldtrh*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldtrh*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldtrh*)insn)->decode_behaviour();
                          ((aarch64_insn_ldtrh*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      case 0:
                        {
                          // Node 307
                          // Node 308
                          aarch64_insn_ldurh *insn = new (decode_object) aarch64_insn_ldurh();
                          insn->ir = ir;
                          ((aarch64_insn_ldurh*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldurh*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldurh*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_ldurh*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldurh*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldurh*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldurh*)insn)->decode_behaviour();
                          ((aarch64_insn_ldurh*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 2:
                    {
                      // Node 290
                      // Node 291
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 292
                          // Node 293
                          aarch64_insn_ldtrh *insn = new (decode_object) aarch64_insn_ldtrh();
                          insn->ir = ir;
                          ((aarch64_insn_ldtrh*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldtrh*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldtrh*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_ldtrh*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldtrh*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldtrh*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldtrh*)insn)->decode_behaviour();
                          ((aarch64_insn_ldtrh*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      case 0:
                        {
                          // Node 311
                          // Node 312
                          aarch64_insn_ldurh *insn = new (decode_object) aarch64_insn_ldurh();
                          insn->ir = ir;
                          ((aarch64_insn_ldurh*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldurh*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldurh*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_ldurh*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldurh*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldurh*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldurh*)insn)->decode_behaviour();
                          ((aarch64_insn_ldurh*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 0:
                    {
                      // Node 428
                      // Node 451
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 452
                          // Node 453
                          aarch64_insn_sttrh *insn = new (decode_object) aarch64_insn_sttrh();
                          insn->ir = ir;
                          ((aarch64_insn_sttrh*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_sttrh*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_sttrh*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_sttrh*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_sttrh*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_sttrh*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_sttrh*)insn)->decode_behaviour();
                          ((aarch64_insn_sttrh*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      case 0:
                        {
                          // Node 460
                          // Node 461
                          aarch64_insn_sturh *insn = new (decode_object) aarch64_insn_sturh();
                          insn->ir = ir;
                          ((aarch64_insn_sturh*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_sturh*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_sturh*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                          ((aarch64_insn_sturh*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_sturh*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_sturh*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_sturh*)insn)->decode_behaviour();
                          ((aarch64_insn_sturh*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      // Node 429
                      switch ((ir & BIT_LSB(10)) >> 10)
                      {
                      case 1:
                        {
                          // Node 430
                          // Node 431
                          aarch64_insn_strh *insn = new (decode_object) aarch64_insn_strh();
                          insn->ir = ir;
                          ((aarch64_insn_strh*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_strh*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_strh*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_strh*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_strh*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_strh*)insn)->P = BITSEL(ir, 11);
                          ((aarch64_insn_strh*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_strh*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_strh*)insn)->decode_behaviour();
                          ((aarch64_insn_strh*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  case 1:
                    {
                      // Node 432
                      // Node 433
                      switch (UNSIGNED_BITS(ir, 11,10)) 
                      {
                      case 2:
                        {
                          // Node 434
                          // Node 435
                          aarch64_insn_strh_reg *insn = new (decode_object) aarch64_insn_strh_reg();
                          insn->ir = ir;
                          ((aarch64_insn_strh_reg*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_strh_reg*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_strh_reg*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_strh_reg*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_strh_reg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                          ((aarch64_insn_strh_reg*)insn)->option = UNSIGNED_BITS(ir, 15,13);
                          ((aarch64_insn_strh_reg*)insn)->S = BITSEL(ir, 12);
                          ((aarch64_insn_strh_reg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_strh_reg*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_strh_reg*)insn)->decode_behaviour();
                          ((aarch64_insn_strh_reg*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  }
                  // Node 226
                  // Node 227
                  switch (UNSIGNED_BITS(ir, 22,21)) 
                  {
                  case 2:
                    {
                      // Node 228
                      // Node 229
                      switch ((ir & BIT_LSB(10)) >> 10)
                      {
                      case 1:
                        {
                          // Node 230
                          // Node 231
                          aarch64_insn_ldrh *insn = new (decode_object) aarch64_insn_ldrh();
                          insn->ir = ir;
                          ((aarch64_insn_ldrh*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                          ((aarch64_insn_ldrh*)insn)->V = BITSEL(ir, 26);
                          ((aarch64_insn_ldrh*)insn)->X = BITSEL(ir, 23);
                          ((aarch64_insn_ldrh*)insn)->L = BITSEL(ir, 22);
                          ((aarch64_insn_ldrh*)insn)->imm9 = UNSIGNED_BITS(ir, 20,12);
                          ((aarch64_insn_ldrh*)insn)->P = BITSEL(ir, 11);
                          ((aarch64_insn_ldrh*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                          ((aarch64_insn_ldrh*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                          ((aarch64_insn_ldrh*)insn)->decode_behaviour();
                          ((aarch64_insn_ldrh*)insn)->is_predicated = false;
                          return insn;
                          break;
                        }
                      }
                      break;
                    }
                  }
                  break;
                }
              case 1:
                {
                  // Node 521
                  switch (UNSIGNED_BITS(ir, 23,22)) 
                  {
                  case 3:
                    {
                      // Node 244
                      // Node 245
                      aarch64_insn_ldrhi *insn = new (decode_object) aarch64_insn_ldrhi();
                      insn->ir = ir;
                      ((aarch64_insn_ldrhi*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                      ((aarch64_insn_ldrhi*)insn)->V = BITSEL(ir, 26);
                      ((aarch64_insn_ldrhi*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                      ((aarch64_insn_ldrhi*)insn)->imm12 = UNSIGNED_BITS(ir, 21,10);
                      ((aarch64_insn_ldrhi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_ldrhi*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_ldrhi*)insn)->decode_behaviour();
                      ((aarch64_insn_ldrhi*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 2:
                    {
                      // Node 246
                      // Node 247
                      aarch64_insn_ldrhi *insn = new (decode_object) aarch64_insn_ldrhi();
                      insn->ir = ir;
                      ((aarch64_insn_ldrhi*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                      ((aarch64_insn_ldrhi*)insn)->V = BITSEL(ir, 26);
                      ((aarch64_insn_ldrhi*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                      ((aarch64_insn_ldrhi*)insn)->imm12 = UNSIGNED_BITS(ir, 21,10);
                      ((aarch64_insn_ldrhi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_ldrhi*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_ldrhi*)insn)->decode_behaviour();
                      ((aarch64_insn_ldrhi*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 1:
                    {
                      // Node 248
                      // Node 249
                      aarch64_insn_ldrhi *insn = new (decode_object) aarch64_insn_ldrhi();
                      insn->ir = ir;
                      ((aarch64_insn_ldrhi*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                      ((aarch64_insn_ldrhi*)insn)->V = BITSEL(ir, 26);
                      ((aarch64_insn_ldrhi*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                      ((aarch64_insn_ldrhi*)insn)->imm12 = UNSIGNED_BITS(ir, 21,10);
                      ((aarch64_insn_ldrhi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_ldrhi*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_ldrhi*)insn)->decode_behaviour();
                      ((aarch64_insn_ldrhi*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 0:
                    {
                      // Node 436
                      // Node 437
                      aarch64_insn_strhi *insn = new (decode_object) aarch64_insn_strhi();
                      insn->ir = ir;
                      ((aarch64_insn_strhi*)insn)->size = UNSIGNED_BITS(ir, 31,30);
                      ((aarch64_insn_strhi*)insn)->V = BITSEL(ir, 26);
                      ((aarch64_insn_strhi*)insn)->opc = UNSIGNED_BITS(ir, 23,22);
                      ((aarch64_insn_strhi*)insn)->imm12 = UNSIGNED_BITS(ir, 21,10);
                      ((aarch64_insn_strhi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_strhi*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_strhi*)insn)->decode_behaviour();
                      ((aarch64_insn_strhi*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  }
                  break;
                }
              }
              break;
            }
          }
          break;
        }
      case 1:
        {
          // Node 518
          switch (UNSIGNED_BITS(ir, 27,10)) 
          {
          case 176130:
            {
              // Node 364
              // Node 365
              aarch64_insn_rev *insn = new (decode_object) aarch64_insn_rev();
              insn->ir = ir;
              ((aarch64_insn_rev*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_rev*)insn)->S = BITSEL(ir, 29);
              ((aarch64_insn_rev*)insn)->opcode2 = UNSIGNED_BITS(ir, 20,16);
              ((aarch64_insn_rev*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_rev*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_rev*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_rev*)insn)->decode_behaviour();
              ((aarch64_insn_rev*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          switch (UNSIGNED_BITS(ir, 27,22)) 
          {
          case 8:
            {
              // Node 133
              // Node 134
              aarch64_insn_eori *insn = new (decode_object) aarch64_insn_eori();
              insn->ir = ir;
              ((aarch64_insn_eori*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_eori*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_eori*)insn)->N = BITSEL(ir, 22);
              ((aarch64_insn_eori*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
              ((aarch64_insn_eori*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_eori*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_eori*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_eori*)insn)->decode_behaviour();
              ((aarch64_insn_eori*)insn)->is_predicated = false;
              return insn;
              break;
            }
          case 12:
            {
              // Node 480
              // Node 481
              aarch64_insn_ubfm *insn = new (decode_object) aarch64_insn_ubfm();
              insn->ir = ir;
              ((aarch64_insn_ubfm*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_ubfm*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_ubfm*)insn)->N = BITSEL(ir, 22);
              ((aarch64_insn_ubfm*)insn)->immr = UNSIGNED_BITS(ir, 21,16);
              ((aarch64_insn_ubfm*)insn)->imms = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_ubfm*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_ubfm*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_ubfm*)insn)->decode_behaviour();
              ((aarch64_insn_ubfm*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          switch (UNSIGNED_BITS(ir, 27,24)) 
          {
          case 4:
            {
              // Node 52
              // Node 53
              switch ((ir & BIT_LSB(4)) >> 4)
              {
              case 0:
                {
                  // Node 54
                  // Node 55
                  aarch64_insn_bcond *insn = new (decode_object) aarch64_insn_bcond();
                  insn->ir = ir;
                  ((aarch64_insn_bcond*)insn)->o1 = BITSEL(ir, 24);
                  ((aarch64_insn_bcond*)insn)->imm19 = UNSIGNED_BITS(ir, 23,5);
                  ((aarch64_insn_bcond*)insn)->o0 = BITSEL(ir, 4);
                  ((aarch64_insn_bcond*)insn)->cond = UNSIGNED_BITS(ir, 3,0);
                  ((aarch64_insn_bcond*)insn)->decode_behaviour();
                  ((aarch64_insn_bcond*)insn)->_cfi.IsControlFlow = true;
                  ((aarch64_insn_bcond*)insn)->decode_is_predicated();
                  return insn;
                  break;
                }
              }
              break;
            }
          case 8:
            {
              // Node 182
              // Node 183
              aarch64_insn_ldr_lit *insn = new (decode_object) aarch64_insn_ldr_lit();
              insn->ir = ir;
              ((aarch64_insn_ldr_lit*)insn)->opc = UNSIGNED_BITS(ir, 31,30);
              ((aarch64_insn_ldr_lit*)insn)->V = BITSEL(ir, 26);
              ((aarch64_insn_ldr_lit*)insn)->imm19 = UNSIGNED_BITS(ir, 23,5);
              ((aarch64_insn_ldr_lit*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_ldr_lit*)insn)->decode_behaviour();
              ((aarch64_insn_ldr_lit*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          break;
        }
      }
      break;
    }
  }
  // Node 1
  switch (UNSIGNED_BITS(ir, 30,21)) 
  {
  case 978:
    {
      // Node 82
      // Node 83
      switch (UNSIGNED_BITS(ir, 11,10)) 
      {
      case 2:
        {
          // Node 84
          // Node 85
          switch ((ir & BIT_LSB(4)) >> 4)
          {
          case 0:
            {
              // Node 86
              // Node 87
              aarch64_insn_ccmpi *insn = new (decode_object) aarch64_insn_ccmpi();
              insn->ir = ir;
              ((aarch64_insn_ccmpi*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_ccmpi*)insn)->op = BITSEL(ir, 30);
              ((aarch64_insn_ccmpi*)insn)->S = BITSEL(ir, 29);
              ((aarch64_insn_ccmpi*)insn)->imm5 = UNSIGNED_BITS(ir, 20,16);
              ((aarch64_insn_ccmpi*)insn)->cond = UNSIGNED_BITS(ir, 15,12);
              ((aarch64_insn_ccmpi*)insn)->o2 = BITSEL(ir, 10);
              ((aarch64_insn_ccmpi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_ccmpi*)insn)->o3 = BITSEL(ir, 4);
              ((aarch64_insn_ccmpi*)insn)->nzcv = UNSIGNED_BITS(ir, 3,0);
              ((aarch64_insn_ccmpi*)insn)->decode_behaviour();
              ((aarch64_insn_ccmpi*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          break;
        }
      case 0:
        {
          // Node 88
          // Node 89
          switch ((ir & BIT_LSB(4)) >> 4)
          {
          case 0:
            {
              // Node 90
              // Node 91
              aarch64_insn_ccmpr *insn = new (decode_object) aarch64_insn_ccmpr();
              insn->ir = ir;
              ((aarch64_insn_ccmpr*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_ccmpr*)insn)->op = BITSEL(ir, 30);
              ((aarch64_insn_ccmpr*)insn)->S = BITSEL(ir, 29);
              ((aarch64_insn_ccmpr*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
              ((aarch64_insn_ccmpr*)insn)->cond = UNSIGNED_BITS(ir, 15,12);
              ((aarch64_insn_ccmpr*)insn)->o2 = BITSEL(ir, 10);
              ((aarch64_insn_ccmpr*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_ccmpr*)insn)->o3 = BITSEL(ir, 4);
              ((aarch64_insn_ccmpr*)insn)->nzcv = UNSIGNED_BITS(ir, 3,0);
              ((aarch64_insn_ccmpr*)insn)->decode_behaviour();
              ((aarch64_insn_ccmpr*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          break;
        }
      }
      break;
    }
  }
  switch (UNSIGNED_BITS(ir, 30,23)) 
  {
  case 229:
    {
      // Node 327
      // Node 328
      aarch64_insn_movk *insn = new (decode_object) aarch64_insn_movk();
      insn->ir = ir;
      ((aarch64_insn_movk*)insn)->sf = BITSEL(ir, 31);
      ((aarch64_insn_movk*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
      ((aarch64_insn_movk*)insn)->hw = UNSIGNED_BITS(ir, 22,21);
      ((aarch64_insn_movk*)insn)->imm16 = UNSIGNED_BITS(ir, 20,5);
      ((aarch64_insn_movk*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
      ((aarch64_insn_movk*)insn)->decode_behaviour();
      ((aarch64_insn_movk*)insn)->is_predicated = false;
      return insn;
      break;
    }
  }
  switch (UNSIGNED_BITS(ir, 30,24)) 
  {
  case 106:
    {
      // Node 33
      // Node 34
      switch ((ir & BIT_LSB(21)) >> 21)
      {
      case 0:
        {
          // Node 35
          // Node 36
          aarch64_insn_andsr *insn = new (decode_object) aarch64_insn_andsr();
          insn->ir = ir;
          ((aarch64_insn_andsr*)insn)->sf = BITSEL(ir, 31);
          ((aarch64_insn_andsr*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
          ((aarch64_insn_andsr*)insn)->shift = UNSIGNED_BITS(ir, 23,22);
          ((aarch64_insn_andsr*)insn)->N = BITSEL(ir, 21);
          ((aarch64_insn_andsr*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
          ((aarch64_insn_andsr*)insn)->imm6 = UNSIGNED_BITS(ir, 15,10);
          ((aarch64_insn_andsr*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
          ((aarch64_insn_andsr*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
          ((aarch64_insn_andsr*)insn)->decode_behaviour();
          ((aarch64_insn_andsr*)insn)->is_predicated = false;
          return insn;
          break;
        }
      case 1:
        {
          // Node 60
          // Node 61
          aarch64_insn_bicsr *insn = new (decode_object) aarch64_insn_bicsr();
          insn->ir = ir;
          ((aarch64_insn_bicsr*)insn)->sf = BITSEL(ir, 31);
          ((aarch64_insn_bicsr*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
          ((aarch64_insn_bicsr*)insn)->shift = UNSIGNED_BITS(ir, 23,22);
          ((aarch64_insn_bicsr*)insn)->N = BITSEL(ir, 21);
          ((aarch64_insn_bicsr*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
          ((aarch64_insn_bicsr*)insn)->imm6 = UNSIGNED_BITS(ir, 15,10);
          ((aarch64_insn_bicsr*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
          ((aarch64_insn_bicsr*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
          ((aarch64_insn_bicsr*)insn)->decode_behaviour();
          ((aarch64_insn_bicsr*)insn)->is_predicated = false;
          return insn;
          break;
        }
      }
      break;
    }
  }
  switch (UNSIGNED_BITS(ir, 30,29)) 
  {
  case 2:
    {
      // Node 522
      switch (UNSIGNED_BITS(ir, 28,23)) 
      {
      case 37:
        {
          // Node 331
          // Node 332
          aarch64_insn_movz *insn = new (decode_object) aarch64_insn_movz();
          insn->ir = ir;
          ((aarch64_insn_movz*)insn)->sf = BITSEL(ir, 31);
          ((aarch64_insn_movz*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
          ((aarch64_insn_movz*)insn)->hw = UNSIGNED_BITS(ir, 22,21);
          ((aarch64_insn_movz*)insn)->imm16 = UNSIGNED_BITS(ir, 20,5);
          ((aarch64_insn_movz*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
          ((aarch64_insn_movz*)insn)->decode_behaviour();
          ((aarch64_insn_movz*)insn)->is_predicated = false;
          return insn;
          break;
        }
      case 53:
        {
          // Node 525
          switch (UNSIGNED_BITS(ir, 22,13)) 
          {
          case 512:
            {
              // Node 526
              switch (UNSIGNED_BITS(ir, 12,10)) 
              {
              case 5:
                {
                  // Node 92
                  // Node 93
                  aarch64_insn_cls *insn = new (decode_object) aarch64_insn_cls();
                  insn->ir = ir;
                  ((aarch64_insn_cls*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_cls*)insn)->S = BITSEL(ir, 29);
                  ((aarch64_insn_cls*)insn)->opcode2 = UNSIGNED_BITS(ir, 20,16);
                  ((aarch64_insn_cls*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                  ((aarch64_insn_cls*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_cls*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_cls*)insn)->decode_behaviour();
                  ((aarch64_insn_cls*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              case 4:
                {
                  // Node 94
                  // Node 95
                  aarch64_insn_clz *insn = new (decode_object) aarch64_insn_clz();
                  insn->ir = ir;
                  ((aarch64_insn_clz*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_clz*)insn)->S = BITSEL(ir, 29);
                  ((aarch64_insn_clz*)insn)->opcode2 = UNSIGNED_BITS(ir, 20,16);
                  ((aarch64_insn_clz*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                  ((aarch64_insn_clz*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_clz*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_clz*)insn)->decode_behaviour();
                  ((aarch64_insn_clz*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              case 0:
                {
                  // Node 357
                  // Node 358
                  aarch64_insn_rbit *insn = new (decode_object) aarch64_insn_rbit();
                  insn->ir = ir;
                  ((aarch64_insn_rbit*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_rbit*)insn)->S = BITSEL(ir, 29);
                  ((aarch64_insn_rbit*)insn)->opcode2 = UNSIGNED_BITS(ir, 20,16);
                  ((aarch64_insn_rbit*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                  ((aarch64_insn_rbit*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_rbit*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_rbit*)insn)->decode_behaviour();
                  ((aarch64_insn_rbit*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              case 1:
                {
                  // Node 366
                  // Node 367
                  aarch64_insn_rev16 *insn = new (decode_object) aarch64_insn_rev16();
                  insn->ir = ir;
                  ((aarch64_insn_rev16*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_rev16*)insn)->S = BITSEL(ir, 29);
                  ((aarch64_insn_rev16*)insn)->opcode2 = UNSIGNED_BITS(ir, 20,16);
                  ((aarch64_insn_rev16*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                  ((aarch64_insn_rev16*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_rev16*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_rev16*)insn)->decode_behaviour();
                  ((aarch64_insn_rev16*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              }
              break;
            }
          }
          switch (UNSIGNED_BITS(ir, 22,21)) 
          {
          case 0:
            {
              // Node 122
              // Node 123
              switch (UNSIGNED_BITS(ir, 11,10)) 
              {
              case 0:
                {
                  // Node 124
                  // Node 125
                  aarch64_insn_csinv *insn = new (decode_object) aarch64_insn_csinv();
                  insn->ir = ir;
                  ((aarch64_insn_csinv*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_csinv*)insn)->op = BITSEL(ir, 30);
                  ((aarch64_insn_csinv*)insn)->S = BITSEL(ir, 29);
                  ((aarch64_insn_csinv*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                  ((aarch64_insn_csinv*)insn)->cond = UNSIGNED_BITS(ir, 15,12);
                  ((aarch64_insn_csinv*)insn)->op2 = UNSIGNED_BITS(ir, 11,10);
                  ((aarch64_insn_csinv*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_csinv*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_csinv*)insn)->decode_behaviour();
                  ((aarch64_insn_csinv*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              case 1:
                {
                  // Node 126
                  // Node 127
                  aarch64_insn_csneg *insn = new (decode_object) aarch64_insn_csneg();
                  insn->ir = ir;
                  ((aarch64_insn_csneg*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_csneg*)insn)->op = BITSEL(ir, 30);
                  ((aarch64_insn_csneg*)insn)->S = BITSEL(ir, 29);
                  ((aarch64_insn_csneg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                  ((aarch64_insn_csneg*)insn)->cond = UNSIGNED_BITS(ir, 15,12);
                  ((aarch64_insn_csneg*)insn)->op2 = UNSIGNED_BITS(ir, 11,10);
                  ((aarch64_insn_csneg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_csneg*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_csneg*)insn)->decode_behaviour();
                  ((aarch64_insn_csneg*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              }
              break;
            }
          }
          break;
        }
      }
      switch (UNSIGNED_BITS(ir, 28,24)) 
      {
      case 10:
        {
          // Node 135
          // Node 136
          aarch64_insn_eorsr *insn = new (decode_object) aarch64_insn_eorsr();
          insn->ir = ir;
          ((aarch64_insn_eorsr*)insn)->sf = BITSEL(ir, 31);
          ((aarch64_insn_eorsr*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
          ((aarch64_insn_eorsr*)insn)->shift = UNSIGNED_BITS(ir, 23,22);
          ((aarch64_insn_eorsr*)insn)->N = BITSEL(ir, 21);
          ((aarch64_insn_eorsr*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
          ((aarch64_insn_eorsr*)insn)->imm6 = UNSIGNED_BITS(ir, 15,10);
          ((aarch64_insn_eorsr*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
          ((aarch64_insn_eorsr*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
          ((aarch64_insn_eorsr*)insn)->decode_behaviour();
          ((aarch64_insn_eorsr*)insn)->is_predicated = false;
          return insn;
          break;
        }
      }
      break;
    }
  case 0:
    {
      // Node 523
      switch (UNSIGNED_BITS(ir, 28,21)) 
      {
      case 214:
        {
          // Node 41
          // Node 42
          switch (UNSIGNED_BITS(ir, 15,14)) 
          {
          case 0:
            {
              // Node 527
              switch (UNSIGNED_BITS(ir, 13,10)) 
              {
              case 3:
                {
                  // Node 382
                  // Node 383
                  aarch64_insn_sdiv *insn = new (decode_object) aarch64_insn_sdiv();
                  insn->ir = ir;
                  ((aarch64_insn_sdiv*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_sdiv*)insn)->S = BITSEL(ir, 29);
                  ((aarch64_insn_sdiv*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                  ((aarch64_insn_sdiv*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                  ((aarch64_insn_sdiv*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_sdiv*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_sdiv*)insn)->decode_behaviour();
                  ((aarch64_insn_sdiv*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              case 2:
                {
                  // Node 482
                  // Node 483
                  aarch64_insn_udiv *insn = new (decode_object) aarch64_insn_udiv();
                  insn->ir = ir;
                  ((aarch64_insn_udiv*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_udiv*)insn)->S = BITSEL(ir, 29);
                  ((aarch64_insn_udiv*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                  ((aarch64_insn_udiv*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                  ((aarch64_insn_udiv*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_udiv*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_udiv*)insn)->decode_behaviour();
                  ((aarch64_insn_udiv*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              }
              switch (UNSIGNED_BITS(ir, 13,12)) 
              {
              case 2:
                {
                  // Node 528
                  switch (UNSIGNED_BITS(ir, 11,10)) 
                  {
                  case 2:
                    {
                      // Node 43
                      // Node 44
                      aarch64_insn_asrv *insn = new (decode_object) aarch64_insn_asrv();
                      insn->ir = ir;
                      ((aarch64_insn_asrv*)insn)->sf = BITSEL(ir, 31);
                      ((aarch64_insn_asrv*)insn)->S = BITSEL(ir, 29);
                      ((aarch64_insn_asrv*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_asrv*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                      ((aarch64_insn_asrv*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_asrv*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_asrv*)insn)->decode_behaviour();
                      ((aarch64_insn_asrv*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 0:
                    {
                      // Node 315
                      // Node 316
                      aarch64_insn_lslv *insn = new (decode_object) aarch64_insn_lslv();
                      insn->ir = ir;
                      ((aarch64_insn_lslv*)insn)->sf = BITSEL(ir, 31);
                      ((aarch64_insn_lslv*)insn)->S = BITSEL(ir, 29);
                      ((aarch64_insn_lslv*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_lslv*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                      ((aarch64_insn_lslv*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_lslv*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_lslv*)insn)->decode_behaviour();
                      ((aarch64_insn_lslv*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 1:
                    {
                      // Node 317
                      // Node 318
                      aarch64_insn_lsrv *insn = new (decode_object) aarch64_insn_lsrv();
                      insn->ir = ir;
                      ((aarch64_insn_lsrv*)insn)->sf = BITSEL(ir, 31);
                      ((aarch64_insn_lsrv*)insn)->S = BITSEL(ir, 29);
                      ((aarch64_insn_lsrv*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_lsrv*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                      ((aarch64_insn_lsrv*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_lsrv*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_lsrv*)insn)->decode_behaviour();
                      ((aarch64_insn_lsrv*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  case 3:
                    {
                      // Node 370
                      // Node 371
                      aarch64_insn_rorv *insn = new (decode_object) aarch64_insn_rorv();
                      insn->ir = ir;
                      ((aarch64_insn_rorv*)insn)->sf = BITSEL(ir, 31);
                      ((aarch64_insn_rorv*)insn)->S = BITSEL(ir, 29);
                      ((aarch64_insn_rorv*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                      ((aarch64_insn_rorv*)insn)->opcode = UNSIGNED_BITS(ir, 15,10);
                      ((aarch64_insn_rorv*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                      ((aarch64_insn_rorv*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                      ((aarch64_insn_rorv*)insn)->decode_behaviour();
                      ((aarch64_insn_rorv*)insn)->is_predicated = false;
                      return insn;
                      break;
                    }
                  }
                  break;
                }
              }
              break;
            }
          }
          break;
        }
      case 212:
        {
          // Node 116
          // Node 117
          switch (UNSIGNED_BITS(ir, 11,10)) 
          {
          case 0:
            {
              // Node 118
              // Node 119
              aarch64_insn_csel *insn = new (decode_object) aarch64_insn_csel();
              insn->ir = ir;
              ((aarch64_insn_csel*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_csel*)insn)->op = BITSEL(ir, 30);
              ((aarch64_insn_csel*)insn)->S = BITSEL(ir, 29);
              ((aarch64_insn_csel*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
              ((aarch64_insn_csel*)insn)->cond = UNSIGNED_BITS(ir, 15,12);
              ((aarch64_insn_csel*)insn)->op2 = UNSIGNED_BITS(ir, 11,10);
              ((aarch64_insn_csel*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_csel*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_csel*)insn)->decode_behaviour();
              ((aarch64_insn_csel*)insn)->is_predicated = false;
              return insn;
              break;
            }
          case 1:
            {
              // Node 120
              // Node 121
              aarch64_insn_csinc *insn = new (decode_object) aarch64_insn_csinc();
              insn->ir = ir;
              ((aarch64_insn_csinc*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_csinc*)insn)->op = BITSEL(ir, 30);
              ((aarch64_insn_csinc*)insn)->S = BITSEL(ir, 29);
              ((aarch64_insn_csinc*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
              ((aarch64_insn_csinc*)insn)->cond = UNSIGNED_BITS(ir, 15,12);
              ((aarch64_insn_csinc*)insn)->op2 = UNSIGNED_BITS(ir, 11,10);
              ((aarch64_insn_csinc*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_csinc*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_csinc*)insn)->decode_behaviour();
              ((aarch64_insn_csinc*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          break;
        }
      case 232:
        {
          // Node 319
          // Node 320
          switch ((ir & BIT_LSB(15)) >> 15)
          {
          case 0:
            {
              // Node 321
              // Node 322
              aarch64_insn_madd *insn = new (decode_object) aarch64_insn_madd();
              insn->ir = ir;
              ((aarch64_insn_madd*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_madd*)insn)->op54 = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_madd*)insn)->op31 = UNSIGNED_BITS(ir, 23,21);
              ((aarch64_insn_madd*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
              ((aarch64_insn_madd*)insn)->o0 = BITSEL(ir, 15);
              ((aarch64_insn_madd*)insn)->ra = UNSIGNED_BITS(ir, 14,10);
              ((aarch64_insn_madd*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_madd*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_madd*)insn)->decode_behaviour();
              ((aarch64_insn_madd*)insn)->is_predicated = false;
              return insn;
              break;
            }
          case 1:
            {
              // Node 346
              // Node 347
              aarch64_insn_msub *insn = new (decode_object) aarch64_insn_msub();
              insn->ir = ir;
              ((aarch64_insn_msub*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_msub*)insn)->op54 = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_msub*)insn)->op31 = UNSIGNED_BITS(ir, 23,21);
              ((aarch64_insn_msub*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
              ((aarch64_insn_msub*)insn)->o0 = BITSEL(ir, 15);
              ((aarch64_insn_msub*)insn)->ra = UNSIGNED_BITS(ir, 14,10);
              ((aarch64_insn_msub*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_msub*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_msub*)insn)->decode_behaviour();
              ((aarch64_insn_msub*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          break;
        }
      }
      switch (UNSIGNED_BITS(ir, 28,23)) 
      {
      case 37:
        {
          // Node 329
          // Node 330
          aarch64_insn_movn *insn = new (decode_object) aarch64_insn_movn();
          insn->ir = ir;
          ((aarch64_insn_movn*)insn)->sf = BITSEL(ir, 31);
          ((aarch64_insn_movn*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
          ((aarch64_insn_movn*)insn)->hw = UNSIGNED_BITS(ir, 22,21);
          ((aarch64_insn_movn*)insn)->imm16 = UNSIGNED_BITS(ir, 20,5);
          ((aarch64_insn_movn*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
          ((aarch64_insn_movn*)insn)->decode_behaviour();
          ((aarch64_insn_movn*)insn)->is_predicated = false;
          return insn;
          break;
        }
      }
      switch (UNSIGNED_BITS(ir, 28,24)) 
      {
      case 10:
        {
          // Node 37
          // Node 38
          switch ((ir & BIT_LSB(21)) >> 21)
          {
          case 0:
            {
              // Node 39
              // Node 40
              aarch64_insn_andsr *insn = new (decode_object) aarch64_insn_andsr();
              insn->ir = ir;
              ((aarch64_insn_andsr*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_andsr*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_andsr*)insn)->shift = UNSIGNED_BITS(ir, 23,22);
              ((aarch64_insn_andsr*)insn)->N = BITSEL(ir, 21);
              ((aarch64_insn_andsr*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
              ((aarch64_insn_andsr*)insn)->imm6 = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_andsr*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_andsr*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_andsr*)insn)->decode_behaviour();
              ((aarch64_insn_andsr*)insn)->is_predicated = false;
              return insn;
              break;
            }
          case 1:
            {
              // Node 62
              // Node 63
              aarch64_insn_bicsr *insn = new (decode_object) aarch64_insn_bicsr();
              insn->ir = ir;
              ((aarch64_insn_bicsr*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_bicsr*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_bicsr*)insn)->shift = UNSIGNED_BITS(ir, 23,22);
              ((aarch64_insn_bicsr*)insn)->N = BITSEL(ir, 21);
              ((aarch64_insn_bicsr*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
              ((aarch64_insn_bicsr*)insn)->imm6 = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_bicsr*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_bicsr*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_bicsr*)insn)->decode_behaviour();
              ((aarch64_insn_bicsr*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          break;
        }
      }
      switch (UNSIGNED_BITS(ir, 28,26)) 
      {
      case 5:
        {
          // Node 45
          // Node 46
          aarch64_insn_b *insn = new (decode_object) aarch64_insn_b();
          insn->ir = ir;
          ((aarch64_insn_b*)insn)->op = BITSEL(ir, 31);
          ((aarch64_insn_b*)insn)->imm26 = UNSIGNED_BITS(ir, 25,0);
          ((aarch64_insn_b*)insn)->decode_behaviour();
          ((aarch64_insn_b*)insn)->_cfi.IsControlFlow = true;
          ((aarch64_insn_b*)insn)->is_predicated = false;
          return insn;
          break;
        }
      }
      break;
    }
  case 1:
    {
      // Node 524
      switch (UNSIGNED_BITS(ir, 28,21)) 
      {
      case 210:
        {
          // Node 72
          // Node 73
          switch (UNSIGNED_BITS(ir, 11,10)) 
          {
          case 2:
            {
              // Node 74
              // Node 75
              switch ((ir & BIT_LSB(4)) >> 4)
              {
              case 0:
                {
                  // Node 76
                  // Node 77
                  aarch64_insn_ccmni *insn = new (decode_object) aarch64_insn_ccmni();
                  insn->ir = ir;
                  ((aarch64_insn_ccmni*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_ccmni*)insn)->op = BITSEL(ir, 30);
                  ((aarch64_insn_ccmni*)insn)->S = BITSEL(ir, 29);
                  ((aarch64_insn_ccmni*)insn)->imm5 = UNSIGNED_BITS(ir, 20,16);
                  ((aarch64_insn_ccmni*)insn)->cond = UNSIGNED_BITS(ir, 15,12);
                  ((aarch64_insn_ccmni*)insn)->o2 = BITSEL(ir, 10);
                  ((aarch64_insn_ccmni*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_ccmni*)insn)->o3 = BITSEL(ir, 4);
                  ((aarch64_insn_ccmni*)insn)->nzcv = UNSIGNED_BITS(ir, 3,0);
                  ((aarch64_insn_ccmni*)insn)->decode_behaviour();
                  ((aarch64_insn_ccmni*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              }
              break;
            }
          case 0:
            {
              // Node 78
              // Node 79
              switch ((ir & BIT_LSB(4)) >> 4)
              {
              case 0:
                {
                  // Node 80
                  // Node 81
                  aarch64_insn_ccmnr *insn = new (decode_object) aarch64_insn_ccmnr();
                  insn->ir = ir;
                  ((aarch64_insn_ccmnr*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_ccmnr*)insn)->op = BITSEL(ir, 30);
                  ((aarch64_insn_ccmnr*)insn)->S = BITSEL(ir, 29);
                  ((aarch64_insn_ccmnr*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                  ((aarch64_insn_ccmnr*)insn)->cond = UNSIGNED_BITS(ir, 15,12);
                  ((aarch64_insn_ccmnr*)insn)->o2 = BITSEL(ir, 10);
                  ((aarch64_insn_ccmnr*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_ccmnr*)insn)->o3 = BITSEL(ir, 4);
                  ((aarch64_insn_ccmnr*)insn)->nzcv = UNSIGNED_BITS(ir, 3,0);
                  ((aarch64_insn_ccmnr*)insn)->decode_behaviour();
                  ((aarch64_insn_ccmnr*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              }
              break;
            }
          }
          break;
        }
      }
      switch (UNSIGNED_BITS(ir, 28,24)) 
      {
      case 10:
        {
          // Node 323
          // Node 324
          switch (UNSIGNED_BITS(ir, 15,5)) 
          {
          case 31:
            {
              // Node 325
              // Node 326
              aarch64_insn_mov *insn = new (decode_object) aarch64_insn_mov();
              insn->ir = ir;
              ((aarch64_insn_mov*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_mov*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
              ((aarch64_insn_mov*)insn)->shift = UNSIGNED_BITS(ir, 23,22);
              ((aarch64_insn_mov*)insn)->N = BITSEL(ir, 21);
              ((aarch64_insn_mov*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
              ((aarch64_insn_mov*)insn)->imm6 = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_mov*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_mov*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_mov*)insn)->decode_behaviour();
              ((aarch64_insn_mov*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          // Node 354
          aarch64_insn_orrsr *insn = new (decode_object) aarch64_insn_orrsr();
          insn->ir = ir;
          ((aarch64_insn_orrsr*)insn)->sf = BITSEL(ir, 31);
          ((aarch64_insn_orrsr*)insn)->opc = UNSIGNED_BITS(ir, 30,29);
          ((aarch64_insn_orrsr*)insn)->shift = UNSIGNED_BITS(ir, 23,22);
          ((aarch64_insn_orrsr*)insn)->N = BITSEL(ir, 21);
          ((aarch64_insn_orrsr*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
          ((aarch64_insn_orrsr*)insn)->imm6 = UNSIGNED_BITS(ir, 15,10);
          ((aarch64_insn_orrsr*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
          ((aarch64_insn_orrsr*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
          ((aarch64_insn_orrsr*)insn)->decode_behaviour();
          ((aarch64_insn_orrsr*)insn)->is_predicated = false;
          return insn;
          break;
        }
      }
      switch (UNSIGNED_BITS(ir, 28,25)) 
      {
      case 10:
        {
          // Node 70
          // Node 71
          aarch64_insn_cbz *insn = new (decode_object) aarch64_insn_cbz();
          insn->ir = ir;
          ((aarch64_insn_cbz*)insn)->sf = BITSEL(ir, 31);
          ((aarch64_insn_cbz*)insn)->op = BITSEL(ir, 24);
          ((aarch64_insn_cbz*)insn)->imm19 = UNSIGNED_BITS(ir, 23,5);
          ((aarch64_insn_cbz*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
          ((aarch64_insn_cbz*)insn)->decode_behaviour();
          ((aarch64_insn_cbz*)insn)->_cfi.IsControlFlow = true;
          ((aarch64_insn_cbz*)insn)->is_predicated = false;
          return insn;
          break;
        }
      case 11:
        {
          // Node 476
          // Node 477
          aarch64_insn_tbz *insn = new (decode_object) aarch64_insn_tbz();
          insn->ir = ir;
          ((aarch64_insn_tbz*)insn)->b5 = BITSEL(ir, 31);
          ((aarch64_insn_tbz*)insn)->op = BITSEL(ir, 24);
          ((aarch64_insn_tbz*)insn)->b40 = UNSIGNED_BITS(ir, 23,19);
          ((aarch64_insn_tbz*)insn)->imm14 = UNSIGNED_BITS(ir, 18,5);
          ((aarch64_insn_tbz*)insn)->rt = UNSIGNED_BITS(ir, 4,0);
          ((aarch64_insn_tbz*)insn)->decode_behaviour();
          ((aarch64_insn_tbz*)insn)->_cfi.IsControlFlow = true;
          ((aarch64_insn_tbz*)insn)->is_predicated = false;
          return insn;
          break;
        }
      }
      break;
    }
  }
  switch ((ir & BIT_LSB(30)) >> 30)
  {
  case 0:
    {
      // Node 2
      // Node 3
      switch (UNSIGNED_BITS(ir, 28,21)) 
      {
      case 208:
        {
          // Node 4
          // Node 5
          switch (UNSIGNED_BITS(ir, 15,10)) 
          {
          case 0:
            {
              // Node 6
              // Node 7
              aarch64_insn_adc *insn = new (decode_object) aarch64_insn_adc();
              insn->ir = ir;
              ((aarch64_insn_adc*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_adc*)insn)->op = BITSEL(ir, 30);
              ((aarch64_insn_adc*)insn)->S = BITSEL(ir, 29);
              ((aarch64_insn_adc*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
              ((aarch64_insn_adc*)insn)->opcode2 = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_adc*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_adc*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_adc*)insn)->decode_behaviour();
              ((aarch64_insn_adc*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          break;
        }
      }
      switch (UNSIGNED_BITS(ir, 28,24)) 
      {
      case 11:
        {
          // Node 8
          // Node 9
          switch ((ir & BIT_LSB(21)) >> 21)
          {
          case 1:
            {
              // Node 10
              // Node 11
              switch (UNSIGNED_BITS(ir, 15,13)) 
              {
              case 0:
                {
                  // Node 12
                  // Node 13
                  aarch64_insn_add_ereg *insn = new (decode_object) aarch64_insn_add_ereg();
                  insn->ir = ir;
                  ((aarch64_insn_add_ereg*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_add_ereg*)insn)->op = BITSEL(ir, 30);
                  ((aarch64_insn_add_ereg*)insn)->S = BITSEL(ir, 29);
                  ((aarch64_insn_add_ereg*)insn)->opt = UNSIGNED_BITS(ir, 23,22);
                  ((aarch64_insn_add_ereg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                  ((aarch64_insn_add_ereg*)insn)->option = UNSIGNED_BITS(ir, 15,13);
                  ((aarch64_insn_add_ereg*)insn)->imm3 = UNSIGNED_BITS(ir, 12,10);
                  ((aarch64_insn_add_ereg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_add_ereg*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_add_ereg*)insn)->decode_behaviour();
                  ((aarch64_insn_add_ereg*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              }
              break;
            }
          case 0:
            {
              // Node 14
              // Node 15
              aarch64_insn_add_sreg *insn = new (decode_object) aarch64_insn_add_sreg();
              insn->ir = ir;
              ((aarch64_insn_add_sreg*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_add_sreg*)insn)->op = BITSEL(ir, 30);
              ((aarch64_insn_add_sreg*)insn)->S = BITSEL(ir, 29);
              ((aarch64_insn_add_sreg*)insn)->shift = UNSIGNED_BITS(ir, 23,22);
              ((aarch64_insn_add_sreg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
              ((aarch64_insn_add_sreg*)insn)->imm6 = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_add_sreg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_add_sreg*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_add_sreg*)insn)->decode_behaviour();
              ((aarch64_insn_add_sreg*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          break;
        }
      case 17:
        {
          // Node 16
          // Node 17
          aarch64_insn_addi *insn = new (decode_object) aarch64_insn_addi();
          insn->ir = ir;
          ((aarch64_insn_addi*)insn)->sf = BITSEL(ir, 31);
          ((aarch64_insn_addi*)insn)->op = BITSEL(ir, 30);
          ((aarch64_insn_addi*)insn)->S = BITSEL(ir, 29);
          ((aarch64_insn_addi*)insn)->shift = UNSIGNED_BITS(ir, 23,22);
          ((aarch64_insn_addi*)insn)->imm12 = UNSIGNED_BITS(ir, 21,10);
          ((aarch64_insn_addi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
          ((aarch64_insn_addi*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
          ((aarch64_insn_addi*)insn)->decode_behaviour();
          ((aarch64_insn_addi*)insn)->is_predicated = false;
          return insn;
          break;
        }
      }
      break;
    }
  case 1:
    {
      // Node 372
      // Node 373
      switch (UNSIGNED_BITS(ir, 28,21)) 
      {
      case 208:
        {
          // Node 374
          // Node 375
          switch (UNSIGNED_BITS(ir, 15,10)) 
          {
          case 0:
            {
              // Node 376
              // Node 377
              aarch64_insn_sbc *insn = new (decode_object) aarch64_insn_sbc();
              insn->ir = ir;
              ((aarch64_insn_sbc*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_sbc*)insn)->op = BITSEL(ir, 30);
              ((aarch64_insn_sbc*)insn)->S = BITSEL(ir, 29);
              ((aarch64_insn_sbc*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
              ((aarch64_insn_sbc*)insn)->opcode2 = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_sbc*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_sbc*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_sbc*)insn)->decode_behaviour();
              ((aarch64_insn_sbc*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          break;
        }
      }
      switch (UNSIGNED_BITS(ir, 28,22)) 
      {
      case 69:
        {
          // Node 470
          // Node 471
          aarch64_insn_subi *insn = new (decode_object) aarch64_insn_subi();
          insn->ir = ir;
          ((aarch64_insn_subi*)insn)->sf = BITSEL(ir, 31);
          ((aarch64_insn_subi*)insn)->op = BITSEL(ir, 30);
          ((aarch64_insn_subi*)insn)->S = BITSEL(ir, 29);
          ((aarch64_insn_subi*)insn)->shift = UNSIGNED_BITS(ir, 23,22);
          ((aarch64_insn_subi*)insn)->imm12 = UNSIGNED_BITS(ir, 21,10);
          ((aarch64_insn_subi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
          ((aarch64_insn_subi*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
          ((aarch64_insn_subi*)insn)->decode_behaviour();
          ((aarch64_insn_subi*)insn)->is_predicated = false;
          return insn;
          break;
        }
      case 68:
        {
          // Node 472
          // Node 473
          aarch64_insn_subi *insn = new (decode_object) aarch64_insn_subi();
          insn->ir = ir;
          ((aarch64_insn_subi*)insn)->sf = BITSEL(ir, 31);
          ((aarch64_insn_subi*)insn)->op = BITSEL(ir, 30);
          ((aarch64_insn_subi*)insn)->S = BITSEL(ir, 29);
          ((aarch64_insn_subi*)insn)->shift = UNSIGNED_BITS(ir, 23,22);
          ((aarch64_insn_subi*)insn)->imm12 = UNSIGNED_BITS(ir, 21,10);
          ((aarch64_insn_subi*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
          ((aarch64_insn_subi*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
          ((aarch64_insn_subi*)insn)->decode_behaviour();
          ((aarch64_insn_subi*)insn)->is_predicated = false;
          return insn;
          break;
        }
      }
      switch (UNSIGNED_BITS(ir, 28,24)) 
      {
      case 11:
        {
          // Node 462
          // Node 463
          switch ((ir & BIT_LSB(21)) >> 21)
          {
          case 1:
            {
              // Node 464
              // Node 465
              switch (UNSIGNED_BITS(ir, 15,13)) 
              {
              case 0:
                {
                  // Node 466
                  // Node 467
                  aarch64_insn_sub_ereg *insn = new (decode_object) aarch64_insn_sub_ereg();
                  insn->ir = ir;
                  ((aarch64_insn_sub_ereg*)insn)->sf = BITSEL(ir, 31);
                  ((aarch64_insn_sub_ereg*)insn)->op = BITSEL(ir, 30);
                  ((aarch64_insn_sub_ereg*)insn)->S = BITSEL(ir, 29);
                  ((aarch64_insn_sub_ereg*)insn)->opt = UNSIGNED_BITS(ir, 23,22);
                  ((aarch64_insn_sub_ereg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
                  ((aarch64_insn_sub_ereg*)insn)->option = UNSIGNED_BITS(ir, 15,13);
                  ((aarch64_insn_sub_ereg*)insn)->imm3 = UNSIGNED_BITS(ir, 12,10);
                  ((aarch64_insn_sub_ereg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
                  ((aarch64_insn_sub_ereg*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
                  ((aarch64_insn_sub_ereg*)insn)->decode_behaviour();
                  ((aarch64_insn_sub_ereg*)insn)->is_predicated = false;
                  return insn;
                  break;
                }
              }
              break;
            }
          case 0:
            {
              // Node 468
              // Node 469
              aarch64_insn_sub_sreg *insn = new (decode_object) aarch64_insn_sub_sreg();
              insn->ir = ir;
              ((aarch64_insn_sub_sreg*)insn)->sf = BITSEL(ir, 31);
              ((aarch64_insn_sub_sreg*)insn)->op = BITSEL(ir, 30);
              ((aarch64_insn_sub_sreg*)insn)->S = BITSEL(ir, 29);
              ((aarch64_insn_sub_sreg*)insn)->shift = UNSIGNED_BITS(ir, 23,22);
              ((aarch64_insn_sub_sreg*)insn)->rm = UNSIGNED_BITS(ir, 20,16);
              ((aarch64_insn_sub_sreg*)insn)->imm6 = UNSIGNED_BITS(ir, 15,10);
              ((aarch64_insn_sub_sreg*)insn)->rn = UNSIGNED_BITS(ir, 9,5);
              ((aarch64_insn_sub_sreg*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
              ((aarch64_insn_sub_sreg*)insn)->decode_behaviour();
              ((aarch64_insn_sub_sreg*)insn)->is_predicated = false;
              return insn;
              break;
            }
          }
          break;
        }
      }
      break;
    }
  }
  // Node 18
  switch (UNSIGNED_BITS(ir, 28,24)) 
  {
  case 16:
    {
      // Node 19
      // Node 20
      aarch64_insn_adr *insn = new (decode_object) aarch64_insn_adr();
      insn->ir = ir;
      ((aarch64_insn_adr*)insn)->op = BITSEL(ir, 31);
      ((aarch64_insn_adr*)insn)->immlo = UNSIGNED_BITS(ir, 30,29);
      ((aarch64_insn_adr*)insn)->immhi = UNSIGNED_BITS(ir, 23,5);
      ((aarch64_insn_adr*)insn)->rd = UNSIGNED_BITS(ir, 4,0);
      ((aarch64_insn_adr*)insn)->decode_behaviour();
      ((aarch64_insn_adr*)insn)->is_predicated = false;
      return insn;
      break;
    }
  }
  return nullptr;
}
aarch64_insn_adc::aarch64_insn_adc() : aarch64_fmt_a64_ADD_SUB_CARRY(opcodes::aarch64_a64_adc) 
{
}
bool aarch64_insn_adc::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_add_ereg::aarch64_insn_add_ereg() : aarch64_fmt_a64_ADD_SUB_EREG(opcodes::aarch64_a64_add_ereg) 
{
}
bool aarch64_insn_add_ereg::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_add_sreg::aarch64_insn_add_sreg() : aarch64_fmt_a64_ADD_SUB_SREG(opcodes::aarch64_a64_add_sreg) 
{
}
bool aarch64_insn_add_sreg::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_addi::aarch64_insn_addi() : aarch64_fmt_a64_ADD_SUB_IMM(opcodes::aarch64_a64_addi) 
{
}
bool aarch64_insn_addi::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_adr::aarch64_insn_adr() : aarch64_fmt_a64_PC_REL(opcodes::aarch64_a64_adr) 
{
}
bool aarch64_insn_adr::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_andi::aarch64_insn_andi() : aarch64_fmt_a64_LOGICAL_IMM(opcodes::aarch64_a64_andi) 
{
}
bool aarch64_insn_andi::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_andsr::aarch64_insn_andsr() : aarch64_fmt_a64_LOGICAL_SR(opcodes::aarch64_a64_andsr) 
{
}
bool aarch64_insn_andsr::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_asrv::aarch64_insn_asrv() : aarch64_fmt_a64_DP_2S(opcodes::aarch64_a64_asrv) 
{
}
bool aarch64_insn_asrv::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_b::aarch64_insn_b() : aarch64_fmt_a64_UB_IMM(opcodes::aarch64_a64_b) 
{
}
bool aarch64_insn_b::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_barrier::aarch64_insn_barrier() : aarch64_fmt_a64_SYSTEM(opcodes::aarch64_a64_barrier) 
{
}
bool aarch64_insn_barrier::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_bcond::aarch64_insn_bcond() : aarch64_fmt_a64_COND_B_IMM(opcodes::aarch64_a64_bcond) 
{
}
bool aarch64_insn_bcond::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_bfm::aarch64_insn_bfm() : aarch64_fmt_a64_BITFIELD(opcodes::aarch64_a64_bfm) 
{
}
bool aarch64_insn_bfm::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_bicsr::aarch64_insn_bicsr() : aarch64_fmt_a64_LOGICAL_SR(opcodes::aarch64_a64_bicsr) 
{
}
bool aarch64_insn_bicsr::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_br::aarch64_insn_br() : aarch64_fmt_a64_UB_REG(opcodes::aarch64_a64_br) 
{
}
bool aarch64_insn_br::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_cbz::aarch64_insn_cbz() : aarch64_fmt_a64_CMP_B_IMM(opcodes::aarch64_a64_cbz) 
{
}
bool aarch64_insn_cbz::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ccmni::aarch64_insn_ccmni() : aarch64_fmt_a64_COND_CMP_IMM(opcodes::aarch64_a64_ccmni) 
{
}
bool aarch64_insn_ccmni::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ccmnr::aarch64_insn_ccmnr() : aarch64_fmt_a64_COND_CMP_REG(opcodes::aarch64_a64_ccmnr) 
{
}
bool aarch64_insn_ccmnr::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ccmpi::aarch64_insn_ccmpi() : aarch64_fmt_a64_COND_CMP_IMM(opcodes::aarch64_a64_ccmpi) 
{
}
bool aarch64_insn_ccmpi::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ccmpr::aarch64_insn_ccmpr() : aarch64_fmt_a64_COND_CMP_REG(opcodes::aarch64_a64_ccmpr) 
{
}
bool aarch64_insn_ccmpr::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_cls::aarch64_insn_cls() : aarch64_fmt_a64_DP_1S(opcodes::aarch64_a64_cls) 
{
}
bool aarch64_insn_cls::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_clz::aarch64_insn_clz() : aarch64_fmt_a64_DP_1S(opcodes::aarch64_a64_clz) 
{
}
bool aarch64_insn_clz::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_crc32::aarch64_insn_crc32() : aarch64_fmt_a64_DP_2S(opcodes::aarch64_a64_crc32) 
{
}
bool aarch64_insn_crc32::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_crc32c::aarch64_insn_crc32c() : aarch64_fmt_a64_DP_2S(opcodes::aarch64_a64_crc32c) 
{
}
bool aarch64_insn_crc32c::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_csel::aarch64_insn_csel() : aarch64_fmt_a64_COND_SEL(opcodes::aarch64_a64_csel) 
{
}
bool aarch64_insn_csel::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_csinc::aarch64_insn_csinc() : aarch64_fmt_a64_COND_SEL(opcodes::aarch64_a64_csinc) 
{
}
bool aarch64_insn_csinc::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_csinv::aarch64_insn_csinv() : aarch64_fmt_a64_COND_SEL(opcodes::aarch64_a64_csinv) 
{
}
bool aarch64_insn_csinv::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_csneg::aarch64_insn_csneg() : aarch64_fmt_a64_COND_SEL(opcodes::aarch64_a64_csneg) 
{
}
bool aarch64_insn_csneg::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_drps::aarch64_insn_drps() : aarch64_fmt_a64_UB_REG(opcodes::aarch64_a64_drps) 
{
}
bool aarch64_insn_drps::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_eori::aarch64_insn_eori() : aarch64_fmt_a64_LOGICAL_IMM(opcodes::aarch64_a64_eori) 
{
}
bool aarch64_insn_eori::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_eorsr::aarch64_insn_eorsr() : aarch64_fmt_a64_LOGICAL_SR(opcodes::aarch64_a64_eorsr) 
{
}
bool aarch64_insn_eorsr::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_eret::aarch64_insn_eret() : aarch64_fmt_a64_UB_REG(opcodes::aarch64_a64_eret) 
{
}
bool aarch64_insn_eret::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_exgen::aarch64_insn_exgen() : aarch64_fmt_a64_EX_GEN(opcodes::aarch64_a64_exgen) 
{
}
bool aarch64_insn_exgen::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_extr::aarch64_insn_extr() : aarch64_fmt_a64_EXTRACT(opcodes::aarch64_a64_extr) 
{
}
bool aarch64_insn_extr::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_hint::aarch64_insn_hint() : aarch64_fmt_a64_SYSTEM(opcodes::aarch64_a64_hint) 
{
}
bool aarch64_insn_hint::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldp::aarch64_insn_ldp() : aarch64_fmt_a64_LS_REG_PAIR_OFF(opcodes::aarch64_a64_ldp) 
{
}
bool aarch64_insn_ldp::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldpi::aarch64_insn_ldpi() : aarch64_fmt_a64_LS_REG_PAIR_IDX(opcodes::aarch64_a64_ldpi) 
{
}
bool aarch64_insn_ldpi::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldpsw::aarch64_insn_ldpsw() : aarch64_fmt_a64_LS_REG_PAIR_OFF(opcodes::aarch64_a64_ldpsw) 
{
}
bool aarch64_insn_ldpsw::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldpswi::aarch64_insn_ldpswi() : aarch64_fmt_a64_LS_REG_PAIR_IDX(opcodes::aarch64_a64_ldpswi) 
{
}
bool aarch64_insn_ldpswi::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldr::aarch64_insn_ldr() : aarch64_fmt_a64_LS_REG_IMM_POST(opcodes::aarch64_a64_ldr) 
{
}
bool aarch64_insn_ldr::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldr_lit::aarch64_insn_ldr_lit() : aarch64_fmt_a64_LOAD_REG_LIT(opcodes::aarch64_a64_ldr_lit) 
{
}
bool aarch64_insn_ldr_lit::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldr_reg::aarch64_insn_ldr_reg() : aarch64_fmt_a64_LS_REG_REG_OFF(opcodes::aarch64_a64_ldr_reg) 
{
}
bool aarch64_insn_ldr_reg::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldrb::aarch64_insn_ldrb() : aarch64_fmt_a64_LS_REG_IMM_POST(opcodes::aarch64_a64_ldrb) 
{
}
bool aarch64_insn_ldrb::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldrb_reg::aarch64_insn_ldrb_reg() : aarch64_fmt_a64_LS_REG_REG_OFF(opcodes::aarch64_a64_ldrb_reg) 
{
}
bool aarch64_insn_ldrb_reg::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldrbi::aarch64_insn_ldrbi() : aarch64_fmt_a64_LS_REG_UIMM(opcodes::aarch64_a64_ldrbi) 
{
}
bool aarch64_insn_ldrbi::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldrh::aarch64_insn_ldrh() : aarch64_fmt_a64_LS_REG_IMM_POST(opcodes::aarch64_a64_ldrh) 
{
}
bool aarch64_insn_ldrh::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldrh_reg::aarch64_insn_ldrh_reg() : aarch64_fmt_a64_LS_REG_REG_OFF(opcodes::aarch64_a64_ldrh_reg) 
{
}
bool aarch64_insn_ldrh_reg::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldrhi::aarch64_insn_ldrhi() : aarch64_fmt_a64_LS_REG_UIMM(opcodes::aarch64_a64_ldrhi) 
{
}
bool aarch64_insn_ldrhi::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldri::aarch64_insn_ldri() : aarch64_fmt_a64_LS_REG_UIMM(opcodes::aarch64_a64_ldri) 
{
}
bool aarch64_insn_ldri::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldrsw::aarch64_insn_ldrsw() : aarch64_fmt_a64_LS_REG_IMM_POST(opcodes::aarch64_a64_ldrsw) 
{
}
bool aarch64_insn_ldrsw::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldrsw_lit::aarch64_insn_ldrsw_lit() : aarch64_fmt_a64_LOAD_REG_LIT(opcodes::aarch64_a64_ldrsw_lit) 
{
}
bool aarch64_insn_ldrsw_lit::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldrsw_reg::aarch64_insn_ldrsw_reg() : aarch64_fmt_a64_LS_REG_REG_OFF(opcodes::aarch64_a64_ldrsw_reg) 
{
}
bool aarch64_insn_ldrsw_reg::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldrswi::aarch64_insn_ldrswi() : aarch64_fmt_a64_LS_REG_UIMM(opcodes::aarch64_a64_ldrswi) 
{
}
bool aarch64_insn_ldrswi::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldtr::aarch64_insn_ldtr() : aarch64_fmt_a64_LS_REG_UNPRIV(opcodes::aarch64_a64_ldtr) 
{
}
bool aarch64_insn_ldtr::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldtrb::aarch64_insn_ldtrb() : aarch64_fmt_a64_LS_REG_UNPRIV(opcodes::aarch64_a64_ldtrb) 
{
}
bool aarch64_insn_ldtrb::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldtrh::aarch64_insn_ldtrh() : aarch64_fmt_a64_LS_REG_UNPRIV(opcodes::aarch64_a64_ldtrh) 
{
}
bool aarch64_insn_ldtrh::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldtrsw::aarch64_insn_ldtrsw() : aarch64_fmt_a64_LS_REG_UNPRIV(opcodes::aarch64_a64_ldtrsw) 
{
}
bool aarch64_insn_ldtrsw::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldur::aarch64_insn_ldur() : aarch64_fmt_a64_LS_REG_USIMM(opcodes::aarch64_a64_ldur) 
{
}
bool aarch64_insn_ldur::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldurb::aarch64_insn_ldurb() : aarch64_fmt_a64_LS_REG_USIMM(opcodes::aarch64_a64_ldurb) 
{
}
bool aarch64_insn_ldurb::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldurh::aarch64_insn_ldurh() : aarch64_fmt_a64_LS_REG_USIMM(opcodes::aarch64_a64_ldurh) 
{
}
bool aarch64_insn_ldurh::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ldursw::aarch64_insn_ldursw() : aarch64_fmt_a64_LS_REG_USIMM(opcodes::aarch64_a64_ldursw) 
{
}
bool aarch64_insn_ldursw::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_lslv::aarch64_insn_lslv() : aarch64_fmt_a64_DP_2S(opcodes::aarch64_a64_lslv) 
{
}
bool aarch64_insn_lslv::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_lsrv::aarch64_insn_lsrv() : aarch64_fmt_a64_DP_2S(opcodes::aarch64_a64_lsrv) 
{
}
bool aarch64_insn_lsrv::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_madd::aarch64_insn_madd() : aarch64_fmt_a64_DP_3S(opcodes::aarch64_a64_madd) 
{
}
bool aarch64_insn_madd::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_mov::aarch64_insn_mov() : aarch64_fmt_a64_LOGICAL_SR(opcodes::aarch64_a64_mov) 
{
}
bool aarch64_insn_mov::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_movk::aarch64_insn_movk() : aarch64_fmt_a64_MOVE_WIDE_IMM(opcodes::aarch64_a64_movk) 
{
}
bool aarch64_insn_movk::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_movn::aarch64_insn_movn() : aarch64_fmt_a64_MOVE_WIDE_IMM(opcodes::aarch64_a64_movn) 
{
}
bool aarch64_insn_movn::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_movz::aarch64_insn_movz() : aarch64_fmt_a64_MOVE_WIDE_IMM(opcodes::aarch64_a64_movz) 
{
}
bool aarch64_insn_movz::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_mrs::aarch64_insn_mrs() : aarch64_fmt_a64_SYSTEM(opcodes::aarch64_a64_mrs) 
{
}
bool aarch64_insn_mrs::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_msr_imm::aarch64_insn_msr_imm() : aarch64_fmt_a64_SYSTEM(opcodes::aarch64_a64_msr_imm) 
{
}
bool aarch64_insn_msr_imm::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_msr_reg::aarch64_insn_msr_reg() : aarch64_fmt_a64_SYSTEM(opcodes::aarch64_a64_msr_reg) 
{
}
bool aarch64_insn_msr_reg::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_msub::aarch64_insn_msub() : aarch64_fmt_a64_DP_3S(opcodes::aarch64_a64_msub) 
{
}
bool aarch64_insn_msub::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_orri::aarch64_insn_orri() : aarch64_fmt_a64_LOGICAL_IMM(opcodes::aarch64_a64_orri) 
{
}
bool aarch64_insn_orri::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_orrsr::aarch64_insn_orrsr() : aarch64_fmt_a64_LOGICAL_SR(opcodes::aarch64_a64_orrsr) 
{
}
bool aarch64_insn_orrsr::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_prfm::aarch64_insn_prfm() : aarch64_fmt_a64_LOAD_REG_LIT(opcodes::aarch64_a64_prfm) 
{
}
bool aarch64_insn_prfm::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_rbit::aarch64_insn_rbit() : aarch64_fmt_a64_DP_1S(opcodes::aarch64_a64_rbit) 
{
}
bool aarch64_insn_rbit::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ret::aarch64_insn_ret() : aarch64_fmt_a64_UB_REG(opcodes::aarch64_a64_ret) 
{
}
bool aarch64_insn_ret::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_rev::aarch64_insn_rev() : aarch64_fmt_a64_DP_1S(opcodes::aarch64_a64_rev) 
{
}
bool aarch64_insn_rev::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_rev16::aarch64_insn_rev16() : aarch64_fmt_a64_DP_1S(opcodes::aarch64_a64_rev16) 
{
}
bool aarch64_insn_rev16::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_rev32::aarch64_insn_rev32() : aarch64_fmt_a64_DP_1S(opcodes::aarch64_a64_rev32) 
{
}
bool aarch64_insn_rev32::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_rorv::aarch64_insn_rorv() : aarch64_fmt_a64_DP_2S(opcodes::aarch64_a64_rorv) 
{
}
bool aarch64_insn_rorv::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_sbc::aarch64_insn_sbc() : aarch64_fmt_a64_ADD_SUB_CARRY(opcodes::aarch64_a64_sbc) 
{
}
bool aarch64_insn_sbc::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_sbfm::aarch64_insn_sbfm() : aarch64_fmt_a64_BITFIELD(opcodes::aarch64_a64_sbfm) 
{
}
bool aarch64_insn_sbfm::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_sdiv::aarch64_insn_sdiv() : aarch64_fmt_a64_DP_2S(opcodes::aarch64_a64_sdiv) 
{
}
bool aarch64_insn_sdiv::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_smaddl::aarch64_insn_smaddl() : aarch64_fmt_a64_DP_3S(opcodes::aarch64_a64_smaddl) 
{
}
bool aarch64_insn_smaddl::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_smsubl::aarch64_insn_smsubl() : aarch64_fmt_a64_DP_3S(opcodes::aarch64_a64_smsubl) 
{
}
bool aarch64_insn_smsubl::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_smulh::aarch64_insn_smulh() : aarch64_fmt_a64_DP_3S(opcodes::aarch64_a64_smulh) 
{
}
bool aarch64_insn_smulh::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_stp::aarch64_insn_stp() : aarch64_fmt_a64_LS_REG_PAIR_OFF(opcodes::aarch64_a64_stp) 
{
}
bool aarch64_insn_stp::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_stpi::aarch64_insn_stpi() : aarch64_fmt_a64_LS_REG_PAIR_IDX(opcodes::aarch64_a64_stpi) 
{
}
bool aarch64_insn_stpi::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_str::aarch64_insn_str() : aarch64_fmt_a64_LS_REG_IMM_POST(opcodes::aarch64_a64_str) 
{
}
bool aarch64_insn_str::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_str_reg::aarch64_insn_str_reg() : aarch64_fmt_a64_LS_REG_REG_OFF(opcodes::aarch64_a64_str_reg) 
{
}
bool aarch64_insn_str_reg::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_strb::aarch64_insn_strb() : aarch64_fmt_a64_LS_REG_IMM_POST(opcodes::aarch64_a64_strb) 
{
}
bool aarch64_insn_strb::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_strb_reg::aarch64_insn_strb_reg() : aarch64_fmt_a64_LS_REG_REG_OFF(opcodes::aarch64_a64_strb_reg) 
{
}
bool aarch64_insn_strb_reg::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_strbi::aarch64_insn_strbi() : aarch64_fmt_a64_LS_REG_UIMM(opcodes::aarch64_a64_strbi) 
{
}
bool aarch64_insn_strbi::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_strh::aarch64_insn_strh() : aarch64_fmt_a64_LS_REG_IMM_POST(opcodes::aarch64_a64_strh) 
{
}
bool aarch64_insn_strh::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_strh_reg::aarch64_insn_strh_reg() : aarch64_fmt_a64_LS_REG_REG_OFF(opcodes::aarch64_a64_strh_reg) 
{
}
bool aarch64_insn_strh_reg::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_strhi::aarch64_insn_strhi() : aarch64_fmt_a64_LS_REG_UIMM(opcodes::aarch64_a64_strhi) 
{
}
bool aarch64_insn_strhi::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_stri::aarch64_insn_stri() : aarch64_fmt_a64_LS_REG_UIMM(opcodes::aarch64_a64_stri) 
{
}
bool aarch64_insn_stri::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_sttr::aarch64_insn_sttr() : aarch64_fmt_a64_LS_REG_UNPRIV(opcodes::aarch64_a64_sttr) 
{
}
bool aarch64_insn_sttr::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_sttrb::aarch64_insn_sttrb() : aarch64_fmt_a64_LS_REG_UNPRIV(opcodes::aarch64_a64_sttrb) 
{
}
bool aarch64_insn_sttrb::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_sttrh::aarch64_insn_sttrh() : aarch64_fmt_a64_LS_REG_UNPRIV(opcodes::aarch64_a64_sttrh) 
{
}
bool aarch64_insn_sttrh::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_stur::aarch64_insn_stur() : aarch64_fmt_a64_LS_REG_USIMM(opcodes::aarch64_a64_stur) 
{
}
bool aarch64_insn_stur::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_sturb::aarch64_insn_sturb() : aarch64_fmt_a64_LS_REG_USIMM(opcodes::aarch64_a64_sturb) 
{
}
bool aarch64_insn_sturb::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_sturh::aarch64_insn_sturh() : aarch64_fmt_a64_LS_REG_USIMM(opcodes::aarch64_a64_sturh) 
{
}
bool aarch64_insn_sturh::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_sub_ereg::aarch64_insn_sub_ereg() : aarch64_fmt_a64_ADD_SUB_EREG(opcodes::aarch64_a64_sub_ereg) 
{
}
bool aarch64_insn_sub_ereg::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_sub_sreg::aarch64_insn_sub_sreg() : aarch64_fmt_a64_ADD_SUB_SREG(opcodes::aarch64_a64_sub_sreg) 
{
}
bool aarch64_insn_sub_sreg::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_subi::aarch64_insn_subi() : aarch64_fmt_a64_ADD_SUB_IMM(opcodes::aarch64_a64_subi) 
{
}
bool aarch64_insn_subi::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_sys::aarch64_insn_sys() : aarch64_fmt_a64_SYSTEM(opcodes::aarch64_a64_sys) 
{
}
bool aarch64_insn_sys::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_tbz::aarch64_insn_tbz() : aarch64_fmt_a64_TEST_B_IMM(opcodes::aarch64_a64_tbz) 
{
}
bool aarch64_insn_tbz::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_ubfm::aarch64_insn_ubfm() : aarch64_fmt_a64_BITFIELD(opcodes::aarch64_a64_ubfm) 
{
}
bool aarch64_insn_ubfm::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_udiv::aarch64_insn_udiv() : aarch64_fmt_a64_DP_2S(opcodes::aarch64_a64_udiv) 
{
}
bool aarch64_insn_udiv::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_umaddl::aarch64_insn_umaddl() : aarch64_fmt_a64_DP_3S(opcodes::aarch64_a64_umaddl) 
{
}
bool aarch64_insn_umaddl::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_umsubl::aarch64_insn_umsubl() : aarch64_fmt_a64_DP_3S(opcodes::aarch64_a64_umsubl) 
{
}
bool aarch64_insn_umsubl::translate(dbt::ir::Function& fn) const 
{
  return true;
}
aarch64_insn_umulh::aarch64_insn_umulh() : aarch64_fmt_a64_DP_3S(opcodes::aarch64_a64_umulh) 
{
}
bool aarch64_insn_umulh::translate(dbt::ir::Function& fn) const 
{
  return true;
}
