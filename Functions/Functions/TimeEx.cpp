//#define _CRT_SECURE_NO_WARNINGS //localtime()을 사용
//#include <iostream>
//#include <ctime> //시간 관련 함수 사용
//#include <thread> //sleep_for() 사용하기 위한 라이브러리
//using namespace std;
//
///*
//시간 관련 내장 함수
//*/
//
//int main()
//{
//	//시간을 표기 자료형 - time_t
//	time_t now = time(NULL);
//
//	/*cout << "1970년 1월 1일자정 이후: " << now << "초" << endl;
//	cout << "1970년 1월 1일자정 이후: " << now /(24*60*60) << "일" << endl;
//	cout << "1970년 1월 1일자정 이후: " << now /(24*60*60) /365 << "년" << endl;*/
//	
//	//수행 시간 측정
//	time_t start, end;
//
//	time(&start); //시작 시간
//	//0.5초 간격으로 1~10 출력
//	//for (int i = 1; i <= 10; i++)
//	//{
//	//	cout << i << endl;
//	//	this_thread::sleep_for(chrono::milliseconds(500)); //0.5초 대기
//	//}
//	//time(&end); //종료시간
//
//	//cout << "수행시간: " << (end - start) << "초" << endl;
//	cout << "=======================\n";
//
//	//날짜와 시간 표기
//	time_t ct;
//	struct tm* datetime; //tm 구조체 포인터 변수 선언
//
//	//현재 시간 가져오기
//	time(&ct);
//	datetime = localtime(&ct); //localtime()로 표기 포맷팅
//
//	//날짜 - 년, 월, 일
//	cout << "현재 년도: " << datetime->tm_year + 1900 << endl;
//	cout << "현재 월: " << datetime->tm_mon + 1 << endl;
//	cout << "현재 일: " << datetime->tm_mday << endl;
//
//	//시간 - 시, 분, 초
//	cout << "현재 시: " << datetime->tm_hour << endl;
//	cout << "현재 분: " << datetime->tm_min << endl;
//	cout << "현재 초: " << datetime->tm_sec << endl;
//
//	//오늘 날짜
//	cout << "오늘 날짜: " << datetime->tm_year + 1900 << "." <<
//		datetime->tm_mon + 1 << "." <<
//		datetime->tm_mday;
//
//
//	return 0;
//}