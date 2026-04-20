#include <stdio.h>

int main(void)
{
    int n;
    char ch;               // 문자를 하나씩 저장할 변수
    int max_alpha = 0;     // 소문자 최대 연속 횟수
    int current_alpha = 0; // 소문자 현재 연속 횟수
    int max_digit = 0;     // 숫자 최대 연속 횟수
    int current_digit = 0; // 숫자 현재 연속 횟수

    scanf("%d", &n); // 전체 문자의 개수 입력

    
    for (int i = 0; i < n; i++) { // n번 반복하면서 문자 하나씩 처리
        scanf(" %c", &ch);
        
       
        if (ch >= 'a' && ch <= 'z') { // 영어 소문자 범위인지 확인
            current_alpha += 1; 
            current_digit = 0;  // 숫자는 끊겼으니 0으로 초기화
    
    
            if (current_alpha > max_alpha) { // 현재 연속 횟수가 크면 기록 갱신
                max_alpha = current_alpha;
            }
        }
        
        else if (ch >= '0' && ch <= '9') { // 숫자 범위('0'~'9')인지 확인
            current_digit += 1; 
            current_alpha = 0; //소문자는 끊겼으니 0으로 초기화
            
            if (current_digit > max_digit) {
                max_digit = current_digit;
            }
        }
        
        else { // 그 외의 문자(대문자 등)가 들어올 경우
            current_alpha = 0;
            current_digit = 0;
        }
    }

    printf("%d\n", max_alpha); //결과 출력 - 소문자 최댓값
    printf("%d\n", max_digit); // 결과 출력 - 숫자 최댓값

    return 0;
}
