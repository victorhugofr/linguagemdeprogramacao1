PROG = exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o cabecalho.o conta.o procedimentos.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp
cabecalho.o: cabecalho.hpp
	$(CC) $(CPPFLAGS) -c cabecalho.cpp
conta.o: conta.hpp
	$(CC) $(CPPFLAGS) -c conta.cpp
procedimentos.o: procedimentos.hpp
	$(CC) $(CPPFLAGS) -c procedimentos.cpp
clean: 
	rm -f *.o exec