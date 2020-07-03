#include <iostream>

using namespace std;

int main(){
    int table[7] = {0};//1~6
    for(int i = 0 ; i < 4 ; i++){
        int temp;
        cin>>temp;
        table[temp]++;
    }
    int same = 0, sum = 0;
    for(int i = 1 ; i <= 6 ; i++){
        if(table[i]==4){
            cout<<"WIN"<<endl;
            return 0;
        }
        else if(table[i] == 3){
            cout<<"R"<<endl;
            return 0;
        }
        else if(table[i] == 2){
            same++;
            if(same == 2){
                cout<<i*2<<endl;
                return 0;
            }
        }
        else if(table[i] == 1)
            sum+=i;
    }
    if(same == 0)
        cout<<"R"<<endl;
    else
        cout<<sum<<endl;

}
