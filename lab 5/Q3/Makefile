all: questao_3

questao_3: questao_3.o restaurante.o
	gcc -std=c99 -Wall -Werror questao_3.o restaurante.o -lm -o questao_3.bin -lm

questao_3.o: questao_3.c restaurante.h
	gcc -std=c99 -Wall -Werror -c questao_3.c -lm 

restaurante.o: restaurante.c restaurante.h
	gcc -std=c99 -Wall -Werror -c restaurante.c -lm

clean:
	rm *.o
	rm *.bin

