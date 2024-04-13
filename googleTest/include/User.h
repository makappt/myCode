#ifndef USER_H
#define USER_H
#include <iostream>
class User{
public:
  virtual std::string get_name() = 0;
};

#endif