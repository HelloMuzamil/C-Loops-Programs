#include<iostream>
using namespace std;
int main(){
	int a,count;
	cout<<"Enter a number:";
	cin>>a;
for(int i=1;i<=a;i++){
	if (a%i==0){
	
	count ++;}
}
if(count==2){
	cout<<"The inputed number is prime";
}else{
	cout<<"the inputed number is not prime";
}
}
