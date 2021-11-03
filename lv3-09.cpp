#include<iostream>
int ucln(int c, int d);
using namespace std;


int main() {
	int a,b;
	cout<<"Nhap a: ";
	cin >> a;
	cout<<"Nhap b: ";
	cin >> b;
	cout<<"UCLN la: "<< ucln(a,b);
	return 0;
}

int ucln(int c, int d){
	if (c == d) return c;
	if ((c == 0) or (d == 0))
		return c + d;
	while (c != d){
		if (c > d){
			c = c - d;
		} else {
			d = d - c;
		}
	}
	return c;
}

