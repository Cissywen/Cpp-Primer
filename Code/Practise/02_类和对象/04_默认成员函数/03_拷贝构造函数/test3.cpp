// 理解什么是浅拷贝
// 浅拷贝指的是在我们复制一个对象时，对象内的资源并没有同时复制一份，只是简单的让新的指针指向了旧的内容
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

class Age 
{
public:  

  Age(const char* name, int age)
  {
    _age = age;
    _name = name;
  }


  void print()
  {
    cout << _name << " " << _age  << endl;
  }

  void print_address()
  {
    printf("%p\n", _name);
  }
  // 我们可以看到，两个对象的 _name 中存放的内容是一样的，也就是那个字符串 "Shepard"
  // 这就是一种浅拷贝，但是其实这里我们并没有用到拷贝构造，请到 test5.cpp 中进一步查看拷贝构造的情况


private:
  const char* _name;
  int _age;
};


int main(void){

  Age n1("Shepard", 20);
  Age n2(n1); 
  n2.print();

  n1.print_address();
  n2.print_address();

  return 0;
}
