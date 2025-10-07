bool cjd(int* ar, int x, int y, int z) ;
int countGoodTriplets(int* arr,int arrSize, int a,int b, int c) {
    int result = 0;

    for (int i = 0; i <= arrSize - 3; i++) {
        for (int j = i + 1; j <= arrSize - 2; j++) {
            for (int k = j + 1; k <= arrSize - 1; k++) {
                result += (cjd(arr, i, j, a) && cjd(arr, j, k, b) &&
                           cjd(arr, i, k, c))?1: 0;
            }
        }
    }
    return result;
}

bool cjd(int* ar, int x, int y, int z) {
    return ar[x] >= ar[y] - z && ar[x] <= ar[y] + z;
}
