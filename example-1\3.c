#include <stdio.h>

int main(void){
    
    int i;
    int user;
    int x = 0;
    int y = 0; 

    scanf("%d", &user);
    
    for (i = 0; i < 11; i++) {
        printf("%dx%d = %d\n", x, user, y);
        x = x + 1;
        y = user*x;
    }
    
    return 0;

    
}
