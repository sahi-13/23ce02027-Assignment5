#include<stdio.h>
int main()
{
    int i,j,n,x[10],temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    printf("\nArray elements before sorting: ");
    for(i=0;i<n;i++)
    printf("%d\t",x[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (x[j]>x[j+1])
        {
        temp=x[j];
        x[j]=x[j+1];
        x[j+1]=temp;
    }
        }}
    printf("\nThe array elements after sorting:");
    for(i=0;i<n;i++){
        printf("%d\t",x[i]);
    }
     return 0;

}