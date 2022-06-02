#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include<string.h>
#include<math.h>

using namespace std;

struct tree
{
	int d,sale;
	string name;
	tree *left ,*right;
}*root;


tree *first(int x,string s,int sl)
{
	tree *c=new tree;
	c->d=x;
	c->name=s;
	c->sale=sl;
    c->left=0;
    c->right=0;
    return c;
}

tree *insert(tree *p ,int x,string s,int sl)
{
	if(!p)
	{
		p=first(x,s,sl);
	}
	else
	{
		if(x<p->d)
		{
			p->left=insert(p->left,x,s,sl);
		}
		else
		{
			p->right=insert(p->right,x,s,sl);
		}
	}
	return p;
}

void del(tree *p)
{
	if(p!=0)
	{
		del(p->left);
		del(p->right);
	    delete p;	
	}
}


void print ( tree *p)
{
	if(p)
	{
		if(p->d!=0&&p->sale!=0)
		cout<<p->d<<"-"<<p->name<<"-"<<p->sale<<endl;
		print(p->left);
		
		print(p->right);
	}
	
}

tree *search(tree *p,int b)
{
	int k=0;
	
	while(p){
	if(p->d==b)
	{
		cout<<p->d;
		del(p->left);
		del(p->right);
		k++;
	}
	else
	{
		if(b>p->d)
		{
			p=p->right;
		}
		else
		p=p->left;
	}
	if(k!=0)
		break;
}
    
    if(k==0)
    cout<<endl<<"NO"<<endl;
    else
	cout<<endl<<"YES"<<endl;
	
	return p;
	

}

int trans(string s)
{
	int i=0,k=0,q;
	while(s[i]!='\0')
	{
		i++;
	}
	q=i-1;
	i=0;
	while(s[i]!='\0')
	{
		k=k+(int (s[i])-int ('0'))*pow(10,q);
		q--;
		i++;
	}
	return k;
}

float servar(tree *p, float &g, float &t)
{

     if(p)
  {
    servar(p->left, g, t);
    if(p->sale!=0){
     g+=p->sale;
     t++;}
    servar(p->right, g, t);
  }
  
  return g/t;
}





int main(){
	setlocale(LC_CTYPE, "ukr");
	int f,n,i,kod,sl;
	string str1,str2,str3;
	ifstream file;
	file.open("f.txt");
	
	if(!file.is_open())
	cout<<"Ошибка открития файла !!!"<<endl;
	else
	{
		string str;
		cout<<"Файл открит!!!"<<endl;
		while(!file.eof())
		{
			
			str1="";
			str2="";
			str3="";
			file>>str1;
			kod=trans(str1);
			file>>str2;
			file>>str3;
			sl=trans(str3);
			
			
			if(root==0)
		{
			root=first(kod,str2,sl);
		}
		else
		{
			insert(root,kod,str2,sl);
		}
		}
	}
	file.close();
	print(root);
	int skod;
	float q=0,q2=0;
	cout<<"ser = "<<servar(root,q,q2)<<endl;
	cout<<"Введіть код для пошуку : ";
	cin>>skod;
	search(root,skod);
	print(root);
	
	del(root);
	return 0;
}






