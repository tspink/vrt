#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace arch
	{
		namespace host
		{
			namespace x86
			{
				struct MultibootELFSectionHeaderTable {
					uint32_t num;
					uint32_t size;
					uint32_t addr;
					uint32_t shndx;
				} __packed;
			
				struct MultibootMMAPEntry
				{
					uint32_t size;
					uint64_t addr;
					uint64_t len;
#define MULTIBOOT_MEMORY_AVAILABLE              1
#define MULTIBOOT_MEMORY_RESERVED               2
					uint32_t type;
				} __packed;
			
				struct MultibootModuleEntry
				{
				  /* the memory used goes from bytes 'mod_start' to 'mod_end-1' inclusive */
				  uint32_t mod_start;
				  uint32_t mod_end;

				  /* Module command line */
				  uint32_t cmdline;

				  /* padding to take it to 16 bytes (must be zero) */
				  uint32_t pad;
				} __packed;
				
				struct MultibootInfo
				{
					/* Multiboot info version number */
					uint32_t flags;

					/* Available memory from BIOS */
					uint32_t mem_lower;
					uint32_t mem_upper;

					/* "root" partition */
					uint32_t boot_device;

					/* Kernel command line */
					uint32_t cmdline;

					/* Boot-Module list */
					uint32_t mods_count;
					uint32_t mods_addr;

					struct MultibootELFSectionHeaderTable elf_sec;

					/* Memory Mapping buffer */
					uint32_t mmap_length;
					uint32_t mmap_addr;

					/* Drive Info buffer */
					uint32_t drives_length;
					uint32_t drives_addr;

					/* ROM configuration table */
					uint32_t config_table;

					/* Boot Loader Name */
					uint32_t boot_loader_name;

					/* APM table */
					uint32_t apm_table;

					/* Video */
					uint32_t vbe_control_info;
					uint32_t vbe_mode_info;
					uint16_t vbe_mode;
					uint16_t vbe_interface_seg;
					uint16_t vbe_interface_off;
					uint16_t vbe_interface_len;
				} __packed;
			}
		}
	}
}
