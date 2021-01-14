#include <stdio.h>



int main() {
    int num;
    int A,B,C,D;
    char op;
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        scanf(" %c",&op);
        scanf("%d%d%d%d",&A,&B,&C,&D);
        if(op == '+'){
            printf("%d %d\n",A+C,B+D);
        }
        if(op == '-'){
            printf("%d %d\n",A-C,B-D);
        }
        if(op == '*'){
            printf("%d %d\n",A*C-B*D,B*C+A*D);
        }
        if(op == '/'){
            printf("%d %d\n",(A*C + B*D) / (C*C + D*D),B*C - A*D / (C*C + D*D));
        }
    }
    return 0;
}
