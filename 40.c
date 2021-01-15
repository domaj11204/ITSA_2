#include <stdio.h>

int main(){
    int ISBN[10];
    for(int i = 0 ; i < 10 ; i++){
        char tmp;
        scanf(" %c",&tmp);
        if(tmp != 'X')
            ISBN[i] = tmp - 48;
        else
        {
            ISBN[i] = 10;
        }
    }
    int add1[10];
    add1[0] = 0;
    int sum = 0;
    for(int i = 0 ; i < 10 ; i++){
        sum+=ISBN[i];
        add1[i]= sum;
    }

    int add2[10];
    add2[0] = 0;
    sum = 0;
    for(int i = 0 ; i < 10 ; i++){
        sum+=add1[i];
        add2[i]= sum;
    }
    if(add2[9] % 11 == 0)
        printf("YES\n");
    else
    {
        printf("NO\n");
    }
    
}