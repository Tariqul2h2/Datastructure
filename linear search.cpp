#include<iostream>
using namespace std;

int lsearch(int *a, int n)
{
    int i,x,found = -1;

    cout<<"Enter the element you want to search :\n";
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            found=1;
            n=i;
        }
    }
    if(found==1)
    {
        cout<<"the position is : "<<n+1<<"\n";
    }
    return found;
}

int main()
{
    int i,n,p,a[100];

    cout<<"Enter the Size of the array :\n";
    cin>>n;
    cout<<"Enter the array :\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    p=lsearch(a,n);
    cout<<"Search result :";

    if(p==-1)
    {
        cout<<"Not found";
    }
    else
    {
        cout<<"Found";
    }
}
