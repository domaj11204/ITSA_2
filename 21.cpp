#include <iostream>
#include <float.h>
#include <iomanip>
using namespace std;

int main(){
    float a;
    float max = FLT_MIN_10_EXP,min = FLT_MAX;
    for(int i = 0 ; i < 10 ; i++){
        cin>>a;
        if(a>max){
            max = a;
        }
        if(a<min){
            min = a;
        }
    }
    cout<<"maximum:"<<fixed<<setprecision(2)<<max<<endl;
    cout<<"minimum:"<<fixed<<setprecision(2)<<min<<endl;

}
