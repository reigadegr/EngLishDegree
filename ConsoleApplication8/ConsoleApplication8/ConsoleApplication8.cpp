#include <iostream>
#include <vector>
#include"LOG.hpp"
#include "pd.h"
struct td {
	std::string tm;
	std::string xx;
	std::string da;
};
void runMain(std::vector<td>& wt) {
	#include "u1.h";
	for (const auto& word : wt) {
		if (word.tm == "" || word.da == "" || word.xx == "")
		{
			continue;
		}
		LOG("题目：", word.tm);
		LOG("选项: ", word.xx, "\n");
		std::string input;
		std::cin >> input;
		pd(word.da, input, error_sum);
	}
}

int error_sum = 0;
auto main(int argc ,char **argv)->int {
	std::vector<td> wt;
	runMain(wt);
}
