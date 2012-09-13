DEP = Llist.h

all: LlistClient 

LlistClient: LlistClient.o Llist.o
	g++ -o LlistClient LlistClient.o Llist.o

Llist.o: Llist.cpp $(DEP)
	g++ -c Llist.cpp

LlistClient.o: LlistClient.cpp $(DEP) 
	g++ -c LlistClient.cpp

clean:
	rm -Rf *.o LlistClient
