#include<stdio.h>



int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int table[m][n];
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d",&table[i][j]);
        }
    }
    for(int j = 0 ; j < n ; j++){
        for(int i = 0 ; i < m ; i++){
            printf("%d",table[i][j]);
            if(i != m-1)
                printf(" ");
        }
        printf("\n");
    }
}
