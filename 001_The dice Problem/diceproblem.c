#include<stdio.h>
int oppositeofdice(int n)//function 
{
      int ans=7-n;// 6 opposite 1,5 opposite 2
      printf("%d\n",ans);
      printf("explanatiton:\nfor dice facing number %d of opposite face will have the number %d\n",n,ans);
}
int main()
{
    int n;
    scanf("%d",&n);//reading the input va;ues and symbol for memory
    oppositeofdice(n);
    return 0;
}
