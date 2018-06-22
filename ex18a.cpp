/* ex18a.cpp : Defines the entry point for the console application. */
/* */
/* Kernighan and Ritchie, exercise 1-8 */
/* Write a program to replace each tab by the three-character sequence >, <backspace>, -, which printrs as <arrow> */
/* and each backspace by the similar sequence <, <backspace>, - this makes tabs and backspaces visible. */

#include "stdafx.h"	/* not all C++, autowritten by Visual C++ 2010 */


int main(int argc, char* argv[])
{
	int c;		/* to hold the input characters */
	while((c = getchar()) != EOF){		/* while we have not reached the end */
		if(c == '\t')
	getchar();

	return 0;
}

