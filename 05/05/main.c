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
        printf("양수입니다.\n");
         else if(a<0)
            printf("음수입니다.\n");
         else
            printf("0입니다.\n");
        
    return 0;
}
