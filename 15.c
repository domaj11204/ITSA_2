#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int num = 1;
    char s[100];
    gets(s);
    int ascii[127] = {0};
    for(int i = 0 ; i < strlen(s) ; i++){
        if(s[i] == ' '){
            num++;
        }
        else{
            if(s[i] <= 'Z' && s[i] >= 'A'){
                s[i] = s[i] +32;
            }
            int temp;
            temp = s[i];
            ascii[temp]++;
        }
    }
    printf("%d\n",num);
    for(int i = 0 ; i < 127 ; i++){
        if(ascii[i] != 0 && i >= 'a' && i <= 'z'){
            char temp;
            temp = i;
            printf("%c : %d\n",temp,ascii[i]);
        }
    }
}
