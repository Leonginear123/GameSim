//This program constitutes property of Leon Mach, student of the Physics Department of the University of Warsaw
//The copying, distribution, sale, modification, or use 
//of this program contrary to the licence agreement constitutes a criminal offence
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "functions.h"
#define N 7
#define ROWS 3
int main(int argc, char** argv) {
	int numbers[N];
	int config[ROWS] = {2, 3, 2};
	bool cont = true;
	int sum = 0;
	int i;
	char c[3];
	for (i = 0; i < ROWS; i++) sum += config[i];
	if (sum != N) return EXIT_FAILURE;
	printf("Hello, welcome to the toy simulator!\n");
	printf("We start by drawing the configuration of the toy\n");
	printf("Next, we allow you to choose the move you want to make\n");
	printf("The moves are as follows:\n");
	printf("R - rotate right knob clockwise\n");
	printf("Rp - rotate right knob anticlockwise\n");
	printf("L - rotate left knob clockwise\n");
	printf("Lp - rotate left knob anticlockwise\n");
	printf("E - exit the simulator\n");
	printf("Let the simulation begin!\n");
	Generate(numbers, N, config, ROWS, &cont);
	while(cont) {
		Show(numbers, N, config, ROWS, &cont);
		printf("\nPlease enter your choice: ");
		scanf("%s", c);
		if (strcmp(c, "E") == 0) Exit(numbers, N, config, ROWS, &cont);
		if (strcmp(c, "R") == 0) R(numbers, N, config, ROWS, &cont);
		if (strcmp(c, "Rp") == 0) Rp(numbers, N, config, ROWS, &cont);
		if (strcmp(c, "L") == 0) L(numbers, N, config, ROWS, &cont);
		if (strcmp(c, "Lp") == 0) Lp(numbers, N, config, ROWS, &cont);
	};
	return EXIT_SUCCESS;
}
//Copyright Leon Mach, 2022