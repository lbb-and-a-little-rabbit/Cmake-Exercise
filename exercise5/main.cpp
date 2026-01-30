#include <iostream>

int main(){
    #ifdef SN
        std::cout << "SN!!!\n";
    #endif
    for(int i=0;i<5;i++){
        std::cout << i << ' ';
    }
}