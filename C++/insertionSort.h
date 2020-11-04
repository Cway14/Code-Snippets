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