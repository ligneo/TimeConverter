#include <stdio.h>

// This is a time converter days to minutes exc.

// vars : time (get form the user )

int main(void)
{
	float convert_data, data, result;
	printf("Please select the unit you want to use: \n1) hours  to year \n2) year to hours\n3) hours to days\n4) days to hours\n ");
	scanf("%f", &data);

	if (data == 1)
	{
		// one year equal to 8766 hours
		printf("Please enter the hours you want to convert: \n ");
		scanf("%f", &convert_data);

		result = convert_data / 8766;

		printf("The hours you entered equal to %f year. ", result);
	}
	else if (data == 2)
	{
		printf("Please enter the year that you want to convert to hours: \n");
		scanf("%f", &convert_data);

		result = convert_data * 8766;
		printf("The year you entered equal to %f hours.", result);
	}
	else if (data == 3)
	{
		printf("Please enter the hours you want to convert: ");
		scanf("%f", &convert_data);
		// 1 day = 24 hours

		result = convert_data / 24;
		printf("The hours you entered equal to %f days.", result);
	}
	else if (data == 4)
	{
		printf("Plaese enter the days you want ot convert: ");
		scanf("%f", &convert_data);

		result = convert_data * 24;
		printf("The hours you entered equal to %f days.", result);
	}

	else
	{
		printf("Please enter a valid option.");
	}

	printf("\nPress ENTER key to Continue\n");

	getchar();
	getchar();

	return 0;
}
