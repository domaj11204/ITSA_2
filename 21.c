#include <stdio.h>
#include <float.h>

int main(){
    float a;
    float max = FLT_MIN_10_EXP,min = FLT_MAX;
    for(int i = 0 ; i < 10 ; i++){
        scanf("%f",&a);
        if(a>max){
            max = a;
        }
        if(a<min){
            min = a;
        }
    }
    printf("maximum:%.2f\n",max);
    printf("minimum:%.2f\n",min);
}
