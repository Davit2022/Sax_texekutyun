#include <iostream>

int func_arr(int arr[8][8]);
void print_func_arr(int arr[8][8]);
void fill_board(int arr[8][8]);
int row_line(int arr[8][8],int &line, int &row);
int access_plus_2i(int i, int j);
int access_plus_1i(int i, int j);
int access_minus_2i(int i, int j);
int access_minus_1i(int i, int j);
bool check_is_in_board(int i, int j);
int get_access_count(int i,int j);
void iterate_on_board(int arr[8][8], int i, int j);
void get_min_cord(int arr[8][8], int &i, int &j);
int main(){
        int line;
        int row;
        int arr[8][8] = {{0},{0}};
        int i = 0;
        int j = 0;
        std::cout << "Board: " << std::endl;
        func_arr(arr);
        std::cout << std::endl << "2D array" << std::endl;
        //print_func_arr(arr);
        fill_board(arr);
        print_func_arr(arr);
        row_line(arr,line,row);
        std::cout << std::endl;
        iterate_on_board(arr,line,row);
        return 0;
}
int func_arr(int arr[8][8]){
        for (int i = 0; i < 8; i++){
                for (int j = 0; j < 8; j++);
        }
        return 0;
}

void print_func_arr(int arr[8][8]){
        for (int i = 0; i < 8; i++){
                for (int j = 0; j < 8; j++)
        std::cout << " " << arr[i][j];
        std::cout << std::endl;
        }
}
void fill_board(int arr[8][8]){
    for (int i = 0; i < 8; i++){   
        for (int j = 0; j < 8; j++){
            arr[i][j] = get_access_count(i,j);
         }  
    }
}   
bool check_is_in_board(int i, int j){
    if(i >= 0 && i < 8 && j >= 0 && j < 8){
        return true;
    }

    return false;
}
int get_access_count(int i, int j){
    int result = access_plus_2i( i,j);
    result += access_plus_1i( i,j);
    result += access_minus_2i(i,j);
    result += access_minus_1i(i,j);
    return result;
}
int access_plus_2i(int i, int j){
    int access_count = 0;
    if(check_is_in_board(i+2, j+1)){
        access_count++;
    }
    if (check_is_in_board(i+2,j-1)){
        access_count++;
    }
    return access_count;
}
int access_plus_1i(int i, int j){
      int access_count = 0;
      if(check_is_in_board(i+1,j+2)){
          access_count++;
      }
      if (check_is_in_board(i+1,j-2)){
          access_count++;
      }
      return access_count;
  }        
int access_minus_2i(int i, int j){
    int access_count = 0;
    if(check_is_in_board(i-2, j-1)){
           access_count++;
       }
    if (check_is_in_board(i-2,j+1)){
        access_count++;
    }
    return access_count;
}    
 int access_minus_1i(int i, int j){
      int access_count = 0;
      if(check_is_in_board(i-1,j-2)){
             access_count++;
         }
      if (check_is_in_board(i-1,j+2)){
          access_count++;
      }
      return access_count;
  }

int row_line(int arr[8][8],int &line, int &row){
    std::cout << "Enter line" << std::endl;
    std::cin >> line;
    std::cout << "Enter row" << std::endl;
    std::cin >> row;
    int c = -1;
    arr[line][row] = c;
    print_func_arr(arr);
    return 0;
}


void iterate_on_board(int arr[8][8], int i, int j) {
    for(int k = 0; k < 64; ++k) {
       get_min_cord(arr,i,j);
    }
    print_func_arr(arr);
}




void get_min_cord(int arr[8][8],int &i, int &j){
    int min = 100;
    int row;
    int column;
if(check_is_in_board(i+2, j+1) && arr[i+2][j+1] != -1 && arr[i+2][j+1]<=min){
        min = arr[i+2][j+1];
        row = i+2;
        column = j+1;

    }
    if (check_is_in_board(i+2, j-1) && arr[i+2][j-1] != -1 && arr[i+2][j-1]<=min){
       min = arr[i+2][j-1];
       row = i+2;
       column= j-1;
    }

     if(check_is_in_board(i+1, j+2) && arr[i+1][j+2] != -1 && arr[i+1][j+2]<=min){
           min = arr[i+1][j+2];
           row = i+1;
           column = j+2;
       }
     if (check_is_in_board(i+1, j-2) && arr[i+1][j-2] != -1 && arr[i+1][j-2]<=min){
           min = arr[i+1][j-2];
           row = i+1;
           column = j-2;
       } 
    if(check_is_in_board(i-2, j-1) && arr[i-2][j-1] != -1 && arr[i-2][j-1]<=min){
           min = arr[i-2][j-1];
           row = i-2;
           column = j-1;
       }   
    if (check_is_in_board(i-2,j+1) && arr[i-2][j+1] != -1 && arr[i-2][j+1]<=min){
        min = arr[i-2][j+1];
           row = i-2;
           column = j+1;
    }   


    if(check_is_in_board(i-1, j-2) && arr[i-1][j-2] != -1 && arr[i-1][j-2]<=min){
              min = arr[i-1][j-2];
              row = i-1;
              column = j-2;
          }
    if (check_is_in_board(i-1, j+2) && arr[i-1][j+2] != -1 && arr[i-1][j+2]<=min){
           min = arr[i-1][j+2];
           row = i-1;
           column = j+2;
       }
       
    arr[row][column] = -1;
    i = row;
    j = column;
}

