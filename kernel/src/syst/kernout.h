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

/* }}} */

/*: Functions {{{ */

/* Public buffer anyone can read */

/* Append a single char to the buffer */
void kmsg_putc(char c);

/* Append a string */
void kmsg_puts(const char *s);

/* Manually clear the buffer */
void kmsg_clear();

/* }}} */

#endif
