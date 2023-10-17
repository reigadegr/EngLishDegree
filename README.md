# EngLishDegree
英语学位考试，冲！
## 如何使用
```bash
#环境构建(termux)
pkg install clang -y && pkg add ndk-multilib -y
#clone项目
git clone https://github.com/reigadegr/EngLishDegree --depth 1 -b main
#以unit1为例
cd $(pwd)/EngLishDegree/main/unit1
sh build.sh
#执行
./1选择.cpp_elf
#或者
./1短语.cpp_elf
```
