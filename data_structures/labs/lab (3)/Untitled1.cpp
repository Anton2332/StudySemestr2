#include<conio.h>
#include<iostream>

using namespace std;




int main ()
{
	int a[6][6];
	for(int i=0;i<6;i++)
	for(int j=0;j<6;j++)
	a[i][j]=0;
	
	a[0][2]=2;
	a[0][4]=8;
	a[1][2]=6;
	a[1][3]=4;
	a[2][0]=2;
	a[2][1]=6;
	a[2][5]=9;
	a[3][1]=4;
	a[3][4]=4;
	a[4][0]=8;
	a[4][3]=4;
	a[5][2]=9;
	
	/*
	це для перевірки шукання шляху за двох ізольованих в графі
	a[0][2]=2;
	a[0][4]=8;
	a[1][2]=0;
	a[1][3]=4;
	a[2][0]=2;
	a[2][1]=6;
	a[2][5]=9;
	a[3][1]=4;
	a[3][4]=4;
	a[4][0]=8;
	a[4][3]=4;
	a[5][2]=9;
	*/
	
	
	cout<<" \t";
	for(int i=0;i<6;i++)
	{
		cout<<i+1<<" ";
	}
	cout<<endl<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<i+1<<"\t";
	for(int j=0;j<6;j++)
	cout<<a[i][j]<<" ";
	cout<<endl;	
	}
	
	int i,j,k=0,b[6];
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(i==j)
			j++;
			
			if(a[i][j]!=0)
			{
				k++;
			}
		}
	}
	
	if(k==(6*5))
	cout<<"earl full"<<endl;
	else
	cout<<"earl not full"<<endl;
	
	for(i=0;i<6;i++)
	{
		k=0;
		cout<<i+1<<": ";
		for(j=0;j<6;j++)
		{
			if(a[i][j]!=0 && k!=0)
			{
				cout<<","<<j+1;
			}
			else
			if(a[i][j]!=0)
			{
				cout<<j+1;
				k++;
			}
			
		}
		cout<<endl;
	}
	
	int sum,q3;
	q3=0;
	sum=0;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(j>i)
			{
				if(a[i][j]!=0)
				{
					q3++;
					sum=sum+a[i][j];
				}
			}
		}
	}
	
	cout<<"ser = "<<float(sum)/float(q3)<<" km"<<endl;
	
	
	
	
	int q=0,q2;
	
	for(i=0;i<6;i++)
	{
		k=0;
		for(j=0;j<6;j++)
		{
			if(a[i][j]!=0)
			{
				k++;
				q2=j;
			}
		}
		if(k==1)
		{
			cout<<i+1<<": "<<a[i][q2]<<" km "<<" - isolated"<<endl;
			b[q]=i+1;
			q++;
		}
	}
	if(q==0)
	{
		cout<<"Not found isolated"<<endl;
	}
	else
	{
		cout<<q<<" found isolated"<<endl;
		for(i=0;i<q;i++)
		cout<<b[i]<<" ";
	}
	
	cout<<endl;
	
	sum=0;
	float maxsum=0;
	int q4,i1,j1,i2,sum1,sum2;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(a[i][j]!=0)
			{
				sum=a[i][j];
				for(q4=0;q4<6;q4++)
				{
					if(a[q4][j]!=0&&(sum+a[q4][j])>maxsum&&a[q4][j]!=0&&q4!=i)
					{
						maxsum=sum+a[q4][j];
						sum1=sum;
						sum2=a[q4][j];
						i1=i;
						j1=j;
						i2=q4;
					}
				}
				
			}
		}
	}
	cout<<endl;
	cout<<"("<<i1+1<<")"<<"---"<<sum1<<"---("<<j1+1<<")---"<<sum2<<"---"<<"("<<i2+1<<")"<<endl;
	cout<<endl<<"maxsum = "<<maxsum<<endl;
	
	
	//Я на парі ствердив не правильно при 2 ізольованих населиних  ще 
	// є можливість обїхати всі населенні пункти заїжджаючи лише 1 раз 
	//а при 3 вже точно не можливо 
	
	if(q>=2)
	{
		cout<<"it is not possible to go around all settlements "<<endl;
	}
	else
	{
		
		int shl[6],visit[6];
		visit[0]=-1;
		visit[1]=-1;
		visit[2]=-1;
		visit[3]=-1;
		visit[4]=-1;
		visit[5]=-1;
		int k=0,q5;
	
	for(i=0;i<6;i++)
	{
		k=0;
		visit[i]=-2;
		shl[k]=i+1;
		k++;
		q4=i;
		for(j=0;j<6;j++)
		{
			if(a[q4][j]!=0&&visit[j]==-1)
			{
				
				visit[j]=-2;
				shl[k]=j+1;
				k++;
				for(q4=0;q4<6;q4++)
				{
					if(a[q4][j]!=0&&visit[q4]==-1)
					{
						visit[q4]=-2;
						shl[k]=q4+1;
						k++;
						j=0;
						break;
					}
				}
			}
		}
		
		int r=0;
		for(int ik=0;ik<6;ik++)
		{
			if (visit[ik]==-2)
			r++;
		}
		if(r==6)
		{
			break;
			
		}
		else
		{
			for(int ik=0;ik<6;ik++)
				visit[ik]=-1;
			
		
		}
			
	}
		int r=0;
		for(int ik=0;ik<6;ik++)
		{
			if (visit[ik]==-2)
			r++;
		}
		if(r!=6)
		{
			cout<<"it is not possible to go around all settlements "<<endl;
			
		}
		else
		{
			cout<<endl;
			cout<<"this way you can go : ";
			for(i=0;i<6;i++)
			{
				cout<<shl[i]<<" ";
			}
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
