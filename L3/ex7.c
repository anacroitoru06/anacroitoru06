#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, i, k = 0,c;
	printf("N=");
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		c = i;
		while (c != 0)
		{
			if ((c & 1) == 1)
				k++;
			c = c >> 1;
		}
	}
	printf("Suma bitilor este %d\n", k);
	system("pause");
	return 0;
}