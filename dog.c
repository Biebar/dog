#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define l struct j


int main(int e, void* t, l {void *a, *b} b, l *a, l *c) {
	return e == -1
               ? printf("%s",
                        t != 0
			? &((l*)t)->b + main(e, ((l*)t)->a, b, a, c) - 2*e
			: (void*) &a
                       ),
		 -2
               : (e > 1
                  ? b.b = (b.a = ((void**)t)[e-1],
                           ((char*)b.a)[0] == 45
                           && ((char*)b.a)[1] == 0)
                          ? 0
                          : (void*) fileno(fopen(b.a, "r")),
                    main((b.a=a!=0?0:c,e-1),t,b, 0, &b)
                  : (e < -1
                     ? t == 0
                       ? EXIT_SUCCESS
                       : main(main(-1,((l*)t)->b,b,0,c),((l*)t)->a,b,a,c)
                     : (e == 1
                        ? c = a != 0 ? &b : c,
			  main(0,0,(b.a=b.b=0,b),c,c)
                        : (((char*)&b.b)[(int)(b.a=(void*)read((int)a->b, &b.b,sizeof(b.b)-1))] = e,
                          e != (int) b.a // e != b.a means there is still some text to read
			                 // so we need more memory.
				         // Instead of using malloc, we simply call
				         // main to have one more variable on the stack
                          ? main(t-(b.a=t), &b,b,a,c)
                          : (b.a = ((a->b != (void*) e
                                     ? close((int)a->b)
                                     : e,t)),
                             a->b = &b,
                             e != (int) a->a
                             ? main(e,(void*)e,b,a->a,c)
                             : main(-2,c,b,a,c
			       )))))) // just some Lisp code.

        ; // The only semicolon in the entire program.
}
