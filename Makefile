CC = gcc -O3 -g -Wall -I list
#
# -g debug flag
#
ht:	main.o ht.o 
	$(CC) -o ht main.o ht.o list/misc.o list/list.o

main.o:	main.c ht.h
	$(CC) -c main.c -o main.o

ht.o:	ht.c ht.h
	$(CC) -c ht.c -o ht.o

clean:
	@-/bin/rm ht *.bak ht.o main.o a.out core xx &> /dev/null

print:
	a2ps --delegate=no -T 4 -q -Avirtual -2 -o xd main.c ht.h ht.c misc.c 

handout:
	a2ps --delegate=no -T 4 -q -Avirtual -2 -o xd main.c ht.h misc.h misc.c 
