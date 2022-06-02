#include <conio.h>
#include<iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

namespace vector{
    int i,n;
    int  v(float a[],int b,int c)
    {
    	while(c<b)
    	{
    		a[c]=(rand()%901-300)*0.01;
    		c++;
		}
		c=0;
		return c;
	}
	int func(float a[],int b,int c,float m)
	{
		while (c<b)
		{
		    if(a[c]==m)
			{
			    for(int j=c;j<b;j++)
				{
					a[j]=a[j+1];
					}
					b--;
					i--;
			}
			c++;
		}
		return b;
	}
}



namespace matrix{
	int i;
	float s;
	void v(int **pb,int b)
	{
		int i,j;
		for(i=0;i<b;i++)
		{
			for(j=0;j<b;j++)
		    {
		    	pb[i][j]=rand()%10+3;
			}
		}

	}


}

int viv(float a[],int b,int c)
{
    while (c<b)
    {
    	cout<<"\t"<<a[c];
    	c++;
	}
    c=0;
    return c;

}
float max(float a[],int b)
{
	int i=0;
	float max=a[0];
	while(i<b)
	{
		if(a[i]>max)
		max=a[i];
		i++;
	}
	return max;
}

int main(){
	srand(time(NULL));
	cout<<"enter n = ";
	cin>>vector::n;
	float a[vector::n],max1;
	vector::i=0;
	vector::i=vector::v(a,vector::n,vector::i);
    max1=max(a,vector::n);
    cout<<"max = "<<max1<<endl;
    	vector::i=viv(a,vector::n,vector::i);
    	cout<<endl;
    vector::n=vector::func(a,vector::n,vector::i,max1);
    vector::i=0;
	vector::i=viv(a,vector::n,vector::i);
	int nk;
    cout<<endl<<"enter nk<n nk=";
    cin>>nk;


    int **b=new int* [nk];

    while(vector::i<nk)
    {
    	b[vector::i]=new int [nk];
    	vector::i++;
	}
	vector::i=0;
	matrix::v(b,nk);
	for(int i=0;i<nk;i++)
	{
	for(int j=0;j<nk;j++)
	cout<<"\t"<<b[i][j];
    cout<<endl;
}
cout<<endl;
    while (vector::i<nk)
    {
    	for(matrix::i=vector::i+1;matrix::i<nk;matrix::i++)
    	if(b[vector::i][vector::i]>b[matrix::i][matrix::i])
    	{
    		int t;
    		t=b[vector::i][vector::i];
    		b[vector::i][vector::i]=b[matrix::i][matrix::i];
    		b[matrix::i][matrix::i]=t;
		}

    	vector::i++;
	}
	vector::i=0;
	for(int i=0;i<nk;i++)
	{
	for(int j=0;j<nk;j++)
	cout<<"\t"<<b[i][j];
    cout<<endl;
}


	return 0;
}
