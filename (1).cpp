#include <stdio.h>

using namespace std;

int main()
{
    int n = 10;
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
    printf("\n");
    for (int i = n; i >= 0; i--) {
        printf("%d", i);
    }

    return 0;
}