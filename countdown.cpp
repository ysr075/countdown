#include <iostream>
#include <time.h>

void sleep(int seconds) {
	int milli_seconds = 1000 * seconds;
	clock_t start_time = clock();
	while(clock() < start_time + milli_seconds);
}

void timer() {
	int num; std::string restart;
	std::cout << "\n" << "number in seconds: "; std::cin >> num;
	while (num > 0) {
		std::cout << "\n" << num--;
		sleep(1);
	}
	if (num == 0) {
		std::cout << "\n\n" << "time is up!." << "\n";
		sleep(1);
		std::cout << "\n" << "restart (y/n): "; std::cin >> restart;
		if (restart == "y") {
			system("cls");
			return timer();
		} else {
			exit(1);
		}
	}
}

int main() {
	timer();
	return 0;
}
