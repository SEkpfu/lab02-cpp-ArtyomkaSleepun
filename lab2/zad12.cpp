#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main(){
setlocale(LC_ALL, "ru_RU.UTH-8");
int x,y,z;
cout <<"Введите х:";
cin >>x;
cout <<"Введите у:";
cin >>y;
cout <<"Введите z:";
cin >>z;

// a)
int sum = 0;
if (x > 10) {sum += x;};
if (y > 10) {sum += y;};
if (z > 10) {sum += z;};
cout <<"Сумма чисел превышающих 10 =" <<sum <<endl;
// b)

int chet = 0;
if (x % 2 == 0) {chet += 1;};
if (y % 2 == 0) {chet += 1;};
if (z % 2 == 0) {chet += 1;};
cout <<"Кол-во четных чисел =" <<chet <<endl;

// c)
int sr = (x+y+z) / 3;
cout <<"Среднее число:" <<sr <<endl;
 if (x<y) {
    if (y<z) {cout <<"Среднее=" <<y <<endl;} else {cout <<"среднее =" <<z <<endl;}
 } else {cout <<"СРЕДНЕЕ= " <<x <<endl;}

 
// d)
x = 1;
y = 2;
z = 3;

if (x<y) {
    if (x<z) {cout <<y;} else {cout <<z;}
}else {cout <<x;}




return 0;
}