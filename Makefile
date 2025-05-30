# THIS IS FOR TESTING ONLY

all: clean git

test:
	clang test.c -o test
	./test
	echo "\n"

clean:
	rm test

git:
	git add .
	git commit -m "Updated $(shell date)"
	git push

.PHONY: test
