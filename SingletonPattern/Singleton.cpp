//
// Created by Tanzq on 2022-05-25.
//

#include "Singleton.h"

/*
 * 《设计模式》中的实现方式 -- 懒汉式
 *

// 对静态变量进行初始化
Singleton* Singleton::_instance = nullptr;

// 使用默认的构造函数
Singleton::Singleton() = default;

// 获得对应的实例
Singleton *Singleton::Instance() {
    if (!_instance){
        _instance = new Singleton;
    }
    return _instance;
}

 */
Singleton::Singleton() = default;
