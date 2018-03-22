PROG = exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = dadopro2.o lancar.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

dadopro2.o:
	$(CC) $(CPPFLAGS) -c dadopro2.cpp
lancar.o: lancar.h
	$(CC) $(CPPFLAGS) -c lancar.cpp


clean: 
	rm -f *.o exec