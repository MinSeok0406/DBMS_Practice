//문제4
//아래와 같이 함수를 선언하고 실행결과에 맞게 프로그램을 구현하시오.
//<string.h>헤더 파일에 있는 문자열 관련함수를 이용하여 배열 포인터를 같이 사용하여 구현하도록 한다.
//함수의 선언부(원형)
//int input_name(char(*name)[20]);	//문자열을 입력하는 기능
//int dup_check(char(*name)[20], char *temp, int cnt);	//입력한 문자열이 char배열에 있는지 체크
//void print_name(char(*name)[20], int cnt);	//2차원 char배열에 저장되어진 문자열을 출력하는 기능

//실행결과
//> 1번째 이름 : 김연아
//> 2번째 이름 : 김연아
//@ 이름이 이미 등록되었습니다.!
//> 2번째 이름 : shin
//> 3번째 이름 : shin
//@ 이름이 이미 등록되었습니다.!
//> 3번째 이름 : 사미자
//> 4번째 이름 : 김동숙
//> 5번째 이름 : 이윤수
//> ....
//@ 10명을 모두 입력하셨습니다.
//@ 총 10명의 이름이 입력되었습니다.
//김연아
//shin
//사미자
//....
//------------------------------------------------

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#define LENGTH 20
//
//int input_name(char(*name)[20]);
//int dup_check(char(*name)[20], char* temp, int cnt);
//void print_name(char(*name)[20], int cnt);
//
//int main(void)
//{
//	char name[10][20] = { ' ' };
//	int cnt = 0;
//
//	cnt = input_name(name);		//함수 호출을 하는데 인수값이 2차원 문자형 배열
//	print_name(name, cnt);
//
//	return 0;
//}
//
//int input_name(char(*name)[20])
//{
//	char temp[20] = { ' ' };	//사용자로부터 문자열을 입력받기 위한 배열
//	int cnt = 0;
//
//	//이름을 입력받기 위해서 무한루프 실행
//	while (1)
//	{
//		printf("%2d번째 이름 : ", cnt + 1);
//		scanf_s("%s", temp, sizeof(temp));
//
//		//이름이 등록이 되어있는지 확인하는 코드
//		if (dup_check(name, temp, cnt))
//		{
//			printf("@ 이름이 이미 등록되었습니다.\n");
//			continue;
//		}
//		//strcpy() 함수를 꼭 써야 한다면 반드시 헤더파일 위에 #define _CRT_SECURE_NO_WARNINGS를 코드로 작성해주어야 한다.
//		//strcpy(name[cnt], temp);		//temp를 name[cnt]에 복사하여 저장함
//		//strcpy_s(복사되어질 곳, 바이트 수, 복사될 값)를 비주얼 스튜디오에서는 권장을 한다.
//		strcpy_s(name[cnt], sizeof(name[cnt]), temp);
//		cnt++;
//		//탈출코드 작성
//		if (cnt == 10)
//		{
//			printf("@ 10명을 모두 입력하셨습니다.\n");
//			break;
//		}
//
//	}
//
//	return cnt;
//}
//
//int dup_check(char(*name)[20], char* temp, int cnt)
//{
//	int i = 0;
//	for (i = 0; i < cnt; i++)
//	{
//		if (strcmp(name[i], temp) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//void print_name(char(*name)[20], int cnt)
//{
//	printf("\n@ 총 %d명의 이름이 입력되었습니다.\n", cnt);
//	for (int i = 0; i < cnt; i++)
//	{
//		printf("%2d번째 이름 : %s\n", i + 1, name[i]);
//	}
//
//	return;
//}