#include<iostream>
int Tong(int n);
using namespace std;

int main() {
	int n;
	cout<<"Nhap n: ";
	cin >> n;
	cout<<"Tong cua cac so la: "<<Tong(n);
	return 0;
}

int Tong(int n){
	int s = n, last, sum = 0;
	while( s > 0){
		last = s % 10;
		s /= 10;
		sum += last;
	}
	return sum;
	
}

