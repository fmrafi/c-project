#include<stdio.h>

int main()
{  
int i,j,a[100],n,m;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n-1;i++)	
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
m=a[i];
a[i]=a[j];
a[j]=m;	
}
}

for(i=0;i<n;i++)
printf("%d ",a[i]);	

	return 0;
}
