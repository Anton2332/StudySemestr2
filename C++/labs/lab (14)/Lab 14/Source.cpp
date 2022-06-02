#include<conio.h>
#include<iostream>
#include <string.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>





using namespace std;

template <class t>
void roz(t* b, int n)
{
	t k;
	k = b[0];
	int q = 0;
	for (int i = 0; i < n; i++)
	{
		if (b[i] == k)
			q++;
	}
	cout << endl << b[0] << " -- " << q;

}

template <class t2>
void obmin(t2* b, int n)
{
	int i1, i2;
	cout << endl;
	cout << "Number 1 = ";
	cin >> i1;
	cout << "Number 2 = ";
	cin >> i2;
	int q = 0, q2;
	t2 qk, qk2;
	for (int i = 0; i < n; i++)
	{
		if ((i == i1 || i == i2) && q == 0)
		{
			q++;
			q2 = i;
			qk = b[i];
		}
		if ((i == i1 || i == i2) && q != 0)
		{
			qk2 = b[i];
			b[i] = qk;
			b[q2] = qk2;
		}
	}

}
template <class t3>
void output(t3* b, int n)
{
	for (int i = 0; i < n; i++)
		cout << b[i] << " ";

	cout << endl;
}
template<class t4>

void input(t4* b, int n)
{
	for (int i = 0; i < n; i++)
		b[i] = t4(rand() % 26 + 65);
}

template <class t6>

void vst(t6* b,int &n)
{
	int i1;
	cout << "enter i = ";
	cin >> i1;
	cout << "enter a[i] =  ";
	t6 ai;
	cin >> ai;
	n++;
	for (int i = n; i > i1; i--)
	{
		b[i] = b[i - 1];
	}
	b[i1] = ai;


}




template <class t5>
void dovsh(t5* b, int n)
{
	int k,maxk,k2;
	t5 qk,maxqk;

	k2 = 0;
	for (int i = 0; i < n; i++)
	{
		k = 0;
		for (int j = i; j < n; j++)
		{
			if (k == 0)
			{
				qk = b[j];
				k++;
			}
			else
			if (b[j] == qk && k != 0)
			{
				k++;
			}
			if (b[j + 1] != qk)
				break;
		}
		if (k2 == 0)
		{
			maxk = k;
			maxqk = qk;
			k2++;
		}
		else
			if (k > maxk)
			{
				maxk = k;
				maxqk = qk;
			}
		
	}
	cout << "the longest section of the elements of the array,having the same values." << endl;
	cout << maxqk << " --- " << maxk << endl;
}

template <class T>
void sort(T a[], int n) {

	T t = 0;
	T max, min;
	int maxindex = 0, minindex = 0;

	max = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > max)
		{
			max = a[i];
			maxindex = i;
		}

	min = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < min)
		{
			min = a[i];
			minindex = i;
		}
	if (minindex < maxindex)
	{
		for (int i = minindex+1; i < maxindex; i++)
			for (int j = i + 1; j < maxindex; j++)
				if (a[i] > a[j])
				{
					t = a[i];
					a[i] = a[j];
					a[j] = t;
				}
	}
	else
	{
		for (int i = maxindex+1; i < minindex; i++)
			for (int j = i + 1; j < minindex; j++)
				if (a[i] > a[j])
				{
					t = a[i];
					a[i] = a[j];
					a[j] = t;
				}
	}

}



int main()
{
	srand(time(NULL));
	int n;
	cout << "n = ";
	cin >> n;
	int* a = new int[n];

	input(a, n);





	output(a, n);

	roz(a, n);
	obmin(a, n);

	output(a,n);

	vst(a, n);
	output(a, n);


	dovsh(a, n);
	
	sort(a, n);
	output(a, n);


	delete[] a;

	return 0;
}