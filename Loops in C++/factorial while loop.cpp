#include<iostream>
using namespace std;
int main(){
	int n,fact;
	cout<<"Enter a number";
	cin>>n;
while(n>=1){
	fact=fact*n;
	n=n-1;}
	cout<<"factorial is"<<fact;

}
