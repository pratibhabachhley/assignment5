#include<iostream>
using namespace std;
void largest(int n[],int k);
void smallest(int n[],int k);
void mean(int n[],int k);
void median(int n[],int k);
void mode(int n[],int k);
int main()
{
	int i,num[100],k;
	cout<<"enter the number of elements in the array\n";
	cin>>k;
	cout<<"enter the elements of the array\n";
	for(i=0;i<k;i++)
	cin>>num[i];
	largest(num,k);
	smallest(num,k);
	mean(num,k);
	median(num,k);
	mode(num,k);
	return 0;
}
void largest(int n[],int k)
{
	int a,i,j,temp;
	for(i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			if(n[j]<n[i])
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
	}
	cout<<"the sorted list is\n";
	for(a=0;a<k;a++)
	cout<<n[a]<<"\n";
	cout<<"the largest number is "<<n[k-1]<<"\n";
}
void smallest(int n[],int k)
{
	int i,j,temp;
	for(i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			if(n[j]<n[i])
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
	}
	cout<<"the smallest number is "<<n[0]<<"\n";
}
void mean(int n[],int k)
{
	int i,j,temp,l;
	float m=0,s=0;
	for(i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			if(n[j]<n[i])
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
	}
	for(l=0;l<k;l++)
	{
		s=s+n[l];
	}
	m=s/k;
	cout<<"the mean is "<<m<<"\n";
}
void median(int n[],int k)
{
	int i,j,temp;
	for(i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			if(n[j]<n[i])
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
	}
	if(k%2==0)
	cout<<"the median is "<<n[(k/2)-1]<<" and "<<n[(k/2)]<<"\n";
	else
	cout<<"the median is "<<n[(k-1)/2]<<"\n";
}
void mode(int n[],int k)
{
  int a,x=0,c=0,l;
  for(int i=0;i<k;i++)
  {
    for(int j=i+1;j<k;j++)
    {
      if(n[i]==n[j])
      {
        c=c+1;
      }
    }
    if(c>x)
    {
      l=n[i];
      x=c;
      c=0;
    } 
  }
  cout<<"the highest frequency element is "<<l;
}
