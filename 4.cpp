#include <iostream>

using namespace std;
int main(){
    int start_m,start_h,end_m,end_h;
    cin>>start_h>>start_m>>end_h>>end_m;
    int t = (end_h*60+end_m - start_h*60 - start_m);
    int cost = 0;
    while(cost < 120 && t >= 30){
        t = t-30;
        cost = cost+30;
    }
    while(cost < 280 && t >= 30){
        t = t-30;
        cost = cost+40;
    }
    while(t>=30){
        t = t-30;
        cost = cost+60;
    }
    cout<<cost<<endl;
}
