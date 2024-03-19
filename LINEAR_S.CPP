#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,arr[100],item;
	clrscr();

	printf("\nEnter the Size of array :-");
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
		printf("\nEnter the %d Elements :-",i);
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the item to be search :-");
	scanf("%d",&item);

	for(i=0;i<n;i++)
	{
		if(item == arr[i])
		{
			printf("\n %d Element is in %d Position",arr[i],i);
			break;
		}
	}
		if(item != arr[i])
		{
			printf("\n Element is not given in the array ... ");
		}

	getch();
};