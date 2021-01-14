#include <stdio.h>



int main(){
    int num;
    scanf("%d",&num);
    int num_car = 0,max_time = 0;
    int table[num][2];
    for(int i = 0 ; i < num ; i++){
        scanf("%d%d",&table[i][0],&table[i][1]);
        if(table[i][1]>max_time)
            max_time = table[i][1];
    }
    int *time = calloc(max_time+1,sizeof(int) );
    
    for(int i = 0 ; i < num ; i++){
        for(int j = table[i][0] ; j < table[i][1] ; j++){
            time[j]++;
            if(time[j]>num_car)
                num_car++;
        }
    }
    printf("%d\n",num_car);
}
