#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#define debag 1
#include <fstream>

using namespace std;
void result(int *a,int *b){
    ofstream file1("text.TXT"); 
    for(int i=0; i<10; i++)
    {

    file1<<i+1<<"\t����� - "<<a[i];

    file1<<"\t������� - ";
        if( b[i]==1)
        {
        file1<<" ����"<<endl;
        }
        else
        file1<<" �����"<<endl;

    }
    file1.close();
}




int main(){
	setlocale(LC_CTYPE, "ukr");
	srand(time(NULL));
	int i,a[10],b[10],sum=0;
	cout<<"\texperiment"<<endl;
	int k=0;
	for(i=0;i<10;i++)
	{
		a[i]=rand()%6+1;
		cout<<i+1<<"\t����� - "<<a[i];
		b[i]=rand()%2+1;
		sum=sum+a[i];
		if(b[i]==1)
	    {
		cout<<" ������� - ����";
		k++;
    	}
		else
		cout<<" ������� - �����";
		cout<<endl;
		getch();
	}
	if(sum>42&&k<3)
	cout<<"ser = "<<float(sum)/10;
	else
	{
		cout<<"\tresult"<<endl;
		for(i=0;i<10;i++){
		cout<<i+1<<"\t����� - "<<a[i];
		k=b[i];
		if(k==1)
	    {
		cout<<" ������� - ����";
		
    	}
		else
		cout<<" ������� - �����";
		cout<<endl;
		}
		result(a,b);
		
	}
	
	
	
	getch();
	return 0;
}
