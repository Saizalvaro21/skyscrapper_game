#include "arr_func.h"
#include "algoritmo.h"




int	main(int argc, char *argv[]){
	__uint8_t **arr;
	int i;
	int j;

	arr = (int**)malloc(4*sizeof(int*));
	//Tenemos que implementar que al inicializarlo tambien se reserve memoria para cada celda
	set_arr(arr);


	// lectura de valores iniciales
	i = 0;
	while(*argv[1])
	{
		while(i < 4){
			check_clues(arr, lado?, i, ((int)(*argv[1]-'0')));
		}
		// Para saltarse los espacios
		argv[1] += 2;
	}
	// algoritmo
	while(!solved(arr)){
		// lo que sea de algoritmo.h
	}
	//imprimir resultado
	print_arr(arr);
	return 0;
}