#include "algoritmo.h"
#include "clues.h"

int is_final(__uint16_t nb, int dim){
    while(dim >= 0){
        if(nb == power(2, dim))
            return dim;
        dim--;
    }
    return 0;
}

void delete_posibility(__uint16_t *C, int nb){
    
    // Comprobacion 
    *C -= power(2, nb);
    if(is_final(*C, DIM) != 0)
        set_nbr(C, nb);
}

void set_nbr(__uint16_t *C, int nb){
    *C = 512 + (nb * 1024);
}

// Comprueba que el argv[1] tiene el formato correcto
int is_valid(char *str){
    //falta implementación
}

void check_clues(__uint16_t **board, char* clues)
{
    int i;

    i = 0;
    while(*clues){
        if(i < 4)
            ft_top_clues(board, i, *clues);
        else if(i >= 4 && i < 8)
            ft_bottom_clues(board, i, *clues);
        else if(i >= 8 && i < 12)
            ft_left_clues(board, i, *clues);
        else if(i >= 12 && i < 16)
            ft_right_clues(board, i, *clues);
        else
            //error        
        clues += 2;
        i++;
    }
}

void checkRow(__uint16_t **board, int row, int nbr){
    int j = 0;
    while( j < DIM)
    {
        delete_posibility(&board[row][j], nbr);
        j++;
    }
}

void checkColum(__uint16_t **board, int colum, int nbr){
    int i = 0;
    while( i < DIM)
    {
        delete_posibility(&board[i][colum], nbr);
        i++;
    }
}