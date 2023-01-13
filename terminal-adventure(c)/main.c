#include<stdio.h>
#include "functions.h"
#include "story_choices.h"
#include "stable.h"
#include "unstable.h"

int startFunc(void) {
firstPart();
secondPart();
}
int exitFunc(void) {
printf("Exit \n");
}

int main() {

	startFunc();
	return 0;
}

void firstPart() {

	printf("Welcome to Terminal Adventure\n");
	printf("Enter your Name: ");
	scanf("%s", name);
	printf("Welcome %s\n", name);
}

void secondPart() {

	char introOne[] = {"Welcome, Pick from these options: "};
	char options[] = {" Start(1) \n Exit(2)\n"};
	int choice[20];

	printf("%s\n", introOne);
	printf("%s\n", options);
	printf("Type your Choice\n >> ");
	scanf("%d", choice);

	switch(*choice) {
	  case 1:
		  thirdPart();
		  break;
	  case 2:
		  exitFunc();
		  break;
	default:
		  exitFunc();

	}

}

void thirdPart() {

	char introTwo[] = {"Why do you exist?\n"};
    char options[] = {"Pick from these options:\n Stable(1) = To get Stronger \n Unstable(2) = To get by\n"};
	int choice[10];
	
	printf("%s", introTwo);
	printf("%s", options);
	printf(">> ");
	scanf("%d", choice);	
	
	switch(*choice) {
		case 1:
			printf("To get Stronger\n");
			printf("???: hm interesting \n");
			continuePromptStable();
			break;
		case 2:
			printf("To get by \n");
			printf("???: well that's boring \n");
			continuePromptUnstable();
			break;
	    default:
			exitFunc(); 
	}
}

void continuePromptStable() {

	char continueIntro[] = {"Do you wish to Continue?\n"};
	char options[] = {"Options: \n Yes(1)\n No(2) \n"};
	int choice[10];

	printf("%s\n", continueIntro);
	printf("%s\n", options);
	printf(">> ");
	scanf("%d", choice);

	switch(*choice) {
		case 1:
			printf("Continue\n");
			stablePath();
			break;
		case 2:
			exitFunc();
			break;
		default:
			exitFunc();
	}

}

void continuePromptUnstable() {

	char continueIntro[] = {"Do you wish to Continue?\n"};
	char options[] = {"Options: \n Yes(1) \n No(2) \n"};
	int choice[10];

	printf("%s\n", continueIntro);
	printf("%s\n", options);
	printf(">> ");
	scanf("%d", choice);

	switch(*choice) {
		case 1:
			printf("Continue\n");
			unstablePath();
			break;
		case 2:
			exitFunc();
			break;
		default:
			exitFunc();

	}

}

void stablePath() {

	printf("Well then, enjoy \n");
	stablePathChoices();
}

void unstablePath() {

	printf("How long will you last? \n");
	unstablePathChoices();
}

