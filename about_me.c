가져오기 날짜 시간

def process_input(date_str, 이름):
 """입력된 날짜와 이름을 처리하고 결과를 출력합니다."""

 시도:
 # 날짜 형식 검증
 datetime.datetime.strptime(date_str, "%Y-%m-%d")

 # 이름 유효성 검사 (선택 사항)
 name.strip ():
 인쇄("이름을 입력해주세요.")
 돌아가다

 인쇄("**입력이 정상적으로 처리되었습니다.**")

 ValueError를 제외하고:
 인쇄("잘못된 날짜 형식입니다. 다시 입력해주세요.")

# 입력 값
date_input = "2023-08-20"
name_input = "아서 덴트"

# 입력 처리 및 결과 출력
process_input (날짜_input, name_input)
