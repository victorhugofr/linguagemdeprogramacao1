PROG = exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o notas.o relatorio.o custo.o
SRC = src/
BUILD = build/
BIN = bin/
$(PROG) : $(OBJS)
		$(CC) $(OBJS) -o $(PROG)
		mv *.o $(BUILD)
		mv $(PROG) $(BIN)

main.o:
	$(CC) $(CPPFLAGS) -c $(SRC)main.cpp
notas.o:
	$(CC) $(CPPFLAGS) -c $(SRC)notas.cpp
relatorio.o:
	$(CC) $(CPPFLAGS) -c $(SRC)relatorio.cpp
custo.o:
	$(CC) $(CPPFLAGS) -c $(SRC)custo.cpp		

clean: 
	rm -f *.o exec