PROG = exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o cabecalho.o conta.o procedimentos.o
SRC = src/
BUILD = build/
BIN = bin/
$(PROG) : $(OBJS)
		$(CC) $(OBJS) -o $(PROG)
		mv *.o $(BUILD)
		mv $(PROG) $(BIN)

main.o:
	$(CC) $(CPPFLAGS) -c $(SRC)main.cpp
cabecalho.o: 
	$(CC) $(CPPFLAGS) -c $(SRC)cabecalho.cpp
conta.o: 
	$(CC) $(CPPFLAGS) -c $(SRC)conta.cpp
procedimentos.o: 
	$(CC) $(CPPFLAGS) -c $(SRC)procedimentos.cpp
clean: 
	rm -f *.o exec