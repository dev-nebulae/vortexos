VortexOS kernel
===============

This is the kernel for VortexOS.

> [!NOTE]
> The kernel is an hybrid kernel. The *essential* functionality
> runs on kernel-space and the rest on userspace.

It's written in C (ANSI C) and compiled using GCC.

It's also free and open-source (under the MPL-2.0 or later license).

The kernel got made from scratch.

Building
--------

Use [make](https://www.gnu.org/software/make/) (specifically GNU make) to build the kernel.

Then, run `make` on the root of the project (the one that has a file called `README.md`) and
it will then make a bootable file at `output/combined.bin`

---

Use the following command to run the whole thing with QEMU (no bootloader):

```bash
qemu-system-x86_64 -kernel ./kernel/kernel.bin
```

Or if you also built the bootloader:

```bash
qemu-system-x86_64 ./output/combined.bin
```

