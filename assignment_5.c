#include<stdio.h>
int main()
{
    int x, N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for(x=1;x <= 10;x++)
    {
    
        printf("%d ",x*N);
    
    }
    return 0;

}