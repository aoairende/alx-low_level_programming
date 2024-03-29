#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * check97 - Entry point.
 *
 * Description: Checks for the correct number of arguments.
 *
 * @argc: Number of arguments.
 *
 * Return: void
 */

void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - Entry point.
 *
 * Description: Checks that file_from exists and can be read.
 *
 * @check: Checks if true of false.
 *
 * @file: file_from name.
 *
 * @fd_from: file descriptor of file_from (source file), or -1
 *
 * @fd_to: file descriptor of file_to (destination file), or -1
 *
 * Return: void
 */

void check98(ssize_t check, char *file, int fd_from, int fd_to)
{
	/* Checks if chck is equal to -1. */
	if (check == -1)
	{
		/*Prints an error message if check is equal to -1. */
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);

		/* Checks if fd_from is not equal to -1. */
		if (fd_from != -1)
			close(fd_from);

		/* Checks if fd_to is not equal to -1. */
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check99 - Entry point.
 *
 * Description: Checks that file_to was created and/or can be written to.
 *
 * @check: Checks if true of false.
 *
 * @file: file_to name.
 *
 * @fd_from: file descriptor of file_from, or -1.
 *
 * @fd_to: file descriptor of file_to, or -1.
 *
 * Return: void
 */

void check99(ssize_t check, char *file, int fd_from, int fd_to)
{
	/* Checks if check is equal to -1. */
	if (check == -1)
	{
		/* Prints an error message to the standard error file descriptor.*/
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);

		/*  Checks if fd_from is not equal to -1. */
		if (fd_from != -1)
			close(fd_from);

		/* Checks if fd_to is not equal to -1. */
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check100 - Entry point.
 *
 * Description: Checks that file descriptors were closed properly.
 *
 * @check: Checks if true or false.
 *
 * @fd: file descriptor.
 *
 * Return: void
 */

void check100(int check, int fd)
{
	/* Checks if check is equal to -1. */
	if (check == -1)
	{
		/* Prints the error message to the standard error file descriptor. */
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point.
 *
 * Description: Copies the content of a file to another file.
 *
 * @argc: Number of arguments passed.
 *
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	/* Declare variables. */
	int fd_from, fd_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	check97(argc);
	fd_from = open(argv[1], O_RDONLY);
	check98((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check99((ssize_t)fd_to, argv[2], fd_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(fd_from, buffer, 1024);
		check98(lenr, argv[1], fd_from, fd_to);
		lenw = write(fd_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		check99(lenw, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check100(close_to, fd_to);
	check100(close_from, fd_from);
	return (0);
}
