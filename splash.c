#포함 <stdio.h>
#포함 <string.h>
#포함 <c타입.h>

// 날짜 형식이 YYYY-MM-DD인지 확인하는 함수
int is_valid_date (const char* date) {
 만약 (strlen(날짜)!= 10)이 0을 반환한다면;
 반환(일명: [0]) & & & & & 는 [1] & & 와 (일명: [2]) & 와 (일명: [3]) & &
 날짜 [4] == '-' & &
 isdigit(날짜 [5]) & & isdigit(날짜 [6]) & &
 날짜 [7] == '- & &
 isdigit(날짜[8]) & & isdigit(날짜[9]);
}

// 공백 이름 확인 함수
int is_valid_name(const char* name) {
 (*이름) { 동안
 (!isspace(((부호가 없는 문자)*이름))이 1을 반환하는 경우;
 이름++;
    }
 0을 반환합니다;
}

int 주된() {
 char date_input [100];
 char name_input [100];

    // 입력 받기
 printf("날짜를 입력하세요 (YYYY-MM-DD): ");
 fgets(날짜_입력, 크기(날짜_입력), stdin);
 date_input [strcspn(날짜_input, "\\n")] = 0; // 개행 문자 제거

 printf("이름을 입력하세요: ");
 fgets(이름_입력, 크기(이름_입력), stdin);
 name_input[strcspn(name_input, "\\n"))] = 0;

    // 검증
 만약 (!is_valid_date(날짜_입력)) {
 printf("잘못된 날짜 형식입니다. 다시 입력해주세요.\n");
 반환 1;
    }

 만약 (!is_valid_name(name_input)) {
 printf("이름을 입력해주세요.\n");
 반환 1;
    }

 printf("**입력이 정상적으로 처리되었습니다.**\\n";
 0을 반환합니다;
 }
