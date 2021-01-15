#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int c;
    int N;
    scanf("%d",&N);
    for(int i = 0 ; i < N ; i++){
        int* num1 = calloc(30,sizeof(int));
        int* num2 = calloc(30,sizeof(int));
        
        char* tmp1 = calloc(30,sizeof(char));
        char* tmp2 = calloc(30,sizeof(char));
        scanf("%s %s",tmp1,tmp2);
        for(int j = 0; j < strlen(tmp1) ; j++){
            if(tmp1[j] != 0){
                num1[30-strlen(tmp1)+j] = tmp1[j]-48;
            }
        }
        for(int j = 0 ; j<strlen(tmp2) ; j++){
            if(tmp2[j] != 0){
                num2[30-strlen(tmp2)+j] = tmp2[j]-48;
            }
        }
        int c = 0;
        int ans[30];
        for(int j = 29 ; j >=0 ; j--){
            int t = num1[j]+num2[j]+c;
            ans[j] = t % 10;
            c = t / 10;
        }
        int s = 0;
        for(int j = 0 ; j < 30 ; j++){
            if(s)
                printf("%d",ans[j]);
            if(!s && ans[j]!=0){
                s = 1;
                j--;
            }
        }
        printf("\n");
    }
    
}