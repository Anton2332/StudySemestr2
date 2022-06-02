#include <fstream>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>

using namespace std;

void vved(int **a,int n,int m)
{
   int i, j;
   cout << "array  a"<<endl;
   for(i = 0; i < n; i++)
    for(j = 0; j < m; j++)
    cin >>a[i][j];
    
}
void print(int **a, int n, int m)
{
   int i,j;
   cout<<"array "<<endl;
   for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
    cout<<a[i][j]<< " ";
    cout<<endl;
 }
}

int del(int **p, int n, int m){
  int i,j,r;
  for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
	    if (p[i][j]%2==0)
            p[i][j]=r;
            r=p[0][0];
            cout<<r;
	}
}

int max1(int **a,int n,int m)
{
	int i,j;
	int max;
	max=a[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>max)
			max=a[i][j];
		}
	}
	return max;
}

int min1(int **a,int n,int m)
{
	int i,j,min;
	min=a[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]<min)
			min=a[i][j];
		}
	}
	return min;
}

int dodr(int **a,int n,int m)
{
	int i,j,min,max,k=0,b[m];
	min=min1(a,n,m);
	max=max1(a,n,m);
	cout <<"mint "<<min<<endl<<"max "<<max<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==min &&k==0)//k1 щоб враховувати рядок з мінімумом лише 1 раз
			{
				for(int q=0;q<m;q++)
				{
					b[q]=a[i][q];
					cout <<b[q]<<" ";
				}
				cout<<endl;
				k++;
			}
		}
	}
	cout<<endl;
	int k2=0;
	int i1,j1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==max&&k2==0)//k2 щоб рахувати рядок з максимумом лише 1 раз
			{
			
				n++;
			    for( i1=n-1;i1>i+1;i1--)
			    {
			    
			    	for( j1=0;j1<m;j1++)
			    	{
			    		
			    		a[i1][j1]=a[i1-1][j1];
			    		
					}
				}
			    for( j1=0;j1<m;j1++)
			    a[i+1][j1]=b[j1];
			
			
			    k2++;
				break;	
			}
		}
	}
	
	return n;
}

int main()
{
   int n, m, i,j;
   int **a;
   cout<<"n = ";
   cin>>n;
   cout<<"m = ";
   cin>>m;
   a=new int*[n+1];
   for(i = 0; i < n+1; i++)
   a[i] = new int [m];
   
   vved(a,n,m);
   print(a,n,m);
   n=dodr(a,n,m);
   print(a,n,m);
   del(a,n,m);
   print(a,n,m);
   
   
  
    
    
    
   for(i = 0; i < n; i++)
   delete []a[i];
   delete []a;
   return 0;
}
