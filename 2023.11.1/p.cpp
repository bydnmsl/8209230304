#include<iostream>
using namespace std;
extern void p1dispG();
extern void p2dispG();
extern void p2dispg();
int F = 0, f = 1;
int main() {
	p1dispG();
	p2dispG();
	p2dispg();
	cout << "in p F=" << F << endl;
	cout << "in p f=" << f << endl;


}