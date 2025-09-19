#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTH-8");
    double x,y;
    cout <<"Введите координату попадения x:"; cin >>x;
    cout <<"Введите координату попадения y:"; cin >>y;
double distance = sqrt(x*x+y*y);
if (distance <= 2){
    cout <<"10" ;
} else if (distance <= 4) {
    cout <<"5";
} else if (distance > 4) {
    cout <<"0, попробуй еще раз";
}



    return 0;

}



