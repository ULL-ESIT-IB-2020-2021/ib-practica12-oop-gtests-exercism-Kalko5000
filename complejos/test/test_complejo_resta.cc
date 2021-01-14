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

TEST(SubTest, resta){
    EXPECT_EQ (Complejo({-1, -4}), Sub ({2, 3}, {3, 7}));
    EXPECT_EQ (Complejo({7, 11}), Sub ({10, 6}, {3, -5}));
}