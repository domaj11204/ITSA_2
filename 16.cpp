#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string s,q;
    size_t found = 0;
    cin>>q>>s;
    int num=0;
    for(int i = 0 ; i < s.size() ; i++){
        found = s.find(q,i) ;
        if(found!=string::npos){
            i = found;
            num++;
        }


    }
    cout<<num<<endl;

}
