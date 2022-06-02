
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale>
#include <Windows.h>
#include <string.h>
using namespace std;


int main()
{
    setlocale(LC_CTYPE, "ukr");
  //SetConsoleCP(1251);
  //SetConsoleOutputCP(1251);
    srand(time(NULL));
  int n,sum=0;
  cout<<"n = ";
  cin>>n;



  int **a = new int* [n]; 
  int **b = new int* [n];        
  for (int i = 0; i < n; i++)
  {                                    
    a[i] = new int[n];
    b[i] = new int[n];
  }
  


  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      a[i][j] = rand() % 9;
      b[i][j] = rand() % 9;
    }
  }
  cout<<"a"<<endl;
                                          
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << a[i][j] <<" ";
    }
    cout << endl;
  }
    cout<<"b "<<endl;
    for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << b[i][j] <<" ";
    }
    cout << endl;
  }
  cout<<"a x b"<<endl;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
          for(int q=0;q<n;q++)
          {
            sum+=a[i][q]*b[q][j];
      }
      cout<<sum<<" ";
      sum=0;
    }
    cout<<endl;
    
  }




    cout<<endl;




  
  for (int i = 0; i < n; i++)
  {
    delete [] a[i];
    delete [] b[i];                    
  }
  
  delete [] b;
  delete [] a;                           
  
  cout<<a[0][0]<<endl<<b[0][0]<<endl;
     

  system("pause");
  return(0);
}
