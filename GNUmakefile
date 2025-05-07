# Top-Level Makefile

BOOT_DIR = boot
KERNEL_DIR = kernel
OUTPUT_DIR = output

BOOT_BIN = $(BOOT_DIR)/boot.bin
KERNEL_BIN = $(KERNEL_DIR)/kernel.bin
OUTPUT_BIN = $(OUTPUT_DIR)/combined.bin

# Install dependencies
dependencies:
	# TODO: make

test:
	printf "Todo."

all: $(OUTPUT_BIN)

# Build bootloader and kernel
$(BOOT_BIN):
	$(MAKE) -C $(BOOT_DIR)

$(KERNEL_BIN):
	$(MAKE) -C $(KERNEL_DIR)

# Combine boot.bin + padding + kernel.bin into a bootable image
$(OUTPUT_BIN): $(BOOT_BIN) $(KERNEL_BIN)
	mkdir -p $(OUTPUT_DIR)
	cp $(BOOT_BIN) $(OUTPUT_BIN)
	dd if=/dev/zero bs=512 count=2 >> $(OUTPUT_BIN)         # pad sector 1 and 2
	cat $(KERNEL_BIN) >> $(OUTPUT_BIN)

clean:
	$(MAKE) -C $(BOOT_DIR) clean
	$(MAKE) -C $(KERNEL_DIR) clean
	rm -rf $(OUTPUT_DIR)

.PHONY: all clean

