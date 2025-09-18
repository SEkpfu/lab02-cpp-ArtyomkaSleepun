#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int calc(int birthM, int birthY);
int calc2(int dateM, int dateY);
int main(){
setlocale(LC_ALL,"ru_RU.UTH-8");
int birthD, birthM, birthY;
cout <<"Введите ДЕНЬ своего рождения:";
cin >>birthD;
cout <<"Введите МЕСЯЦ своего рождения:";
cin >>birthM;
cout <<"Введите ГОД своего рождения:";
cin >>birthY;
int dateD, dateM, dateY;
cout <<"Введите сегодняшний день:";
cin >>dateD;
cout <<"Введите сегодняшний месяц:";
cin >>dateM;
cout <<"Введите сегодняшний год:";
cin >>dateY;
cout <<"Сегодняшняя дата:" <<dateD <<"." <<dateM <<"." <<dateY <<endl;
cout <<"Дата рождения:" <<birthD <<"." <<birthM <<"." <<birthY <<endl;
int month = calc(birthM, birthY);
int daygoneb = birthD + month + ((birthY - (birthY / 4))*365) + (366 * (birthY / 4 ));


int yearspent = dateY / 4;
int yearspent2 = dateY - yearspent; 
int month5 = calc2(dateM,dateY);
int daygonenow = dateD + month5 + yearspent*366 + yearspent2*365;


int howold = (daygonenow - daygoneb) / 365;
cout <<"Вам" <<howold <<"лет"; 
return 0;

}


int calc(int birthM,int birthY){
int month = birthM - 1;
int month2;

if (birthY % 4 != 0){month2 = 28;} else {month2 = 29;};
switch (month) {
    case 1: month = 31; break;
    case 2: month = month2 + 31; break;
    case 3: month = 31 + month2 + 31; break;
    case 4: month = 31 + month2 + 31 + 30; break;
    case 5: month = 31 + month2 + 31 + 30 + 31; break;
    case 6: month = 31 + month2 + 31 + 30 + 31 + 30; break;
    case 7: month = 31 + month2 + 31 + 30 + 31 + 30 + 31; break;
    case 8: month = 31 + month2 + 31 + 30 + 31 + 30 + 31 + 31; break;
    case 9: month = 31 + month2 + 31 + 30 + 31 + 30 + 31 + 31 +30; break;
    case 10: month =31 + month2 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31; break;
    case 11: month =31 + month2 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 31; break;
    case 12: month =31 + month2 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 31 +31; break;
}






return month;
}


int calc2(int dateM,int dateY){
int month5 = dateM - 1;
int month4;
if (dateY % 4 != 0){month4 = 28;} else {month4 = 29;};
switch (month5) {
    case 1: month5 = 31; break;
    case 2: month5 = month4 + 31; break;
    case 3: month5 = 31 + month4 + 31; break;
    case 4: month5 = 31 + month4 + 31 + 30; break;
    case 5: month5 = 31 + month4 + 31 + 30 + 31; break;
    case 6: month5 = 31 + month4 + 31 + 30 + 31 + 30; break;
    case 7: month5 = 31 + month4 + 31 + 30 + 31 + 30 + 31; break;
    case 8: month5 = 31 + month4 + 31 + 30 + 31 + 30 + 31 + 31; break;
    case 9: month5 = 31 + month4 + 31 + 30 + 31 + 30 + 31 + 31 +30; break;
    case 10: month5 =31 + month4 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31; break;
    case 11: month5 =31 + month4 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 31; break;
    case 12: month5 =31 + month4 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 31 +31; break;
}






return month5;
}