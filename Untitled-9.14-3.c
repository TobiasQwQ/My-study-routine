#include<stdio.h>
int main()
{
    int i = 0;
    while(i<10)
    {
        i++;
        if (i == 5)
        continue;
        if (i == 7)    
        continue;
    printf("%d",i);
    }
    return 0;
}