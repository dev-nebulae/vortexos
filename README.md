<div align="center">
  # VortexOS
</div>

<p align="center">
  <a href="#about">About •</a>
  <a href="#features">Features •</a>
  <a href="#installation">Installation •</a>
  <a href="#contributing">Contributing •</a>
  <a href="#contact">Contact •</a>
  <a href="#license">Licenese •</a>
  <a href="#documentation">Documentation •</a>
  <a href="#footnotes">Footnotes</a>
</p>

## [About](#about)

VortexOS is a **free & open-source** OS for **embedded devices & education**.

## [Features](#features)

- **🪶 Lightweight**: VortexOS requires *little* megabytes of memory and RAM.
- **🛠️ Easy to Use**: VortexOS is easy to use and easy to install.
- **🚀 Fast**: VortexOS is fast.
- **🔒 Secure**: VortexOS is secure.
- **🐧 Linux-compatible**: Most Linux programs can run on VortexOS with no issues<sup><a href="#1">1</a></sup>

## [Installation](#installation)

> [!IMPORTANT]
> VortexOS is still on development and is missing core functionality
> right now.

You can download VortexOS from the [release page](https://github.com/vortexos/vortexos/releases).
Then, flash the `.img` file to an CD or USB stick.

After that, plug it into a computer [that meets the requirements](#requirements).

You will find a guided install. It's straight-forward and easy to use. But if you
need help, you will find it [on the next section](#guide).

<details>
<summary><h3><a href="#guide"></a>Guide</h1></summary>

#### [Step 1: Download the VortexOS installer](#step-1-download-the-vortexos-installer)

Go to [this website](https://github.com/vortexos/vortexos/releases) and on the
latest version marked as **“Stable”**, click on the `USB_Installer.img` link.

It will download a file called `USB_Installer.img`.

Now, download a program like [Rufus](https://rufus.ie) or [Balena Etcher](https://etcher.balena.io)
on Windows and run it.

> [!NOTE]
> Balena Etcher also works on MacOS, Linux, any of the BSDs, or even
> VortexOS itself.

Select the USB, the `.img` file from before, and click on the `Flash` button.
Then wait until it finishes. **Do not plug the USB stick out until it does**.

Now, plug that USB on the computer you want to install it on.

#### [Step 2: Starting the installer](#step-2-starting-the-installer)

Now, reboot that computer and *spam* the BIOS key<sup><a href="#2">2</a></sup>

Then, use the keymaps documented on the bottom of the screen to navigate to a
*Boot Order* section.

Move the USB stick's name to the top

#### [Step 3: Install VortexOS](#step-3-install-vortexos)

Then press the <kbd>Esc</kbd> key and use the *Save & Exit* option.

Then, you will find the VortexOS installer.

#### [Step 4: Install VortexOS](#step-4-install-vortexos)

Now, it's time to (*actually*) install VortexOS.

##### [Step 4.1: Select the language](#step-4-1-select-the-language)

This step is easy to do. Select the language you want to use.

> [!NOTE]
> It will automatically set English as the default language.

It also sets the keyboard layout.

Now, it will ask for the timezone.

##### [Step 4.2: Partitioning](#step-4-2-partitioning)

This step is a bit harder, but not too hard!

It will first ask you for the *drive letter*. You can use anything, but it's
conventional to use `C` as the main drive letter.

Now, it will ask you about the *file system*.
The file system is the way the computer *stores data*.

VortexOS offers **two *main* file systems**:

- **VTFS**: Less peformant, but more secure. Uses *tags* instead of *folders*
(directories). Good for organization.

- **ext4**: Backward-compatible with Linux and MacOS. Uses regular *folders*.
*Pretty* good community support and peformant.

If you don't know, use *ext4*. VTFS is still in development and is unstable.

> [!NOTE]
> It will also ask you for *swap* and *disk encryption*.
> If you don't know, select *Yes* for swap and *No* for disk encryption.
>
> Swap space is a *part on your drive* used to store data from
> non-active proccesses.
>
> Disk encryption is basically *a password to get access to your files*.

##### [Step 4.3: Users](#step-4-3-users)

Now, it will ask you for the users and *root password*.

Make an account for everybody using the computer and set
an strong root password.

> [!NOTE]
> *Root* is an *special* user that can do *anything*.
> Do not let *anyone* (not even *you*) use *root* unless
> it's totally necessary.

</details>

## [Footnotes](#footnotes)

### [1](#1)

Most programs that use the Linux filesystem will not work.

VortexOS' filesystem structure is different from Linux's.

### [2](#2)

The BIOS key might vary depending of the computer.

Here is a table with the different BIOS keys depending of the computer:

--------------------------------------------------------------------
| Manufacturer      | Key                                          |
|-------------------|----------------------------------------------|
| Lenovo Laptops    | <kbd>F2</kbd>                                |
| Lenovo Desktops   | <kbd>F1</kbd>                                |
| Lenovo ThinkPad   | <kbd>enter</kbd> and then <kbd>F1</kbd>      |
| Acer              | <kbd>F2</kbd> or <kbd>Del</kbd>              |
| ASUS              | <kbd>F2</kbd> for most PCs or <kbd>Del</kbd> |
| Dell              | <kbd>F2</kbd> or <kbd>F11</kbd>              |
| HP                | <kbd>F10</kbd>                               |
| MSI               | <kbd>Del</kbd>                               |
| Microsoft Surface | <kbd>Volume Up</kbd>                         |
| Samsung           | <kbd>F2</kbd>                                |
| Toshiba           | <kbd>F2</kbd>                                |
--------------------------------------------------------------------
> *Fig a: BIOS keys*
