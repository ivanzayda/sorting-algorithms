void quick(int* arr, int left, int right) {
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    };

    if (left < j)
        quick(arr, left, j);
    if (i < right)
        quick(arr, i, right);

}
//usage:
quickSort(arr, 0, length-1);
/*average speed of sorting 1 000 000 array (0-65000) is 0.135 sec
Big O is:
Best                  | Avg      | Worst
O(n*log<sub>2</sub>n) | O(nlogn) | O(n<sup>2</sup>)
*/
