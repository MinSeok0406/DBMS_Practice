//#include <iostream>
//using namespace std;
//#include <vector>
//#include <list>
//
//// 오늘의 주제 : list
//
//// vector : 동적 배열
//// [                ]
//
//// Node [ data(4) next(4/8) ]
//class Node
//{
//public:
//	Node*	_next;
//	Node*	_prev;
//	int		_data;
//
//};
//
//// 단일 / 이중 / 원형
//// list : 연결 리스트
//
//// 단일 리스트
//// [1]    ->   [2]    ->  [3]  ->  [4]     ->     [5]				
//// 이중 리스트
//// [1]    <->   [2]    <->  [3]  <->  [4]     <->    [5] <-> [ Myhead : end() ] <->	
//// 원형 리스트		
//// [1]    <->   [2]    <->  [3]  <->  [4]     <->     [5]  <->		
//
//
//int main()
//{
//	// list (연결 리스트)
//	// - list의 동작 원리
//	// - 중간 삽입/삭제 (GOOD / GOOD)
//	// - 처음/끝 삽입/삭제 (GOOD / GOOD)
//	// - 임의 접근 (i번째 데이터는 어디 있습니까?) (NO)
//
//	list<int> li;
//
//	list<int>::iterator itRemember;
//
//	for (int i = 0; i < 100; i++)
//	{
//		if (i == 50)
//		{
//			itRemember = li.insert(li.end(), i);
//		}
//		else
//		{
//			li.push_back(i);
//		}
//	}
//	//li.push_front(10);
//	int size = li.size();
//	//li.capacity(); // 없음
//
//	int first = li.front();
//	int last = li.back();
//
//	//li[3] = 10; // 없음
//
//	list<int>::iterator itBegin = li.begin();
//	list<int>::iterator itEnd = li.end();
//
//
//	//list<int>::iterator itTest1 = --itBegin; 사용 X
//	//list<int>::iterator itTest2 = --itEnd; 사용 O
//	//list<int>::iterator itTest3 = ++itEnd; 사용 X
//
//	int* ptrBegin = &(li.front());
//	int* ptrEnd = &(li.back());
//
//	for (list<int>::iterator it = li.begin(); it != li.end(); ++it)
//	{
//		cout << *it << endl;
//	}
//
//	//li.insert(itBegin, 100);
//
//	//li.erase(li.begin());
//
//	//li.pop_front();		// 맨 처음 삭제
//
//	//li.remove(10);	// 10이라는 숫자 삭제
//
//	// * 임의 접근이 안된다.
//	// * 중간 삽입/삭제 빠르다 (?)
//	// 50번 인덱스에 있는 데이터를 삭제!
//	/*list<int>::iterator it = li.begin();
//	for (int i = 0; i < 50; i++)
//	{
//		++it;
//	}*/
//
//	li.erase(itRemember);
//
//
//	return 0;
//}