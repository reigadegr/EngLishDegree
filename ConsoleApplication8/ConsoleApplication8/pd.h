#pragma once
#include <iostream>
#include <vector>
#include"LOG.hpp"
auto pd(std::string word, std::string input, int& error_sum) -> bool {
    if (input == "666") {

        LOG("正确答案: ", word, "\n");
        LOG("重新输入: ");
        std::cin >> input;
    }
    if (word.find(input)!=std::string::npos) {
        LOG("正确,下一个\n");
        return true;
    }
    else {
        error_sum++;
        LOG("错误,再试一次");
        LOG("已经错了", error_sum, "次\n");
        std::cin >> input;
        if (input == "666") {
            LOG("正确答案: ", word, "\n");
            LOG("重新输入: ");
            std::cin >> input;
        }
        pd(word, input, error_sum);
    }
    return true;
}