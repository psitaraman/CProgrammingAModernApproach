
// Computes the dimensional weight of a 12" x 10" x 8" box

#include <stdio.h>
#include "dweight.h"

void dweight() {

	int height = 8;
	int width = 10;
	int length = 12;
	int volume = height * width * length;
	int weight = (volume + 165) / 166;
	float price = weight * 1.49; // $1.49/lb

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);
	printf("Shipping Price: $%.2f\n", price);
}

// 	gcc -o dweight dweight.c
// 	./dweight

/* 	Output:
	Dimensions: 12x10x8
	Volume (cubic inches): 960
	Dimensional weight (pounds): 6
	Shipping Price: $8.94
*/