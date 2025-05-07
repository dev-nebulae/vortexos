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

#include "panic.h"
#include "../utils/hang.h"
#include "kernout.h"

/* }}} */

/*: Implementations {{{ */

/* Make clangd happy */
extern void kmsg_puts(const char *);
extern void kmsg_clear();

/* Actual code */
void panic(const char *mesg, const bool reboot,
           const char *secs_before_reboot) {

  kmsg_clear();

  kmsg_puts("==== KERNEL PANIC ====\n");

  kmsg_puts(mesg);

  kmsg_puts("\n\n");

  if (reboot) {
    kmsg_puts("- [INFO] -- Rebooting in ");
    kmsg_puts(secs_before_reboot);
    kmsg_puts(" seconds --\n");
  } else {
    hang();
  }
}
/* }}} */
