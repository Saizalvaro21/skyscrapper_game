#include "arr_func.h"
#include "algoritmo.h"

//Cabezeras (si no podemos usar *.h)



int	main(int argc, char *argv[]){
	__uint16_t **arr;

	arr = (int**) malloc(4*sizeof(__uint16_t));
	//Tenemos que implementar que al inicializarlo tambien se reserve memoria para cada celda
	set_arr(arr);


	// lectura de valores iniciales
	check_clues(arr, argv[1]);
	
	// algoritmo
	while(!solved(arr)){
		// lo que sea de algoritmo.h
	}
	//Imprimir resultado
	print_arr(arr);
	return 0;
}