# kernel space: syscall

## todo:
- [ ] trace syscall
- [ ] sysinfo syscall

## bonus:
- [ ] Print the system call arguments for traced system calls
- [ ] Compute the load average and export it through sysinfo

### trace
- It should take one argument, an integer "mask" -> program calls trace(1 << SYS_fork)
- `user/trace.c` implement application
- `kernel/sysproc.c` add syscall
- `kernel/proc.c` modify fork to copy trace mask to child

### sysinfo
- `kernel/sysinfo.c` takes one argument, a pointer to sysinfo struct
