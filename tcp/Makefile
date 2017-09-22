sample: sample.c libs/utils.o
	gcc -o sample sample.c libs/utils.o

libs/utils.o: libs/utils.c
	gcc -o libs/utils.o -c libs/utils.c

test: test.c libs/utils.o
	gcc -o test test.c libs/utils.o
