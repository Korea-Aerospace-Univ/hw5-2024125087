#include <stdio.h>

int main()
{
    int price = 0;
    int found = 0;
    
    scanf("%d", &price);
    int A, B, C;
    
    for (A = 1; A <= price / 900; A++ ) {
        for (B = 2; B <= price / 750; B+=2) {
            for (C = 1; C <= price / 200; C++) {
                if (900*A + 750*B + 200*C == price) {
                    if (C < A || C < B) {
                    printf("%d %d %d\n", A, B, C);
                    found = 1;
                    }
                }
            }
        }
    }
    
    if (found != 1)
        printf("none\n");
        
    return 0;
}
