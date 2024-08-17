build:
	gcc -Wall -O3 ./src/main.c -o main

run:
	./main

clean:
	rm ./main