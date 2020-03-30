#include <iostream>

struct mys
{
	int a;
	char *name;
}

int main()
{
	mys *obj = new (std::nothrow) mys();
	return 0;
}