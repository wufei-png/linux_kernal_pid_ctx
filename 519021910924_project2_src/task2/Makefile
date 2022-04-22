SRC=/usr/src/linux-5.5.11

config:
	sudo cp -v /boot/config-$(shell uname -r) .config

all:
	cp sched.h $(SRC)/include/linux/sched.h
	cp fork.c $(SRC)/kernel/fork.c
	cp core.c $(SRC)/kernel/sched/core.c
	cp base.c $(SRC)/fs/proc/base.c
	make -C $(SRC)
# make -C $(SRC) install


clean :
	make -C $(SRC) clean

install:
	make -C $(SRC) modules_install
	make -C $(SRC) install
	
copy:
	cp $(SRC)/include/linux/sched.h origin_5_11/sched.h
	cp $(SRC)/kernel/fork.c origin_5_11/fork.c 
	cp $(SRC)/kernel/sched/core.c origin_5_11/core.c
	cp $(SRC)/fs/proc/base.c origin_5_11/base.c