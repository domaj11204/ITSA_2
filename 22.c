#include <stdio.h>


int main(){
    int table[3][3];
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            scanf("%d",&table[i][j]);
        }
    }
    if(table[0][0] == table[0][1] && table[0][2] == table[0][1] ||
       table[1][0] == table[1][1] && table[1][2] == table[1][1] ||
       table[2][0] == table[2][1] && table[2][2] == table[2][1] ||
       table[0][0] == table[1][0] && table[2][0] == table[1][0] ||
       table[0][1] == table[1][1] && table[2][1] == table[1][1] ||
       table[0][2] == table[1][2] && table[2][2] == table[1][2] ||
       table[0][0] == table[1][1] && table[2][2] == table[1][1] ||
       table[0][2] == table[1][1] && table[1][1] == table[2][0] ){
           printf("True\n");
       }
    else
        printf("False\n");
}
