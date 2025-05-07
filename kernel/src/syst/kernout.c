/*: Boilerplate {{{ */

/* vim: tabstop=4 shiftwidth=4 softtabstop=4 expandtab foldmethod=marker
 * vim: fileencoding=utf-8
 *
 * Kernel output for VortexOS
 * --------------------------
 *
 * This file is part of VortexOS.
 *
 * Copyright (c) 2025 Mario Rosell.
 */

#ifndef __VORTEXOS_KERNEL_SYST_KERNOUT_H__
#define __VORTEXOS_KERNEL_SYST_KERNOUT_H__

#include <stdint.h>
#include <stdlib.h>

/* }}} */

/*: Declarations {{{ */

#define __VORTEXOS_KERNEL_OUTPUT_LEN__ 1024

static char *__vortexos_kernel_output_buf__ = NULL;
static size_t __vortexos_kern_buf_idx__ = 0;

/* }}} */

/*: Functions {{{ */

/* Public buffer anyone can read */

/* Append a single char to the buffer */
void kmsg_putc(char c) {
  if (__vortexos_kern_buf_idx__ < __VORTEXOS_KERNEL_OUTPUT_LEN__ - 1) {
    __vortexos_kernel_output_buf__[__vortexos_kern_buf_idx__++] = c;
    __vortexos_kernel_output_buf__[__vortexos_kern_buf_idx__] =
        '\0'; /* keep null-terminated */
  }
}

/* Append a string */
void kmsg_puts(const char *s) {
  while (*s) {
    kmsg_putc(*s++);
  }
}

/* Manually clear the buffer */
void kmsg_clear() {
  __vortexos_kern_buf_idx__ = 0;
  __vortexos_kernel_output_buf__[0] = '\0';
}

/* }}} */

#endif
