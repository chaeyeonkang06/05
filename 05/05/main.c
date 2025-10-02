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
    int sum=0;
    printf("정수 하나를 입력하시오.: ");
    scanf("%i", &a);
    
    for(b=1;b<=a;b++)
        sum = sum + b;
     
        printf("합은 %i 입니다.\n", sum);
    return 0;
}
