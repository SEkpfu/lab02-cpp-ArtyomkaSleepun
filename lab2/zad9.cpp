#include <iostream>
#include <cmath>
#include <locale.h>


using namespace std;

int main(){
setlocale(LC_ALL, "ru_RU.UTH-8");
double x,y;
cout <<"Введите координату х:";
cin >>x;
cout <<"Введите координату у:";
cin >>y;
// a
if (x >= -2 && x<=0 && y <= 1 && y >= 0){
    cout <<"а) принадлежит" << endl;
} else cout <<"а) не принадлежит" <<endl;
// b)
double distance = sqrt(x*x+y*x);
if (distance <= 5 && y >= 0) {
    cout <<"b) принадлежит"<<endl;
} else cout <<"b) не принадлежит " <<endl;
// c)
if (distance <= 6 && distance >= 3 && x >= 0){
    cout <<"c) принадлежит" <<endl;
} else cout <<"c) не принадлежит" <<endl;
// d)
if (y = -2*x + 2 ){
    cout <<"d) принадлежит" <<endl;
} else cout <<"d) не принадлежит" <<endl;

return 0;
}
