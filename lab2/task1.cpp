#include <iostream>
using namespace std;


int main(){
    setlocale(0,"");
    double a1,b1,a2,b2;
    cout <<"Введите стороны 1-ого прямоугольника \n";
    cout <<"a1="; cin >> a1;
    cout <<"b1="; cin >>b1;
    cout <<"Введите стороны 2-ого прямоугольника \n";
    cout <<"a2= "; cin >>a2;
    cout <<"b2="; cin >>b2;
        double s1,s2;
        s1 = a1*b1;
        s2 = a2*b2;

        if (s1=s2){} else { 
        if (s1>s2){
            cout <<"max площадь у первого, S= " <<s1;
        } else {
            cout <<"max площадь у второго, S=" <<s2;
        }
    }

    double a3,b3;
    cout <<"Введите стороны третьего треугольника:";
    cout <<"Сторона а:"; cin >>a3;
    cout <<"Сторона b;"; cin >>b3;
double s3 = a3*b3;
cout << "max площадь? = " << (s1 > s2 && s1>s3 ? s1 : (s2>s3 && s2>s1 ? s2: s3))<<endl;
        
return 0;
}