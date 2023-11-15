#include<iostream>
using namespace std;
//#define H 114514

void swap(int a, int b);
void choc(int c);
int cake(int e=0,int f=1)
{
	 
	if (e >= f)
		cout << e; 
	else
		cout << f;

	return e,f;
}
int main()
{
	int cv = 64;
	int a = 2, b = 3;
	//choc(cv);
	cake(1,3);
	//cout << a << "  " << b << endl;
	//swap(a,b);
	//cout << a << "  " << b << endl;
}
void choc(int c) 
{
	cout << c << endl;
}
void swap(int a, int b) {
	int t;
	t = a, a = b, b = t;
	cout << a << "  " << b << endl;
}

/*int fac(int n)
{
	int t;
	if (n == 1)
		t = 1;
	else
		t = n * fac(n - 1);
	
	return (t);
}
int main() 
{
	
	cout<<endl<<fac(2);
	
}*/