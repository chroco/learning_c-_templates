#ifndef FACTORIAL_H
#define FACTORIAL_H

template <unsigned int n>
struct factorial {
	enum { value = n * factorial<n - 1>::value };
};

template <>
struct factorial<0> {
	enum { value = 1 };
};

#endif
