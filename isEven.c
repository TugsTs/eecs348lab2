#include <stdio.h>
#include "isEven.h"
int isEven(int num)
{
	if (num % 2 == 0){
		 printf("%d is even.\n", num);
	}
	else {
		print("%d is odd.\n", num);
	}
	return 0;
}
