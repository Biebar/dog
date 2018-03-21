#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define l struct j
l {
	void *a,*b;
} *a, *c = NULL;

int main(int e, void* t, l b) {
	return e == -1
               ? printf("%s",
                        t != 0
			? &((l*)t)->b + main(e, ((l*)t)->a, b) - 2*e
			: (void*) &a
                       ),
		 -2
               : (e > 1
                  ? b.b = (b.a = ((void**)t)[e-1],
                           ((char*)b.a)[0] == 45
                           && ((char*)b.a)[1] == 0)
                          ? 0
                          : (void*) fileno(fopen(b.a, "r")),
                    main((b.a=c,c=&b,e-1),t,b)
                  : (e < -1
                     ? t == 0
                       ? EXIT_SUCCESS
                       : main(main((a=0,-1),((l*)t)->b,b),((l*)t)->a,b)
                     : (e == 1
                        ? main(c - (a = c == 0
                                        ? b.a = b.b = 0,
                                          c = &b
                                        : c),
			       0,b)
                        : (((char*)&b.b)[(int)(b.a=(void*)read((int)a->b, &b.b,sizeof(b.b)-1))] = e,
                          e != (int) b.a // e != b.a means there is still some text to read
			                 // so we need more memory.
				         // Instead of using malloc, we simply call
				         // main to have one more variable on the stack
                          ? main(t-(b.a=t), &b,b)
                          : (b.a = ((a->b != (void*) e
                                     ? close((int)a->b)
                                     : e,t)),
                             a->b = &b,
                             e != (int) a->a
                             ? main((a=a->a,e),(void*)e,b)
                             : main(-2,c,b
			       )))))) // just some Lisp code.
			       ;
}
