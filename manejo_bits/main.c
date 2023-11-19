#include "arr_func.h"
#include "algoritmo.h"

int	main(int argc, char *argv[]){
	__uint16_t **arr;
	int i;
	int j;
	int dim;

	if(!is_valid(argv[1]))
		return(-1);
	// Hay que implementar bien la variable global
	dim = ft_strlen(argv[1])/8;
	arr = (int**) malloc(4*sizeof(__uint16_t));
	//Tenemos que implementar que al inicializarlo tambien se reserve memoria para cada celda
	set_arr(arr);

	// lectura de valores iniciales
	check_clues(arr, argv[1]);
	
	// algoritmo
	i = 0;
	while(!solved(arr) && !unsolvable(arr)){
		j = 0;
		while(j < dim){
			if((arr[i][j] / 512) != 0){
				checkColum(arr , j, (arr[i][j] / 1024));
				checkColum(arr , i, (arr[i][j] / 1024));
			}
			j++;
		}
		i++;
		if(i > 8)
			i = 0;
	}
	//Imprimir resultado
	print_arr(arr);
	return 0;
}