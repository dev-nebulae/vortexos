.PHONY: all clean

AS = nasm
CC = gcc

BINFORMAT = elf64
CFLAGS = -ffreestanding -O3 -pedantic -Wall -Wextra -m64 -g -ansi
ASFLAGS = -f $(BINFORMAT)

LD = ld
LDFLAGS =
LDSCRIPT = link.ld

ASM_SOURCES = $(shell find . -name "*.asm")
C_SOURCES = $(shell find . -name "*.c")

OBJS = $(ASM_SOURCES:.asm=.o) $(C_SOURCES:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.asm
	$(AS) $(ASFLAGS) $< -o $@

all: kernel.bin

kernel.bin: kernel.elf
	objcopy -O binary $< $@

kernel.elf: $(ASM_SOURCES:.asm=.o) $(C_SOURCES:.c=.o)
	$(LD) -T $(LDSCRIPT) -o $@ $^


clean:
	rm -f *.o kernel.bin

