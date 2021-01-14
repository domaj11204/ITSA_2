#include <stdio.h>
#include <math.h>

int main(){
    int num;
    scanf("%d",&num);
    for(int i = 2 ; i < num ; i++){
        if(num%i == 0){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
}
