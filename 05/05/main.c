//
//  main.c
//  05
//
//  Created by 강채연 on 10/2/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int answer=78;
    int a;
    int trial=0;
    
    do {
        printf("숫자를 맞춰보세요.: ");
        scanf("%i", &a);
        
        trial++;
        
        if(a>answer)
            printf("조금 더 작은 숫자 써봐여.\n");
         else if(a<answer)
             printf("조금 더 큰 숫자를 써봐영.\n");
    } while (a!=answer);
    
    printf("축하드립니당! 맞추셨네여. 시도횟수: %i.\n", trial);
    
    return 0;
}
