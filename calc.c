#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,s,c;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Enter 1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \nEnter your choice: ");
	scanf("%d",&s);
	switch(s)
	{
		case 1:
		{
			c=a+b;
			printf("Addition is %d",c);
		}
		break;
		case 2:
		{
			c=a-b;
			printf("Subtraction is %d",c);
		}
		break;
		case 3:
		{
			c=a*b;
			printf("Multiplication is %d",c);
		}
		break;
		case 4:
		{
			c=a/b;
			printf("Division is %d",c);
		}
		break;
		default:
			printf("INVALID INPUT!");
		break;
	}
	printf("\n\nEnd of the program!");
getch();
}