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
    
    	file1<<"���������� �"<<k.number<<endl;
    	file1<<"----------------"<<endl;
    	file1<<"���� : "<<k.d.day<<"."<<k.d.manth<<"."<<k.d.years<<endl;
    	file1<<"��������� : "<<k.vib<<endl;
    	file1<<"ʳ������ : "<<k.kil<<" ��."<<endl;
    	
    	if((k.vib=="Tort")||(k.vib=="tort")||(k.vib=="����")||(k.vib=="����"))
    	{
    		file1<<"ֳ�� : "<<k.P.prt[0]<<" ���."<<endl;
    		file1<<"��������� : "<<k.P.prt[1]<<" ���."<<endl;
		}
		else
		if((k.vib=="Cruasan")||(k.vib=="cruasan")||(k.vib=="�������")||(k.vib=="�������"))
		{
			file1<<"ֳ�� : "<<k.P.nach[0]<<" ���."<<endl;
			file1<<"������� : "<<k.P.nach[1]<<" ����."<<endl;
			file1<<"������ : "<<k.P.nach[2]<<" ����."<<endl;
			file1<<"�������� : "<<k.P.nach[3]<<" ����."<<endl;
		}
		file1<<"----------------"<<endl;
    	file1<<"�� ������ : "<<k.zag<<" ���."<<endl;
    	file1<<"================";
    file1.close();
}
void result(float sum,float k1,float k2,float k3){
    ofstream file1("text.TXT",ios_base::app); 
    file1<<endl;
    file1<<"���� : "<<sum<<endl;
    if(k1>k2&&k1>k3)
    {
    	file1<<"������� - "<<k1<<endl;
	}
	else
	if(k2>k3&&k2>k1)
    {
    	file1<<"����� - "<<k2<<endl;
	}
	else
	if(k3>k2&&k3>k1)
    {
    	file1<<"�������� - "<<k3<<endl;
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
    	cout<<"Name product (Tort - ���� or Cruasan - �������) : ";
    	cin>>a[i].vib;
    	cout<<"Enter quantity : ";
    	cin>>a[i].kil;
    	if((a[i].vib=="Tort")||(a[i].vib=="tort")||(a[i].vib=="����")||(a[i].vib=="����"))
    	{
    		cout<<"Enter price tort : ";
    		cin>>a[i].P.prt[0];
    		cout<<"Enter price pc : ";
    		cin>>a[i].P.prt[1];
    		a[i].zag=a[i].P.prt[0]*a[i].kil+a[i].P.prt[1]*a[i].kil;
		}
		else
		if((a[i].vib=="Cruasan")||(a[i].vib=="cruasan")||(a[i].vib=="�������")||(a[i].vib=="�������"))
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
		cout<<"������ �������� �������� ";
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
		if((a[i].vib=="Cruasan")||(a[i].vib=="cruasan")||(a[i].vib=="�������")||(a[i].vib=="�������"))
		{
			k1=k1+a[i].P.nach[1];
			k2=k2+a[i].P.nach[2];
			k3=k3+a[i].P.nach[3];
		}
	}
	
	
	
	return 0;
}
