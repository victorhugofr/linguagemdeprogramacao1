PROG = exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o notas.o relatorio.o custo.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp
notas.o: notas.h
	$(CC) $(CPPFLAGS) -c notas.cpp
relatorio.o: relatorio.h
	$(CC) $(CPPFLAGS) -c relatorio.cpp
custo.o: custo.h
	$(CC) $(CPPFLAGS) -c custo.cpp		

clean: 
	rm -f *.o exec