#include <iostream> 
#include <conio.h>



using namespace std;

int main ()
{
	setlocale(LC_CTYPE, "ukr");	
    float a=1.2,c=2.3;
    cout<<"a = "<<a<<endl<<"c = "<<c<<endl;
    float *p;
    cout<<"�������� p ��������"<<endl;
    p=&a;
    cout<<"������ p = "<<p<<endl;
    *p = *p*3;
    cout<<"�������� �������� : "<<*p<<endl;
    cout<<"������ �������� : "<<*p+c<<endl;
    p=&c;
    cout<<"��������� ������ ����� c :"<<p<<endl;
    cout<<"������ a : "<<&a<<" c : "<<&c<<" p : "<<&p<<" �� �� ����� �������� : "<<p<<endl;
    cout<<"a = "<<a<<endl<<"c = "<<c<<endl<<"*p = "<<*p;


    getch();
    return 0;
 }
