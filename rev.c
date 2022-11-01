//print yes if a word is amagram of another word otherwise print no
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,j,c=0;
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
            {
                c++;
                b[j]='*';
                break;
            }
        }
    }
    if(c==strlen(a))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}