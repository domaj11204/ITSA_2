#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int sex;
    float h;
    while(cin>>h>>sex){
        if(sex == 1){
            cout<<fixed<<setprecision(1)<<(h-80)*0.7<<endl;
        }
        else
            cout<<fixed<<setprecision(1)<<(h-70)*0.6<<endl;
    }
}

