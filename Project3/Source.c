#include <stdio.h>
int main() {
	int v, u, t1, t2, S;
	printf("enter the speed of the boat in standing water  ");
	scanf_s("%d", &v);
	printf("\n enter the speed of the river flow  ");
	scanf_s("%d", &u);
	printf("\n enter the time of the boat's movement with the current  ");
	scanf_s("%d", &t1);
	printf("\n enter the time of the boat's movement against the current  ");
	scanf_s("%d", &t2);
	if (u < v) {
		S = (v * t1) + ((v - u) * t2);
		printf("\n The path traveled by the boat = %d", S);
	}
	else
	{
		printf("error");
	}
	return 0;
}
