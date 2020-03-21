cmd_syscalls/built-in.o :=  ld -m elf_x86_64   -r -o syscalls/built-in.o syscalls/my_syscall.o syscalls/my_syscall2.o 
