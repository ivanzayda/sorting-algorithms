void radixSort(int *arr, int length, int t) {  // t is how much max digits numbers contain
    int i, j, m, p = 1, index, temp, count = 0;
    list<int> pocket[10];
    for(int i = 0; i< t; i++) {
        m = pow(10, i+1);
        p = pow(10, i);
        for(int j = 0; j<length; j++) {
            temp = arr[j]%m;
            index = temp/p;
            pocket[index].push_back(arr[j]);
        }
        count = 0;
        for(int j = 0; j<10; j++) {
            while(!pocket[j].empty()) {
                arr[count] = *(pocket[j].begin());
                pocket[j].erase(pocket[j].begin());
                count++;
            }
        }
    }
}

//usage:
radixSort(arr, length, t);
/*average speed of sorting 1 000 000 array (0-65000) is 1.35 sec
Big O is:
m - digits number
n - array length
T(n) - time

Best     | Avg     | Worst
O(kT(n)) | O(kT(n))| O(kT(n))
*/
