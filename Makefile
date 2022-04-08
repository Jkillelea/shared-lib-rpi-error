CC = arm-linux-gnueabi-gcc
# CC = gcc

all: main libshared.so

main: main.c
	$(CC) -o $@ $^ -ldl

libshared.so: shared.c
	$(CC) -fPIC -shared -o $@ $^

.PHONY: clean
clean:
	rm main libshared.so
