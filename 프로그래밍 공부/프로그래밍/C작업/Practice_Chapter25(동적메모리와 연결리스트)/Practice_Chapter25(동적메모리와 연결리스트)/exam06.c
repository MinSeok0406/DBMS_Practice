//동적 메모리(dynamic memory allocation)에 대한 실습-6

//calloc()함수, realloc()로 동적 메모리 할당, 확장에 대한 실습
//calloc()함수 : 동적 메모리를 초기화를 해주는 함수, malloc()함수는 초기화를 해주지 않아서 memset()를
//사용했었다. calloc()함수는 블록을 지정을 해줄 수가 있다.
//2개의 함수 중에서는 calloc()함수가 더 편리하다.
//malloc(), calloc()의 차이점은 초기화 유무, 매개변수가 다르다.

//realloc()함수 : 기존에 할당된 메모리 블록의 크기를 변경할 때 사용
// 
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void)
//{
//	int* ptr = NULL;
//	int* r_ptr = NULL;
//
//	//calloc()를 통한 동적메모리 할당
//	ptr = (int*)calloc(5, sizeof(int));		//5개 항목의 동적메모리 할당(초기화 되어짐)
//
//	//calloc()를 통하여 할당된 메모리는 0으로 초기화가 이루어진 것을 볼 수가 있다.
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", ptr[i]);
//	}
//	printf("\n");
//
//	printf("ptr[4] 주소 : %p\n", ptr);
//
//	printf("realloc()함수로 메모리 확장\n");
//	//realloc()는 기존에 할당된 메모리에 그냥 덧붙이는 형태이다.
//	ptr = (int*)realloc(ptr, sizeof(int) * 8);
//
//	//시작 주소
//	printf("ptr의 주소 : %p\n", ptr);
//	printf("r_ptr의 주소 : %p\n", r_ptr);
//	//realloc()로 메모리를 블록을 크게 변경하니 변경된 값은 초기화가 이루어지지 않는다.
//
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d ", ptr[i]);
//	}
//	printf("\n");
//
//	memset(ptr, 0, sizeof(int) * 8);
//	printf("memset()함수 사용으로 초기화함\n");
//
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d ", ptr[i]);
//	}
//	printf("\n");
//
//
//
//	free(ptr);
//
//	return 0;
//}