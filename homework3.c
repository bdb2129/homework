#include <stdio.h>
#include <stdlib.h>
#include "employee.h"

struct employee *create_employee()
{
	printf("Please input the name of the employee:\n");
	scanf(" %s", employee.name);

	printf("Please input the surname of the employee:\n");
	scanf(" %s", employee.surname);

	printf("Please input the job of the employee:\n");
	scanf(" %s", employee.job);

	printf("Please input the salary of the employee:\n");
	scanf(" %d", employee.salary);
};

struct employee *print_list()
{
	printf(" %s", struct employee);
};

int main(int argc, const char *argv[])
{	
	int answer;
	
	printf("Choose an option:\n");
	printf("Type 0 to add a new employee.\n");
	printf("Type 1 to print the list of employees.\n");
	scanf(" %d", answer);

	switch(answer)
	{
	case 0:
	
		printf(" %p", struct emoloyee *create_employee());		
		break;

	case 1:
	
		printf(" %p", struct employee *print_list());
		
		break;
	}
	
	return 0;
}
