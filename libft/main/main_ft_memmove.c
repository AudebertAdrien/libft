#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "libft.h"
#include <unistd.h>

typedef char TYPE;

bool remove_element(TYPE *arr, int len, int index_to_remove)
{
	if (index_to_remove < 0 || index_to_remove > len) {
		return false;	
	}
	
	void *dest = (void *) arr;
	void *src = (void*) (arr + index_to_remove);
	size_t size = sizeof(TYPE) * index_to_remove;

	ft_memmove(dest, src, size);
	return true;
}

int main(void)
{
	char values[] = {'a','b','c','d','e','f','g'};
	remove_element(values, 8, 3);
	write(1, values, 8);
	return 0;
}
