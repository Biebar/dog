#include <unistd.h>
#include <stdio.h>
#define l struct j
l {
	void *a,*b;
} *a, *c = NULL;

int main(int e, void* t) {
	l b; // we won't need any other variable

	// this expression always evaluates to 0
	return e == -1
               ? t != 0
                 ? main(-1, ((l*)t)->a),
                   printf("%s", &((l*)t)->b)
                 : 1,
                 0
               : (e > 1
                  ? b.b = (b.a = ((void**)t)[e-1],
                           ((char*)b.a)[0] == 45
                           && ((char*)b.a)[1] == 0)
                          ? 0
                          : (void*) fileno(fopen(b.a, "r")),
                    b.a = c,
                    c = &b,
                    main(e-1,t)
                  : (e < -1
                     ? t == 0
                       ? 0
                       : (main(-1,((l*)t)->b),
                          main(-2,((l*)t)->a))
                     : (e == 1
                        ? (a = c == 0
                               ? b.a = b.b = 0,
	                         c = &b
                               : c,
                           main(0,0))
                        : ((b.a = (void*) read((int)a->b, &b.b,sizeof(b.b)-1)),
                          ((char*)&b.b)[(int)(b.a)] = 0,
                          b.a != 0 // b.a != 0 means there is still some text to read
			           // so we need more memory.
				   // Instead of using malloc, we simply call
				   // main to have one more variable on the stack
                          ? b.a = t, main(0, &b)
                          : (b.a = ((a->b != 0
                                     ? close((int)a->b)
                                     : 0,t)),
                             a->b = &b,
                             a->a != 0
                             ? a = a->a,
                               main(0,0)
                             : main(-2,c
			       )))))) // just some Lisp code.
			       ;
}
