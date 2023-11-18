#include "algoritmo.h"

void delete_posibility(__uint16_t C, int nb){

}



void set_nbr(__uint16_t C, int nb){

}


void check_clues(){

}


void checkRow(__uint16_t board, int row, int nbr){
    int j = 0;
    while( j < DIM)
    {
        delete_posibility(board, nbr);
        j++;
    }
}

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
