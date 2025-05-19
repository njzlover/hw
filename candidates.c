#include <stdio.h>
#include <string.h>

#define MAX_INFO 11
#define MAX_CANDIDATES 6
#define MAX_LENGTH 300

int main(void) {
    char *member_info[MAX_INFO] = {
        "성명", "생년월일", "성별", "메일", "국적", "BMI",
        "주 스킬", "보조 스킬", "한국어 등급", "MBTI", "소개"
    };

    char candidate01[MAX_INFO][MAX_LENGTH];
    char candidate02[MAX_INFO][MAX_LENGTH];
    char candidate03[MAX_INFO][MAX_LENGTH];
    char candidate04[MAX_INFO][MAX_LENGTH];
    char candidate05[MAX_INFO][MAX_LENGTH];
    char candidate06[MAX_INFO][MAX_LENGTH];

    char (*candidates[MAX_CANDIDATES])[MAX_LENGTH] = {
        candidate01, candidate02, candidate03,
        candidate04, candidate05, candidate06
    };

    printf("####################################\n");
    printf("     오디션 후보자 데이터 입력\n");
    printf("####################################\n");

    int i = 0;
    while (i < MAX_CANDIDATES) {
        printf("%d번째 후보자의 정보를 입력합니다.\n", i + 1);
        printf("---------------------------------\n");

        for (int j = 0; j < MAX_INFO; j++) {
            printf("%d. %s: ", j + 1, member_info[j]);
            scanf(" %[^\n]", candidates[i][j]);
        }

        printf("=================================\n");
        i++;
    }

    printf("\n####################################\n");
    printf("     오디션 후보자 데이터 조회 \n");
    printf("####################################\n");
    printf("=============================================================================================\n");
    printf("성   명 | 생   일 | 성별 | 메   일            | 국적 | BMI | 주스킬 | 보조스킬 | TOPIK | MBTI |\n");
    printf("=============================================================================================\n");

    for (int k = 0; k < MAX_CANDIDATES; k++) {
        
        printf("%-6s|%-8s | %-3s | %-20s |%-4s | %-4s | %-6s| %-8s| %-6s | %-5s |\n",
               candidates[k][0],  
               candidates[k][1],  
               candidates[k][2],  
               candidates[k][3],  
               candidates[k][4],  
               candidates[k][5],  
               candidates[k][6],  
               candidates[k][7],  
               strcmp(candidates[k][8], "0") == 0 ? "원어민" : candidates[k][8], 
               candidates[k][9]); 

        printf("        -------------------------------------------------------------------------------------\n");
        printf("%s\n", candidates[k][10]); 
        printf("---------------------------------------------------------------------------------------------\n");
    }

    return 0;
}
