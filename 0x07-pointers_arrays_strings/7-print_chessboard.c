#include "holberton.h"

/**
 * print_chessboard - print all contents of an array of 8x8
 * @a: Input array
 */

void print_chessboard(char (*a)[8])
{
	int vert;
	int hori;

	for (vert = 0; vert != 8; vert++)
	{
		for (hori = 0; hori != 8; hori++)
			_putchar(a[vert][hori]);
		_putchar('\n');
	}

}
