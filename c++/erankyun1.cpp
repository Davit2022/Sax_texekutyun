#include <iostream>
#include <string>


int up (int count, std::string symbol){    
    for(int i = 1; i <= count; i++){
        for (int j=0; j < count-i; j++){
            std::cout << " ";
        }
        if (i == 1){ 
            std::cout << " " <<symbol << std::endl;
        } else if (i == count){
        	for(int k=0 ;k < count * 2 + 1; k++) {
            	std::cout << symbol;
        	}
            std::cout << std::endl;
        } else {
            std::cout << symbol;
            for (int k=0;k<i * 2 - 1;k++){
                std::cout << " ";
            }
            std::cout << symbol << std::endl;
        }
        
    }
}
int down (int count, std::string symbol ){
 std::string spaces = "";                                                                                                                          
    for(int i = count; i > 0; i--){
        if (i == 1){
            spaces += "  ";
            std::cout << spaces << symbol << std::endl;
        } else if (i == count){
            for(int j=0; j < count * 2 + 1; j++) {
                std::cout << symbol;
            }
            
            std::cout << std::endl;
        } else {
            spaces += " ";

            std::cout << spaces << symbol;

            for (int j = 0; j < i * 2 - 1; j++){
                std::cout << " ";
            }

            std::cout << symbol << std::endl;
        }

    }

}

int main(){
    std::string symbol;
    int count;
    int direction;
    std::cout << "Enter symbol" << std::endl;
    std::cin >> symbol;
    std::cout << "Enter row count" << std::endl;
    std::cin >> count;
    std::cout << "Write down(1) or up(0)" << std::endl;
    std::cin >> direction;
    if (direction == 1){
            std::cout << std::endl;
            up(count, symbol);
        }else if(direction == 0){
            std::cout << std::endl;
            down(count, symbol);
        }else{
            std::cout<< "invalid direction" << std::endl;
        }
}
