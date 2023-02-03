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

	
	char *src = (char *) arr;
	char *dest = (char *) (arr + index_to_remove);
	size_t size = sizeof(TYPE) * index_to_remove;

	ft_memmove(dest, src, size);
	return true;

}

int main ()
{
	char values[] = {'a','b','c','d','e','f','g'};
	//char *values = "abcdefgh";
	//remove_element(values, 5, 2);
	memmove(values, values + 3, 2);
	write(1, values, 8);
	//for (int i = 0; i < 5; i++) {
//		printf("%d,", values[i]);	
//	}
	return 0;
}
