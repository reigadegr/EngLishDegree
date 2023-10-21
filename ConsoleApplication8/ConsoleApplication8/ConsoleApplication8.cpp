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
auto runMain(std::vector<td> &wt)->int {

     #include "u4.h"
   #include "u2.h"
    #include "u1.h"
  
    #include "u3.h"

     
    int seq = 0;

    for (const auto &word : wt) {
        if (word.tm == "" || word.da == "" || word.xx == "") {
            continue;
        }
        seq++;
        LOG("第", seq, "题：");
      
        LOG("题目：", word.tm);
        LOG("\n", word.xx, "\n");
        std::string input;
        std::cin >> input;
        pd(word.da, input, error_sum);
    }
    return seq;
   
}
auto oththing(int& error_sum,int& tmSum) -> void {
    LOG("您做了", tmSum, "个题");
    LOG("错误次数：", error_sum);
    LOG("正确率：", (double)(tmSum - error_sum) / tmSum);
    LOG("测试已结束，按任意键退出");
    std::cin.get();
    std::cin.get();
}

auto main(int argc ,char **argv)->int {
    LOG("全部输入小写字母。输入666可以查看当前题目答案");
	std::vector<td> wt;
	int tmSum=runMain(wt);
    oththing(error_sum,tmSum);
}
