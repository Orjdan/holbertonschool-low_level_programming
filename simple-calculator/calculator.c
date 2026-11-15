#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Initializes function
 *
 * Return: returns 0
 */
/*TODO: Now that we have a menu that exits in choice 0, we need it to loop the menu.*/ 

void line_break(void)
{
	printf("\n-----------------------------------------------\n");
}
/*int main_menu(char)
{
	printf("\n--------------------------------------------\n");
	printf("Welcome to Jordan's Simple Calculator (JSC)!");
	printf("\n--------------------------------------------\n");
	printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
	printf("Choice: ");
}*/

/*int Add_men(char)
 */

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

