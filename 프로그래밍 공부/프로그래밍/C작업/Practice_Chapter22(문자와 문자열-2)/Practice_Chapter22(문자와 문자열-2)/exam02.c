//문자열 입출력 함수 예제-2

//gets_s(), scanf_s()의 차이점에 대한 예제

//#include <stdio.h>
//
//int main(void)
//{
//	char major[30] = " ";
//
//	printf("다음 중에서 원하는 전공을 선택하세요.\n");
//	printf("웹 언어 / 정보 보안 / 네트워크 프로그램 \n");
//
//	printf("\n1. gets_s() 함수 사용 : ");
//	gets_s(major, sizeof(major));
//
//	printf("선택한 전공 : ");
//	puts(major);
//
//	printf("\n2. scanf_s() 함수 사용 : ");
//	scanf_s("%s", major, sizeof(major));
//
//	printf("선택한 전공 : ");
//	puts(major);
//
//	//결론은 gets_s()는 공백까지 포함하여 문자열로 반환하지만 그에 비해 scanf_s()는 첫 번째 공백 전까지만
//	//문자열로 인식하여 반환한다.
//	//둘 다 버퍼형 입력함수이므로 차이점을 명확히 알아두고 프로그램의 사용부분에 따라서
//	//프로그래머가 알아서 사용하면 될 것이다.
//
//
//	return 0;
//}