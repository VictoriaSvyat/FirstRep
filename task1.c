#include <stdio.h>
void print(int arr[], int size){
    for (int i = 0; i < size; i++)
    printf("arr[%d] = %d", i, arr[i]);
    return;
}
int multy(int a, int b){
    int res = a * b;
    return res;
}
int main () {
    int arr[] = {1, 2, 3, 4, 5, 6 ,7};
    print(arr, sizeof(arr)/sizeof(int));
    int ans = multy(50, 100);
    printf("%d", ans);
    return 0;
}