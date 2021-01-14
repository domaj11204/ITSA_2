#include <stdio.h>


int main(){
    char a[11];
    scanf("%s",&a);
    if(a[1] != '1' && a[1] != '2'){
        printf("WRONG!!!\n");
        return 0;
    }
    int P;
    int x1,x2;
    switch(a[0]){
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
        x1 = 1;
        x2 = (a[0]-5)%10;
    break;
    case 'I':
        x1 = 3;
        x2 = 4;
    break;
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
        x1 = (a[0] - 56)/10;
        x2 = (a[0] - 56)%10;
    break;
    case 'O':
        x1 = 3;
        x2 = 5;
    break;
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
        x1 = (a[0] - 57)/10;
        x2 = (a[0] - 57)%10;
    break;
    case 'W':
        x1 = 3;
        x2 = 2;
    break;
    case 'X':
        x1 = 3;
        x2 = 0;
    break;
    case 'Y':
        x1 = 3;
        x2 = 1;
    break;
    case 'Z':
        x1 = 3;
        x2 = 3;
    break;
    }
    P = x1 + 9*x2 + 8*(a[1]-'0') + 7*(a[2]-'0') + 6*(a[3]-'0') + 5*(a[4]-'0') + 4*(a[5]-'0') + 3*(a[6]-'0') + 2*(a[7]-'0') + (a[8]-'0') +(a[9]-'0');
    if(P%10 == 0){
        printf("CORRECT!!!\n");
    }
    else
        printf("WRONG!!!\n");
}
