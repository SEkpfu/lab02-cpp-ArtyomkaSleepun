#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "ru_RU.UTH-8");
 int x; //переменная для хранения оценки
cout << "введите свою оценку: ";
cin >> x;
//оператор множественного выбора
switch (x) {
 case 5: cout << "Отлично"; break;
 case 4: cout << "Хорошо";
 case 3: cout << "Удовл"; break;
 case 2:
 case 1: cout << "Не сдал"; break;
 default: cout << "Wrong data";
}
return 0;
}

// выводит следующий кейс