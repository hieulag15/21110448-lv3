#include<iostream>
float Tong(int n);
using namespace std;

int main() {
	int n;
	cout<<"Nhap n: ";
	cin>> n;
	cout<<"Tong cua day so la: "<<Tong(n);
	return 0;
}

float Tong(int n){
	float sum = 1;
	for (int i = 2; i <= n; i++){
		sum *= i;
	}
	return sum;
}

