#pragma once
#include <iostream>
#include <vector>
#include"LOG.hpp"
auto pd(std::string word, std::string input, int& error_sum) -> bool {
    if (input == "666") {

        LOG("��ȷ��: ", word, "\n");
        LOG("��������: ");
        std::cin >> input;
    }
    if (word == input) {
        LOG("��ȷ,��һ��\n");
        return true;
    }
    else {
        error_sum++;
        LOG("����,����һ��");
        LOG("�Ѿ�����", error_sum, "��\n");
        std::cin >> input;
        if (input == "666") {
            LOG("��ȷ��: ", word, "\n");
            LOG("��������: ");
            std::cin >> input;
        }
        pd(word, input, error_sum);
    }
    return true;
}