#include <conio.h>
#include<iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class ticket 
{
	public:
	string item;
	int number,hours[2],quantity1,quantity2;
	ticket()
	{
		cout<<"Enter item : ";
		cin>>item;
		cout<"Enter humber : ";
		cin>>number;
		cout<<"Enter hours : ";
		cin>>hours[0];
		cout<<"Enter minutes : ";
		cin>>hours[1];
		cout<<"Enter quantity1 : ";
		cin>>quantity1;
		cout<<"Enter quantity2 : ";
		cin>>quantity2;
	}
	ticket(string a,int b,int c,int d,int e,int q )
	{
		item=a;
		number=b;
		hours[0]=c;
		hours[1]=d;
		quantity1=e;
		quantity2=q;
	}
	void get_ticket();
	void percent();
};
    void ticket::percent(){
    	cout<<"quantity1/quantity2="<<quantity1/quantity2<<endl;
	}
    void ticket::get_ticket(){
    	cout<< "item : ";
		cout<<item<<endl;
		cout<"number : ";
		cout<<number<<endl;
		cout<<"Enter hours : ";
		cout<<hours[0]<<endl;
		cout<<"Enter minutes : ";
		cout<<hours[1]<<endl;
		cout<<"Enter quantity1 : ";
		cout<<quantity1<<endl;
		cout<<"Enter quantity2 : ";
		cout<<quantity2<<endl;
	}



    void sum(int a,int b){
    	cout<<"sum = "<<a+b<<endl;
	}



int main(){
	string a;
	int b,c,d,e,q;
	
	ticket A;
	A.get_ticket();
    cout<<"Enter item : ";
	cin>>a;
	cout<"Enter humber : ";
	cin>>b;
	cout<<"Enter hours : ";
	cin>>c;
	cout<"Enter minutes : ";
	cin>>d;
	cout<<"Enter quantity1 : ";
	cin>>e;
	cout<<"Enter quantity2 : ";
	cin>>q;
	ticket B(a,b,c,d,e,q);
	ticket C;
	cout<<"A :";
	sum(A.quantity1,A.quantity2);
	cout<<"B : ";
	sum(B.quantity1,B.quantity2);
	cout<<"C : ";
	sum(C.quantity1,C.quantity2);
	cout<<endl<<"A - ";
	A.percent();
	cout<<"B - ";
	B.percent();
	cout<<"C - ";
	C.percent();
	
	
	
	
	return 0;
}
