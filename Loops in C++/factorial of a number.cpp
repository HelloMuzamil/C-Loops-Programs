//factorial of a number
#include<iostream>
using namespace std;
int main(){
	int f,fact=1;
	cout<<"Enter a number:";
	cin>>f;
	
	for(int i=1;i<=f;i++)
	{
	fact=fact*i;
	
	}
		cout<<"The factoorial of a given number is:"<<fact;
	                    
	}

