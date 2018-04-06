#include <stdio.h>

void BubbleSortRecursive (int vet[], int x)
{
	 /*
	printf("\n Passo numero %d\n",x);

	for (int j = 0; j < 5; j++)
	{
		printf("%d",vet[j] );
	}
	
	printf("\n");
	 */
	if (x<4)
	{
		int aux;
		if (vet[x] > vet[x+1])
		{
			aux = vet[x];
			vet[x] = vet[x+1];
			vet[x+1] = aux;
		}
		x++;
		BubbleSortRecursive (vet, x);
	}
	else
		return;
}

int main (void)
{
	int vet[5] = {5,4,3,2,1} ;
	int k = 0;

	for (int i = 0; i < 5; i++)
	{
		BubbleSortRecursive (vet, k);
		
	}

	printf("\n");

	for (int j = 0; j < 5; j++)
	{
		printf("%d",vet[j] );
	}
	
	printf("\n");
	
	return 0;
}