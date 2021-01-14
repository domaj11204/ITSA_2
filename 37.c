#include <stdio.h>

int main(){
    int table[7] = {0};//1~6
    for(int i = 0 ; i < 4 ; i++){
        int temp;
        scanf("%d",&temp);
        table[temp]++;
    }
    int same = 0, sum = 0;
    for(int i = 1 ; i <= 6 ; i++){
        if(table[i]==4){
            printf("WIN\n");
            return 0;
        }
        else if(table[i] == 3){
            printf("R\n");
            return 0;
        }
        else if(table[i] == 2){
            same++;
            if(same == 2){
                printf("%d\n",i*2);
                return 0;
            }
        }
        else if(table[i] == 1)
            sum+=i;
    }
    if(same == 0)
        printf("R\n");
    else
    {
        printf("%d\n",sum);
    }
    

}
