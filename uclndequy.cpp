#include <iostream> 
#include<stdio.h>
using namespace std;

int gt(int n){
	if (n==0){
		return 1;
	}
	else
	return n*gt(n-1);
}
long fibo(int n){
	if(n<=1)
	return n;
	else
	return fibo(n-1)+fibo(n-2);
}
int nCk(int n, int k){
	if(k==0||n==k)
	return 1;
	else 
	return nCk(n-1,k)+nCk(n-1,k-1);
}
int gcd(int a, int b){
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main(){
	cout << gcd(10,45)<<endl;
	return 0;
}
