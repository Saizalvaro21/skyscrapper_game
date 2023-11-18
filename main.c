#include "arr_func.h"
#include "algoritmo.h"




int	main(){
	__uint8_t **arr;
	int i;

	arr = (int**)malloc(4*sizeof(int*));
	//Tenemos que implementar que al inicializarlo tambien se reserve memoria para cada celda
	set_arr(arr);

	// algoritmo
	while(!solved(arr)){
		// lo que sea de algoritmo.h
	}
	//imprimir resultado
	print_arr(arr);
	return 0;
}