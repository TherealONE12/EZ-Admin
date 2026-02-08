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
#include <string.h>

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
					"\n 1: Update System          2: Cleanup"
					"\n 3: Install top 10 Tools      4: Install cleaning Tool"
					"\n 5: Install git               6: install python3"
					"\n 7: Make temporary SWAP ram   8: Install Ollama"
					"\n");
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

		case 3:
			status = system("sudo -S apt install kali-linux-top10") / 256;
			if(status != 0){
				perror("APT failed. Did you Input the correct Password?");
			}
			choice = 0;
			break;

		case 4:
			status = system("sudo -S apt install bleachbit") / 256;
			if(status != 0){
				perror("APT failed. Did you Input the correct Password?");
			}

			status = system("bleachbit")/256;
			if(status != 0){
				perror("BleachBit Failed. ");
			}
			choice = 0;
			break;
		case 5:
			status = system("sudo -S apt install git") / 256;
			if(status != 0){
				perror("APT failed. Did you Input the correct Password?");
			}
			choice = 0;
			break;
		case 6:
			status = system("sudo -S apt install python3") / 256;
			if(status != 0){
				perror("APT failed. Did you Input the correct Password?");
			}
			choice = 0;
			break;
		case 7:


			char str1[256];
			char str2[10];
			char str3[200] = "G /swapfile && sudo -S chmod 600 /swapfile && sudo -S mkswap /swapfile && sudo -S swapon /swapfile";

			printf("Input swapfile amount in GB: ");
			fflush(stdout);
			scanf("%s", str2);

			sprintf(str1, "sudo -S fallocate -l %s%s", str2, str3);

			status = system(str1) / 256;
			if(status != 0){
			    perror("SWAPFILE failed. Did you input the correct password?");
			}

			status = system("swapon --show") / 256;
			if(status != 0){
				perror("Showing the SwapFile failed. Did you Input the correct Password?");
			}
			choice = 0;
			break;
		case 8:
			 status = system(
			    "curl -fsSL https://ollama.com/download/ollama-linux-amd64.tar.zst -o ollama.tar.zst && "
			    "sudo tar -x -f ollama.tar.zst -C /usr") / 256;
			if(status != 0){
				perror("Ollama install failed. Did you Input the correct Password?");
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
