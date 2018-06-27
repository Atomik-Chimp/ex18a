/* ex18a.cpp : Defines the entry point for the console application. */
/* */
/* Kernighan and Ritchie, exercise 1-8 */
/* Write a program to replace each tab by the three-character sequence >, <backspace>, -, which prints as <arrow> */
/* and each backspace by the similar sequence <, <backspace>, - this makes tabs and backspaces visible. */
/* Note: This does not work this way in Visual Studio 2010 */

#include "stdafx.h"	/* autowritten by Visual C++ 2010, Adjusted to be C */


int main(int argc, char* argv[])
{
	int c;		/* to hold the input characters */
	while((c = getchar()) != EOF){		/* while we have not reached the end */
		if(c == '\t') {
			putchar('>');
			putchar('\b');
			putchar('-');				/* Note this doesn't work as intended for Visual Studio */
		} else putchar(c);
	}
	getchar();

	return 0;
}

