#include<stdio.h>
int main(){
    int digit,number,count=0,sum=0;
    int a[10]={0};
    printf("Enter the number:");
    scanf("%d",&number);
    int temp=number;
    for(;temp!=0;temp/=10){
        count++;
    }
    printf("Number of digits:%d\n",count);
    temp=number;
    for(;temp!=0;temp/=10){
        digit=temp%10;
        if(a[digit]==0){
            sum=sum+digit;
            a[digit]=1;
        }
    }
    printf("Sum of unique digits=%d\n",sum);
    return 0;

    }
