#include<iostream>
#include<conio.h>
#include<string>
#include<string.h>

using namespace std;

struct list{
	string s1;
    float r,v;
	list *next;
};



int main(){

    list *first,*last;
    first = new list;
    last = new list;
    
    
    int n,i;
    float min;
    cout<<"n  = ";
    cin>>n;
    list *p;
    p=first;
    for( i=0;i<n;i++)
	{
	list *c=new list;
	cout<<"Name : ";
	cin>>c->s1;
	cout<<"Growth : ";
	cin>>c->r;
	cout<<"Weight : ";
	cin >>c->v;
    c->next=0;
	p->next=c;
	p=p->next;
    }

    p=first->next;
    while(p!=NULL)
    {
    	cout<<p->s1<<" - "<<p->r<<" - "<<p->v<<endl;
    	p=p->next;
	}
    cout<<endl<<endl;
    
    p=first->next;
    while(p!=NULL)
    {
	    if(p->r>170&&(p->s1[0]=='o'||p->s1[0]=='O'))
	    cout<<p->s1<<" - "<<p->r<<" - "<<p->v<<endl;
	    p=p->next;
	}
	p=first->next;
	min=p->v;
    while(p!=NULL)
    {
	    if(min>p->v)
	    min=p->v;
	    
	    p=p->next;
	}
    cout<<endl<<"min = "<<min<<endl<<endl;
    
    
    list *p2;
	p=first->next;
 	p2 = p->next;
 	int k=0;
    p=first->next;
    while(p!=NULL)
    {
	    if(p->v==min)
	    k++;
	    p=p->next;
	}

 
        
 	while(p->next!=NULL){
  	if (p==first->next&& first->next->v==min){
   		p->next = p2;
   		p->v=p2->v;
   		first->next = p2;
   		delete p;
   		
   		break;
  		}
	else if(p == last && last->v==min){
   		p2 = NULL; 
   		delete p2;
		 
   		break;
  	}
	else if(p2->v==min){
   		p->next = p2->next; 
   		delete p2;
   		
   		break;
  	}
  	p = p->next;
  	p2 = p->next;

 }
 
	p=first->next;
    while(p!=NULL)
    {
	    
	    cout<<p->s1<<" - "<<p->r<<" - "<<p->v<<endl;
	    p=p->next;
	}
	
			
    getch();
    return 0;
 }
