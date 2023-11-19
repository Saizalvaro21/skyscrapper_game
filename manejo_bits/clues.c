#include "clues.h"

void    ft_top_clues(char ***arr, int col, int clue, int dim){
    int i;

    i = -1;
    if(clue == 1)
    {
        set_nbr(arr[i][col], dim);
        while(i++ < dim-2)
            delete_posibility(arr[i][col], dim-1);
    }
    else if(clue == dim-1)
    {
        while(++i< dim-1)
            set_nbr(arr[i][col], i+1);
    }
    else
    {
        while((--clue) > 0 && (--dim) > 0)
        {
            i = 0;
            while(++i < clue-1)
                delete_posibility(arr[i][col], dim);
        }
    }
}

void    ft_left_clues(__uint16_t **tablero, int i, int num){
    int j;

    j = 0;
    if(num == 1){
        set_nbr(&tablero[i][j], DIM);
        while(i < DIM-1){
            j++;
            delete_posibility(&tablero[i][j], DIM);
        }
    }
    else if(num == 4){
        while(j < DIM){
            set_nbr(&tablero[i][j], j+1);
            j++;
        }
    }
    else{
        while(j < num-1){
            delete_posibility(&tablero[i][j], DIM);
            j++;
        }
    }
}

void    ft_bottom_clues(__uint16_t **tablero, int j, int num){
    int i;
    
    i = DIM-1;
    if(num == 1){
        set_nbr(&tablero[i][j], DIM);
        while(i >= 0){
            i--;
            delete_posibility(&tablero[i][j], DIM);
        }
    }
    else if(num == 4){
        while(i >= 0){
            set_nbr(&tablero[i][j], i+1);
            i--;
        }
    }
    else{
        
        while(i > num){
            delete_posibility(&tablero[i][j], DIM);
            i--;
        }
    }
}

void    ft_right_clues(__uint16_t **tablero, int i, int num){
    int j;

    j = DIM-1;
    if(num == 1){
        set_nbr(&tablero[i][j], DIM);
        while(j >= 0){
            j--;
            delete_posibility(&tablero[i][j], DIM);
        }
    }
    else if(num == 4){
        while(j >= 0){
            set_nbr(&tablero[i][j], j+1);
            j--;
        }
    }
    else{
        
        while(j > num){
            delete_posibility(&tablero[i][j], DIM);
            j--;
        }
    }
}