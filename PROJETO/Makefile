PROG = exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11
OBJS = main.o sapo.o procedimentos.o pista.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp
sapo.o: sapo.hpp
	$(CC) $(CPPFLAGS) -c sapo.cpp
pista.o: pista.hpp
	$(CC) $(CPPFLAGS) -c pista.cpp
procedimentos.o: procedimentos.hpp
	$(CC) $(CPPFLAGS) -c procedimentos.cpp
clean: 
	del /f *.o exec