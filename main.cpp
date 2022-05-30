#include <iostream>
#include <map>
using namespace std;

typedef void (*FunctionPoint)();  // 定义函数指针

// 定义运行函数id
enum ERunID{
    SingletonPattern // 单例模式运行代码
}RunID;

// 将函数和运行函数ID绑定起来，方便调用
map<ERunID, FunctionPoint> Functions;

void init();
int main() {
    init();
    return 0;
}

void init(){

}
