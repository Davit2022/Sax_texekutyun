#include <iostream>

int get_max_index(const int*  arr, const unsigned int size);
int get_max_volume(const int*  arr, const unsigned int size);

int main(){ 
    const int arr[5] = {10, 5, 6, 8, 9};
    const unsigned int size = sizeof(arr)/sizeof(int);
    int max = get_max_volume(arr, size);
    int max_index = get_max_index(arr, size);
    std::cout << "Max = " << max << std::endl;
    std::cout << "Max index = " << max_index << std::endl;
}

int get_max_index(const int* arr, const unsigned int size){
    int max_index = 0;
        for (int i=1; i < size;i++){
            if(arr[i] > arr[max_index]){
                max_index = i;
        }
    }
    return max_index;

}

int get_max_volume(const int* arr, const unsigned int size){
    int max = arr[0];
         for (int i=1; i < size;i++){
             if(arr[i] > max){
                 max = arr[i];
         }
     }
     return max;
}



