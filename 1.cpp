#include <iostream>
using namespace std;

void pasovalor(int x){
	x=x+3;
}

void pasorefe(int &x){
	x=x+3;
}


int main(){
	int a=6;
	int b=5;
	pasovalor(a);
	pasorefe(b);
	cout<<a<<endl;
	cout<<b<<endl;
}
