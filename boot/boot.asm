; SPDX-License-Identifier: MPL-2.0-or-later
; SPDX-FileCopyrightText: 2025 Mario Rosell <mar1lusk1@proton.me>

; Level-1 Bootloader for VortexOS
;-----------------------------------
; Written by Mario Rosell

;------------------------------------------

bits 16
org 0x1000

section .text
global _start

message_noerr:  db "Loading...", 0
message_err:    db "ERROR! Cannot load Kernel", 0

_start:

  ; Enable 80x25 mode
  mov ah, 0x00              ; Set video mode
  mov al, 0x03              ; Set video mode to 80x25
  int 0x10

  ; Load the kernel into memory (0x7e00)
  mov ah, 0x02         ; Disk read function
  mov al, 4            ; Read 4 sectors
  mov dl, 0x80         ; First hard drive (0x80)
  les bx, [0x1000]     ; Load ES:BX with address 0x1000:0x2000
  mov cx, 4            ; Number of sectors to read (4 sectors)
  mov dx, 3            ; LBA 3 (the 4th sector)
  int 0x13             ; Call BIOS disk read

  jc .print_err ; If carry flag is set, an error occurred

  mov bx, message_noerr
  call print_message
  cli
  mov eax, 0x1badb002

.print_err:
  mov bx, message_err       ; Load address of the error message 
  call print_message
  cli

  jmp $
  
print_noerr:
  ; Print success message
  mov bx, message_noerr     ; Load address of the success message

print_message:
  ; Print the message
print_char:
  mov al, [bx]              ; Load the character from the message
  inc bx                    ; Move to the next character in the message
  or al, al                 ; Check if we've reached the null terminator (0)
  jz done_printing          ; If it's 0, stop printing
  
  ; Print character
  mov ah, 0x0E              ; Teletype output function
  int 0x10                  ; Call interrupt
  
  jmp print_char            ; Loop back to print next character

done_printing:

  jmp $

times 510 - ($ - $$) db 0    ; Fill the rest of the boot sector with zeros
dw 0xAA55                    ; Boot sector signature (required)

