#include <iostream>

using namespace std;

int main()
{
    int n = 100;
    int tong = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            tong += i;
        }
    }
    printf("%d", tong);
    return 0;
}