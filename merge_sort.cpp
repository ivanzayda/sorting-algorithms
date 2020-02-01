void merge(int *arr,int p,int q,int r) {
    int n1=q-p+1;
    int n2=r-q;
    int * L; int * R;
    L=new int[n1+1];
    R=new int[n2+1];
    for(int i=1;i<=n1; i++) {
        L[i-1]=arr[p+i-1];
    }
    for(int j=1;j<=n2; j++) {
        R[j-1]=arr[q+j];
    }
    for(int i=0,j=0,k=p; k<=r; k++) {
        if(i<n1 && j<n2) {
            if(L[i]<=R[j]) {
                arr[k]=L[i];
                i++;
            } else {
                arr[k]=R[j];
                j++;
            }
        } else if(i<n1) {
            arr[k]=L[i];
            i++;
        } else {
            arr[k]=R[j];
            j++;
        }
    }
    delete [] L; delete [] R;
}
void merge_sort(int * arr,int p,int r) {
    int q;
    if(p<r) {
        q=(p+r)/2;
        merge_sort(arr,p,q);
        merge_sort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}

//usage:
merge_sort(arr,0,length-1);

/*average speed of sorting 1 000 000 array (0-65000) is 0.365 sec
Big O is:
Best         | Avg      | Worst
O(nlogn)     | O(nlogn) | O(nlogn)
*/
