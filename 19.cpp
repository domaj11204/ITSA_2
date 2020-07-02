#include <iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    int num_car = 0,max_time = 0;
    int table[num][2];
    for(int i = 0 ; i < num ; i++){
        cin>>table[i][0]>>table[i][1];
        if(table[i][1]>max_time)
            max_time = table[i][1];
    }
    int time[max_time+1] = {0};
    for(int i = 0 ; i < num ; i++){
        for(int j = table[i][0] ; j < table[i][1] ; j++){
            time[j]++;
            if(time[j]>num_car)
                num_car++;
        }
    }
    cout<<num_car<<endl;
}
