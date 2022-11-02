#include "SamRab1.h"

void SamRab1::variant3(int* a, int* b, int* c)
{
	*a = sqrt(*a);
	*b = *b * 15;
	*c = (*c * (*a)) / (*b);
}
