#ifndef MOCKUSER_H
#define MOCKUSER_H

#include "User.h"
#include <gmock/gmock.h>
class MockUser: public User{
public:
  MOCK_METHOD(std::string, get_name, (), (override));
};


#endif