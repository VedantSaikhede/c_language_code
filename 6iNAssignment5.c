

//5. Write a program to calculate sum of cubes of first N natural numbers



#include<stdio.h>
int main()
{
    int n,s=0;
    printf("Enter a value of n-");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        s=s+i*i*i;
    printf("Sum of first %d odd natural number is %d",n,s);
    return 0;

}
