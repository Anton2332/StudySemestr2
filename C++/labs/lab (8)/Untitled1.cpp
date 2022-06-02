#include <fstream>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

void mas(float *a,int n){
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=rand()%16+10;
	}
}

void print(float *a,int n)
{
	int i;
	cout<<"Print mas"<<endl;
	for(i=0;i<n;i++)
    cout<<a[i]<<" ";
	cout<<endl;	
}

float *sort(float *a,int n){
	int i;
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	return a;
}

float func1(float &a1,float &b1,float &c1)
{
	float ser;
	ser=(a1+b1+c1)/3;
	return ser;
}

float func2(float &a1,float &b1,float &c1)
{
	float sum;
	sum=a1*a1+b1*b1+c1*c1;
	return sum;
}

float func3(float &a1,float &b1,float &c1)
{
	float sum;
	sum=sqrt(a1*a1+b1*b1+c1*c1);
	return sum;
}

using namespace std;

int main(){
	srand(time(NULL));
	float *p;
	int n;
	cout<<"N = ";
	cin>>n;
	typedef float mymas[n];
	mymas a,b,c,d;
	mas(a,n);
	print(a,n);
	mas(b,n);
	print(b,n);
	mas(c,n);
	print(c,n);
	cout<<"sort "<<endl;
	p=sort(a,n);
	print(p,n);
	p=sort(b,n);
	print(p,n);
	p=sort(c,n);
	print(p,n);
	delete p;
	int i;
	for(i=0;i<n;i++)
	{
		float k;
		k=func1(a[i],b[i],c[i]);
		d[i]=k;
		i++;
		k=func2(a[i],b[i],c[i]);
		d[i]=k;
		i++;
		k=func3(a[i],b[i],c[i]);
		d[i]=k;
	}
	cout<<"D "<<endl;
	print(d,n);
	return 0;
}
