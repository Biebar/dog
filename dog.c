#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define l struct j
l {
	void *a,*b;
} *a, *c = NULL;

int main(int e, void* t) {
	l b; // we won't need any other variable

	return e == -1
               ? printf("%s",
                        t != 0
			? &((l*)t)->b + main(-1, ((l*)t)->a) + 2
			: &a
                       ),
		 -2
               : (e > 1
                  ? b.b = (b.a = ((void**)t)[e-1],
                           ((char*)b.a)[0] == 45
                           && ((char*)b.a)[1] == 0)
                          ? 0
                          : (void*) fileno(fopen(b.a, "r")),
                    main((b.a=c,c=&b,e-1),t)
                  : (e < -1
                     ? t == 0
                       ? EXIT_SUCCESS
                       : main(main((a=0,-1),((l*)t)->b),((l*)t)->a)
                     : (e == 1
                        ? main(c
                               - (a = c == 0
                                      ? b.a = b.b = 0,
                                        c = &b
                                      : c),
			       0)
                        : (((char*)&b.b)[(int)(b.a=(void*)read((int)a->b, &b.b,sizeof(b.b)-1))] = 0,
                          b.a != 0 // b.a != 0 means there is still some text to read
			           // so we need more memory.
				   // Instead of using malloc, we simply call
				   // main to have one more variable on the stack
                          ? main(t-(b.a=t), &b)
                          : (b.a = ((a->b != 0
                                     ? close((int)a->b)
                                     : 0,t)),
                             a->b = &b,
                             a->a != 0
                             ? main((a=a->a,0),0)
                             : main(-2,c
			       )))))) // just some Lisp code.
			       ;
}
