#include <stdio.h>

int main()
{
	int A, B;

	scanf("%d %d", &A, &B);

	printf("%s", A > B ? ">" : A < B ? "<" : "==");
}