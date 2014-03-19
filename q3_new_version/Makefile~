SRCS = $(wildcard *.c)
SRCP = $(wildcard *.cpp)

PROGS = $(patsubst %.c,%,$(SRCS))
PROGP = $(patsubst %.cpp,%,$(SRCP))

all: $(PROGS) $(PROGP)

%: %.c
	gcc  -o $@ $<
	mv $@ c_exe
%: %.cpp
	g++  -o $@ $<
	mv $@ c++_exe
