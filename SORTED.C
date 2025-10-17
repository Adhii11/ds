#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b[5],c[5],i,k,m,n;
clrscr();
printf("Enter the size of the first array:\n");
scanf("%d",&m);
printf("Enter the elements of the first array:\n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
c[i]=a[i];
}
k=i;
printf("Enter the size of the second array:\n");
scanf("%d",&n);
printf("Enter the elements of the second array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
c[k]=b[i];
k++;
}
printf("the merged array:\n");
for(i=0;i<m+n;i++)
{
printf("%d",c[i]);
}
getch();
}

