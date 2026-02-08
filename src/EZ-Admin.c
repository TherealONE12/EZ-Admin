/*
 ============================================================================
 Name        : EZ-Admin.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main(void) {


	int status = system("echo Hello World!") / 256;

	printf("%d", status);

	return EXIT_SUCCESS;
}
