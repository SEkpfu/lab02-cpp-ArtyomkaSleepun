#include <iostream>
#include <cmath>

using namespace std;
int main() {
int dM,dW;
cout <<"date:"; 
cout <<"Month day:";
cin >>dM;
cout <<"Day of week:";
cin >>dW;
if (13 == dM || 17 == dM )
{
    if (5==dW)
    {
        cout <<"Bad day";
    }
    else
    {
    cout <<"normal day";
    }
}
else
{
    cout <<"normal day";
}
return 0;
}
