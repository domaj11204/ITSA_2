#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double r;
    int n;
    double p;
    cin>>r>>n>>p;
    long double ans = p + p*r;
    for(int i = 0 ; i < n-1 ; i++){
        //cout<<ans<<endl;
        ans = p + ans + (ans+p)*r;
    }

    cout<<(long int)ans<<endl;
}
