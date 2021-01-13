#include <gtest/gtest.h>
#include "complejo.h"
#include "complejo.cc"
 
class ComplejoTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
  }
  
  virtual void TearDown() {
  }
};

TEST(AddTest, suma){
    Complejo complejo1 = {2, 3};
    Complejo complejo1 = {3, 7};
    EXPECT_EQ({5, 10}, Add(complejo1, complejo2));
    EXPECT_EQ({5, 1}, Add({-2, 6}, {7, -5}));
}

TEST(SubTest, resta){
    Complejo complejo1 = {2, 3};
    Complejo complejo1 = {3, 7};
    EXPECT_EQ({-1, -4}, Sub(complejo1, complejo2));
    EXPECT_EQ({7, 11}, Sub({10, 6}, {3, -5}));
}