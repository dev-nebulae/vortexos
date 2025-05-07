ENTRY(_start)

SECTIONS {
    /* Set the start address of the program */
    . = 0x1000;

    /* Code section */
    .text : {
        *(.text)
    }

    /* Read-only data (const) */
    .rodata : {
        *(.rodata)
    }

    /* Initialized data */
    .data : {
        *(.data)
    }

    /* Uninitialized data (zeroed out by bootloader/kernel) */
    .bss : {
        *(.bss COMMON)
    }

}

