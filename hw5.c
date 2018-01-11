#include<stdio.h>
#include<math.h>
int main(int argc, char **argv)
{
    int j=1,k=1,n=4500;
    int b,a[n],x[10],count=0;
    for(int i=0;i<=n;i++)
    {
     a[i]=k;
    // printf("%d\t\n",k);
     j=j+1;
     k=k+j;
     }
    for(int i=0;i<n;i++)
	{
	int m=a[i];
	for(b=0;b<=m;b++)
	{
	if(m==b*b){
//	printf("%d\n",m);
        if(count<10)
	x[count]=m;
        count++;
        }
	}	
/*    for (int i=1;i<m;i++)
    {
	float y= x[i+1]/x[i];
	printf("%lf\n",y);
	
    }*/	
  }
  for(int i=0;i<count;i++)
      {
       printf("%d\n",x[i]);
      }
	
     return 0;
}
