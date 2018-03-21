NOWARNINGS = -Wno-int-to-pointer-cast -Wno-pointer-to-int-cast -Wno-int-conversion

all: dog

dog: dog.c
	gcc $< -o $@ ${NOWARNINGS}
clean:
	rm dog
