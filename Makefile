NOWARNINGS = -w

.PHONY: all
all: dog

dog: dog.c
	gcc $< -o $@ ${NOWARNINGS}

.PHONY: clean
clean:
	rm dog
