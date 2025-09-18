#include <iostream>
#include <cmath>

using namespace std;

int main(){
int a;
cin >>a;
if (a==0)
{
    cout <<"raven 0";
}
else
{
    if (a>0)
    {
        cout <<"a>0" <<endl;
    }
    else 
    {
        cout <<"a<0" <<endl;
    }
}

int b = a % 2;

if (b == 0)
{
    cout <<"chet";
}
else
{
    cout <<"nechet";
}
return 0;
}