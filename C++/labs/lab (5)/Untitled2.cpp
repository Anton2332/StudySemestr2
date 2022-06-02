#include <iostream>
#include<conio.h>
#include <stdlib.h>   
#include <time.h> 

using namespace std;

float max(float a[], int n, int i){
  float max = a[0];
  for( i =0; i< n; i++){
    if(a[i] > max ){
      max = a[i];
    }
  }
    
  return max;  
}

void sort(float A[][50] , int n, int i, int k){
  float q;
  for(k = 0;k<n;k++){
    for(i = 0;i<n-1;i++){
      for(int j = 0;j<n-1;j++){
        
          if(i==j && A[i][j]> A[i+1][j+1]){
            q = A[i][j];
            A[i][j] = A[i+1][j+1];
            A[i+1][j+1] = q;
          }
        
      }  
    }
  }
  
  for(i = 0;i<n;i++){
    for(k = 0;k<n;k++){
      cout<<A[i][k]<<"  ";
    }
    cout<<endl;
  }
}

namespace vector{
  
  int i, n;
  
  void v(float a[], int n, int i ){
    
    for( i =0; i< n; i++){
      a[i] = 0.01 * (rand() % 1000 - 300);
      cout<<a[i]<<"   ";
    }
  }
  
  void func(float a[], int n, int i, float maximum ){
    for(int i =0;i<n;i++){
    if(a[i]==maximum){
      for(int j =i ;j<n;j++){
        a[j]=a[j+1];
        
    
      }
      n--;
      break;
      }
    }
    std::cout<<"arr:"<<std::endl;
    for( i =0; i< n; i++){
      cout<<a[i]<<"    ";
    }
  
  }
}
namespace matrix{
  int i,n;
  float s;
  void v(int n,float a[][50], int i, int j ){
    for(i = 0;i<n;i++){
      for(j = 0;j<n;j++){
        a[i][j] = (rand() % 1000 - 300)*0.01;
        cout<<a[i][j]<<"    ";
      }
      cout<<std::endl;
    }
  } 
}
int main(){
  srand (time(NULL));
  float a[120],max_,A[50][50];
  
  cout<<"n = ";
  cin>>vector::n;
  cout<<endl;
  vector::v(a, vector::n, vector::i);
  max_ = max(a, vector::n, vector::i);
  cout<<"max="<<max_<<endl;
  vector::func(a, vector::n, vector::i, max_);
  cout<<"n = ";
  cin>>matrix::n;
  cout<<endl;
  matrix::v(matrix::n, A  ,vector::i, matrix::i);
  
  cout<<"sort"<<endl;
  sort(A , matrix::n,vector::i, matrix::i);
  
  return 0;
}
