#include <stdio.h>
int input_n()
{
  int n;
  printf("Enter number of values to add:\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int sum=0;
  for(int i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
void output(int n, int sum)
{
  int i;
  for(i=1;i<n;i++)
  {
    printf("%d + ",i);  
  }
  printf("%d is %d",i,sum);
}
int main()
{
  int n1=input_n();
  int sum0=sum_n(n1);
  output(n1,sum0);
}