/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int year, month;
    int anw=0;
    scanf("%d", &year);
    scanf("%d", &month);
    if((year%4==0&&year%100!=0) || year%400==0)
    {
        anw=1;
    }
    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30");
            break;
        case 2:
            if(anw==1)
                printf("29");
            else
                printf("28");
            break;
        default:
            printf("31");
            break;
    }
    return 0;
}