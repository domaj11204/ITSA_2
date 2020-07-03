#include <iostream>
#include <stdlib.h>

using namespace std;

int compare(const void *a,const void *b){
    int sum_a = 0, sum_b = 0;
    int temp_a = *(int*)a, temp_b = *(int*)b;
    //cout<<temp_a<<" "<<temp_b<<endl;
    while(temp_a != 0){
        sum_a += (temp_a %10);
        temp_a = temp_a /10;
    }
    while(temp_b != 0){
        sum_b += (temp_b %10);
        temp_b = temp_b /10;
    }

    if(sum_a > sum_b)
        return 1;
    else if(sum_b > sum_a)
        return -1;
    else{
        if(*(int*)a > *(int*)b)
            return 1;
        else
            return -1;
    }
        return 0;
}
int main(){
    int num;
    cin>>num;
    int table[num];
    for(int i = 0 ; i < num ; i++){
        cin>>table[i];
    }
    qsort(table,num,sizeof(int),compare);
    for(int i = 0 ; i < num ; i++){
        cout<<table[i];
        if(i != num-1)
            cout<<" ";
    }
    cout<<endl;
}
