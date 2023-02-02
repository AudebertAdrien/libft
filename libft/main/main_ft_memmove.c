#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "libft.h"


bool remove_element(char *arr, int len, int index_to_remove)
{
	if (index_to_remove < 0 || index_to_remove > len) {
		return false;	
	}

	
	void *src = (void *) arr;
	void *dest = (void *) (arr + index_to_remove);
	size_t size = sizeof(int) * index_to_remove;

	ft_memmove(dest, src, size);
	return true;

}

int main ()
{
	//int values[5] = {1,2,3,4,5};
	char values[5] = {'a','b','c','d','e'};
	remove_element(values, 5, 2);

	for (int i = 0; i < 5; i++) {
		printf("%d,", values[i]);	
	}
	return 0;
}
