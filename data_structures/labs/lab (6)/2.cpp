#include <iostream>
#include <conio.h>

using namespace std;


struct List{
	int d;
	List *next;
};




int main(){
	List *last;


    // Перший елемент	
	List *first = new List;
	cout << "Input 1 element: ";
	cin >> first ->d;
	first -> next = NULL;
	
	last = first;
	
	if(first->d >= 0){
		//first element
		List *c1 = new List;
		cout << "Input 2 element: ";
 		cin >> c1->d;
 		c1->next = first;
 		first = c1;
 		
 		//second element
 		List *c2 = new List;
 		cout << "Input 3 element: ";
 		cin >> c2->d;
 		c2->next = first;
 		first = c2;
 		
	}
	else{
		//first element
		List *t = new List;
 		cout << "Input 2 element: ";
		cin >> t->d;
 		t -> next = NULL;
 		first -> next = t;
 		last = t;
 		
 		//second element
 		List *t1 = new List;
 		cout << "Input 3 element: ";
		cin >> t1->d;
 		t1 -> next = NULL;
 		first -> next -> next = t1;
 		last = t1;
	}
	List *p;
	p=first;
 int min=p->d, max=p->d;
 	while(p!=NULL){
 		if(p->d > max){
   			max = p->d;
  		}
  		if(p->d < min){
   			min = p->d;
  		}
  		p = p->next;
 	}
 	
 	p = first;
	while( p != NULL ){
		cout << p->d << " ";
		p = p->next;	
	}
	cout << endl;

 	p = first;
 	List *p1;
	p=first;
 	p1 = p->next;
 	while(p->next!=NULL){
  	if (p==first && first->d%2==0){
   		p->next = p1;
   		p->d=p1->d;
   		first = p1;
   		delete p;
   		break;
  		}
	else if(p == last && last->d%2==0){
   		p1 = NULL; 
   		delete p1; 
   		break;
  	}
	else if(p1->d%2==0){
   		p->next = p1->next; 
   		delete p1;
   		break; 
  	}
  	p = p->next;
  	p1 = p->next;
 }
 
 
    p=first;
    while(p!=NULL)
    {
    	cout<<p->d<<" ";
    	p=p->next;
	}
	
	
	
 	getch();
 	return 0;
}
