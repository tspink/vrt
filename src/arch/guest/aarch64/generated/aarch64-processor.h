#pragma once
#include <vrt/runtime/processor.h>
#include <arch/guest/aarch64/aarch64-mmu.h>
namespace vrt 
{
  namespace arch 
  {
    namespace guest 
    {
      namespace aarch64 
      {
        class aarch64_processor : public runtime::Processor 
        {
          private:
          AArch64MMU _mmu;
          public:
          aarch64_processor(runtime::Environment& env);
          virtual ~aarch64_processor();
          void dump_state(bool show_hidden) const override;
          bool handle_irq(uint8_t irq) override;
          bool handle_page_fault() override;
          bool handle_undefined_instruction() override;
          struct reg_off_t 
          {
            uint64_t *RBX;
            uint64_t *RBW;
            uint64_t *SP;
            uint32_t *WSP;
            uint64_t *PC;
            uint8_t *N;
            uint8_t *Z;
            uint8_t *C;
            uint8_t *V;
            uint8_t *D;
            uint8_t *A;
            uint8_t *I;
            uint8_t *F;
            uint8_t *EL;
            uint64_t *TTBR0;
            uint64_t *TTBR1;
            uint64_t *FPCR;
            uint64_t *FPSR;
          }
          RegisterOffsets;
          public:
        }
        ;
      }
    }
  }
}
