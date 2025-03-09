#include<stdio.h>

void sort(int array[], int size){

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){

            if (array[j] > array[j + 1]){
                array[j] += array[j + 1];
                array[j + 1] = array[j] - array[j + 1];
                array[j] -= array[j + 1];
            }
        }
    }
}

void printArray(int array[], int size){

    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}

int main(){

    int size;

    scanf("%d", &size);

    int array[size];
    
    for(int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    sort(array, size);
    printArray(array, size);

    return 0;

}