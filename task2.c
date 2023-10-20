#include <stdio.h>
#include <stdlib.h>
int random_get(int arr[], int left, int right){
    for (int i = 0; i < (sizeof(arr)/sizeof(int)); i++){
        arr[i] = left + (rand()%(right - left));
        printf(arr[i]);
    }
    
}

int main () {
    int array[10];
    int left, right;
    scanf("%d", &left);
    scanf("%d", &right);
    random_get(array, left, right);
    return 0;
}