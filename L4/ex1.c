#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *x, *S,*n,*i;
	n = (int*)malloc(sizeof(int));
	S = (int*)malloc(sizeof(int));
	i = (int*)malloc(sizeof(int));
	printf("Dati numarul de elemente : ");
	scanf("%d", n);
	x = (int*)malloc(sizeof(int) * (*n));	
	*S = 0;
	for (*i = 0; *i < *n; (*i)++)
	{
		printf("x[%d]=", *i);
		scanf("%d", (x + *i));
		*S = *S + *(x + *i);
	}
	printf("Suma este : %d ", *S);
	system("pause");
	return 0;
}