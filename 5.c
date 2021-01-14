#include <stdio.h>

int main(){
    int in;
    int out[8] = {0,0,0,0,0,0,0,0};
    int d = 0;
    scanf("%d",&in);
    if(in<0){
        in = in*-1;
        in--;
        out[7] = 1;
    }
    while(in>0){
            
            out[d] = in%2;
            in = in / 2;
            
            d++;
    }

    for(int i= 7 ; i >=0 ; i--){
        if(out[7] == 0)
            printf("%d",out[i]);
        else if(i!=7)
            if(out[i]==1)
                printf("0");
            else
                printf("1");
        else
            printf("1");
    }
    printf("\n");
}
