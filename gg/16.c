#include <stdio.h>
#include <string.h>


int main(){
    char s[129],q[513];
    gets(s);
    gets(q);
    int num=0;
    for(int i = 0 ; i < strlen(q) ; i++){
        char *start = &q[i];
        for(int j = 0 ; j < strlen(s) ; j++){
            if(start[j] != s[j])
                break;
            if(j == strlen(s)-1){
                num++;
                //i += strlen(s)-1;
            }
                
        }
    }
    printf("%d\n",num);

}
