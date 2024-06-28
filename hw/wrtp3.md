# kernel space: page tables

## todo:
- [ ] speed up syscalls
- [ ] print a page table
- [ ] detect which pages have been accessed

## bonus:
- [ ] Use super-pages to reduce the number of PTEs in page tables
- [ ] Unmap the first page of a user process so that dereferencing a null pointer will result in a fault. 
- [ ] Add a system call that reports dirty pages (modified pages) using PTE_D

### trace
- `kernel/memlayout.h`  which captures the layout of memory
- `kernel/vm.c`         which contains most virtual memory (VM) code
- `kernel/kalloc.c`     which contains code for allocating and freeing physical memory

### sysinfo
- `kernel/sysinfo.c` takes one argument, a pointer to sysinfo struct
