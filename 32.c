#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    gets(s);
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i < strlen(s) ; i++){
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') ){
            if(s[i] + n > 'z'){
                s[i] = s[i] -26;
            }
            else if(s[i] +n > 'Z' && s[i] +n < 'a'){
                s[i] -= 26;
            }
            else if(s[i] +n > '9' && s[i] +n < 'A'){
                s[i] -= 10;
            }
            printf("%c",s[i]+n);
        }
        else
            printf("%c",s[i]);
    }
    printf("\n");
}
