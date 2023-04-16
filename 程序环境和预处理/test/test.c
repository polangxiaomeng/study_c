// #include <stdio.h>

// #define X 10
// #define Y 20

// int main()
// {
//     //This is a add.
//     int sum = X + Y;
//     printf("%d\n", sum);
//     return 0;
// }


// #include <stdio.h>

// extern int Add(int, int);

// int main()
// {
//     int sum = Add(10, 20);
//     printf("%d\n", sum);
//     return 0;
// }

#include <stdio.h>
int main()
{
	int array[ARRAY_SIZE];
	int i = 0;
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		array[i] = i;
	}
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}