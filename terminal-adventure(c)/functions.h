#ifndef FUNCTIONS_H
#define FUNCTIONS_H
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

#endif
