#include <iostream>

int main(){
    int sum;
    int arr[] ={ 1, 2, 3, 5, 8, 9, 10, 52};
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++){
        std::cout << "index " << i << ": " << *(arr + i)  << std::endl;
    }

    std::cout << "while" << std::endl;
    int i = sizeof(arr)/sizeof(int);
    while(i > 0){
           std::cout << "index " << i << ": " << *(arr + i - 1)  << std::endl;
           i = i - 1;

    }
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        sum += *(arr + i);
    }
    std::cout << "The array sum is " << sum << std::endl;

    int Min;
    int Max;
    Min=arr[0];
	Max=arr[0];
	for(int i=1;i < sizeof(arr)/sizeof(int);i++)
	{
		if(arr[i]<Min){
			Min=arr[i];
        }
		if(arr[i]>Max){
			Max=arr[i];
	}
    }
	std::cout << "Max element is :" << Max << std::endl;
	std::cout << "Min element is :" << Min << std::endl;
}

