# Tarea programada utilizando docker y vagrant.

AUTHORS:

    Carlos Eduardo Solano, B36685
    Heberth Valverde, B37174

CHANGELOG:

    -v1: initial release.

REQUIREMENTS:

    -C++ compiler g++, vagrant, docker.
    -make
    
INSTALL:

    $ https://github.com/carrrl1/ie0521-t3
    $ cd ie0521-t3
    $ vagrant up
    $ vagrant ssh
    $ cd ~/ws
    $ make
    $ export PATH=$PATH:/opt/or32­elf/bin/
    $ or32­elf­gcc ­mnewlib ­mboard=orpsocrefdesign ­o main.elf main.c
    $ or32­elf­objdump ­S ­h main.elf > main.lst

    Host:
    $ wget https://github.com/lab305itep/orpsocv2/archive/master.zip
    $ apt-get install unzip
    $ unzip master.zip
    
    Container:
    $ mkdir ~/orpsocv2-master/sim/out
    $ cp main.c main.elf orpsocv2-master/sim/run/
    $ cd orpsocv2-master/sim/run/
    $ make rtl­test USER_ELF=$PWD/main.elf VCD=1
    $ or32­elf­objdump ­S ­h main.elf > main.lst
    
    

RUN:

    Open .vcd in gtkwave:
    $ cd /orpsocv2-master/sim/out
    $ gtkwave main.vcd

