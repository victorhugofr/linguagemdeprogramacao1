PROG = exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11
OBJS = main.o procedimentos.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o: pizza.hpp celular.hpp carro.hpp refrigerante.hpp livro.hpp chocolate.hpp procedimentos.hpp
	$(CC) $(CPPFLAGS) -c main.cpp
procedimentos.o: procedimentos.hpp 
	$(CC) $(CPPFLAGS) -c procedimentos.cpp
clean: 
	del /f *.o exec