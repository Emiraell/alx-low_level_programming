#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @s: 2d arrays of chars
 * *Return: void
 */

void print_chessboard(char (*a)[8])
{
	int chess, board;

	chess = 0;
	while (chess < 8)
	{
		board = 0;
		while (board < 8)
		{
			_putchar (a[chess][board]);
			board++;
		}
		_putchar ('\n');
		chess++;
	}
}
