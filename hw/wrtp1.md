# user space

### sleep cmd
- `kernel/sysproc.c` look for sys_sleep
- `user/user.h` sleep callable from user space
- `user/usys.S` assembler code that jumps to kernel side

### ping_pong cmd
- create pipe and child with fork
- implement small game of pingpong

### primes cmd
- https://swtch.com/~rsc/thread/

### find cmd 
- use recursion to recurse into directories

### xargs cmd
- combine passed values as arguments to a program
