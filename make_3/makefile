CFLAGS = -Wall

OBJ = 1.o    \
      2.o    \
      3.o    \
     
%.o : %.c
	gcc -c $< -o $@

C_EXE/test: $(OBJ)
	gcc -o $@ $^
