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
    xz.push_back({"26-30", "fttff"});
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
