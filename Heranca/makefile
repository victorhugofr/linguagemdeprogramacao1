PROG = exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11
OBJS = main.o procedimentos.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp
procedimentos.o:
	$(CC) $(CPPFLAGS) -c procedimentos.cpp
clean: 
	del /f *.o exec