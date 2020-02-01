void selectionSort(int *arr, int length){
    for (int i = 0; i < length-1; ++i) {
        int min = i;
        for (int j = i+1; j < length; ++j) {
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

//usage:
selectionSort(arr,length);

/*average speed of sorting 1 000 000 array (0-65000) is over 100000000000000 sec i guess(same with bubble sort)
Big O is:
Best                  | Avg              | Worst
O(n<sup>2</sup>)      | O(n<sup>2</sup>) | O(n<sup>2</sup>)
*/
