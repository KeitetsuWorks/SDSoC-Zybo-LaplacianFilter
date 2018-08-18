SDSoC Project: Laplacian Filter for Zybo Zynq-7000
========


## Description

This repository contains the SDSoC application project of laplacian filter targeting Digilent Zybo Zynq-7000.


## Demo

~~~
PetaLinux 2017.4 zybo /dev/ttyPS0

zybo login: root
Password:
root@zybo:~# cd /media/card/
root@zybo:/media/card# ls
BOOT.BIN        README.txt      _sds            image.ub        lap_filter.elf  test.bmp
root@zybo:/media/card# ./lap_filter.elf
Success HW and SW results match
lap_filter3 HW time = 0.015950 sec
lap_filter3 SW time = 0.047549 sec
root@zybo:/media/card# ./lap_filter.elf
Success HW and SW results match
lap_filter3 HW time = 0.015948 sec
lap_filter3 SW time = 0.047545 sec
root@zybo:/media/card# ./lap_filter.elf
Success HW and SW results match
lap_filter3 HW time = 0.015947 sec
lap_filter3 SW time = 0.047972 sec
root@zybo:/media/card# ./lap_filter.elf
Success HW and SW results match
lap_filter3 HW time = 0.015947 sec
lap_filter3 SW time = 0.047980 sec
root@zybo:/media/card# ./lap_filter.elf
Success HW and SW results match
lap_filter3 HW time = 0.015951 sec
lap_filter3 SW time = 0.047887 sec
root@zybo:/media/card# ls
BOOT.BIN            _sds                lap_filter.elf      test.bmp
README.txt          image.ub            sds_trace_data.dat  test_lap.bmp
root@zybo:/media/card#
~~~


## Requirement

### Hardware

* [Zybo Zynq-7000 ARM/FPGA SoC Trainer Board](https://reference.digilentinc.com/reference/programmable-logic/zybo/start)


### Software

* Xilinx SDSoC 2017.4.1


### SDSoC Platform

* [Zybo Zynq-7000 SDSoC Platform v2017.4-1](https://github.com/KeitetsuWorks/SDSoC-Zybo/releases)


## References

* [FPGAの部屋 Vivado HLS のソースコードをSDx で試す2（memcpy() を使った第3段階のコード）](http://marsee101.blog19.fc2.com/blog-entry-3689.html)

