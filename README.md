# dog
Cat Improved
## Usage

    $make
    $./dog
    $./dog dog.c README.md

## The problem with cats

One of the most useful commands is `cat`. You can use it as a discussion simulator if you have no one to talk to.

    $cat
    Hello !
    Hello !
    I love you
    I love you
    ^D

However, this command is not suited for writing a poem.

    $cat
    Il dort. Quoique le sort fût pour lui bien étrange,
    Il dort. Quoique le sort fût pour lui bien étrange,
    Il vivait. Il mourut quand il n'eut plus son ange;
    Il vivait. Il mourut quand il n'eut plus son ange;
    La chose simplement d'elle-même arriva,
    La chose simplement d'elle-même arriva,
    Comme la nuit se fait lorsque le jour s'en va.
    Comme la nuit se fait lorsque le jour s'en va.
    ^D

This isn't `cat`'s only shortcomings. You might want to use `cat - half_life3`. Obviously, the file `half_life3` doesn't exist. However, while you type a love letter in `stdin`, another user might create the file `half_life3` and you won't get an error message. Even if the file `half_life3` existed, this other malicious user might modify this file. This is clearly unwanted behaviour.

## Man (and woman)'s best friend

The solution to the abovementioned problems is simple. I made a program `dog` whose behaviour is close to `cat`. However, `dog` will load into memory every file it is given before printing them to `stdout`. You might say that this is a waste of memory, but please keep in mind that on a 64-bits machine, you have access to 16EB of RAM.


### `dog.c`'s advantages

If you want to get better at coding in C or PHP, you might want to take a look at `dog.c`. The code is concise and self-documented. The "single source of truth" paradigm is implemented by putting the entire code in the function `main`.

Since all of the files contents are stored in memory, memory leaks are a real issue. To avoid this, the best practice is to not allocate any memory. Since `dog.c` only uses 4 variables, the spatial complexity is O(1). Moreover, there are no control structures. Since there are no `while` or `for`, the time complexity is also O(1).

One of the main advantages of writing a program in C is the use of pointers. 'dog.c' make full use of this, and most variables are pointers. Some are even a 'struct' of two pointers. The only regretable exception is `argc` which does not conform to C's best practices.

This program also uses what we call "quick exit". When using `cat` with a file that doesn't exists, the program `cat` takes the time to print an error message before exiting. Because you want to correct your typo as soon as possible, `dog` will automatically make a segmentation fault if you try to read a non existing file. This way, you can immediately correct your command.

## Examples

You can write a poem :

    $./dog
    Il dort. Quoique le sort fût pour lui bien étrange,
    Il vivait. Il mourut quand il n'eut plus son ange;
    La chose simplement d'elle-même arriva,
    Comme la nuit se fait lorsque le jour s'en va.
    ^DIl dort. Quoique le sort fût pour lui bien étrange,
    Il vivait. Il mourut quand il n'eut plus son ange;
    La chose simplement d'elle-même arriva,
    Comme la nuit se fait lorsque le jour s'en va.

You can check if a file exists :

    $./dog - half_life3
    segmentation fault (core dumped) ./dog - half_life3

You can even concatenate files :

    $./dog file1 file2
    Contents of file 1
    Contents of file 2

## Known issues

This code has only been tested on Windows Vista 16.04 LTS.

#### It doesn't work on my distribution
Report this bug to your distribution.

#### It crashes on my Windows 10
Have you tried putting it off and on again ?

#### It doesn't work on my computer
Have you tried it on mine ?
