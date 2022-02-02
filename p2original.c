#include<stdio.h>
int input()
{
  int x;
  printf("Enter a number\n");
  scanf("%d",&x);
  return x;
}
int cmp(int a,int b,int c)
{
  if((a>b)&&(a>c))
  return a;
  else if(b>c)
  return b;
  else
  return c;
}
void output(int largest)
{
  printf("%d is the largest number",largest);
}
int main()
{
  int a,b,c,result;
  a=input();
  b=input();
  c=input();
  result=cmp(a,b,c);
  output(result);
  return 0;
}