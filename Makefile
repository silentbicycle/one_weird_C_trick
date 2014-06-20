CFLAGS += -std=c99 -Wall -Wextra -pedantic

CC=gcc

all: run

run: wait_what
	./wait_what

wait_what.o: gen_out.h

wait_what: wait_what.o wtf.o

gen_out.h: gen
	./gen > gen_out.h

clean:
	rm -f *.o gen_out.h
