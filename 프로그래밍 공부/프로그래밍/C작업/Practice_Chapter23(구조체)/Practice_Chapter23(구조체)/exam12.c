//공용체와 열거형의 대한 실습-1

//공용체(union) : 여러 개의 변수가 동일한 메모리를 공유할 수 있게 하는 기능
//공용체는 구조체와 똑같지만 키워드를 union쓰는 것과 메모리를 사용하는 부분에서 차이가 난다.
//구조체는 멤버에 해당하는 타입의 크기만큼 메모리를 할당해주고 2, 4, 8바이트의 배수로써 할당이
//일어나서 패딩 바이트가 생성이 될 수도 있다. 하지만 공용체는 멤버 중에서 가장 큰 바이트를 가지는
//멤버의 바이트로 할당이 되고 같이 공유하면서 사용하는 것이다.
//장점은 메모리 절약되는 부분이 있으나, 단점은 잘못 사용하게 되면 메모리를 멤버들이 동시간대에
//같이 메모리 사용을 하면 치명적이 에러가 발생한다.

//#include <stdio.h>
//#include <string.h>
//
//union mem
//{
//	unsigned long sno;		//4바이트
//	char name[10];			//10바이트
//	int age;				//4바이트
//};
//
//int main(void)
//{
//	//공용체는 초기화 할 때도 반드시 멤버 하나만 초기화가 가능하다라는 것이다.
//	union mem udata;		//공용체의 변수 udata를 선언
//
//	//메모리 크기 출력
//	//udata를 바이트 크기를 출력하면 12바이트가 나온다. 왜? 2, 4, 8의 배수 중에서 가장 작은 값을 택하기 때문에
//	//name[10]이 10바이트 ~ 18바이트 사이에 12바이트, 16바이트가 존재하지만 공용체는 메모리를
//	//공유하기 때문에 12바이트를 출력하게 되는 것이다.
//	printf("udata의 바이트 크기 : %d\n", sizeof(udata));
//	printf("udata.sno의 바이트 크기 : %d\n", sizeof(udata.sno));
//	printf("udata.name의 바이트 크기 : %d\n", sizeof(udata.name));
//	printf("udata.age의 바이트 크기 : %d\n", sizeof(udata.age));
//
//	//주소출력
//	printf("udata의 주소 : %p\n", &udata);
//	printf("udata.sno의 주소 : %p\n", &udata.sno);
//	printf("udata.name의 주소 : %p\n", udata.name);
//	printf("udata.age의 주소 : %p\n", &udata.age);
//
//	//아래와 같이 동시다발적으로 공용체를 사용하니 맨 마지막에 입력한 값이 출력이 되는 기이한 현상과
//	//문자열은 아예 출력조차도 안된다.
//	udata.age = 25;
//	strcpy_s(udata.name,sizeof(udata.name), "홍길동");
//	udata.sno = 1000;
//
//	printf("\nudata.sno의 값 : %d\n", udata.sno);
//	printf("udata.name의 값 : %s\n", udata.name);
//	printf("udata.age의 값 : %d\n", udata.age);
//
//	return 0;
//}