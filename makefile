CC=g++ -std=c++11 -Wall

proj: *.cpp
	$(CC) -o $@ $^

clean:
	rm -f proj *.o
