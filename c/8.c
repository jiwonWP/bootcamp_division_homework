/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int n;
    int sum=0, multi=1;
    scanf("%d", &n);
    if(n>=13)
    {
        return 0;
    }
    for(int i=1; i<=n; i++)
    {
        sum+=i;
        multi*=i;
    }
    printf("%d\n%d", sum, multi);
    return 0;
}