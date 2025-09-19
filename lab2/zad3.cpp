#include <iostream>
#include <cmath>

using namespace std;

int main(){
int x,y;
cout <<"Type x:"; 
cin >>x;
y = x * x + 4 * x - 5;
if (x*x + 4*x - 5 == 0)
{
    cout <<"znamenatel raven 0...";
}
else
{


if (x<=-2)
{
    y=0;
}
else
{
    if (x<=10)
    {
        y=pow(x,2) + 4*x + 5;
    
    }
    else
    {
        y = 1/(pow(x,2)+4*x-5);
    }
}
}
cout <<"function=" <<y;
}
