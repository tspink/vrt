#pragma once

register unsigned long long int __PC asm("r15");

#define read_pc() (__PC)
#define write_pc(__value) do { __PC = (__value); } while(0)
