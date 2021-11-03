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
	int sum = 0;
	for (int i = 1; i <= n; i++){
		if (n % i == 0){
			sum += i;
		}
	}
	return sum;
}