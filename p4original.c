#include <stdio.h>
int input_array_size()
{
  int n;
  printf("Enter size of array\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("Enter the numbers you wish to add\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }  
}
int sum_n_arrays(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void out_put(int n, int a[n], int sum)
{
  int i;
  for(i=0;i<n-1;i++)
  {
    printf("%d + ",a[i]);   
  }
  printf("%d is %d",a[i],sum);
}
int main()
{
  int size=input_array_size();
  int ar[size];
  input_array(size,ar);
  int sum0=sum_n_arrays(size,ar);
  out_put(size,ar,sum0); 
}