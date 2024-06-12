//구조체에 대한 실습-5

//구조체 배열
//구조체도 일반 변수처럼 배열을 사용할 수가 있다. 구조체 배열을 초기화 하려면, 2차원 배열 초기화
//할 때와 같이 {}를 사용하여 배열 요소를 분리되도록 초기화를 해야 된다.

//#include <stdio.h>
//
//struct person
//{
//	char name[10];
//	char gender;
//	int age;
//};
//
//int main(void)
//{
//	//배열명은 곧 주소이니깐 NULL초기화가 가능하다.
//	//struct person person_arr[3] = NULL;
//
//	//구조체 배열을 초기화 할때 {}를 필수적으로 쓰지 않아도 되지만, 가독성을 높이기 위해서 {}를
//	//사용하길 권장한다.
//	struct person person_arr[3] = { 
//									{"홍길동",'M', 44},
//									{"김가을",'W', 28}, 
//									{"신은혁",'M', 14} 
//								  };
//
//	int cnt = 0;
//
//	printf("%6s \t %6s %8s %6s \n", "순서", "성명", "성별", "나이");
//
//	//구조체 배열을 루프문으로 출력코드
//	for (cnt = 0; cnt < 3; cnt++)
//	{
//		printf("%4d\t", cnt + 1);
//		printf("%8s %6c %6d\n", person_arr[cnt].name, person_arr[cnt].gender, person_arr[cnt].age);
//	}
//
//
//	return 0;
//}