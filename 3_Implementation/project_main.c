#include "test_bill.h"

int main(void)
{

    int customerId,units;
	int i;
	char name[25];
	char location[25];

    float total_bill;

    //printf(""); function to show the output on screen

    printf("\n\n\t\t    WELCOME TO THE ELECTRTICITY BOARD \n\n");

    printf("\t\t         ELECTRICITY TARIFF\n  \t\t            (Rates/Unit)\n\n");

  for(i=0;i<35;i++)
		printf("_ ");
    printf("\n\n\tUpto 20 Units .............................. =Rs.3/Unit      \n\n");

    printf("\t21 To 30 Units .............................. =Rs.7/Unit     \n\n");

    printf("\t31 To 50 Units .............................. =Rs.8.5/Unit   \n\n");

    printf("\t51 To 150 Units ..............................=Rs.10/Unit    \n\n");

    printf("\t151 To 250 Units ..............................=Rs.11/Unit  \n\n");

    printf("\t251 To 400 Units ..............................=Rs.12/Unit  \n\n");

    printf("\t400+ Units ................................. =Rs.13/Unit     \n\n");
	for(i=0;i<35;i++)
		printf("_ ");

    printf("\n\nEnter your name: \n");
    scanf("%s",name);
    printf("\nEnter your location: \n");
    scanf("%s",location);
    printf("\nEnter your Customer ID: \n");
    scanf("%d",&customerId);
	printf("\nPlease Enter Your Total Units Consumed: \n");

    //scanf(""); function to get input from end user
    scanf("%d", &units);
    //check the conditions to calculate actual bill charges
    if (units <= 20)

    total_bill = units * 3;

    else if (units <= 30)

    total_bill = units * 7;

    else if (units <= 50)

    total_bill = units * 8.5;

    else if (units <= 150)

    total_bill = units * 10;

    else if (units <= 250)

    total_bill = units * 11;

    else if (units <= 400)

    total_bill = units * 12;

    else total_bill = units * 13;

    //result with bill charges
	 printf("\a\n\n*************Electricity Bill*****************\n\n\a");

    printf("Name: %s",name);
    printf("\nLocation: %s",location);
    printf("\nCustomer ID: %d",customerId);
    printf("\nTotal Units: %d",units);
	printf("\n\nYour Total Bill Is Rs.%f", total_bill);

	printf("\a\n\n**********************************************\n\n\a");


	
	return 0;
}
