//2. Sa se scrie un program care insumeaza elementele intr-o metoda
//separate de metoda main, folosind transmiterea prin referinta.
#include <stdio.h>
#include <stdlib.h>
void Suma(int x[], int n, int *S)
{
	int i;
	*S = 0;
	for (i = 0; i < n; i++)
		*S = *S + x[i];
}
int main()
{
	int x[20], n, i, S;
	printf("Dati nr de elemente : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("x[%d]=",i);
		scanf("%d", &x[i]);
	}
	Suma(x, n, &S);
	printf("Suma este : %d\n", S);
	system("pause");
	return 0;

}
