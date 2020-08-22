CC = g++ -std=c++11

all: main.o encrypt.o decrypt.o generate_key.o
	$(CC) main.o encrypt.o decrypt.o generate_key.o
main.o: main.cpp encrypt.h decrypt.h generate_key.h
	$(CC) -c main.cpp	
encrypt.o: encrypt.cpp encrypt.h
	$(CC) -c encrypt.cpp 
decrypt.o: decrypt.cpp decrypt.h
	$(CC) -c decrypt.cpp
generate_key.o: generate_key.cpp generate_key.h
	$(CC) -c generate_key.cpp	
clean:
	rm a.out
	rm *.o
	rm ciphertext.txt
	rm key.txt