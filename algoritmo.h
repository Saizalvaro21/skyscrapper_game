#include <stdlib.h>
#include <unistd.h>
#define DIM 4

typedef struct celda
{
    __uint8_t posib;
    bool final = 0;
}celda;

/*
 * Name: 
 *      delete_posibility();
 *  Function:
 *      Deletes a number from the posibilities of a given cell 
 *  Input:
 *      puntero a celda, numero 
*/
void delete_posibility(celda C, int nb);

void set_nbr(celda C, int nb);
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
