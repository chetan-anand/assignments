CC=gcc

SRCS = $(wildcard *.c)


PROGS = $(patsubst %.c,%,$(SRCS))


all:internal $(PROGS) 

%: %.c

	$(CC)  -o $@ $<

internal:
	cd add && $(MAKE)	
	cd div && $(MAKE)
	cd mul && $(MAKE)
	cd sub && $(MAKE)
	

