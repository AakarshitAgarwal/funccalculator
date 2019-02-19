#include<iostream>
using namespace std;
void add(int a,int b)
{
	int sum;
	sum=a+b;
	cout<<sum;
}


int main()
{
	int a=10,b=5;
	cout<<"sum of two no's is "<<endl;
	add(a,b);
	cout<<"difference of two no's is "<<endl;
        sub(a,b);
	cout<<"product of two no's is "<<endl;
      	mult(a,b);

	return(0);
}
void sub(int a,int b)
{
	int diff;
	diff=a-b;
	cout<<diff;
}
void mult(int a,int b)
{
        int prod;
        prod=a*b;
        cout<<prod;
}
