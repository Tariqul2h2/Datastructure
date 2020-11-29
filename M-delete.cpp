#include<iostream>
using namespace std;

int main()
{
 int a[1000],n,i,p,q,b[1000];
 cout<<"Enter size of array:";
 cin>>n;
 cout<<"Enter the array:\n";

 for(i=0;i<n;++i)
 {
     cin>>a[i];
 }
 cout<<"\nEnter how many elements you want to delete: ";
 cin>>q;

 cout<<"\nEnter position to delete: ";
 cin>>p;

 for(i=0;i<n;i++)
 {
     if(i<(p-1))
     {
         b[i]=a[i];
     }
     else if(i>=(p-1))
     {
         b[i]=a[q+i];
     }
 }

 cout<<"\n\nArray after deleting element:";

  for(i=0;i<n-q;i++)
  {
      cout<<b[i]<<" ";
  }
}
