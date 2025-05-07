section .text
global _start

extern main

_start:
  ; Setup the stack
  mov esp, stack_end ; The stack goes downwards, so why not put it before the bootloader?
  and esp, 0xfffffff0 ; Align it to 16 bytes

  ; Get some C running (I ain't writing the whole thing on assembly)
  call main

section .bss
stack_begin:
  resb 16384 ; 16kbs of stack. Don't know if this is enough. But for now it is.
stack_end:

section .data

times 2048 db 0
