#include<iostream>
void Nhap(int &n, int &a, int &b);
int Tong(int n, int a, int b);
using namespace std;



int main() {
	int a,b,n;
	Nhap(n,a,b);
	cout<<"Tong cac so la: "<<Tong(n,a,b);
	return 0;
}

void Nhap(int &n, int &a, int &b){
	do 
	{
	cout<<"Nhap n: ";
	cin >> n;	
	cout<<"Nhap a: ";
	cin >> a;	
	cout<<"Nhap b: ";
	cin >> b;	
	} while ((a > n) or (b > n));
}


int Tong(int n, int a, int b){
	int sum = 0;
	for (int i = 1; i < n; i++){
		if ((i % a == 0) && (i % b != 0)){
			sum += i;
		}
	}
	return sum;
}
