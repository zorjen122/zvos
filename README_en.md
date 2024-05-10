# **An Operating System on RISC-V**

<!-- TOC -->

- [1. Introduction](#1-introduction)
- [2. Environment Setup](#2-environment-setup)
- [3. Building and Usage Instructions](#3-building-and-usage-instructions)
- [4. References](#4-references)

<!-- /TOC -->

- zh_CN [简体中文](README.md)

# 1. Introduction

This is a project based on the RISC-V RV32 core running on the QEMU-virt simulated development board. The main focus of this project is to further extend and learn from the original RVOS project.

# 2. Environment Setup

It is recommended to use Ubuntu 20.04, which is the latest long-term stable release of Ubuntu. Setting up the environment in this version is the simplest.

All demo codes have been verified in the following environment. Please carefully check whether your Ubuntu version and kernel version match the following information:

```
$ lsb_release -a
No LSB modules are available.
Distributor ID: Ubuntu
Description: Ubuntu 20.04.3 LTS
Release: 20.04
Codename: focal

$ uname -r
5.11.0-27-generic
```

Currently, in the Ubuntu 20.04 environment, we can directly use the GNU toolchain and QEMU simulator provided by the official source. Execute the following commands to install and start experimenting:

```
$ sudo apt update
$ sudo apt install build-essential gcc make perl dkms git gcc-riscv64-unknown-elf gdb-multiarch qemu-system-misc
```

# 3. Building and Usage Instructions

- `make`: Compile and build
- `make run`: Start QEMU and run
- `make debug`: Start debugging
- `make code`: Disassemble and view binary code
- `make clean`: Clean up

Please refer to the specific Makefile under each sub-project for detailed usage.

# 4. References

- RVOS (Primary): [https://gitee.com/unicornx/riscv-operating-system-mooc](https://gitee.com/unicornx/riscv-operating-system-mooc)
- Xv6, a simple Unix-like teaching operating system: [https://pdos.csail.mit.edu/6.828/2020/xv6.html](https://pdos.csail.mit.edu/6.828/2020/xv6.html)
