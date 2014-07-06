#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int x;
	struct employee *next;
	char name[100], phone[11], job[50], salary[7];

} employee;

void print_list(employee *n)
{
	while (n != NULL)
	{
		printf("%d\n", n->x);
		n = n->next;
	}
}

employee *create_employee(int cnt, employee *nxt)
{
	employee *new_employee;

	new_employee = (employee *) malloc(168 * sizeof(employee));

	new_employee->x = cnt;
	new_employee->next = nxt;

	return new_employee;

}

employee *add_to_front(employee *list, employee *new_employee)
{
	new_employee->next = list;

	list = new_employee;

	return list;

}

int main(int argc, const char *argv[])
{
	employee *list_head = NULL;
	list_head = create_employee(4, NULL);
	list_head = add_to_front(list_head, create_employee(6, NULL));
	
	char a, b[100], name[100], phone[11], job[50], salary[7];

	printf("Do you want to add a new employee ");
	printf("or print the current employees?\n");
	printf("Enter \"A\" or \"P\".\n");
	scanf(" %c", &a);

	if (strcmp(a, "A") == 0)
	{
		printf("Enter the name, phone, job, and salary ");
		printf("of the employee (X, X, X, X).\n");
		scanf(" %s, %s, %s, %s", name, phone, job, salary);

		create_employee;	
	}

	if (strcmp(b, "P") == 0)
	{
		print_list(list_head);
	}
	
	return 0;
}
