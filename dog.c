#include <unistd.h>

int main(int e, void* t, struct l {struct l *a, *b} b, struct l *a, struct l *c) {
	return (e <= 0) & e
               ? write(a,
                       t ? &((struct l*)t)->b + main(e, ((struct l*)t)->a, b, a, c) - 2*e : t,
		       t ? (long)((struct l*)t)->b >> 56 : a
		      ),
		 2*e
               : (e > 1
                  ? b.b = *(long*)(b.a=((void**)t)[e-1])&((unsigned long)-1>>48)^45
                          ? open(b.a,0)
                          : 0,
                    main((b.a=a?0:c,e-1),t,b, 0, &b)
                  : (e < 0
                     ? t
                       ? main(main(e+1,((struct l*)t)->b,b,0,c),((struct l*)t)->a,b,a,c)
                       : 0
                     : (e & 1
                        ? c = a ? &b : c,
			  main(0,0,(b.a=b.b=0,b),c,c)
                        : (b.b = (long)read(a->b, &b.b, 7)<<56 | ((long)b.b & ((unsigned long)-1>>8)),
			  (long)b.b>>56
                          ? main(t-(void*)(b.a=t), &b,b,a,c)
                          : (b.a = ((a->b
                                     ? close(a->b)
                                     : e,t)),
                             a->b = &b,
                             a->a
                             ? main(e,e,b,a->a,c)
                             : main(-2,c,b,a,c
			       )))))) // just some Lisp code.

        ; // The only semicolon in the entire program.
}
