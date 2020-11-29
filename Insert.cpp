#include<iostream>
using namespace std;

int main()
{
 int a[1000],n,x,i,p;
 cout<<"Enter size of array:";
 cin>>n;
 cout<<"Enter the array:\n";

 for(i=0;i<n;++i)
 {
     cin>>a[i];
 }
 cout<<"\nEnter position to insert: ";
 cin>>p;
 cout<<"\nEnter number to insert: ";
 cin>>x;

 for(i=n+1;i>=p;--i)
 {
     a[i]=a[i-1];
 }

 a[p-1]=x;

 cout<<"\n\nArray after inserting element:";

  for(i=0;i<n+1;i++)
  {
      cout<<a[i]<<" ";
  }
}
