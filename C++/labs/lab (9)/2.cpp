#include <conio.h>
#include<iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
using namespace std;
class employee
{
    public:
    string surname;
    int rikvstypy;
    float salary,nad;
    employee()
	{
    	cout << "Enter  surname: " ;
        cin >>surname;
        cout<< "Enter year of beginning work " ;
        cin >>rikvstypy;
        cout<< "Enter  salary " ;
        cin >>salary;
	}
    void nadbavka();
    void stash(int a);
};
    void employee::nadbavka(){
    	nad=salary*0.3;
	}
    
    
    void employee::stash(int a){
    	cout<<"Stash : "<<2021-a<<endl;
	}

void result(string a,int b){
    ofstream file1("text1.TXT",ios::app); 
   
    file1<<a<<" - "<<b<<endl;
    file1.close();
}
int main(){
	int n;
	cout<<"n = ";
	cin>>n;
	int i=0;
	employee A[n];
	while(i<n)
	{
		A[i].nadbavka();
		cout<<i+1<<" - ";
		A[i].stash(A[i].rikvstypy);
		float q;
		q=A[i].salary+A[i].nad;
		result(A[i].surname,(q));
		i++;
	}
	
	
	
	return 0;
}
