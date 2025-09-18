#include <iostream>
#include <cmath>

using namespace std;
int main () {
    double a,b;
    cout <<"vvedite a:"; cin >>a;
    cout <<"Vvedite b:"; cin >>b ;

    char ab;
    cout << "Choose:" <<endl <<"1. +" <<endl <<"2. -" <<endl <<"3. *"; cin >> ab; 
    switch (ab) {
case 1: cout <<"a+b="<<a+b; break;
case 2: cout <<"a-b=" <<a-b; break;
case 3: cout <<"a*b=" <<a*b; break;

default: cout <<"Wrond input!";
    }
        
    return 0;
}