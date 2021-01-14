#include <stdio.h>


int main(){
    int a1,a2,a3,N;
    int d50 = 0
        ,d5 = 0
        ,d1 = 0;
    int cost;
    char t;
    scanf("%d%c%d%c%d%c%d",&N,&t,&a1,&t,&a2,&t,&a3);
    cost = a1*15 + a2*20 + a3*30;
    int d = N-cost;
    if(d < 0){
        printf("0\n");
        return 0;
    }
    while(d >= 50){
        d50++;
        d = d - 50;
    }
    while(d >= 5){
        d5++;
        d = d - 5;
    }
    while(d >= 1 ){
        d1++;
        d = d - 1;
    }
    printf("%d,%d,%d\n",d1,d5,d50);
}
