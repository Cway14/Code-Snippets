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