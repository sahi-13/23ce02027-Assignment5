#include<stdio.h>
int main(){
    int a,b,c=0;
    printf("Enter the dividend and divisor:");
    scanf("%d%d",&a,&b);
    if (b==0){
    printf("Division with zero is not possible\n");
    return 1;
    }
    while(a>=b){
        a=a-b;
        c++;
    }
    printf("Remainder=%d\n",a);
    printf("Quotient=%d",c);
    return 0;
    
}