**一个 RISC-V 上的操作系统**

<!-- TOC -->

- [1. 简介](#1-简介)
- [2. 运行环境](#2-运行环境)
- [3. 构建和使用说明](#3-构建和使用说明)
- [4. 参考文献](#4-参考文献)

<!-- /TOC -->

# 1. 简介

  这是一个基于QEMU-virt模拟开发板上的Rv32内核，该项目主要是对原有RVOS项目进一步扩展和学习。

# 2. 运行环境

推荐使用 Ubuntu 20.04，Ubuntu 20.04 是目前最新的 Ubuntu 长期稳定发行版，在这个环境下安装运行环境也最简单。

所有演示代码在以下环境下验证通过，请仔细核对你的 Ubuntu 版本和内核版本与以下信息是否一致。

```
$ lsb_release -a
No LSB modules are available.
Distributor ID:	Ubuntu
Description:	Ubuntu 20.04.3 LTS
Release:	20.04
Codename:	focal

$ uname -r
5.11.0-27-generic
```

目前在 Ubuntu 20.04 环境下我们可以直接使用官方提供的 GNU工具链和 QEMU 模拟器，执行如下命令在线安装即可开始试验：

```
$ sudo apt update
$ sudo apt install build-essential gcc make perl dkms git gcc-riscv64-unknown-elf gdb-multiarch qemu-system-misc
```

# 3. 构建和使用说明

- `make`：编译构建
- `make run`：启动 qemu 并运行
- `make debug`：启动调试
- `make code`：反汇编查看二进制代码
- `make clean`：清理

具体使用请参考具体子项目下的 Makefile 文件。


# 4. 参考文献

- Rvos（主要）: <https://gitee.com/unicornx/riscv-operating-system-mooc>
- Xv6, a simple Unix-like teaching operating system：<https://pdos.csail.mit.edu/6.828/2020/xv6.html>
