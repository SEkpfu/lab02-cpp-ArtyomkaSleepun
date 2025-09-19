#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;


int main(){
    setlocale(LC_ALL,"ru_RU.UTH-8");
    double a,c;
    
cout <<"Введите a:"; cin >>a;
if (a <= -10){
    c = exp(1/-a);
}

else if (-10 < a && a < -4 ){
    c = sqrt(fabs(a-5));
}

else {
    c = (sqrt(1+a*a)) / (fabs(a+1)+1);
}

cout <<fixed << setprecision(5);
cout <<"c=" <<c;



}