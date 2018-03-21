
all: dog

dog:
	gcc dog.c -o dog -Wno-int-to-pointer-cast -Wno-pointer-to-int-cast -Wno-int-conversion

clean:
	rm dog
