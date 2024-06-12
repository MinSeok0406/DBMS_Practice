//함수와 변수(실습-8)
//register변수는 CPU내에 있는 레지스터 저장공간을 사용하는 변수를 말한다. 레지스터 변수를 사용하는 궁극적인 이유는
//프로그램의 실행 속도가 빠르기 때문이다. 아울러, 레지스터 변수는 지역변수에만 사용 할 수 있고, 레지스터 변수로 선언을 하기 위해서는
//데이터 타입 앞에 register키워드를 붙여준다.
//register변수는 포인터 변수와 주소 참조 연산자(&)를 쓸 수 없다. 메모리량이 매우 소량이며 없는 것도 있다.

//register변수와 auto변수의 속도차이에 대한 예제

//#include <stdio.h>
//#include <time.h>
//#define TIME 10000000	//천만번 매크로 상수 선언
//
//int main(void) {
//	//clock_t는 clock ticks의 자료를 담고 있는 데이터 타입으로 clock()의 반환형이다.
//	clock_t start1 = 0, start2 = 0, end1 = 0, end2 = 0;
//	double res1 = 0.0, res2 = 0.0;		//시간 차이의 값을 저장
//
//	auto int i = 0, sum = 0;			//일반 지역 변수 선언 및 초기화
//	register int j = 0, total = 0;		//register 지역 변수 선언 및 초기화
//
//	printf("\nauto 일반 변수 사용 \n");
//	//clock()함수는 time.h에 존재하는 함수로 프로그램에 의해 CPU가 소비된 시간을 반환해주는 함수
//	start1 = clock();		//시작시간을 저장함
//
//	for (i = 0; i < TIME; i++)
//	{
//		sum += i;
//	}
//	end1 = clock();			//종료시간을 저장함
//	//CLOCKS_PER_SEC는 초당 clock ticks의 수를 나타낸 매크로
//	res1 = (end1 - (double)start1) / CLOCKS_PER_SEC;		//for문 실행시간 res1에 저장함
//	printf("auto변수 사용 소요된 시간(초) : %.16lf\n\n", res1);
//
//
//	printf("\nregister 변수 사용 \n");
//	//clock()함수는 time.h에 존재하는 함수로 프로그램에 의해 CPU가 소비된 시간을 반환해주는 함수
//	start2= clock();		//시작시간을 저장함
//
//	for (j = 0; j < TIME; j++)
//	{
//		total += j;
//	}
//	end2 = clock();			//종료시간을 저장함
//	//CLOCKS_PER_SEC는 초당 clock ticks의 수를 나타낸 매크로
//	res2 = (end2 - (double)start2) / CLOCKS_PER_SEC;		//for문 실행시간 res1에 저장함
//	printf("register 변수 사용 소요된 시간(초) : %.16lf\n", res2);
//
//	//결론 : 숫자의 범위가 클수록 레지스터 변수가 약간 더 빠르긴 하나 크게 auto와 차이가 없다.
//	//그리고 레지스터 변수는 사용할 수 있는 활용도의 가치가 일반 변수에 비해 매우 작다.
//	//웬만하면 register변수는 사용하지 않도록 하자. 일반 변수를 사용하도록 하자.
//
//	return 0;
//}