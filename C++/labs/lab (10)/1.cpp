#include<conio.h>
#include<iostream>




using namespace std;

class time
{
	public:
		int h,m,s;
		
		
		time(int k)
		{
			cout<<"hourse : ";
			cin>>h;
			cout<<"minutes : ";
			cin>>m;
			cout<<"seconds : ";
			cin>>s;
		}
		time()
		{
			h=0;
			m=0;
			s=0;
			
		}
		void set()
		{
			if((h/10)==0)
			{
				cout<<"0"<<h<<":";
			}
			else
			cout<<h<<":";
			
			
			if((m/10)==0)
			cout<<"0"<<m<<":";
			else
			cout<<m<<":";
			
			
			if((s/10)==0)
			cout<<"0"<<s<<endl;
			else
			cout<<s<<endl;
		}
		time operator +(time op2)
	{
		time o;
		o.h=h+op2.h;
		o.m=m+op2.m;
		o.s=s+op2.s;
		if(o.s>=60)
		{
			o.s=o.s-60;
			o.m++;
		}
		if(o.m>=60)
		{
			o.m=o.m-60;
			o.h++;
		}
		return o;
	}
		bool operator >(time op2)
	{
		if(h>op2.h)
		{
			return true;
		}
		else
		if(h==op2.h&&m>op2.m)
		{
			return true;
		}
		else
		if(h==op2.h&&m==op2.m&&s>op2.s)
		{
			return true;
		}
		else
		return false;
	}
		bool operator <(time op2)
	{
		if(h<op2.h)
		{
			return true;
		}
		else
		if(h==op2.h&&m<op2.m)
		{
			return true;
		}
		else
		if(h==op2.h&&m==op2.m&&s<op2.s)
		{
			return true;
		}
		else
		return false;
	}
		bool operator ==(time op2)
	{
		if(h==op2.h&&m==op2.m&&s==op2.s)
		{
			return true;
		}
		else
		return false;
	}
		
	~time(){
		cout<<"clean"<<endl;
	}
};




int main()
{
	time a(1),b(1);
	cout<<endl;
	(a+b).set();
	cout<<endl;
	a.set();
	b.set();
	if(a>b)
	cout<<"a>b"<<endl;
	else
	cout<<"a!>b"<<endl;
	
	if(a<b)
	cout<<"a<b"<<endl;
	else
	cout<<"a!<b"<<endl;
	
	if(a==b)
	cout<<"a==b"<<endl;
	else
	cout<<"a!=b"<<endl;
	
	
	
	return 0;
}
