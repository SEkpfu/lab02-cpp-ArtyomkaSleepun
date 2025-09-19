// задание 5, часть а)
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main(){
double a,b,r;
cout <<"radius:"; cin >>r;
cout <<"a:"; cin >> a;
cout <<"b:"; cin >>b;
double Sc = M_PI * (r*r) , Sq = a*b;

if (Sq >= Sc)
{
    cout <<"Vmestitsya!" <<endl;
}
else
{
    cout <<"Ne vmestitsya!";
    return 0;
}
double z,c;
cout <<"height of cake:"; cin >>z;
cout <<"height of box:"; cin >>c;
double Vc = M_PI * (r*r) * z,Vq = a*b*c;
if (Vq >= Vc)
{
    cout <<"Vmestitsya!";
}
else 
{
    cout <<"Ne vmestitsya!";
}
return 0;
}

// задание 5, часть б)

