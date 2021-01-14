#include <stdio.h>
#include <math.h>


int fun(int a, int b){
    if(b == 0)
        return a;
    return fun(b,a%b);
}
int main(){
    int A,B;
    scanf("%d%d",&A,&B);
    printf("%d\n",fun(A,B));
}

