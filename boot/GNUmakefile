# Makefile for x86_64 VortexOS bootloader

.PHONY: all boot clean

# ASsembler
AS = nasm
# Binary ForMaT
BFMT = bin
# Linker
LD = ld

# Assembly source files
ASM_SOURCES = $(wildcard *.asm)

BINARIES = $(ASM_SOURCES:.asm=.bin)


# Rule to build the assembly files
%.bin: %.asm
	$(AS) -f $(BFMT) $< -o $@

# Rule to build everything
all: $(BINARIES)


# Rule to make a bootable image
boot: all
	# Concatenate the binary files
	cat *.bin > boot.img
	dd if=boot.img of=floppy.img bs=512 count=2880 conv=notrunc

# NOTE: Uncomment the rule above when the bootloader gets polished

# Rule to all the clutter
clean:
	rm -f *.bin
	rm -f *.img

