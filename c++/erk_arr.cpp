#include <iostream>
void print(int arr[2][3]);
int max(int arr[3]);
int sum(int arr[3]);

void input(int arr[2][3]){
    for (int i=0; i<2; i++){
        for(int j = 0; j < 3; j++){
            std::cout << "Enter numbers for " << i << "'rd row ";
             std::cin >> arr[i][j];
        }        
    }
}
void print(int arr[2][3]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

}
int max(int arr[3]){
   int max = arr[0];
      for(int i = 1; i < 3;i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
    return max;
}

int sum(int arr[3]){
    int result = arr[0];
        for(int i = 1;i < 3;i++){
            result = result + arr[i];
    }
    return result;
}
int main(){
    int arr[3][3];
    input(arr);
    print(arr);
    int max1 = max(arr[0]);
    int max2 = max(arr[1]);
    std::cout << "Max: Line1 = " << max1 << ", Line2 = " << max2 <<  std::endl;
    int result = sum(arr[0]);
    int result1 = sum(arr[1]);
    std::cout << "Result Line1 = " << result << std::endl;
    std::cout << "Result Line2 = " << result1 << std::endl;
}
