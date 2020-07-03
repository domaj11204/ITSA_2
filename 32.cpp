#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n;
    cin>>n;
    for(int i = 0 ; i < s.size() ; i++){
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') ){
            if(s[i] + n > 'z'){
                s[i] = s[i] -26;
            }
            else if(s[i] +n > 'Z' && s[i] +n < 'a'){
                s[i] -= 26;
            }
            else if(s[i] +n > '9' && s[i] +n < 'A'){
                s[i] -= 10;
            }
            cout<<(char)(s[i]+n);
        }
        else
            cout<<s[i];
    }
    cout<<endl;
}
