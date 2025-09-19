#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTH-8");
int D, M;
cout <<"Введите день:"; cin >>D;
cout <<"Введите месяц:"; cin >>M;
int Days[] = {31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};
int tday = 0;
int tmonth = 0;

if (D == Days[M-1]){tday = 1; tmonth = M+ 1;} else {
    tday = D + 1; tmonth = M;
} 
cout <<"Следующий день:" <<tday <<endl;
cout <<"Месяц:" <<tmonth;

return 0;
}


// Даны два целых числа: D (день) и M (месяц), определяющие правильную дату не високосного года.
// Вывести значения D и M для даты, следующей за указанной. 