#include<stdio.h>

void calc()
{
	int n,n1,n2;
	do
	{
		printf("\n Enter your Choice:-");
		scanf("%d",&n);
		
		if(n==6)
		{
			printf("Exit...");
		}
		if(n>6)
		{
			printf("Enter Valid Value...");
		}
		if(n<6)
		{
			printf("Enter First Number:-");
			scanf("%d",&n1);
			printf("Enter Second Number:-");
			scanf("%d",&n2);
			
			switch(n)
			{
				case 1:
					   printf("%d+%d=%d",n1,n2,n1+n2);
					   break;
				case 2:
					   printf("%d-%d=%d",n1,n2,n1-n2);
					   break;
				case 3:
					   printf("%d*%d=%d",n1,n2,n1*n2);
					   break;
				case 4:
					   printf("%d/%d=%d",n1,n2,n1/n2);
					   break;
				case 5:
					   printf("%d%%%d=%d",n1,n2,n1%n2);
					   break;	
					   
				default:
				        printf("Enter Valid Value...");	      
					   	   	   	   
			}
		}
	} while(n<6);
}

main()
{
	printf("\n1.Addition\n");
	printf("2.Substraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Modulas\n");
	printf("6.Exit\n");
	
	calc();
}
