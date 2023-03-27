all: questao_2

questao_2: questao_2.o restaurante.o
	gcc -std=c99 -Wall -Werror questao_2.o restaurante.o -lm -o questao_2.bin -lm

questao_2.o: questao_2.c restaurante.h
	gcc -std=c99 -Wall -Werror -c questao_2.c -lm 

restaurante.o: restaurante.c restaurante.h
	gcc -std=c99 -Wall -Werror -c restaurante.c -lm

clean:
	rm *.o
	rm *.bin

