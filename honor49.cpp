#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
/*
#include <mutex>
#include <condition_variable>
#include <string>
#include <thread>
#include <iostream>
*/
using namespace std;

class Solution
{
	public:
/*
		string res;
		mutex mtx;
		bool done;
		condition_variable A, B, C, D;
		void fun_A(int times)
		{
			while (times--)
			{
				unique_lock<mutex> locker(mtx);
				A.wait(locker);
				res += 'A';
				B.notify_one();
			}
		
			done = true;
		}
		void fun_B()
		{
			while (!done)
			{
				unique_lock<mutex> locker(mtx);
				B.wait(locker);
				res += 'B';
				C.notify_one();
			}
		}
		void fun_C()
		{
			while (!done)
			{
				unique_lock<mutex> locker(mtx);
				C.wait(locker);
				res += 'C';
				D.notify_one();
			}
		}
		void fun_D()
		{
			while (!done)
			{
				unique_lock<mutex> locker(mtx);
				D.wait(locker);
				res += 'D';
				A.notify_one();
			}
		}
		
		void cplus_solution()
		{
			int num;
		
			while (cin >> num)
			{
				res = "";
				done = false;
				thread t1(fun_A, num);
				thread t2(fun_B);
				thread t3(fun_C);
				thread t4(fun_D);
				A.notify_one();
				t1.join();
				t2.join();
				t3.join();
				t4.join();
				cout << res << endl;
				done = false;
			}
		
			return;
		}
*/	
		void c_solution()
		{			
			int N;
			
			while(scanf("%d", &N)!=EOF)
			{
				while(N--)
				{
					printf("%s", "ABCD");
				}
				printf("\n");
			}

			return;
		}
};
		
int main()
{
	Solution s;
	s.c_solution();
	return 0;
}

