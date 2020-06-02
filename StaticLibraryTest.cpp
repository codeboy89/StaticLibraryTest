#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

#include <CanBusUtility\CanBusUtility\CanBusUtility.h>
//auto start = std::chrono::steady_clock::now();

//ConsoleDisplayTable* cdt;
int loopCount1 = 0;
int loopCount2 = 0;
int loopCount3 = 0;
//std::thread t;
//TimerTaskQueue* ttq;
int main()
{
	//cdt = new ConsoleDisplayTable();
	//std::thread t([]() {
	//	ttq = TimerTaskQueue::getInstance();

	//	ttq->registerTask(500, []() -> void {
	//		auto end = std::chrono::steady_clock::now();
	//		std::chrono::duration<double> elapsed_seconds = end - start;
	//		if (elapsed_seconds.count() > 3) {
	//			cdt->add(2, "elapsed time t500: " + std::to_string(++loopCount1));
	//			cdt->add(3, "elapsed time t1000: " + std::to_string(loopCount1 * 2));
	//		}
	//		});

	//	while (true) {
	//	}
	//	});
	//t.join();
	CanBusUtility* canBusUtility = new CanBusUtility();


	return 0;

}
