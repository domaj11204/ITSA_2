#include <stdio.h>

int main(){
    int ans[4];
    char Ans[4];
    scanf("%s",&Ans);
    for(int i = 0 ; i < 4 ; i++)
        ans[i] = Ans - 48;
    while (1)
    {
        int A = 0, B = 0;
        char Q[4];
        scanf("%s",&Q);
        if(Q[0] == Q[1] && Q[0] == '0')
            return 0;
        for(int i = 0 ; i < 4 ; i++){
            if(Q[i] == Ans[i]){
                A++;
                continue;
            }
            for(int j = 0 ; j < 4 ; j++){
                if(Q[i] == Ans[j]){
                    B++;
                    break;
                }
            }
        }
        printf("%dA%dB\n",A,B);
    }
    
}