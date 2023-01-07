#ifndef STORY_CHOICES_H
#define STORY_CHOICES_H
#include <stdio.h>
#include "functions.h"
#include "story.h"

void stablePathChoices() {
	
	char intro[] = ("Which part are you in? \n");
	char options[] = (" Options:\n Part One(1),\n Part Two(2),\n Part Three(3),\n Part Four(4)\n Exit(0)\n");
	int choice[20];

	printf(intro);
	printf(options);
	printf("Type your choice\n >> ");
	scanf("%d", choice);

	switch (*choice) {
	case 0:
		exitFunc();
		break;
 	case 1:
 		stablePartOne();
 		break;
	case 2:
 		stablePartTwo();
 		break;
 	case 3:
 		stablePartThree();
 		break;
 	case 4:
 		stablePartFour();
 		break;
	default:
		exitFunc();
	}
}

void unstablePathChoices() {

	char intro[] = ("Which part are you in? \n");
	char options[] = (" Options:\n Part One(1),\n Part Two(2),\n Part Three(3),\n Part Four(4)\n Exit(0)\n");
	int choice[20];

	printf(intro);
	printf(options);
	printf("Type your choice\n >> ");
	scanf("%d", choice);

	switch (*choice) {
	case 0:
		exitFunc();
		break;
 	case 1:
 		unstablePartOne();
 		break;
	case 2:
 		unstablePartTwo();
 		break;
 	case 3:
 		unstablePartThree();
 		break;
 	case 4:
 		unstablePartFour();
 		break;
	default:
		exitFunc();
	}
}

#endif 
