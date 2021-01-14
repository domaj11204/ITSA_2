#include <stdio.h>
#include <string.h>

int main(){
    int sex;
    float h;
    while(scanf("%f%d",&h,&sex)){
        if(sex == 1){
            printf("%.1f\n",(h-80)*0.7);
        }
        else
            printf("%.1f\n",(h-70)*0.6);
    }
}

