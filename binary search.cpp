#include<iostream>
using namespace std;

int bsearch(int *a,int n)
{
    int x,y,low=0,high=n-1,mid,found=0;
    cout<<"Enter the element you want to search :\n";
    cin>>x;

    while(low<=high && found==0)
    {
        mid=(low+high)/2;
        if(x>a[mid])
        {
            low=mid+1;
        }
        else if(x<a[mid])
        {
            high=mid-1;
        }
        else
        {
            found=1;
                    }
    }
    if(found==1)
    {
        cout<<"the position is : "<<mid+1<<"\n";
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

    p=bsearch(a,n);
    cout<<"Search result :";

    if(p==0)
    {
        cout<<"Not found";
    }
    else
    {
        cout<<"Found";
    }
}

