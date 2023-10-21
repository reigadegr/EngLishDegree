#include <iostream>
#include <vector>
#include"LOG.hpp"
#include "pd.h"
auto pd(std::string word, std::string input, int &error_sum) -> bool;
struct td {
	std::string tm;
	std::string xx;
	std::string da;
};
int error_sum = 0;
auto runMain(std::vector<td> &wt)->void {

//#include "u1.h"
//#include "u2.h"
#include "u3.h"

    for (const auto &word : wt) {
        
        if (word.tm == "" || word.da == "" || word.xx == "") {
            continue;
        }
        LOG("题目：", word.tm);
        LOG("\n", word.xx, "\n");
        std::string input;
        std::cin >> input;
        pd(word.da, input, error_sum);
    };
};


auto main(int argc ,char **argv)->int {
    LOG("全部输入小写字母。输入666可以查看当前题目答案");
	std::vector<td> wt;
	runMain(wt);
    LOG("错误次数：", error_sum);
    LOG("测试已结束");
    std::cin.get();
    std::cin.get();

}
