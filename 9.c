#include <stdio.h>
#include <math.h>


int main(){
    int num;
    scanf("%d",&num);
    int ans = 0;
    for(int i = 3 ; i <= num ; i++){
        if(i%3 == 0){
            ans += i;
        }
    }
    printf("%d\n",ans);
}
