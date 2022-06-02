#include <conio.h>
#include<iostream>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<fstream>
using namespace std;
class library
{
	public:
		string name,nameavtor;
		int n;
		float sale;
		library()
		{
			cout<<"name : ";
			cin>>name;
			cout<<"name avtor : ";
			cin>>nameavtor;
			cout<<"number of pages : ";
			cin>>n;
			cout<<"sale : ";
			cin>>sale;
		}
	void get_lib(){
		cout<<"name : ";
			cout<<name<<endl;
			cout<<"name avtor : ";
			cout<<nameavtor<<endl;
			cout<<"number of pages : ";
			cout<<n<<endl;
			cout<<"sale : ";
			cout<<sale<<endl;
	}
	void sobiv();
};
    
    void library::sobiv(){
    	cout<<"sobiv : "<<sale/n<<endl;
	}
    
    void sort(library A[],int n){
    	int i=0,j;
    	for(i=0;i<n;i++)
    	{
    		for(j=i+1;j<n;j++)
    		{
    			if(A[i].sale>A[j].sale)
    			{
    				swap(A[i],A[j]);
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(A[i].name[0]=='A')
			{
				A[i].get_lib();
				
			}
		}
	}
    
    void result(string a,int b){
    ofstream file1("text1.TXT",ios::app); 
   
    file1<<a<<" - "<<b<<endl;
    file1.close();
}
    
int main(){
	int nk;
	cout<<"n = ";
	library A[nk];
	
	int i=0;
	while (i<nk)
	{
		A[i].sobiv();
		i++;
	}
	sort(A,nk); 
	
	
	return 0;
}
