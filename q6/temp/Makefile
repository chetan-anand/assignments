CC=gcc
SRCS = $(wildcard *.c)
PROGS = $(patsubst %.c,%,$(SRCS))
all: normal
	mv -f *.c ..
	#rm -f *.c
	echo "Done"
normal: $(PROGS)
%: %.c
	$(CC) -o $@ $<
	mv $@ ..

