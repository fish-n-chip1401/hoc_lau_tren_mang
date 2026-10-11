#include <iostream>

using namespace std;

int main(){
    
    int a = 10, b = 31;
    int tong = 0;
    for(int i = a; i <= b; i++) {
        if(i % 3 == 0) {
            printf("%d ", i);
            tong += i;
        }
    }
    printf("\nTong boi cua 3 la : %d\n", tong);
    
    return 0;
}