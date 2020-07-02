#include <iostream>
#include <math.h>
using namespace std;

int fun(int a, int b){
    if(b == 0)
        return a;
    return fun(b,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<fun(a,b)<<endl;
}

