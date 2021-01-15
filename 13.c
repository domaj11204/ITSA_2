#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a,const void *b){
    int *temp_a = (int*)a,*temp_b = (int*)b;
    //printf("tmp_a = %d tmp_b = %d\n",temp_a[0],temp_b[0]);
    /*while(temp_a != 0){
        sum_a += (temp_a %10);
        temp_a = temp_a /10;
    }
    while(temp_b != 0){
        sum_b += (temp_b %10);
        temp_b = temp_b /10;
    }
    */
    if(temp_a[1] > temp_b[1])
        return -1;
    else
        return 1;
}



int main(){
    char COLOR[5] = "CDHS";
    //S>H>D>C
    int num;
    int table[100][2];//color & true point
    scanf("%d ",&num);
    for(int i = 0 ; i < num ; i ++){
        char all_card[100];
        gets(all_card);
        int num_card = -1;
        char *p = strtok(all_card," ");
        while (p != NULL)
        {
            num_card++;
            char color;
            int point;
            sscanf(p,"%c%d",&color,&point);
            for(int k = 0 ; k < 4 ; k++){
                if(color == COLOR[k]){
                    table[num_card][0] = k;
                    table[num_card][1] = 14 * k + point;
                    //printf("%c%d : %d\n",color,point,table[num_card][1]);
                }
            }
            p = strtok(NULL," ");
        }
        qsort(table,num_card+1,sizeof(int)*2,compare);
        for(int j = 0 ; j <= num_card ; j++){
            int color = table[j][0];
            printf("%c%d",COLOR[color],table[j][1]%14);
            if(j != num_card)
                printf(" ");
        }
        printf("\n");
    }

}