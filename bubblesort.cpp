void bubble(int* arr, int length){
    for(int i=0; i<length-1; i++) {
        for (int j = 0; j < length - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

//usage:
bubble(arr,length);

/*average speed of sorting 1 000 000 array (0-65000) is over 100000000000000 sec i guess(this is the worst sorting algorithm)
Big O is:
Best                  | Avg              | Worst
O(n<sup>2</sup>)      | O(n<sup>2</sup>) | O(n<sup>2</sup>)
*/

