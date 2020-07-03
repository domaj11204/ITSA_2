#include <iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    for(int i = 0 ; i < num ; i++){
        int s[3];
        cin>>s[0]>>s[1]>>s[2];
        int num_pass = 0,sum = 0, _80up = 0;
        for(int j = 0 ; j < 3 ; j++){
            if(s[j]>=60)
                num_pass++;
            if(s[j]>=80)
                _80up++;
            sum+=s[j];
        }
        //cout<<"pass:"<<num_pass<<endl;
        if(num_pass == 3){
            cout<<"P"<<endl;
        }
        else if(num_pass == 2){
            if(sum>=220)
                cout<<"P"<<endl;
            else
                cout<<"M"<<endl;
        }
        else if(num_pass == 1 && _80up != 0)
            cout<<"M"<<endl;
        else
            cout<<"F"<<endl;

    }
}
