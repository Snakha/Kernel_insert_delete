obj-m += km.o
os:=$(shell uname -r)

all:
	make -C /lib/modules/$(os)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(os)/build M=$(PWD) clean
