#include <stdio.h>
int swap(int*,int*);
int main()
{
    int num1, num2;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    printf("Before swapping num1 = %d ,num2 = %d\n",num1,num2);
    swap(&num1, &num2);
    printf("After swapping num1 = %d ,num2 = %d",num1,num2);

    return 0;
}

int swap(int*a,int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
