#include <iostream> 
#include <conio.h>

using namespace std;

struct students
{
	char pr[20],name[20];
	float st, hours;
};

int main ()
{
	setlocale(LC_CTYPE, "ukr");
    int i,n,j;
    float max=0;
    
    cout<<"n = ";
    cin>>n;
    students s[n];
    for(i=0;i<n;i++)
	{
		cout<<"Прізвище : ";
		cin>>s[i].pr;
		cout<<"Імя : ";
		cin>>s[i].name;
		cout<<"Стипендія : ";
		cin>>s[i].st;
		cout<<"Кількість годин пропуску : ";
		cin>>s[i].hours;
	}
	for(i=0;i<n;i++)
	{
		if(s[i].st!=0&&s[i].hours<=2)
		{
			cout<<s[i].pr<<" "<<s[i].name<<" "<<s[i].st<<" "<<s[i].hours<<endl;
		}
		max=max+s[i].hours;
	}
	cout<<"max = "<<max;
		
	
		
    getch();
    return 0;
 }
