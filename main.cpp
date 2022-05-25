#include <iostream>
#include <map>
using namespace std;

typedef void (*FunctionPoint)();  // 定义函数指针

// 定义运行函数id
enum ERunID{
    SingletonPattern // 单例模式运行代码
};

ERunID RunID;
map<ERunID, FunctionPoint> Functions;


void init();
int main() {
    init();
    ERunID RunID = ERunID::SingletonPattern;
    return 0;
}

void init(){

}
