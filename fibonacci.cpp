#include <iostream>
using namespace std;

int fib(int n){
	return (n<=2)?1:(fib(n-1)+fib(n-2));
}

int main(){
	cout<<fib(10)<<endl;
	return 0;
}