//포인터 심화 예제-1
//이중 포인터(double pointer) : 싱글 포인터 변수의 주소를 또 다시 저장하는 포인터 변수를 이중포인터라고 칭한다.
//**ppc = NULL; <- 사용 형식

//#include <stdio.h>
//
//int main(void)
//{
//	char ch = 'A';		//문자형 변수
//	char* pch = NULL;	//싱글포인터 변수를 선언하고 초기화
//	char** ppch = NULL; //이중포인터 변수를 선언하고 초기화
//
//	pch = &ch;			//ch로 할당된 메모리 주소를 싱글포인터 pch에 저장을 하는 코드
//	printf("변수 ch의 주소값 : %p\n", &ch);		//ch변수의 메모리 주소 출력
//	//pch에 저장되어 있는 주소값을 출력
//	printf("싱글 포인터 변수 pch가 가지고 있는 주소값 : %p\n", pch);
//
//	printf("\n-------------------------------------------------------------------\n");
//
//	ppch = &pch;		//pch포인터 변수가 할당되어진 주소값을 이중포인터인 ppch로 저장하는 코드
//	printf("싱글 포인터 변수 pch가 가지고 있는 주소값 : %p\n", &pch);
//	printf("더블 포인터 변수 ppch가 가지고 있는 주소값 : %p\n", ppch);
//
//	printf("\n-------------------------------------------------------------------\n");
//	printf("변수 ch의 값 : %c\n", ch);
//	//*pch가 변수 ch와 동일
//	printf("싱글포인터 pch가 가리키고 있는 ch변수의 실제 값 : %c\n", *pch);	
//	//**pch가 변수 ch와 동일
//	printf("더블 포인터 변수 ppch가 가리키고 있는 ch변수의 실제 값 : %c\n", **ppch);
//
//	//포인터 배열을 선언하고 초기화
//	char* season[] = { "봄", "여름", "가을", "겨울" };
//	
//	//주소값을 하나를 저장하는 싱글포인터는 포인터 배열 season은 주소의 주소값이므로 싱글포인터에 대입하면
//	//경고가 올라온다.
//	//pch = season;
//
//	ppch = season;
//	//printf("season[0]의 주소값 : %p\n", &(*ppch));
//
//	printf("ppch의 실제값 : %p\n", ppch);
//	printf("ppch[0]의 실제값 : %s\n", ppch[0]);
//	printf("ppch[1]의 실제값 : %s\n", ppch[1]);
//	printf("ppch[2]의 실제값 : %s\n", ppch[2]);
//	printf("ppch[3]의 실제값 : %s\n", ppch[3]);
//
//
//
//	return 0;
//}