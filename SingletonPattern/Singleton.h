//
// Created by Tanzq on 2022-05-25.
//

#ifndef EXERCISECPP_SINGLETON_H
#define EXERCISECPP_SINGLETON_H

/*
 * 《设计模式》中的实现方式 -- 懒汉式
 *

class Singleton {
public:
    static Singleton* Instance();

protected:
    Singleton();

private:
    static Singleton* _instance;
};

*/

// Meyers’ Singleton

class Singleton {

private:

    Singleton();

public:
    static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }
};

/*
 * 饿汉式

class Singleton {
private:
    Singleton();
    Singleton(const Singleton &);

    struct InstanceCreator {
        InstanceCreator() {
            Singleton::m_instance = new Singleton;
        }
        ~InstanceCreator() {
            delete Singleton::m_instance;
            Singleton::m_instance = nullptr;
        }
    };
public:
    static Singleton& GetInstance() {
        return *m_instance;
    }

private:
    friend class InstanceCreator;
    static Singleton *m_instance;
    static InstanceCreator m_creator;
};
*/

#endif //EXERCISECPP_SINGLETON_H
