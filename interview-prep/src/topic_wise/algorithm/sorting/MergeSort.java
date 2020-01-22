package topic_wise.algorithm.sorting;

public class MergeSort {
    static void sort(int arr[]) {
        sort(arr, 0, arr.length - 1);
    }

    static void sort(int arr[], int l, int r) {
        if (l < r) {
            int m = (l + r) / 2;
            sort(arr, l, m);
            sort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }

    static void merge(int arr[], int l, int m, int r) {
        int[] larr = new int[m - l + 1];
        int[] rarr = new int[r - m];
        for (int i = 0; i < m - l + 1; i++) {
            larr[i] = arr[l + i];
        }
        for (int j = 0; j < r - m; j++) {
            rarr[j] = arr[m + j + 1];
        }

        int i = 0, j = 0, k = 0;
        l = larr.length;
        r = rarr.length;
        while (i < l && j < r) {
            if (larr[i] <= rarr[j]) {
                arr[k++] = larr[i++];
            } else {
                arr[k++] = rarr[j++];
            }
        }
        if (i < l) {
            arr[k++] = larr[i++];
        }

        if (j < r) {
            arr[k++] = larr[j++];
        }


    }
}
