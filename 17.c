#include <stdio.h>
#include <string.h>

int main(){
    char all[1000][999];
    char tmp[999];
    int num_char = 0;
    while (scanf("%s",&tmp)!= -1)
    {
        for(int i = 0 ; i < num_char ; i++){
            if(strcmp(tmp,all[i]) == 0)
                break;
            if(i == num_char-1){
                strcpy()
            }
        }
    }
    
}