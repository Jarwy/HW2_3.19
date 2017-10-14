#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	
	int days;
	float prin, inter, rate;

	printf("Enter loan principal(-1 to end):");
	scanf_s("%f", &prin);

	while (prin != -1)
	{
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter term of the loan of days:");
		scanf_s("%d", &days);
			
		inter = prin*rate*days / 365;
		printf("The interest charge is $%.2f\n\n",inter);
		
		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &prin);


	}

	system("pause");
	return 0;
}