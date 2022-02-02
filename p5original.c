#include <stdio.h>
float input()
{
  float n;
  printf("Enter number to find square root\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float temp,sqr;
  sqr=n/2;
  temp=0;
  while(sqr!=temp)
  {
    temp=sqr;
    sqr=(n/temp+temp)/2;
  }
  return sqr;
}
void output(float n, float sqrt_result)
{
  printf("Square of %f and %f\n",n,sqrt_result);
}
int main()
{
  float a,s;
  a=input();
  s=my_sqrt(a);
  output(a,s);
}