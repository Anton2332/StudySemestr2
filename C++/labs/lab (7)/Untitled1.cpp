#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int *vved(int *a,int n){
	int i;
	cout<<"enter a "<<endl;
	for(i=0;i<n;i++)
	{
		
		cin>>a[i];
	}
	return a;
}

void print(int *a,int n)
{
	int i;
	cout<<"print a "<<endl;
	for(i=0;i<n;i++)
	{	
		cout<<a[i]<<" ";
	}
}
int del(int *a,int n,int k)
{
	int i,j;
	for(i=0;i<n;i++)
	{
	    if(a[i]%k==0)
	    {
	    	for(j=i;j<n;j++)
	    	{
	    		a[j]=a[j+1];
			}
			n--;
			i--;
		}
	}
	return n;
}

int *zs(int *a,int n,int x)
{
	int i,j,q=0;
	
	
	if(x>0){
	int b[x];	
	j=n-1;
	for(i=n-1;i>-1;i--)
	{
		if(q<x)
		{
			b[q]=a[i];
			q++;
		}
		else
		{
			a[j]=a[i];
			j--;
		}
	}
	j=x-1;
	for(i=0;i<x;i++)
	{
	a[i]=b[j];
    j--;
    }}
    else
    {
    	x=fabs(x);
    	int b1[x];
        j=0;
	for(i=0;i<n;i++)
	{
		if(q<x)
		{
			b1[q]=a[i];
			q++;
		}
		else
		{
			a[j]=a[i];
			j++;
		}
	}
	j=x-1;
	int k=0;
	i=n-1;
	for(k=0;k<x;k++)
	{
	a[i]=b1[j];
    j--;
    i--;
    }    	
	}
    return a;
}

int sum2(int *a,int n)
{
	int sum1=0;
	for(int i=0;i<n;i++)
	{
		sum1=sum1+a[i];
	}
	
	return sum1;
}

int *func(int *a,int n)
{
	int sum1;
	sum1=sum2(a,n);
	int *b=new int [n];
	int i;
	
	int j=0;
	if(sum1%2==0)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
				b[j]=a[i];
				j++;
			}
		}
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(a[i]%2!=0)
			{
				b[j]=a[i];
				j++;
			}
		}
	}
	return b;
}

int main (){
	int n;
	cout<<"n = ";
	cin>>n;
	int *a=new int [n];
	int *p;
	p=vved(a,n);
	print(p,n);
	int k;
	cout<<endl<<"a = ";
	cin>>k;
    n=del(p,n,k);
	print(p,n);
	cout<<endl;
	cout<<"x = ";
	int x;
	cin>>x;
	p=zs(p,n,x);
	print(p,n);
	cout<<endl;
	int sum=0,k1=0;
	int *b=new int [n];
	b=func(a,n);
	int sum1;
	sum1=sum2(a,n);
	if(sum1%2==0)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]%2==0)
			k1++;
		}
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]%2!=0)
			k1++;
		}
	}
	cout<<endl;
	print(b,k1);
	delete []b;
	delete []a;
	
	return 0;
}
