# Makefile for a simple project that will fail on build

CC=gcc
CFLAGS=-Wall -Werror

all: build

build: src/main.c
	$(CC) $(CFLAGS) -o my_program src/main.c

clean:
	rm -f my_program

