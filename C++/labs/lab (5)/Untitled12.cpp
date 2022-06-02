#include <iostream>
#include<conio.h>
#include <stdlib.h>   
#include <time.h> 

using namespace std;

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



int main(){
	
    int nk,j;
    cout<<endl<<"enter nk<n nk=";
    cin>>nk;


    int **b=new int* [nk];
    int i=0;
    while( i<nk)
    {
    	b[i]=new int [nk];
    	i++;
	}
	i=0;
	v(b,nk);
	for( i=0;i<nk;i++)
	{
	for(j=0;j<nk;j++)
	cout<<"\t"<<b[i][j];
    cout<<endl;	
} 



  
  return 0;
}
