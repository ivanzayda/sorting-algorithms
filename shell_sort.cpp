int shellSort(int *arr, int length)
{
    for (int gap = length/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < length; i += 1)
        {
            //sort sub lists created by applying gap
            int temp = arr[i];

            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];

            arr[j] = temp;
        }
    }
    return 0;
}

//usage:
shellSort(arr,length);
/*average speed of sorting 1 000 000 array (0-65000) is 0.37 sec
Big O is:
Best | Avg  | Worst
O(n) | O(n) | O(n)
*/
