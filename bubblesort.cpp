#include<iostream>
using namespace std;

void bubblesort(int *a,int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for (j=0;j<n-i;j++)
        {
            if(a[j]>=a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}

int main()
{
    int a[1000],n;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    cout<<"Enter the array:\n";

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    bubblesort(a,n);

    cout<<"After bubble sorting the array : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
