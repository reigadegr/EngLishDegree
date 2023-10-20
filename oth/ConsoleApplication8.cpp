#include <iostream>
#include <vector>
#include"LOG.hpp"
#include "pd.h"
struct td {
	std::string tm;
	std::string xx;
	std::string da;
	//std::string w1, w2, w3, w4;
};
int error_sum = 0;
auto main(int argc ,char **argv[])->int {
	std::vector<td> wt;
    #include "u1.h"
	for (const auto& word : wt) {
		LOG("题目：", word.tm, "\n");
		LOG("选项: ", word.xx);
		std::string input;
		std::cin >> input;
		pd(word.da, input, error_sum);
	}
}