#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int ans = 0;
    for(int i = 3 ; i <= num ; i++){
        if(i%3 == 0){
            ans += i;
        }
    }
    cout<<ans<<endl;
}
