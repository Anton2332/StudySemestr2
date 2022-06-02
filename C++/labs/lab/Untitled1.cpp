#include <iostream> 
#include <conio.h>



using namespace std;

int main ()
{
	setlocale(LC_CTYPE, "ukr");	
    float a=1.2,c=2.3;
    cout<<"a = "<<a<<endl<<"c = "<<c<<endl;
    float *p;
    cout<<"Вказівник p створено"<<endl;
    p=&a;
    cout<<"Адреса p = "<<p<<endl;
    *p = *p*3;
    cout<<"Значення збільшено : "<<*p<<endl;
    cout<<"Додали значення : "<<*p+c<<endl;
    p=&c;
    cout<<"Присвойли адресу зміной c :"<<p<<endl;
    cout<<"Адреса a : "<<&a<<" c : "<<&c<<" p : "<<&p<<" на що вказує вказівник : "<<p<<endl;
    cout<<"a = "<<a<<endl<<"c = "<<c<<endl<<"*p = "<<*p;


    getch();
    return 0;
 }
