#include<iostream>
int Dao(int n);
using namespace std;


int main() {
	int n;
	cout<<"Nhap n: ";
	cin >> n;
	cout<<"So dao lai la: "<<Dao(n);
	return 0;
}

int Dao(int n){
	int s = n, last, sodao=0;
	while( s > 0){
		last = s % 10;
		s /= 10;
		sodao = sodao *10 + last;
	}
	return sodao;
	
}