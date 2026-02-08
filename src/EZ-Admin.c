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
	int choice = 0;
	int run = 1;
	int status = system("echo Hello World!") / 256;

	if(status != 0){
		perror("Couldnt Initialise Console. You sure this is Linux?");
	}

	while(run){
		switch(choice){
		case 0:
			printf("Welcome to EZ-Admin! "
					"\n What do you Wish to do?");
			printf("\n 0: Show this Message      99: Close this Tool"
					"\n 1: Update System          2: Cleanup");
			printf("\n");

			scanf("%i", &choice);
			break;

		case 1:
			status = system("sudo -S apt update && sudo -S apt upgrade") / 256;
			if(status != 0){
				perror("APT failed. Did you Input the correct Password?");
			}
			choice = 0;
			break;
		case 2:
			status = system("sudo -S apt autoremove && sudo -S apt clean") / 256;
			if(status != 0){
				perror("APT failed. Did you Input the correct Password?");
			}
			choice = 0;
			break;
		case 99:
			run = 0;
			break;

		default:
			choice = 0;
			break;
		}
	}
	return EXIT_SUCCESS;
}
