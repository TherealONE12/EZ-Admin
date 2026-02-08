#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


int main(void) {
	int choice = 0;
	int run = 1;


	if(geteuid() != 0) {

		printf("▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓  ██▓▓▓▓▒▒  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓██  ▓▓▓▓▓▓██  ██▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓    ▓▓░░    ▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓    ▓▓▓▓    ░░▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓            ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓            ██▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓      ▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓        ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓██      ░░██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓        ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓    ░░      ▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓    ░░      ██▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓  ░░▓▓██    ▒▒▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓    ▓▓▓▓    ░░▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓██▒▒██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒██▓▓▓▓██▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▒▒░░      ▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░                ▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓      ░░██▓▓▓▓██▒▒      ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  ▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒      ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒                                                                                                      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒                                                                                                      ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒                                ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒                                ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
"▒▒        ░░▒▒▒▒  ░░░░▒▒▒▒░░    ▒▒▒▒▒▒▒▒▒▒    ░░▒▒▒▒▒▒  ░░  ░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒      ▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒  \n"
"▒▒░░▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒░░▒▒  ▒▒▒▒░░░░▒▒▒▒  ▒▒▒▒▒▒  ▒▒▒▒  ▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒  ▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒  \n"
"▒▒░░▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒  ▒▒  ▒▒▒▒▒▒  ▒▒▒▒░░▒▒▒▒▒▒  ▒▒▒▒  ▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒░░▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒    ▒▒▒▒▒▒▒▒▒▒  \n"
"▒▒  ▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒  ▒▒  ▒▒▒▒▒▒  ▒▒▒▒░░▒▒▒▒▒▒  ▒▒▒▒  ▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒▒  ░░▒▒▒▒▒▒░░▒▒▒▒▒▒  ▒▒▒▒▒▒  ▒▒  ▒▒▒▒▒▒▒▒▒▒  \n"
"▒▒        ▒▒▒▒░░      ▒▒▒▒        ▒▒▒▒▒▒░░▒▒▒▒▒▒  ▒▒▒▒        ░░▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒  ▒▒▒▒▒▒░░▒▒  ▒▒▒▒▒▒▒▒▒▒  \n"
"▒▒░░▒▒▒▒▒▒▒▒▒▒░░▒▒  ▒▒▒▒▒▒  ▒▒  ▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒  ▒▒▒▒  ▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒  ▒▒▒▒  ▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒░░\n"
"▒▒░░▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒  ▒▒▒▒  ▒▒▒▒░░▒▒▒▒▒▒░░▒▒▒▒▒▒  ▒▒▒▒  ▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒          ▒▒▒▒░░▒▒▒▒▒▒  ▒▒░░          ▒▒▒▒▒▒▒▒▒▒\n"
"▒▒░░▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒  ▒▒▒▒  ▒▒▒▒  ▒▒▒▒▒▒  ▒▒▒▒▒▒░░▒▒▒▒  ▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒▒▒▒▒");
		printf("\nCopyright to this ASCII art to https://textart.sh/topic/error\n");


		printf("This program needs sudo privileges.\n");
		printf("As these are high priviledges, please verify the coode on Github!");
		printf("\nThe syntax for running is 'sudo ez-admin', so please rerun it!");
		return EXIT_FAILURE;
	}

	int status = system("echo Hello World!") / 256;

	if(status != 0){
		perror("Couldnt Initialise Console. You sure this is Linux?");
		printf("Normally, you should never see this. IF you managed to see this, please report it on Github/FlavourTown.\n");
		printf("A few possibilities for you seeing this is that you system has no echo (strange) or this is not Linux (How are you running this then?)\n or something different, strange is happening...");
	}

	printf(
" /$$$$$$$$ /$$$$$$$$       /$$$$$$        /$$               /$$          \n"
"| $$_____/|_____ $$       /$$__  $$      | $$              |__/          \n"
"| $$           /$$/      | $$  \\ $$  /$$$$$$$ /$$$$$$/$$$$  /$$ /$$$$$$$ \n"
"| $$$$$       /$$//$$$$$$| $$$$$$$$ /$$__  $$| $$_  $$_  $$| $$| $$__  $$\n"
"| $$__/      /$$/|______/| $$__  $$| $$  | $$| $$ \\ $$ \\ $$| $$| $$  \\ $$\n"
"| $$        /$$/         | $$  | $$| $$  | $$| $$ | $$ | $$| $$| $$  | $$\n"
"| $$$$$$$$ /$$$$$$$$     | $$  | $$|  $$$$$$$| $$ | $$ | $$| $$| $$  | $$\n"
"|________/|________/     |__/  |__/ \\_______/|__/ |__/ |__/|__/|__/  |__/\n");

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
					"\n 9: Install OpenWebUI         10: Run Clean Tool pre-made settings");

			printf("\nPLEASE Report bugs or similar in FlavourTown or Github Issues! I hope you like my Tool!");
			printf("\nPlease also add suggestions in Flavourtown or Github! Thanks alot again for using this, this is not normal that someone is using a tool made by an small creator!");

			printf("\n");

			scanf("%i", &choice);
			break;

		case 1:
			status = system("apt update && apt upgrade") / 256;
			if(status != 0){
				perror("APT failed");
			}
			choice = 0;
			break;
		case 2:
			status = system("apt autoremove && apt clean") / 256;
			if(status != 0){
				perror("APT failed");
			}
			choice = 0;
			break;

		case 3:
			status = system("apt install kali-linux-top10") / 256;
			if(status != 0){
				perror("APT failed");
			}
			choice = 0;
			break;

		case 4:
			status = system("apt install bleachbit") / 256;
			if(status != 0){
				perror("APT failed");
			}

			status = system("bleachbit")/256;
			if(status != 0){
				perror("BleachBit Failed");
			}
			choice = 0;
			break;
		case 5:
			status = system("apt install git") / 256;
			if(status != 0){
				perror("APT failed");
			}
			choice = 0;
			break;
		case 6:
			status = system("apt install python3") / 256;
			if(status != 0){
				perror("APT failed");
			}
			choice = 0;
			break;
		case 7:
			char str1[256];
			char str2[10];
			char str3[200] = "G /swapfile && chmod 600 /swapfile && mkswap /swapfile && swapon /swapfile";

			printf("Input swapfile amount in GB: ");
			fflush(stdout);
			scanf("%s", str2);

			sprintf(str1, "fallocate -l %s%s", str2, str3);

			status = system(str1) / 256;
			if(status != 0){
				perror("SWAPFILE failed");
			}

			status = system("swapon --show") / 256;
			if(status != 0){
				perror("Showing the SwapFile failed");
			}
			choice = 0;
			break;
		case 8:
		    printf("Installing Ollama...\n");
		    status = system("curl -fsSL https://ollama.com/install.sh | sh") / 256;
		    if(status != 0){
		        perror("Ollama install failed");
		    } else {
		        printf("Ollama installed successfully! Running on http://localhost:11434\n");
		    }
		    choice = 0;
		    break;
		case 9:
		    printf("Installing WebUI...\n");
		    status = system("apt update && apt install docker.io && systemctl enable docker --now && usermod -aG docker $USER") / 256;
		    if(status != 0){
		        perror("Docker install failed");
		    }
		    status = system("docker run -d -p 3000:8080 --add-host=host.docker.internal:host-gateway -v open-webui:/app/backend/data --name open-webui --restart always ghcr.io/open-webui/open-webui:main") / 256;
		    if(status != 0){
		        perror("OpenWebUI install failed");
		    }
		    printf("You can access Open WebUI at http://localhost:3000. Enjoy!");

		    choice = 0;
			break;
		case 10:
		    printf("Running Bleachbit...\n");
		    status = system("bleachbit -c system.cache system.localizations system.rotated_logs") / 256;
		    if(status != 0){
		        perror("Bleachbit failed");
		    }
		    printf("Please suggest better configs!");
		    choice = 0;
		    break;

		case 99:
			printf("\nBye! Thanks for trying me Out! I hope this tool is Usefull!!");
			run = 0;
			break;
		case 98:
			printf("Hi! You just looked at the Coode, Thank you for using my Projekt! Please also checkout my other stuff at the Hackclub Flavourtown!");
			printf("\n Please report any bugs you find to me, I am (kinda) active on Slack (tough not verified cause i dont know how)!\n ");
			break;
		default:
			printf("Invalid choice! You choose %d, but my Coode didnt detect it as an valid choice. Please retry. If you think this is an error, report it on Github or FlavourTown!", choice);
			choice = 0;
			break;
		}
	}

	return EXIT_SUCCESS;
}


