#include "algoritmo.h"


void    ft_top_clues(celda **tablero, int j, int num){
    int i;

    i = 0;
    if(num == 1){
        set_nbr(tablero[i][j], DIM);
        while(i < DIM-1){
            i++;
            delete_posibility(tablero[i][j], DIM);
        }
    }
    else if(num == 4){
        while(i < DIM){
            set_nbr(tablero[i][j], i+1);
            i++;
        }
    }
    else{
        while(i < num-1){
            delete_posibility(tablero[i][j], DIM);
            i++;
        }
    }
}

void    ft_left_clues(celda **tablero, int i, int num){
    int j;

    j = 0;
    if(num == 1){
        set_nbr(tablero[i][j], DIM);
        while(i < DIM-1){
            j++;
            delete_posibility(tablero[i][j], DIM);
        }
    }
    else if(num == 4){
        while(j < DIM){
            set_nbr(tablero[i][j], j+1);
            j++;
        }
    }
    else{
        while(j < num-1){
            delete_posibility(tablero[i][j], DIM);
            j++;
        }
    }
}

void    ft_bottom_clues(celda **tablero, int j, int num){
    int i;
    
    i = DIM-1;
    if(num == 1){
        set_nbr(tablero[i][j], DIM);
        while(i >= 0){
            i--;
            delete_posibility(tablero[i][j], DIM);
        }
    }
    else if(num == 4){
        while(i >= 0){
            set_nbr(tablero[i][j], i+1);
            i--;
        }
    }
    else{
        
        while(i > num){
            delete_posibility(tablero[i][j], DIM);
            i--;
        }
    }
}

void    ft_right_clues(celda **tablero, int i, int num){
    int j;

    j = DIM-1;
    if(num == 1){
        set_nbr(tablero[i][j], DIM);
        while(j >= 0){
            j--;
            delete_posibility(tablero[i][j], DIM);
        }
    }

    else if(num == 4){
        while(j >= 0){
            set_nbr(tablero[i][j], j+1);
            j--;
        }
    }

    else{
        
        while(j > num){
            delete_posibility(tablero[i][j], DIM);
            j--;
        }
    }
}