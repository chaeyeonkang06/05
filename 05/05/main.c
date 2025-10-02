//
//  main.c
//  05
//
//  Created by 강채연 on 10/2/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a, b;
    char ch;
    int r;
    
    printf("계산식을 입력하시오.: ");
    scanf("%i%c%i", &a, &ch, &b);
    
    switch(ch)
    {
        case '+':
            r = a+b;
            break;
            
        case '-':
            r = a-b;
            break;
            
        case '*':
            r = a*b;
            break;
            
        case '/':
            r = a/b;
            break;
    }
            printf("=%i\n", r);
    
    return 0;
}
