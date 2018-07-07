#include<stdio.h>
int main()
{
int n,i,f=1;
printf("ENTER THE NUMBER:");
scanf("%d",&n);
  if((n==0)||(n==1))
  {
    printf("1");
  }
  else{
    
for(i=n;i>=1;i--)
{
f=f*i;
}
printf("%d",f);
  }
return 0;
}
