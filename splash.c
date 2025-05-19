#include <stdio.h>

int main(void) {
    char date[11];
    char name[100];

    printf("[현재 날짜를 \"yyyy-mm-dd\" 형식으로 입력하세요]: ");
    scanf("%10s", date);

    printf("[당신의 이름을 입력하세요]: ");
    scanf(" %[^\n]", name);

    printf("**입력이 정상적으로 처리되었습니다.**\n");

    char year[5], month[3], day[3];
    year[0] = date[0]; year[1] = date[1]; year[2] = date[2]; year[3] = date[3]; year[4] = '\0';
    month[0] = date[5]; month[1] = date[6]; month[2] = '\0';
    day[0] = date[8]; day[1] = date[9]; day[2] = '\0';

    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\n");
    printf("                         [마그라테아 ver 0.1]                              \n");
    printf("           풀 한 포기 없는 황무지에서 반짝이는 행성을 만들내는 곳 마그라테아,         \n");
    printf("         사람들이 보지 못하는 잠재력을 찾고 전문가의 손길을 더해 보석을 빗는 곳,    \n");
    printf("           마그라테아에 오신걸 환영합니다.   \n");
    printf("\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("[사용자]: %s                                   [실행 시간]:%s년 %s월 %s일\n", name, year, month, day);
    printf("================================================================================\n");

    return 0;
}
