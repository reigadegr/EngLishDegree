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

struct xzs {
    std::string num;
    std::string daan;
};

auto pd(std::string word, std::string input, int &error_sum) -> bool {
    if (input == mmm) {
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
        pd(word, input, error_sum);
    }
    return true;
}
int error_sum = 0;
int count = 0;

auto main(int argc, char **argv) -> int {
    LOG("开始默写一卷十个单词,输入666可查看答案");

    // LOG("11.It is not necessary");
    /*
    std::vector<std::string> words1 = {
        "enjoyed", "research", "interested", "education",  "nicely",
        "certain", "staff",    "seek",       "additional", "consideration"};
*/
    std::vector<xzs> wk;
    wk.push_back(
        {"11.It is not necessary for you to speak like a ________ speaker",
         "native"});
    wk.push_back(
        {"12.The speaker is ________ about how to select her courses. ",
         "confused"});
    wk.push_back({"13.The teachers think that college education is "
                  "a(n)________ investment.",
                  "worthwhile"});
    wk.push_back(
        {"14.She thinks the quality is more important than the ________.",
         "prices"});
    wk.push_back(
        {"15.Many young people went to big cities to ________ more money.",
         "earn"});
    wk.push_back({"16.We should not be ________ when discussing the work of "
                  "the company.",
                  "personal"});

    wk.push_back({"17.Jack asks Professor Johnson for some ________ about "
                  "English pronunciation.",
                  "suggesstions"});
    wk.push_back(
        {"18.The flight on September ________, 2012 is delayed.", "14th"});
    wk.push_back(
        {"19.The teacher immediately ________ out the mistake.", "pointed"});
    wk.push_back(
        {"20.Now people treat a dogjust like a ________ of the family.",
         "member"});
    for (const auto &word : wk) {
        count++;
        LOG("输入第", count, "个单词");
        LOG("题目: ", word.num);
        std::string input;
        std::cin >> input;

        pd(word.daan, input, error_sum);
    }
    LOG("结束，按任意键退出");
    std::cin.get();
}
