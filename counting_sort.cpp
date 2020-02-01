void countingSort(int *arr, int length)
{
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < length; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    int *c = new int[max + 1 - min];
    for (int i = 0; i < max + 1 - min; i++) {
        c[i] = 0;
    }
    for (int i = 0; i < length; i++) {
        c[arr[i] - min] = c[arr[i] - min] + 1;
    }
    int i = 0;
    for (int j = min; j < max + 1; j++) {
        while (c[j-min] != 0) {
            arr[i] = j;
            c[j-min]--;
            i++;
        }
    }
}

//usage:
countingSort(arr,length);
/*average speed of sorting 1 000 000 array (0-65000) is 0.01 sec
Big O is:
Best | Avg    | Worst
O(n) | O(n+k) | O(n+k)
*/
