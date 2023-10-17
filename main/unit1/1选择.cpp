#include <iostream>
#include <vector>
// #define LOG(x) std::cout << x << std::endl
template <typename... Args>
static void LOG(const Args &...args) {
    const auto printArg = [&](const auto &arg) { std::cout << arg; };
    (printArg(args), ...);
    std::cout << std::endl;
}
struct xzs {
    std::string num;
    std::string daan;
};

void pd(std::string word, std::string input, int &error_sum) {
    if (word == input) {
        LOG("正确,下一个\n");
        return;
    } else {
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
}
int error_sum = 0;

int main() {
    LOG("mat might");
    std::vector<xzs> xz;
    xz.push_back({"1-5", "ababa"});
    xz.push_back({"6-10", "bbaba"});
    xz.push_back({"21-25", "cabcb"});
    xz.push_back({"26-30(判断)", "fttff"});
    xz.push_back({"41-45", "cacad"});
    xz.push_back({"46-50", "bbdcd"});
    xz.push_back({"51-55", "acbab"});
    xz.push_back({"56-60", "adcbd"});
    xz.push_back({"61-65(多字母选择-1)", "bhdci"});
    xz.push_back({"66-70(多字母选择-2)", "efjag"});
    xz.push_back({"71-75", "cbcba"});
    xz.push_back({"76-80", "dcdbd"});
    xz.push_back({"81-85", "dccac"});
    xz.push_back({"86-90", "abaab"});
    xz.push_back({"漫漫长路", "an unending road"});
    xz.push_back({"出国旅行", "to travel abroad"});
    xz.push_back({"正常的社交生活", "a normal social life"});
    xz.push_back({"同卵双胞胎", "identical twins"});
    xz.push_back({"在休圣诞节假日", "to be on Christmas break"});
    xz.push_back({"目不转睛地看着我", "to look straight into my eyes"});
    xz.push_back({"说服他们寻求治疗", "to convince them to seek treatment"});
    // xz.push_back
    /*
98.	感染疾病	to contract a sickness/an illness
99.	关心的神色	a look of concern
100. 错过表演	to miss the performance

*/

    /*
        for (const auto &tm : xz) {
            LOG("输入编号为: ", tm.num, "的答案");
            LOG(tm.daan);
            // pd(tm.daan, input, error_sum);
        }
    */
    for (const auto &tm : xz) {
        LOG("输入编号为: ", tm.num, "的答案");
        std::string input;
        std::cin >> input;
        if (input == "666") {
            LOG("正确答案: ", tm.daan, "\n");
            LOG("重新输入: ");
            std::cin >> input;
        }
        pd(tm.daan, input, error_sum);
    }
}
