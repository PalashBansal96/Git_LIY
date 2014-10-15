#include <iostream>
using namespace std;

int fib(int n){
	return (n<=2)?1:(fib(n-1)+fib(n-2));
}
int fib2(int n, int a, int b){
	return n==1?b:fib2(n-1,b,a+b);
}
int fib3(int n){
	int  a = 0, b =1,i;
	for (i=0;i<n;i++){
		a = a+b; b = a-b;
	}
	return a;
}
int main(){
	cout<<"The fibonacci of 10 is:"<<fib(10)<<endl;
	cout<<fib2(10,0,1)<<endl;
	cout<<fib3(10)<<endl;
	return 0;
}