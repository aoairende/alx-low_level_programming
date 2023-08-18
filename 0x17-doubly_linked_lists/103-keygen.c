#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lists.h"


/**
* search_highest_no - To find the highest no.
*
* @usrn: username.
* @len: the length of the username.
*
* Return: Highest number.
*/

int search_highest_no(char *usrn, int len)
{
	int i; /*  Variable to store the highest ASCII value. */
	int j; /* Iterator varaiable. */
	unsigned int rand_num; /* Variable to store the generated random number. */

	i = *usrn;
	j = 0;
	/* Iterate through each character of the username. */
	while (j < len)
	{
		if (i < usrn[j]) /* Compare current highest value with ASCII value. */
			i = usrn[j];
		j += 1;
	}

	srand(i ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}


/**
* mult_char - Multiplies each character of username
*
* @usrn: username.
* @len: length of username.
*
* Return: Multiplied character.
*/

int mult_char(char *usrn, int len)
{
	int i; /* Variable to store immediate result. */
	int j; /* Iterator variable. */

	i = j = 0;
	/* Iterate through each character of the username. */
	while (j < len)
	{
		i = i + usrn[j] * usrn[j];
		j += 1;
	}

	return (((unsigned int)i ^ 239) & 63);
}


/**
* gen_rand_char - Generates random character.
*
* @usrn: username.
*
* Return: Random generated character.
*/

int gen_rand_char(char *usrn)
{
	int i; /* Variable to store random values. */
	int j; /* Iterator variable. */

	i = j = 0;
	/* Iterate through each character of the username. */
	while (j < *usrn)
	{
		i = rand();
		j += 1;
	}

	return (((unsigned int)i ^ 229) & 63);
}


/**
* main - Entry point.
*
* @argc: pointer to args count.
* @argv: pointer to args vector.
*
* Return: 0 always
*/

int main(int argc, char **argv)
{
	char keygen[7]; /* Buffer to hold the generated key. */
	int len, i, j;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 }; /* Array of constants. */
	(void) argc;
	/* Calculate the length of the provided username. */
	for (len = 0; argv[1][len]; len++)
		;
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	i = j = 0;
	while (j < len)
	{
		i = i + argv[1][j];
		j = j + 1;
	}
	keygen[1] = ((char *)alph)[(i ^ 79) & 63];
	i = 1;
	j = 0;
	while (j < len)
	{
		i = argv[1][j] * i;
		j = j + 1;
	}
	keygen[2] = ((char *)alph)[(i ^ 85) & 63];
	/* Call the search_highest_no function */
	keygen[3] = ((char *)alph)[search_highest_no(argv[1], len)];
	/* Call the mult_char function */
	keygen[4] = ((char *)alph)[mult_char(argv[1], len)];
	/* Call the gen_rand_char function */
	keygen[5] = ((char *)alph)[gen_rand_char(argv[1])];
	keygen[6] = '\0';
	for (i = 0; keygen[i]; i++)
		printf("%c", keygen[i]);
	return (0);
}
