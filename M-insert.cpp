#include<iostream>
using namespace std;

int main()
{
 int a[1000],n,x,i,p,q,j[100];
 cout<<"Enter size of array:";
 cin>>n;
 cout<<"Enter the array:\n";

 for(i=0;i<n;++i)
 {
     cin>>a[i];
 }
 cout<<"\nEnter how many elements you want to enter: ";
 cin>>q;

 cout<<"\nEnter elements you want to insert:\n";
 for(x=0;x<q;x++)
 {
     cin>>j[x];
 }
 cout<<"\nEnter position to insert: ";
 cin>>p;

 for(i=(n+q-1),x=(n-1);i>=(p+q-1);--i,--x)
 {
     a[i]=a[x];
 }
 for(i=(p-1),x=0;q>x;i++,x++)
 {
     a[i]=j[x];
 }

 cout<<"\n\nArray after inserting elements:";

  for(i=0;i<n+q;i++)
  {
      cout<<a[i]<<" ";
  }
}
