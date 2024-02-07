#include<iostream>
using namespace std;
int main(){
	double n,fact;
	cout<<"Enter a number:";
	cin>>n;
for(fact=1 ;n>=1;n=n-1){
	fact=fact*n;
	//cout<<"Factorial is"<<fact<<endl;
}
cout<<"Factorial is:"<<fact;
}

