#include<iostream>
int Tong(int n);
using namespace std;

int main() {
	int n;
	cout<<"Nhap n: ";
	cin>> n;
	cout<<"Tong cua day so la: "<<Tong(n);
	return 0;
}

int Tong(int n){
	int sum = 1;
	for (int i = 2; i <= n; i++){
		sum += i*i;
	}
	return sum;
}