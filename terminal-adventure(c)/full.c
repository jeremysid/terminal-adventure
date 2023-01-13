#include <stdio.h>

// global variables
char name[30];

// global functions
int startFunc(void);
int exitFunc(void);

// Intro
void firstPart();
void secondPart();
void thirdPart();
void monologue();
void nothing();
// STart
void stablePath();
void stablePathChoices();
void unstablePath();
void unstablePathChoices();
// Prompts
void continuePromptStable();
void continuePromptUnstable();
// Story
void stablePartOne();
void stablePartTwo();
void stablePartThree();
void stablePartFour();
void unstablePartOne();
void unstablePartTwo();
void unstablePartThree();
void unstablePartFour();

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

// Stable
void stablePartOne() { 
	printf("Part One - Stable\n"); 
	printf("What is strength?\n");
	printf("What does it take to be strong?\n");

} 
void stablePartTwo() { 
	printf("Part Two - Stable\n"); 
} 
void stablePartThree() { 
	printf("Part Three - Stable\n");
}
void stablePartFour() {
	printf("Part Four - Stable\n");
}

// Unstable
void unstablePartOne() {
	printf("Part One - Unstable\n");
}
void unstablePartTwo() {
	printf("Part Two - Unstable\n");
}
void unstablePartThree() {
	printf("Part Three - Unstable\n");
}
void unstablePartFour() {
	printf("Part Four - Unstable\n");
}


