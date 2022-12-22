
name = input("Enter your Name: ")

def startFunc():
    firstPart()
    secondPart()

def exitFunc():
    print("Exit")

def firstPart():
    print("Welcome to Terminal Adventure(python)\n")
    print(name)
    print("Welcome ", name)

def secondPart():
    intro = ("Welcome Pick from these options: Start(1), Exit(2) \n")
    start = 1
    ext = 2

    print(intro)
    choice = int(input(">> "))
    # print(choice)
    
    if choice == start:
        thirdPart()
    elif choice == ext:
        exitFunc()
    else:
        exitFunc()

def thirdPart():

    intro = ("Why do you exit? \n ")
    options = ("Options: Stable(1), Unstable(2)\n")
    stable = 1
    unstable = 2

    print(intro)
    print(options)
    choice = int(input(">> "))

    if choice == stable:
        continuePromptStable()
    elif choice == unstable:
        continuePromptUntable()
    else:
        exitFunc()

def continuePromptStable():

    continueIntro = ("Do you wish to continue? \n")
    options = ("Options: Yes(1), NO(2) \n")
    yes = 1
    no = 2
    
    print(continueIntro)
    print(options)
    choice = int(input(">> "))

    if choice == yes:
        stablePath()
    elif choice == no:
        exitFunc()
    else:
        exitFunc()

def continuePromptUntable():

    continueIntro = ("Do you wish to continue? \n")
    options = ("Options: Yes(1), NO(2) \n")
    yes = 1
    no = 2
    
    print(continueIntro)
    print(options)
    choice = int(input(">> "))

    if choice == yes:
        unstablePath()
    elif choice == no:
        exitFunc()
    else:
        exitFunc()

def stablePath():

	print("Well then, enjoy \n")
	stablePathChoices()

def stablePathChoices():

	stablePartOne() 

def stablePartOne():

	print("Part One - Stable\n")
	
def unstablePath():

	print("How long will you last? \n")
	unstablePathChoices()

def unstablePathChoices():

	print("Unstable Path Choices \n")

