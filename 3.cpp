#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int x,y;
    double d;
    cin>>x>>y;
    d = sqrt(x*x + y*y);
    if(d<=100)
        cout<<"inside"<<endl;
    else
        cout<<"outside"<<endl;
    return 0;
}
