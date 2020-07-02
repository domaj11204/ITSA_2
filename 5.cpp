#include <iostream>

using namespace std;

int main(){
    int in;
    int out[8] = {0,0,0,0,0,0,0,0};
    int d = 0;
    cin>>in;
    if(in<0){
        in = in*-1;
        in--;
        out[7] = 1;
    }
    while(in>0){
            //cout<<in<<endl;
            out[d] = in%2;
            in = in / 2;
            //cout<<in<<endl;
            d++;
    }

    for(int i= 7 ; i >=0 ; i--){
        if(out[7] == 0)
            cout<<out[i];
        else if(i!=7)
            if(out[i]==1)
                cout<<"0";
            else
                cout<<"1";
        else
            cout<<"1";
    }
    cout<<endl;
}
