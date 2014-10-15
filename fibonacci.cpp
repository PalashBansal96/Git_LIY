#include <iostream>
using namespace std;

int fib(int n){
	return (n<=2)?1:(fib(n-1)+fib(n-2));
}
int fib2(int n, int a, int b){
	return n==1?b:fib2(n-1,b,a+b);
}
int main(){
	cout<<fib(10)<<endl;
	cout<<fib(10)<<endl;
	return 0;
}