#include <unistd.h>
#include <stdio.h>
#define r(a,x) main((a),(char**)(x))
#define l struct j
#define d void
l {
	d *a,*b;
};

l *a, *c = NULL;

int main(int e, char** t) {
	l b;
	if(e>1) {
		b.a = c;
		if(t[e-1][0] == '-' && t[e-1][1] == 0)
			b.b = 0;
		else
			b.b = (d*) fileno(fopen(t[e-1],"r"));
		c = &b;
		return r(e-1,t);
	}
	else if(e == 1) {
		if(c==0) {
			c = &b;
			b.a = 0;
			b.b = 0;
		}
		a = c;
		return r(0,0);
	}

	b.a = 0;
	if(e==0)
		b.a = (d*) read((int)a->b, &b.b,7);
	((char*)&b.b)[(int)(b.a)] = 0;

	if(b.a != 0) {
		b.a = t;
		return r(0,&b);
	}
	if(a->b!=0)
		close((int)a->b);
	b.a = t;

	if(e==0) {
		a->b = &b;
		if(a->a != 0) {
			a = a->a;
			return r(0,0);
		}
	}
	if(e==-2) {
		if(b.a == 0)
			return 0;
		r(-1,((l*)b.a)->b);
		return r(-2,((l*)b.a)->a);
	}
	else if(e==-1) {
		if(b.a!=0) {
			r(-1,((l*)b.a)->a);
			printf("%s", &((l*)b.a)->b);
		}
		return 0;
	}
	return r(-2,c);
}
