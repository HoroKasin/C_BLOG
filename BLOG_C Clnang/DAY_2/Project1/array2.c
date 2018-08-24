#include <stdio.h>

int main() {
	int ar[2][3] = { 1, 2, 3, 4, 5, 6 };
	int ar1[2][3] = { { 1, 2, 3 } ,{ 4, 5, 6 } };

	int ar3[2][3] = { 1, 2, 3, 4 };            //     열 [0]    [1]    [2] 											
											   //행[0]    1      2      3
											   //  [1]    4      0      0 

	int ar4[2][3] = { { 1, 2 },{ 3, 4 } };     //     열 [0]    [1]    [2] 											
											   //행[0]    1      2      0
											   //  [1]    3      4      0 

											   //int ar5[][] = { 1, 2, 3, 4, 5 }; Error
											   //int ar5[2][] = { 1, 2, 3, 4 }; Error

											   //int ar5[][3] = { 1, 2, 3, 4, 5, 6 };
	int ar5[][3] = { { 1, 2 } ,{ 3, 4 } ,{ 5, 6 } };
	// 행의 갯수 = 배열 전체 크기 / 한행의 크기
	int row = sizeof(ar5) / sizeof(ar5[0]);
	for (int i = 0; i < row; i++) {
		printf("ar5[%d] : %d\n", i, ar5[i]);
	}
	// 2차원 배열에서 행이 가진값은 해당 행의 시작 주소이다..

	// 열의 갯수 = 한행의 크기 / 한개의 요소 크기
	int col = sizeof(ar5[0]) / sizeof(int);

	for (int i = 0; i < row; i++) { // 행을 담당
		for (int j = 0; j < col; j++) { // 열을 담당
			printf("%2d ", ar5[i][j]);
		}
		puts("");
	}

}