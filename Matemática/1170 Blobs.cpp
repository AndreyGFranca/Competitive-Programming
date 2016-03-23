#include <iostream>

int main (){
	int N = 0, dias = 0, i = 0;
	float C = 0;

	std::cin >> N;
	while (i <= N){
        dias = 0;
		std::cin >> C;
		if (C <= 0|| C >1000) return 0;
		while (C > 1){
			C /=2;
			dias++;
		}
		std::cout << dias << " dias" << std::endl;
	}

	return 0;
}
