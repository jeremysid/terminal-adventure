
fu: full
	clear
	./full

ma: main
	clear
	./main

up: u
	clear
	./unstable

sta: s
	clear
	./stable

test-ma: test-main
	clear
	./maintest

fully: full.c
	gcc -o full full.c

main: main.c
	gcc -o main main.c

unstable: unstable.c
	gcc -o unstable unstable.c

stable: stable.c
	gcc -o stable stable.c

test-main: maintest.c
	gcc -o maintest maintest.c

clean:
	rm -r main unstable stable
