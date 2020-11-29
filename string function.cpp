#include<stdio.h>
#include<iostream>
using namespace std;

int strlen(char *ch)
{
    int i=0;
    while(ch[i]!='\0')
    {
        i++;
    }
    return i;
}

void strcpy(char *ch1,char *ch2)
{
    int i=0;
    while(ch1[i]!='\0')
    {
        ch2[i]=ch1[i];
        i++;
    }
    ch2[i]='\0';
}

void reverse(char *ch)
{
    int len=strlen(ch),n,i,j;
    char p[len+1];
    n=len-1;
    for(i=0;i<len;i++)
    {
        p[i]=ch[n--];
    }
    p[i]='\0';
    for(j=0;j<len;j++)
    {
        ch[j]=p[j];
    }
    ch[j]='\0';
}

int strcmp(char *st1, char *st2)
{
    while(*st1 && *st2 && (*st1 == *st2))
    {
        st1++;
        st2++;
    }

    return (*st1-*st2);
}

int strsub(char *s1,char *s2)
{
    int i,j,n,found=0;
    for(i=0;s1[i];i++)
    {
        for(j=0,n=i;s1[n]==s2[j] && s2[j]!=0;n++,j++);
        if(s2[j]==0)
        {
            found=1;
            break;
        }
    }
        return found;
}

int main()
{
    char a[100],b[100];
    int n;

    /******length******/
    /*cout<<"Input string 1 : ";
    gets(a);
    printf("Length of the string is = %d",  strlen(a));*/

    /******copy******/
    /*cout<<"Input string 1 : ";
    gets(a);
    strcpy(a,b);
    cout<<"String 1 : ";
    puts(a);
    cout<<"String 2 : ";
    puts(b);*/

    /******reverse******/
   /* cout<<"Input string 1 : ";
    gets(a);
    reverse(a);
    cout<<"Reverse of string 1 : ";
    puts(a);*/

    /******compare******/
    /*cout<<"Input string 1 : ";
    gets(a);
    cout<<"Input string 2 : ";
    gets(b);
    n=strcmp(a,b);
    if(n==0)
    {
        cout<<"Matched";
    }
    else
    {
        cout<<"Not Matched";
    }*/



    /******substring******/

    /*cout<<"Input string 1 : ";
    gets(a);
    cout<<"Input string 2 : ";
    gets(b);
    n=strsub(a,b);
    if(n==1)
        {
            cout<<"String 2 is a substring of string 1";
        }
    else
        {
            cout<<"String 2 is not a substring of string 1";
        }*/

    return 0;
}
