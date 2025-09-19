#include <iostream>
#include <cmath>

using namespace std;


int main(){
    setlocale(LC_ALL, "ru_RU.UTH-8");
    int apples;
cout <<"Сколько яблок? Вводи:"; cin >>apples;
string end;
if (apples % 10 == 1 && apples % 100 != 11){
    end = "яблоко";
} else if (apples % 10 >= 2 && apples % 10 <= 4 && (apples % 100 < 12 || apples % 100 > 14)){
    end = "яблока";
} else {end = "яблок";};


cout <<"Ежик нёс" <<" " <<apples <<" " <<end;
return 0;
}