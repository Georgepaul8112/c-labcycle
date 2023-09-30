//merge 2 sorted array
#include<stdio.h>
int main()
{
int a[5],b[5],n,i,m,t,j,temp1,temp;
printf("Enter the first array limit ");
scanf("%d",&n);
printf("enter the second array limits");
scanf("%d",&m);
printf("Enter the first array elements ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the second array elements");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
t=m+n;
for(i=0;i<t;i++)
{
temp1=b[i];
a[i+n]=b[i];
b[i]=temp1;
}
printf("The third array elements before sorting are \n");
int c[50];
for(i=0;i<t;i++)
{
printf("%d\n",a[i]);
}
for(i=0;i<t;i++)
{
  for(j=i+1;j<t;j++)
  {
     if(a[i]>a[j])
     {
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;
     }
   }
}
    
     
for(i=0;i<t;i++)
{
printf("%d\t",a[i]);
}
return 0;
}











