#include <iostream>
#include <vector>
#define mmm "666"
// #define LOG(x) std::cout << x << std::endl
template <typename... Args>
static void LOG(const Args &...args) {
    const auto printArg = [&](const auto &arg) { std::cout << arg; };
    (printArg(args), ...);
    std::cout << std::endl;
}

auto pd(std::string word, std::string input, int &error_sum, bool &ok) -> bool {
    if (input == mmm) {
        ok = false;
        LOG("正确答案: ", word, "\n");
        LOG("重新输入: ");
        std::cin >> input;
    }
    if (word == input) {
        LOG("正确,下一个\n");
        return true;
    } else {
        error_sum++;
        LOG("错误,再试一次");
        LOG("已经错了", error_sum, "次\n");
        std::cin >> input;
        if (input == mmm) {
            LOG("正确答案: ", word, "\n");
            LOG("重新输入: ");
            std::cin >> input;
        }
        pd(word, input, error_sum, ok);
    }
    return true;
}
int error_sum = 0;
int count = 0;
bool ok = true;
auto main(int argc, char **argv) -> int {
    LOG("开始默写一卷第二部分十个单词,输入666可查看答案");

    LOG("我想要感谢你");
    std::vector<std::string> words2 = {
        "enjoyed", "research", "interested", "education",  "nicely",
        "certain", "staff",    "seek",       "additional", "consideration"};
    for (const auto &word : words2) {
        count++;
        LOG("输入第", count, "个单词");

        std::string input;
        std::cin >> input;

        pd(word, input, error_sum, ok);
    }
    if (ok) {
        LOG("通过");
    } else {
        LOG("不通过");
    }
    LOG("结束，按任意键退出");
    std::cin.get();
}
