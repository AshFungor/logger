CC = g++
CFLAGS = -Wall

main: logger.o main.o
	$(CC) $(CFLAGS) -o main logger.o main.o 

logger.o: logger.cpp logger.h
	$(CC) $(CFLAGS) -c logger.cpp logger.h

main.o: main.cpp logger.o
	$(CC) $(CFLAGS) -c main.cpp logger.o

clean:
	rm main.o logger.o logger.h.gch