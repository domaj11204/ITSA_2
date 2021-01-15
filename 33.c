#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int size = 0;
    int tmp;
    double sum = 0;
    char all[1000];
    while (gets(all) != NULL)
    {
        char *p = strtok(all," ");
        while (p != NULL)
        {
            tmp = atoi(p);
            size++;
            sum += tmp;
            p = strtok(NULL," ");
        }
        printf("Size: %d\nAverage: %.3lf\n",size,(double)sum/size);
        sum = 0;
        size = 0;
    }
    
}