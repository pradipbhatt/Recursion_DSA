/*
 * C program for Tower of Hanoi
 */
#include <stdio.h>
//  Funcrtion towers is decleared here...
void towers(int, char, char, char);

int main()
{
	int num;
    // Print statement for entering number of disks
	printf("Enter the number of disks : ");
	scanf("%d", &num);
	printf("The sequence of moves involved in the Tower of Hanoi are :\n");
	towers(num, 'A', 'C', 'B');
	return 0;
}

// Fuction definition when number of tower is =1
void towers(int num, char sourcepeg, char toppeg, char auxpeg)
{
	// Base Condition if no of disks are only one 1 then Move disk 1 to sourcepeg to toppeg
	if (num == 1)
	{
		printf("\n Move disk 1 from peg %c to peg %c", sourcepeg, toppeg);
		return;
	}

	// Recursively calling function twice  when number of pegs >one
	towers(num - 1, sourcepeg, auxpeg, toppeg);
	printf("\n Move disk %d from peg %c to peg %c", num, sourcepeg, toppeg);
	towers(num - 1, auxpeg, toppeg, sourcepeg);
}