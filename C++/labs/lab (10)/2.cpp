#include<conio.h>
#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

class matrix
{
	

	int n;
		
	int **arr;
public:	
	void creat()
	{
		arr=new int*[n];
		for(int i=0;i<n;i++)
		arr[i]=new int[n];
	}
	
	matrix()
	{
		n=0;
		arr=0;
	}
	
	matrix(int n1)
	{
		n=n1;
		creat();
	}
	
	void get_(int a,int b)
	{
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		arr[i][j]=rand()%(b-a)+a;
	}
	void set_()
	{
		for(int i=0;i<n;i++)
		{
		for(int j=0;j<n;j++)
		cout<<arr[i][j]<<"\t";
		cout<<endl;	
	}
	}
	int get_n()
	{
		return n;
	}
	friend matrix operator +(matrix& a,matrix& b);
	friend matrix operator -(matrix& a,matrix& b);
	friend bool operator ==(matrix& a,matrix& b);
	friend matrix operator *(matrix& a,matrix& b);
};

    matrix operator +(matrix& a,matrix& b)
		{
			int n1=a.get_n();
			matrix temp(n1);
			for(int i=0;i<n1;i++)
			{
				for(int j=0;j<n1;j++)
				{
					temp.arr[i][j]=a.arr[i][j]+b.arr[i][j];
				}
			}
			
			return temp;
		}
	matrix operator -(matrix& a,matrix& b)
		{
			int n1=a.get_n();
			matrix temp(n1);
			for(int i=0;i<n1;i++)
			{
				for(int j=0;j<n1;j++)
				{
					temp.arr[i][j]=a.arr[i][j]-b.arr[i][j];
				}
			}
			
			return temp;
		}
matrix operator *(matrix& a,matrix& b)
		{
			int n1=a.get_n();
			matrix temp(n1);
			float sum=0;
			for(int i=0;i<n1;i++)
			{
				for(int j=0;j<n1;j++)
				{
				for(int q=0;q<n1;q++)
					sum=sum+a.arr[i][q]*b.arr[j][q];
					temp.arr[i][j]=sum;
					sum=0;
				}
			}
			
			return temp;
		}
	
bool operator ==(matrix& a,matrix& b)
	{
		int n1=a.get_n();
		int k=0;
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<n1;j++)
			{
				if(a.arr[i][j]==b.arr[i][j])
				k++;
			}
		}
		if(k==n1*n1)
		return true;
		else
		return false;
	}



int main()
{
	srand(time(NULL));
	int n;
	cout<<"n = ";
	cin>>n;
	matrix a(n),b(n);
	a.get_(1,8);
	b.get_(8,23);
	cout<<"a"<<endl;
	a.set_();
	cout<<"b"<<endl;
	b.set_();
	cout<<endl;
	cout<<"a+b"<<endl;
	(a+b).set_();
	cout<<endl;
	cout<<"a-b"<<endl;
	(a-b).set_();
	cout<<endl;
	cout<<"a*b"<<endl;
	(a*b).set_();
	cout<<endl;
	cout<<"a==b"<<endl;
	if(a==b)
	cout<<"true"<<endl;
	else
	cout<<"else"<<endl;
	
	
	
	return 0;
}
