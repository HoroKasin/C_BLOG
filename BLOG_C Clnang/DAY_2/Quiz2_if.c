#include <stdio.h>


int main() {
	int n1, n2, n3, big, sum;

	//입력한 데이터가 3의 배수인 경우 출력하시오.
	

	//두수를 입력 받아 큰 수를 출력하시오
	

	//세수를 입력 받아 큰 수를 출력하시오
	

	//두수를 입력 받아 큰 수가 짝수이면 출력하시오
	

	//두수를 입력 받아  두수를  더한 합이 짝수이고 3의 배수인 수를 출력하시오
	
}

#include <stdio.h>


int main() {
	int n1, n2, n3, big, sum;

	//입력한 데이터가 3의 배수인 경우 출력하시오.
	//printf("Q-1. 정수 입력 : "); scanf_s("%d", &n1);
	//if (n1 % 3 == 0)
	//	printf("%d : 3의 배수\n", n1);
	//if (n1 % 3 != 0)
	//	printf("%d : 3의 배수가 아니다\n", n1);

	//두수를 입력 받아 큰 수를 출력하시오
	//printf("Q-2. 정수 2개 입력 : "); scanf_s("%d%d", &n1, &n2);
	//if (n1 > n2) big = n1;
	//if (n2 > n1) big = n2;
	//printf("%d 와(과) %d 중 큰수 : %d\n", n1, n2, big);

	//세수를 입력 받아 큰 수를 출력하시오
	//printf("Q-3. 정수 3개 입력 : "); scanf_s("%d%d%d", &n1, &n2, &n3);
	////if (n1 > n2) big = n1;
	////if (n2 > n1) big = n2;
	////if (n3 > big) big = n3;
	//if (n1 > n2 && n1 > n3) big = n1;
	//if (n2 > n1 && n2 > n3) big = n2;
	//if (n3 > n1 && n3 > n2) big = n3;
	//printf("%d, %d, %d 중 큰수 : %d\n", n1, n2, n3, big);

	//두수를 입력 받아 큰 수가 짝수이면 출력하시오
	//printf("Q-4. 정수 2개 입력 : "); scanf_s("%d%d", &n1, &n2);
	//if (n1 > n2) big = n1;
	//if (n2 > n1) big = n2;
	//if (big % 2 == 0)
	//	printf("%d : 큰수이고 짝수\n", big);
	//if (big % 2 != 0)
	//	printf("%d : 큰수이지만 짝수가 아니다.\n", big);


	//두수를 입력 받아  두수를  더한 합이 짝수이고 3의 배수인 수를 출력하시오
	printf("Q-5. 정수 2개 입력 : "); scanf_s("%d%d", &n1, &n2);

	sum = n1 + n2;
	if (sum % 2 == 0 && sum % 3 == 0)
		printf("%d : 짝수 and 3의 배수\n", sum);
	if (sum % 2 != 0 || sum % 3 != 0)
		printf("%d : 짝수 or 3의 배수가 아니다\n", sum);

}
