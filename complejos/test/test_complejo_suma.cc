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
    EXPECT_EQ(Complejo ({5, 10}), Add ({2, 3}, {3, 7}));
    EXPECT_EQ(Complejo({5, 1}), Add ({-2, 6}, {7, -5}));
}