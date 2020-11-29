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
 cout<<"\nEnter position to delete: ";
 cin>>p;


 for(i=p;i<n;i++)
 {
     a[i-1]=a[i];
 }



 cout<<"\n\nArray after deleting element:";

  for(i=0;i<n-1;i++)
  {
      cout<<a[i]<<" ";
  }
}
