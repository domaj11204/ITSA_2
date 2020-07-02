#include <iostream>

using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int table[m][n];
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>table[i][j];
        }
    }
    for(int j = 0 ; j < n ; j++){
        for(int i = 0 ; i < m ; i++){
            cout<<table[i][j];
            if(i != m-1)
                cout<<" ";
        }
        cout<<endl;
    }
}
