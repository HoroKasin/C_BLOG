#include <stdio.h>

int main() {
	int ar1[5] = { 1, 2, 3, 4, 5 };
	 //배열은 선언과 동시에만 전체의 요소에 한번에 접근이 가능하다
	int ar2[] = { 10, 20, 30 };
	 //배열은 선언과 동시에 사용할 데이터와 갯수가 정해져있으면 
	// 생성할 갯수를 지정하지 않아도 데이터 갯수만큼 자동으로 공간을 할당한다..
	int ar3[5] = { 1 };
	// 배열은 선언과 동시에 한개의 요소라도 초기화하면,
	//나머지 뒤에 공간은 자동으로 0 으로 초기화된다..

	int size = 3;
	//int ar4[size]; Error
	 //배열의 크기값은 상수로만 설정 가능하다

	int ar5[3];
	//ar5 = { 1, 2, 3 }; Error
	//ar5[0] = 10;
	//배열 선언후에 한개의 요소에 접근 할 때에는 index 번호를 사용한다..
	// index 번호는 무조건 0부터 시작한다
	ar5[1] = 20;
	int idx = 2;
	ar5[idx] = 30;
	 //배열의 한개의 요소에 접근할 때 사용하는 index 번호로 변수를 사용하는 건 가능하다.

	// 배열 선언후 배열 전체의 요소에 접근 할때에는 for 문을 사용한다
	for (int i = 0; i < 3; i++) {
		printf("ar5[%d] : %d\n", i, ar5[i]);
	}

	int ar[5];
	// 배열의 크기(요소의 수) 계산
	// 요소의 수  = 배열 전체크기 / 배열 요소 한개의 크기
	int size = sizeof(ar) / sizeof(int);//sizeof(ar[0]); 
	// 입력
	for (int i = 0; i < 5; i++) {
	for (int i = 0; i < size; i++) {
		printf("%d 번째 입력 : ", i+1); scanf_s("%d", &ar[i]);
	}
	 //출력
	for (int i = 0; i < 5; i++) {
	for (int i = 0; i < size; i++) {
		printf("%d번째 값 : %d\n", i + 1, ar[i]);
	}

}