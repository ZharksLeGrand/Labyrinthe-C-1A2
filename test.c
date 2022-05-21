#include <stdio.h>
#include <stdlib.h>

int menu() {

}

int main() {
    
    int taille_x = 9, taille_y = 5;
    char tableau[taille_y][taille_x];


    //GENERATION BASIQUE DU SKELETE DU LABYRINTGE
    for (int y = 0; y < taille_y; y++)
    {
        for (int x = 0; x < taille_x; x++)
        {
            if (y % 2 == 0){
                if (x % 2 == 0){
                    //Si y pair et x pair
                    tableau[y][x] = '+';
                }
                else{
                    //Si y pair et x impair
                    tableau[y][x] = '-';
                }
            }
            else{
                if (x % 2 == 0){
                    //Si y impair et x pair
                    tableau[y][x] = '|';
                }
                else{
                    //Si y impair et x impair
                    tableau[y][x] = ' ';
                }
            }
        }
    }

    //AFFICHAGE DU LABYRINTHE
    for (int y = 0; y < taille_y; y++)
    {
        for (int x = 0; x < taille_x; x++)
        {
            printf("%c",tableau[y][x]);
        }

        printf("\n");
    }
    
    
    exit(EXIT_SUCCESS);
}
 