#include <stdio.h>

/**
 * main - write a program that print its name , followed by a new line
 * if you rename the program ,it will the n ew name , without having to
 * compile it again
 * you should not remove the path before the name of the program
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: this return to 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
