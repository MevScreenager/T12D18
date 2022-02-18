.PHONY: all clean

CC = gcc
CFLAGS = -c -Wall -Werror -Wextra -std=c11

rebuld: clean all

all: print_module

print_module: main_module_entry_point.o libfs.a
	$(CC) -o ../build/Quest_1 main_module_entry_point.o -L. -lfs

main_module_entry_point.o: main_module_entry_point.c
	$(CC) $(CFLAGS) -c main_module_entry_point.c

libfs.a: print_module.o
	ar cr libfs.a print_module.o

print_module.o: print_module.c print_module.h
	$(CC) $(CFLAGS) print_module.c

clean:
	rm -rf *.o *.a