#include <iostream>

using namespace std;

int main() {
    int num;
    int A,B,C,D;
    char op;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> op;
        cin >> A >> B >> C >> D;
        if(op == '+'){
            cout << A+C << " " << B+D << endl;
        }
        if(op == '-'){
            cout << A-C << " " << B-D << endl;
        }
        if(op == '*'){
            cout << A*C - B*D << " " << B*C + A*D << endl;
        }
        if(op == '/'){
            cout << (A*C + B*D) / (C*C + D*D) << " " << B*C - A*D / (C*C + D*D) << endl;//(ac+bd)/(c2+d2) bc-ad/c2d2
        }
    }
    return 0;
}
