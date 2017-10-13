#include<iostream>
using namespace std;
void klarge(int n[],int s,int k);
void ksmall(int n[],int s,int k);
int main()
{
int num[100],k,s,i;
cout<<"enter the size of the array\n";
cin>>s;
cout<<"enter the elements of the array\n";
for(i=0;i<s;i++)
cin>>num[i];
cout<<"enter the place value of the nth position number you want to print\n";
cin>>k;
klarge(num,s,k);
ksmall(num,s,k);
return 0;
}
void klarge(int n[],int s,int k)
{
int a,i,j,temp;
for(i=0;i<s;i++)
{
for(j=i;j<s;j++)
{
if(n[i]>n[j])
{
temp=n[i];
n[i]=n[j];
n[j]=temp;
}
}
}
cout<<"the sorted list is\n";
for(a=0;a<s;a++)
cout<<n[a]<<"\n";
cout<<"the "<<k<<"th largest element is "<<n[s-(k)]<<"\n"; 
}
void ksmall(int n[],int s,int k)
{
int i,j,temp;
for(i=0;i<s;i++)
{
for(j=i;j<s;j++)
{
if(n[i]>n[j])
{
temp=n[i];
n[i]=n[j];
n[j]=temp;
}
}
}
cout<<"the "<<k<<"th smallest element is "<<n[k-1];
}

