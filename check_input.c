#포함 <stdio.h>
#포함 <string.h>
#<ctype>를 포함합니다.h>

// 날짜 형식이 YYYY-MM-DD인지 확인하는 함수
int is_valid_date (컨스펙트 챠* date) {
 만약 (스트렌(날짜)!= 10)이 0을 반환한다면;
 반환(일명: [0]) & & & & & 는 [1] & & 와 (일명: [2]) & 와 (일명: [3]) & &
 날짜 [4] == '-' & &
 isdigit(날짜 [5]) & & isdigit(날짜 [6]) & &
 날짜 [7] == '- & &
 isdigit(날짜[8]) & & isdigit(날짜[9]);
}

// 공백 이름 확인 함수
int is_valid_name(컨스펙트 챠* name) {
 (*이름) { 동안
 (!아이스페이스(((부호가 없는 문자)*이름))이 1을 반환하는 경우;
 이름++;
 }
 0을 반환합니다;
}

주 () {int}
 챠 date_input [100];
 챠 name_input [100];

 // 입력 받기
 인쇄물("날짜를 입력하세요 (YYYY-MM-DD): ");
 fgets(날짜_입력, 크기(날짜_입력), stdin);
 날짜_입력 [strcspn(날짜_입력, "\\n")] = 0; // 개행 문자 제거

 인쇄물("이름을 입력하세요: ");
 fgets(이름_입력, 크기(이름_입력), stdin);
 name_input[strcspn(name_input, "\\n"))] = 0;

 // 검증
 만약 (!이_valid_데이트(날짜_입력)) {
 인쇄물("잘못된 날짜 형식입니다. 다시 입력해주세요.\n");
 반환 1;
 }

 만약 (!is_valid_name(name_input)) {
 인쇄물("이름을 입력해주세요.\n");
 반환 1;
 }

 인쇄물("**입력이 정상적으로 처리되었습니다.**\\n";
 0을 반환합니다;
}
