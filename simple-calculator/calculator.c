#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Initializes function & creates the menu you interact with
 * line_break: Provides a line break that can be called throughout the program
 *
 * add_menu: The menu that adds two integers
 * sub_menu: The menu that subtracts two integers
 * multi_menu: The menu that multiplies two integers
 * division_menu: The menu that divides two integers. Cathes 0 and prints error
 *
 * This calculator makes decimal based calculations.
 * It also utilisies the printf() and scanf() operators.
 *
 * Return: returns 0
 */

void line_break(void)
{
	printf("\n-----------------------------------------------\n");
}
void n_line_break(void)
{
	printf("-----------------------------------------------\n");
}
void add_menu(void)
{
	int A;
	int B;
	
	printf("\n A: ");
	if (scanf(" %d", &A) == 1)
	{
		printf("\n B: ");
		if (scanf(" %d", &B) == 1)
		{
			line_break();
			printf(" Result: %d", A + B);
		}
	}
}

void sub_menu(void)
{
	int A;
	int B;
	
	printf("\n A: ");
	if (scanf(" %d", &A) == 1)
	{
		printf("\n B: ");
		if (scanf(" %d", &B) == 1)
		{
			line_break();
			printf(" Result: %d", A - B);
		}
	}
}

void multi_menu(void)
{
	int A;
	int B;
	
	printf("\n A: ");
	if (scanf(" %d", &A) == 1)
	{
		printf("\n B: ");
		if (scanf(" %d", &B) == 1)
		{
			line_break();
			printf(" Result: %d", A * B);
		}
	}
}

void division_menu(void)
{
	int A;
	int B;
	
	printf("\n A: ");
	if (scanf(" %d", &A) == 1)
	{
		printf("\n B: ");
		if (scanf(" %d", &B) == 1)
		{
			if (B == 0)
			{
				line_break();
				printf(" Error: division by zero");
			}
			else
			{
				line_break();
				printf(" Result: %d", A / B);
			}
		}
	}
}

int main(void)
{
	int choice;
	
	/*main menu*/
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
			n_line_break();
			printf(" The program will close now.\n");
			printf(" Thank you for using JSC! Bye!");
			line_break();
			printf("\n");
			return(0);
		}
		else if (choice == 1)
		{
			n_line_break();
			add_menu();
			line_break();
		}
		else if (choice == 2)
		{
			n_line_break();
			sub_menu();
			line_break();
		}
		else if (choice == 3)
		{
			n_line_break();
			multi_menu();
			line_break();
		}
		else if (choice == 4)
		{
			n_line_break();
			division_menu();
			line_break();
		}
		else
		{
			n_line_break();
			printf(" You chose this weird number: %d\n", choice);
		       	printf(" Invalid choice try again!");
			line_break();
		}
		printf(" Choice: ");
	}
	printf("\n");
	return (0);
}
