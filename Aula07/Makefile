PROG = exec
CC = g++
CPPFLAGS = -0O -g -W -Wall -pedantic
OBJS = main.o dec.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp
dec.o: sapo.h
	$(CC) $(CPPFLAGS) -c dec.cpp

clean: 
	rm -f *.o exec
