#include<iostream>
using namespace std;
int main()
{
	int a[]={ 2,3,4,5,7,10,23,45,1},sum=0;
	for(int i=0;i<9;i++)
	{
	     sum=sum+a[i];	
	}
	cout<<"Sum of all the element of  array is "<<sum;
}
