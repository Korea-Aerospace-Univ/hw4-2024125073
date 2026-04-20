#include <stdio.h>

int main(void)
{
    int answer, guess;
    int count = 0;
    
    scanf("%d", &answer); //정답을 먼저 입력 받음
    
    do{
        scanf("%d", &guess); // do~while문을 이용하여 맞힐때까지 반복
        count++;
        
        if(guess > answer) printf("%d>?\n", guess);
        else if(guess < answer) printf("%d<?\n", guess);
        else printf("%d==?\n", guess);
        
    }while(answer != guess);
    
    printf("%d", count);
    
    return 0;
}
