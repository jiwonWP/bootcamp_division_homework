/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int x, y, z=0;
    scanf("%d", &x);
    while(x!=0)
    {
        y=x%10;
        z=10*z+y;
        x=x/10;
    }
    printf("%d", z); 
    return 0;
}
