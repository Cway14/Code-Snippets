#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <vector>
#include "priorityQ.h"
#include "linkedList.h"

int binSearch(int x, int arr[], int start, int end)
{
	if (start == end)
	{
		return -1;
	}
	int mid = ceil((end + start) / 2);

	if (x == arr[mid])
		return mid;

	else if (x <= arr[mid])
	{
		return binSearch(x, arr, start, mid);
	}
	else
	{
		return binSearch(x, arr, mid + 1, end);
	}
}

int *InsertionSort(int arr[], int length)
{
	int min = INT_MAX;
	priorityQueue pq;
	for (int i = 0; i < length - 1; i++)
	{
		pq.insert(arr[i]);
	}
	int i = 0;
	while (!pq.isEmpty())
	{
		arr[i] = pq.removeMin();
		i++;
	}
	pq.print();
	return arr;
}

int *fillArray(int arr[])
{
	for (int i = 0; i < 100; i++)
	{
		arr[i] = rand() % 100 - 50;
	}
	return arr;
}

int main()
{
	LL linkedList;
	linkedList.insertBack(2);
	linkedList.insertBack(1);
	linkedList.insertBack(8);
	linkedList.insertBack(4);
	linkedList.insertFront(0);
	// printf("\nRemoved: %d\n", linkedList.remove(2));
	linkedList.remove(8);

	linkedList.print();

	return 0;
}
