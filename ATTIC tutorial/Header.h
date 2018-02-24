#pragma once
#ifndef Test
struct Test {
  int num;
  int getNum() {
    return this->num;
  }
  Test(int a) {
    this->num = a;
  }
};
#endif