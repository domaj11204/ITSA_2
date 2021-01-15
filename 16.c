#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[129],b[513];
    scanf("%s %s",&s,&b);
    int num = 0;
    for(int i = 0 ; i < strlen(b) ; i++){
        if(strncmp(s,b + sizeof(char) * i,strlen(s)) == 0){
            num++;
        }
    }
    printf("%d\n",num);
    
}