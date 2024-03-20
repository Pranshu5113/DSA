#include<stdio.h>
#include<conio.h>
main()
{
    int num,a=0,b=1,c,i;
    c=a+b;

    printf("Enter the size of number to be print :-");
    scanf("%d",&num);

    printf("Fibonanci series is :-\t %d \t%d",a,b);
    for(i=3;i<=num;++i)
    {
        printf("\t%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    getch();
}