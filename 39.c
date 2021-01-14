#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    for(int i = 0 ; i < num ; i++){
        int s[3];
        scanf("%d%d%d",&s[0],&s[1],&s[2]);
        int num_pass = 0,sum = 0, _80up = 0;
        for(int j = 0 ; j < 3 ; j++){
            if(s[j]>=60)
                num_pass++;
            if(s[j]>=80)
                _80up++;
            sum+=s[j];
        }
        //cout<<"pass:"<<num_pass<<endl;
        if(num_pass == 3){
            printf("P\n");
        }
        else if(num_pass == 2){
            if(sum>=220)
                printf("P\n");
            else
                printf("M\n");
        }
        else if(num_pass == 1 && _80up != 0)
            printf("M\n");
        else      
            printf("F\n");   
    }
}
