#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "ukr");	
    cout<<"Ошибка в файлі : "<<__FILE__<<endl;
	cout<<"На рядкові - "<<__LINE__;
	cout<<endl;
	cout<<"Час : "<<__TIME__<<endl;
	cout<<"Дата : "<<__DATE__;
	return 0;
}
