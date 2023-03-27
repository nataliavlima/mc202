all: questao_1

questao_1: questao_1.o restaurante.o
	gcc -std=c99 -Wall -Werror questao_1.o restaurante.o -lm -o questao_1.bin -lm

questao_1.o: questao_1.c restaurante.h
	gcc -std=c99 -Wall -Werror -c questao_1.c -lm 

restaurante.o: restaurante.c restaurante.h
	gcc -std=c99 -Wall -Werror -c restaurante.c -lm

clean:
	rm *.o
	rm *.bin

