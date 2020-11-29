#include<stdio.h>

int strlen(char *ch)
{
    int i=0;
    while(ch[i]!='\0')
    {
        i++;
    }
    return i;
}

void bubblesort(char*a,int n)
{
    int i,j,x,y;
    char t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            x=a[i];
            y=a[j];
            if(x>y)
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}

int main()
{
    char a[100];
    int n;

    printf("Enter the array:\n");
    gets(a);

    n=strlen(a);
    bubblesort(a,n);

    printf("After bubble sorting the string:\n");
    puts(a);
}
