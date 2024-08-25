//Fibonacci number
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i;
	int a,b,c,n;
	
	cout<<"Fibonacci untill number : ";
	cin>>n;
	a=1;
	b=1;
	cout<<a<<"\t"<<b;
	
	   for(i=1;i<=(n-2);i++)
	   {
	   	c=a+b;
		cout<<"\t"<<c;
		a=b;
		b=c;
	   }
}
