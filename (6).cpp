#include <iostream>

using namespace std;

int main(){
    
    int n = 5;
    int giaithua = 1;
    for(int i = 1; i <= n; i++){
        giaithua *= i;
    }
    printf("%d", giaithua);
    
    return 0;
}