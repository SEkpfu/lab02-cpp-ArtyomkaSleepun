#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    setlocale(LC_ALL,"ru_RU.UTH-8");
    double x,y,z;
    cout <<"Введите x:";
    cin >>x;
    cout <<"Введите y:";
    cin >>y;
    cout <<"Введите z:";
    cin >>z;


    // проверяем может ли быть такой треугольник
    if (x+y > z){
        cout <<"треугольник может существовать" <<endl;
    } else {
        if (x+z > y){
            cout <<"треугольник может существовать" <<endl;
        } else {
            if (y+z > x){
                cout <<"треугольник может существовать" <<endl;
                } else {
                    cout <<"треугольник не существует." <<endl;
                    return 0;
                }
            }
        }
// смотрим какой это треугольник
if (x==y && y==z && x==z) {
    cout <<"треугольник равносторонний";

} else if (x==y || y==x || x==z || y==z) {
    cout <<"треугольник равнобедренный";
} else {
    cout << "обычный треугольник";
}

    return 0;        
    }
    









