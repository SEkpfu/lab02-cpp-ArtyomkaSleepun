
#include <cmath>
#include <iostream>


using namespace std;


int main(){
setlocale(LC_ALL, "ru_RU.UTH-8");
double x,y;
cout <<"Введите х:"; cin >>x;
cout <<"Введите y"; cin >>y;

if ((x * x +y *y <= 64 && x <= 0 && x >= -4) ||
(x * x +y *y <= 64 && y <= 0 && x <= 8 && y >= -8) ||
(x >= 0 && y >= 0 && y < -2*x+8))
{cout <<"принадлежит";} else {cout <<"не принадлежит";};
return 0;
}

