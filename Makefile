CC=g++
CFLAGS=-g

lab3.exe: main.o Item.h knapsack_func.o
	$(CC) -o lab3.exe $(CFLAGS) main.o knapsack_func.o

main.o: main.cpp knapsack_func.h
	$(CC) $(CFLAGS) -c main.cpp


knapsack_func.cpp: item.h knapsack_func.cpp
	$(CC) $(CFLAGS) -c knapsack_func.cpp

clean:
	rm *.o lab3.exe
