#include<stdio.h>
#include<stdlib.h>

char join_str(char *s1, char *s2)
{
    char s3[100];
    int i,n;
    for(i=0;s1[i]!='\0';i++)
    {
        s3[i]=s1[i];
    }
    i=n;
    for(i=0;s2[i]!='\0';i++,n++)
    {
        s3[n]=s2[i];
    }
    s3[n]='\0';
    puts(s3);
}

int main()
{
    char s1[50],s2[50];
    //cout<<"\nEnter 1st String\n";
    gets(s1);
    //cout<<"\nEnter 2nd String\n";
    gets(s2);

    join_str(s1,s2);
    return 0;
}
