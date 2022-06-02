#include <iostream>
#include<conio.h>
#include <stdlib.h>   
#include <time.h> 
#include<math.h>
using namespace std;

void vvedr(int a[],int n)
{
	int av,bv,v,i;
	do{
		cout<<"a<b"<<endl;
	cout<<"a = ";
	cin>>av;
	cout<<"b = ";
	cin>>bv;
}while(bv<av);
    if(av<0 &&bv>0)
    {
    	v=bv-av;
	}
	else
	if(av<0&&bv<0)
	{
		v=fabs(bv-av);
	}
	else
	if(av>0&&bv>0)
	v=bv-av;
	if(av<0)
	v++;
	for(i=0;i<n;i++)
	{
		a[i]=rand()%v+av;
	}
	
}
void vved(int a[],int n)
{
	int i;
	cout<<"Введення масиву : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}

void vv(int a[],int n)
{
	int k;

	cout<<"1 Ввести вручну "<<endl<<"2 Ввести в діапазоні від A до B"<<endl<<"3 Вихід "<<endl<<"Виберіть варіант : ";
	cin>>k;
	switch(k)
	{
		case 1:vved(a,n);break;
		case 2:vvedr(a,n);break;
		case 3:cout<<"Програма завершена !!!";break;
		default:cout<<"Введіть коректне значення !!!";break;
}
	
}
int funcper(int *pa)
{
	int i,p,k=1,n=0;
	i=0;
	p=*pa;
	while(i<3)
	{
		if(p/10!=0)
		k++;
		else
		break;
		p=p/10;
	}
	p=*pa;
	int a[k];
	for(i=0;i<k;i++)
	{
		a[i]=p%10;
	}
	for(i=0;i<k;i++)
	{
		for(int j=0;j<k;j++)
		if(a[i]==a[j] && i!=j)
		{
			n++;	
		}
		if(n!=0)
		break;
	}
	int q;
	if(n==0)
	q=1;
	else
	q=0;
	return q;
}

void viv(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}
int per2(int &a)
{
	int i;
	int p,k=-1;
	p=a;
	while(p/10!=0)
	{
		if(p%10==0&&p/10!=0)
		k++;
		
		p=p/10;
	}
	int q;
	if(k!=0)
	q=1;
	else
	q=0;
	return q;
}
void sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		if(per2(a[i])==0){
		for(j=i+1;j<n;j++)
		{
			if(per2(a[j])==0)
			{
				if(a[i]<a[j])
				{
					int t;
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				
					j--;
				}
			
				
			}
			
		}
	    	
	}

	}
}


int main(){
	srand(time(NULL));
    setlocale(LC_CTYPE, "ukr");
    int n;
    cout<<"n = ";
    cin>>n;
    int a[n];
    
    vv(a,n);
    viv(a,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
    	cout<<funcper(&a[i])<<endl;
	}
	cout<<endl;
	for(int i=0;i<n;i++){
	cout<<i+1<<" - "<<per2(a[i])<<endl;}
    cout<<endl;
	sort(a,n);
	viv(a,n);
	

  
  return 0;
}
