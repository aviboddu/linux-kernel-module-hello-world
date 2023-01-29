# linux-kernel-module-hello-world
A simple kernel module which prints Hello World. This was created as part of an application process for a research position.

This document describes how to get the given code compiled and executed on the given VM.

Prerequisites:

`sudo apt-get install build-essential linux-headers-$(uname -r)`

Compilation (In the repository):

`make all`

Insertion (In the repository):

`sudo insmod hello.ko`

Removal:

`sudo rmmod hello`

Checking output:

`sudo dmesg`

_Most of this code was learnt from [The Linux Kernel Module Programming Guide](https://tldp.org/LDP/lkmpg/2.6/html/index.html)._

The main change from this guide was due to the kernel __requiring__ license documentation before insertion. Additionally, it took some time to understand where exactly text would be printed and how to check this.
