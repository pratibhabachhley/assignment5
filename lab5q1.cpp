#include<iostream>
using namespace std;
int sumarray(int n[],int l);
int main()
{
	int k,num[100],s=0,i;
	cout<<"enter the number of elements\n";
	cin>>k;
	cout<<"enter the value of the numbers\n";
	for(i=0;i<k;i++)
	cin>>num[i];
	s=sumarray(num,k);
	cout<<"sum = "<<s;
	return 0;
}
int sumarray(int n[],int l)
{
	int sum=0,j;
	for(j=0;j<l;j++)
	{
		sum=sum+n[j];
	}
	return sum;
}
