#include <iostream>
#include <vector>
#include"LOG.hpp"
#include "pd.h"
struct td {
	std::string tm;
	std::string xx;
	std::string da;
};
int error_sum = 0;
void runMain(std::vector<td> &wt);
void runMain(std::vector<td> &wt) {
	//#include "u1.h"
	#include "u2.h"

	for (const auto& word : wt) {
		if (word.tm == "" || word.da == "" || word.xx == "")
		{
			continue;
		}
		LOG("题目：", word.tm);
		LOG("\n", word.xx, "\n");
		std::string input;
		std::cin >> input;
		pd(word.da, input, error_sum);
	}
}


auto main(int argc ,char **argv)->int {
    LOG("全部输入小写字母");
	std::vector<td> wt;
	runMain(wt);
    LOG("测试已结束");
    std::cin.get();
    std::cin.get();

}
