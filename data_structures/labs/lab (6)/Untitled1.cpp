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
	cout << "Input 1 ement : ";
	cin >> first ->d;
	first -> next = NULL;
	
	last = first;
 
 
 	// Другий елемент - аналогічний додаванню елемента в кінець
 	List *c = new List;
 	cout << "Input 2 ement : ";
 	cin >> c->d;
 	c -> next = NULL;
 	
 	first -> next = c;
 	last = c;
 	

 	// Додавання елементу на початок списку
 	List *c1 = new List;
 	cout << "Input 3 ement : ";
 	cin >> c1->d;
 	c1->next = first;
 	first = c1;
 	
	
	//Додавання елементу в середину списку
	
	List *t = new List;
	cout << "Input 4 ement : ";
	cin >> t->d;
	t->next = NULL;
	List *p;
	
	p = first;
	while( p != NULL ){
		if( p->d == 1 ){
			t->next =p->next;
			p->next=t;
		}
		p = p->next;
	}
	
	// Вивод
	
	cout << first->d;
	cout << " " << first->next->d;
	cout << " " << first->next->next->d; 
	cout << " " <<first->next->next->next->d; // або last->d;
 	float sum;
 	p = first;
 	while( p!=NULL ){
 		sum += p->d;
 		p = p->next;
 	}
 	
	 cout << endl <<"Ser = " << sum/4 << endl;
 	
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
 	
 	
 	cout << "Z dell " <<endl;
	
	
	p = first;
	while( p != NULL ){
		cout << p->d << " ";
		p = p->next;	
	}
	cout << endl;
	getch();
	return 0;
}
