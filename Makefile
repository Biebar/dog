NOWARNINGS = -w

all: dog

dog: dog.c
	gcc $< -o $@ ${NOWARNINGS}
clean:
	rm dog
