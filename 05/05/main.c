//
//  main.c
//  05
//
//  Created by 강채연 on 10/2/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a;
    printf("정수 하나를 입력하시오.: ");
    scanf("%i", &a);
    
    if (a>0)
        printf("절대값은 %i 입니다.\n", a);
         else
            printf("절대값은 %i 입니다.\n", a*(-1));
        
    return 0;
}
