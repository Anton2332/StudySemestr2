#include<conio.h>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>

using namespace std;

struct date
{
	int day,manth,years;
};


struct chek
{
	int number;
    string vib,sur;
    date d;
    int kil;
    float zag;
	union
	{
		float prt[2];
	    float nach[4];
			
	}P;
};
void result(chek k){
    ofstream file1("text.TXT",ios_base::app); 
    
    	file1<<"ЗАМОВЛЕННЯ №"<<k.number<<endl;
    	file1<<"----------------"<<endl;
    	file1<<"Дата : "<<k.d.day<<"."<<k.d.manth<<"."<<k.d.years<<endl;
    	file1<<"Продукція : "<<k.vib<<endl;
    	file1<<"Кількість : "<<k.kil<<" од."<<endl;
    	
    	if((k.vib=="Tort")||(k.vib=="tort")||(k.vib=="торт")||(k.vib=="Торт"))
    	{
    		file1<<"Ціна : "<<k.P.prt[0]<<" грн."<<endl;
    		file1<<"Пакування : "<<k.P.prt[1]<<" грн."<<endl;
		}
		else
		if((k.vib=="Cruasan")||(k.vib=="cruasan")||(k.vib=="Круасан")||(k.vib=="круасан"))
		{
			file1<<"Ціна : "<<k.P.nach[0]<<" грн."<<endl;
			file1<<"Шоколад : "<<k.P.nach[1]<<" порц."<<endl;
			file1<<"Банани : "<<k.P.nach[2]<<" порц."<<endl;
			file1<<"Карамель : "<<k.P.nach[3]<<" порц."<<endl;
		}
		file1<<"----------------"<<endl;
    	file1<<"ДО СПЛАТИ : "<<k.zag<<" грн."<<endl;
    	file1<<"================";
    file1.close();
}
void result(float sum,float k1,float k2,float k3){
    ofstream file1("text.TXT",ios_base::app); 
    file1<<endl;
    file1<<"Сума : "<<sum<<endl;
    if(k1>k2&&k1>k3)
    {
    	file1<<"Шоколад - "<<k1<<endl;
	}
	else
	if(k2>k3&&k2>k1)
    {
    	file1<<"Банан - "<<k2<<endl;
	}
	else
	if(k3>k2&&k3>k1)
    {
    	file1<<"Карамель - "<<k3<<endl;
	}
    	
    file1.close();
}


int main()
{
	setlocale(LC_CTYPE, "ukr");
	enum nach2{ban=3,shock,car};
	chek a[3];
	a[0].number=1000;
	int i;
    for(i=0;i<3;i++)
    {
    	a[i].number=a[0].number+1;
    	cout<<"Enter surname : ";
    	cin>>a[i].sur;
    	cout<<"Enter date "<<endl;
    	cout<<"day : ";
    	cin>>a[i].d.day;
    	cout<<"manth : ";
    	cin>>a[i].d.manth;
    	cout<<"Years : ";
    	cin>>a[i].d.years;
    	cout<<"Name product (Tort - Торт or Cruasan - Круасан) : ";
    	cin>>a[i].vib;
    	cout<<"Enter quantity : ";
    	cin>>a[i].kil;
    	if((a[i].vib=="Tort")||(a[i].vib=="tort")||(a[i].vib=="торт")||(a[i].vib=="Торт"))
    	{
    		cout<<"Enter price tort : ";
    		cin>>a[i].P.prt[0];
    		cout<<"Enter price pc : ";
    		cin>>a[i].P.prt[1];
    		a[i].zag=a[i].P.prt[0]*a[i].kil+a[i].P.prt[1]*a[i].kil;
		}
		else
		if((a[i].vib=="Cruasan")||(a[i].vib=="cruasan")||(a[i].vib=="Круасан")||(a[i].vib=="круасан"))
		{
			cout<<"Enter price Cruasan : ";
			cin>>a[i].P.nach[0];
			cout<<"Enter quantity chocolate : ";
			cin>>a[i].P.nach[1];
			cout<<"Enter quantity bananas : ";
			cin>>a[i].P.nach[2];
			cout<<"Enter quantity caramel : ";
			cin>>a[i].P.nach[3];
			a[i].zag=(a[i].P.nach[1]*shock+a[i].P.nach[2]*ban+a[i].P.nach[3]*car +a[i].P.nach[0])*a[i].kil;
		}
		else
		cout<<"Введіть коректне значення ";
	}
	for(i=0;i<3;i++)
	{
		result(a[i]);
	}
	float sum=0,k1=0,k2=0,k3=0;
	for(i=0;i<3;i++)
	{
		sum=sum+a[i].zag;
	}
	
	for(i=0;i<3;i++)
	{
		if((a[i].vib=="Cruasan")||(a[i].vib=="cruasan")||(a[i].vib=="Круасан")||(a[i].vib=="круасан"))
		{
			k1=k1+a[i].P.nach[1];
			k2=k2+a[i].P.nach[2];
			k3=k3+a[i].P.nach[3];
		}
	}
	
	
	
	return 0;
}
