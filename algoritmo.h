#include <stdlib.h>
#define DIM 4


/*
 * Name: 
 *      check_min_max();
 *  Function:
 *      Busca los puntos de vista 1 y DIM. De esta manera marca
 *      el edificio más alto a los de en frente del 1 y 1,2,3,..,DIM a la fila enfrente de DIM
 *  Input:
 *      -> necesitamos saber como lo estructuramos
 * Output:
 *      Retorna algo para saber si ha habido algun error.
*/
int check_min_max();

/*
 * Name: 
 *      delete_posibility();
 *  Function:
 *      Deletes a number from the posibilities of a given cell 
 *  Input:
 *      puntero a celda, numero 
*/
void delete_posibility();

/*
 * Name: 
 *      check_clues();
 *  Function:
 *      Dado el numero de la vista elimina la posibilidad de
 *      la torre más alta del las (numero-1) celdas más cercanas.
 *  Input:
 *      Tablero, lado, altura, numero
*/
void check_clues();

/*
 * Name: 
 *      checkRow();
 *  Function:
 *      Removes form all Cells in a row(i) a certain posibility(nb). 
 *  Args:
 *      tablero
 *      int i -> row number
 *      int nb -> number to remove from posibilities
 *
*/
void checkRow();

/*
 * Name: 
 *      checkColum();
 *  Function:
 *      Removes form all Cells in a colum(j) a certain posibility(nb). 
 *  Args:
 *      tablero
 *      int j -> colum number
 *      int nb -> number to remove from posibilities
 *
*/
void checkColum();
