/*: Boilerplate {{{ */

/* vim: tabstop=4 shiftwidth=4 softtabstop=4 expandtab foldmethod=marker
 * vim: fileencoding=utf-8
 *
 * Panic handler for VortexOS
 * --------------------------
 *
 * This file is part of VortexOS.
 *
 * Copyright (c) 2025 Mario Rosell.
 */

#ifndef __VORTEXOS_SYST_PANIC_H__
#define __VORTEXOS_SYST_PANIC_H__

#include <stdbool.h>
#include <stdint.h>

/* }}} */

/*: Declarations {{{*/

void panic(const char *mesg, const bool reboot, const char *secs_before_reboot);

/* }}}*/

#endif
