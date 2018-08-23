#include <stdio.h>
/*
scanf()
- scanf("입력서식문자", 입력위치(주소));
  scanf_s("입력서식문자", 입력위치(주소), 입력허용크기(byte));
  - SDL 검사 허용시에는 scanf_s() 를 사용해서 코드를 작성해야 한다
  - 숫자형태의 입력에는 입력허용크기를 지정하지 않아도 된다
    문자, 문자열의 입력에는 입력허용크기 값을 꼭 지정해야 한다
*/
int main() {
	// 1byte 입력
	//char a;
	//printf("1byte 입력 : ");
	//a = getchar();
	//printf("a : %c\n", a);
	//putchar(a);

	// 정수 입력
	//int n;
	//printf("정수 입력 : ");
	//scanf("%d", &n);  // 기본타입
	//scanf_s("%d", &n);
	//printf("n : %d\n", n);

	// 실수 입력
	// - float 형 실수 입력시에는 서식문자 '%f' 사용하고,
	//   double 형 실수 입력시에는 서식문자 '%lf' 사용해야 한다
	//float ff;
	//double dd;
	//printf("실수 2개 입력 : ");
	////scanf("%f%lf", &ff, &dd); // 기본타입
	//scanf_s("%f%lf", &ff, &dd);
	//printf("ff : %f, dd : %f\n", ff, dd);

	// 문자 입력
	//char ch;
	//printf("문자 입력 : ");
	////scanf("%c", &ch); // 기본타입
	//while (getchar() != '\n') {}  
	// 한번의 입력 있은 후에 문자값을 입력받을때는 위에 코드를 입력앞에 작성한다
	//scanf_s("%c", &ch, 1);
	//printf("ch : %c\n", ch);

	// 문자열 입력
	// - 문자열 입력시에는 입력위치에 '&'를 사용하지 않아도 된다
	//   배열명 자체가 주소이다..
	// - 실제 입력할수 있는 문자열의 크기 : 입력허용크기 - 1
	//char word[10];
	//printf("단어 입력 : ");
	//scanf("%s", word); // 기본타입
	//scanf_s("%s", word, sizeof(word));//scanf_s("%s", word, 10);
	//printf("word : %s\n", word);

	//char word2[10];
	//printf("단어 입력2 : ");
	//while(getchar()!='\n'){}
	//scanf_s("%s", word2, sizeof(word2));
	//printf("word2 : %s\n", word2);

	// 띄어쓰기 입력
	char stn[50];
	printf("문장 입력 : ");
	//gets(stn); 
	gets_s(stn, sizeof(stn));
	printf("stn : %s\n", stn);
	puts(stn);

}