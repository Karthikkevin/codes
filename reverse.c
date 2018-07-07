#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    char a[10]="",b[10]="";
    int i;
    printf("ENTER THE STRING");
    scanf("%s",a);
    int n=strlen(a);
    //printf("%d",n);
    for(i=0;i<n;i++)
    {
        b[(n-1)-i]=a[i];
    }
    printf("\n");
    for(i=0;i<n;i++)
    printf("%c",b[i]);
    int m=strlen(b);
   // printf("%d",m);
    return 0;
}
