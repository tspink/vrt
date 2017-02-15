#pragma once
typedef unsigned char			uint8_t;
typedef unsigned short			uint16_t;
typedef unsigned int			uint32_t;
typedef unsigned long long int	uint64_t;

typedef signed char				int8_t;
typedef signed short			int16_t;
typedef signed int				int32_t;
typedef signed long long int	int64_t;

typedef unsigned long	size_t;
typedef unsigned long	off_t;
typedef unsigned long	uintptr_t;
typedef signed long		intptr_t;

typedef signed long int		intmax_t;
typedef unsigned long int	uintmax_t;

#define va_start(v,l)   __builtin_va_start(v,l)
#define va_end(v)       __builtin_va_end(v)
#define va_arg(v,l)     __builtin_va_arg(v,l)

typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;

#define __weak __attribute__((weak))
#define __strong 
#define __packed __attribute__((packed))
#define __noreturn __attribute__((noreturn))
#define __noinline __attribute__((noinline))
#define __pure __attribute__((pure))
#define __aligned(__n) __attribute__((aligned(__n)))
#define __section(__n) __attribute__((section(__n)))
#define __init_priority(__n) __attribute__((init_priority(__n)))
#define __unreachable() __builtin_unreachable()

#define __likely(x) __builtin_expect((x), 1)
#define __unlikely(x) __builtin_expect((x), 0)

#define ARRAY_SIZE(__arr) (sizeof(__arr) / sizeof(__arr[0]))

#define offsetof(st, m) __builtin_offsetof(st, m)

#define container_of(ptr, type, member) ({                      \
        const typeof( ((type *)0)->member ) *__mptr = (ptr);    \
        (type *)( (char *)__mptr - offsetof(type,member) );})

#define NULL nullptr

#define KB(__val) ((__val) >> 10)
#define MB(__val) (KB(__val) >> 10)
#define GB(__val) (MB(__val) >> 10)

#define STRINGIFY(__N) _STRINGIFY(__N)
#define _STRINGIFY(__N) #__N

/*
 *  Paging and pointer arithmetic
 */

template<typename ptr_t = uintptr_t, uint8_t bits = 12>
struct __paging {
	typedef ptr_t pfn_t;
	typedef ptr_t virt_addr_t;
	typedef ptr_t phys_addr_t;
	
	static constexpr uint8_t page_bits = bits;
	static constexpr uint64_t page_size = (1ULL << page_bits);
	
	static inline constexpr ptr_t page_offset(ptr_t addr) { return (addr & (page_size - 1)); }
	static inline constexpr ptr_t page_base(ptr_t addr) { return (addr & ~(page_size - 1)); }
	static inline constexpr pfn_t page_index(ptr_t addr) { return (pfn_t)(addr >> page_bits); }
	static inline constexpr ptr_t page_base_from_index(pfn_t idx) { return (ptr_t)idx << page_bits; }
};

typedef __paging<> __host_paging;
typedef __paging<> __guest_paging;

typedef __host_paging::phys_addr_t hpa_t;
typedef __host_paging::virt_addr_t hva_t;
typedef __host_paging::pfn_t hpfn_t;

typedef __guest_paging::phys_addr_t gpa_t;
typedef __guest_paging::virt_addr_t gva_t;
typedef __guest_paging::pfn_t gpfn_t;

#define __align_up(__addr) (((__addr) & ~0xfffULL) + (((__addr) & 0xfffULL) ? 0x1000 : 0))
#define __align_down(__addr) ((__addr) & ~0xfffULL)

#define KERNEL_VMA_START 0xFFFFFFFF80000000ULL

#define __phys_to_upper_virt(__addr) ((hva_t)(KERNEL_VMA_START + ((uintptr_t)(__addr))))
#define __upper_virt_to_phys(__addr) ((hpa_t)(((uintptr_t)(__addr)) - KERNEL_VMA_START))

#define GUEST_PHYS_VMA_START	0xFFFF800100000000ULL

#define __guest_phys_to_virt(__addr) ((hva_t)(GUEST_PHYS_VMA_START + ((uintptr_t)(__addr))))

extern void *operator new(size_t size, void *ptr);