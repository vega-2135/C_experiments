
all: something tests

something: something.c
	@clang something.c -Wall -g -o something
	@echo 'Compiling..'

tests:
	@echo 'Running tests...'
	@echo 'Tests passed'

clean:
	rm -f something
