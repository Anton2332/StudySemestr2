#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "ukr");	
    cout<<"������ � ���� : "<<__FILE__<<endl;
	cout<<"�� ������ - "<<__LINE__;
	cout<<endl;
	cout<<"��� : "<<__TIME__<<endl;
	cout<<"���� : "<<__DATE__;
	return 0;
}
