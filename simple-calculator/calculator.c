#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Initializes function
 *
 * Return: returns 0
 */
/*TODO: now that the calculator can add, we need to let it subtract too.*/ 

void line_break(void)
{
	printf("\n-----------------------------------------------\n");
}
void add_menu(void)
{
	int A;
	int B;
	
	printf(" A: ");
	if (scanf(" %d", &A) == 1)
	{
		printf("\n B: ");
		if (scanf(" %d", &B) == 1)
		{
			printf("\n Result: %d", A + B);
		}
	}
}

void sub_menu(void)
{
	int A;
	int B;
	
	printf(" A: ");
	if (scanf(" %d", &A) == 1)
	{
		printf("\n B: ");
		if (scanf(" %d", &B) == 1)
		{
			printf("\n Result: %d", A - B);
		}
	}
}

void multi_menu(void)
{
	int A;
	int B;
	
	printf(" A: ");
	if (scanf(" %d", &A) == 1)
	{
		printf("\n B: ");
		if (scanf(" %d", &B) == 1)
		{
			printf("\n Result: %d", A * B);
		}
	}
}

int main(void)
{
	int choice;
	
	/*main_menu(void); */
	line_break();
	printf("  Welcome to Jordan's Simple Calculator (JSC)");
	line_break();
	printf("\n 1) Add\n 2) Subtract\n 3) Multiply\n 4) Divide\n 0) Quit\n");
	line_break();
	printf(" Choice: ");
	while(scanf(" %d", &choice) == 1)
	{	
		if (choice == 0)
		{
			line_break();
			printf(" The program will close now.\n");
			printf(" Thank you for using JSC! Bye!");
			line_break();
			printf("\n");
			return(0);
		}
		else if (choice == 1)
		{
			line_break();
			add_menu();
			line_break();
		}
		else if (choice == 2)
		{
			line_break();
			sub_menu();
			line_break();
		}
		else if (choice == 3)
		{
			line_break();
			multi_menu();
			line_break();
		}
		else if (choice == 4)
		{
			line_break();
			printf(" HEY THIS CHOICE, %d, WORKS! YIPPE!\n", choice);
			line_break();
		}
		else 
		{
			line_break();
			printf(" You chose this weird number: %d\n", choice);
		       	printf(" Invalid choice try again!");
			line_break();
		}
		printf(" Choice: ");
	}
	printf("\n");
	return (0);
}

