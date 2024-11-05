CC=g++
CFLAGS=-g

lab3.exe: main.o Item.o Knapsack_func.o
	$(CC) -o lab3.exe $(CFLAGS) main.o Item.o Knapsack_func.o

main.o: main.cpp Knapsack_func.h
	$(CC) $(CFLAGS) -c main.cpp

item.o: item.h item.cpp 
	$(CC) $(CFLAGS) -c item.cpp

Knapsack_func.cpp: item.h Knapsack_func.cpp
	$(CC) $(CFLAGS) -c Knapsack_func.cpp

clean:
	rm *.o lab3.exe