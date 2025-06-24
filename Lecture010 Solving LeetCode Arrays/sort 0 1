void sortZeroesAndOne(int arr[], int n) {
    int i = 0, j = n - 1;

    while (i < j) {
        // Move `i` forward until a `1` is found
        while (i < j && arr[i] == 0) {
            i++;
        }

        // Move `j` backward until a `0` is found
        while (i < j && arr[j] == 1) {
            j--;
        }

        // Swap elements at `i` and `j`
        if (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}
