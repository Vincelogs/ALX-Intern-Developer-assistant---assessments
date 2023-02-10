#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/**
 * find_max_distance - returns maximium distance between fields and tower
 * @fields: the address to the lists of field
 * @fields_size: the size of fields
 * @towers: the address to the list of towers
 * @towers_size: the size of towers
 *
 * Return: max_distance.
 */

int find_max_distance(int *fields, int fields_size, int *towers, int towers_size)
{
	int i, j, max_distance = 0;

	for (i = 0; i < fields_size; i++)
	{
		int min_distance = abs(fields[i] - towers[0]);

		for (j = 1; j < towers_size; j++)
		{
			int distance = abs(fields[i] - towers[j]);

			if (distance <= min_distance)
			{
				min_distance = distance;
			}
		}
		if (min_distance > max_distance)
		{
			max_distance = min_distance;
		}
	}
	return (max_distance);
}

/**
 * main - check the code
 *
 * Return: 0
 */

int main(void)
{
	int fields[] = {1, 2, 3};
	int fields_size = sizeof(fields) / sizeof(fields[0]);
	int towers[] = {2};
	int towers_size = sizeof(towers) / sizeof(towers[0]);
	int max_distance = find_max_distance(fields, fields_size, towers, towers_size);

	printf("Max distance: %d\n", max_distance);
	return (0);
}
