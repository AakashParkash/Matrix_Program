#include <limits.h>
#include "Matrix.h"
#include "gtest/gtest.h"

TEST(AddTest, Blah) {
	Matrix a(2,2);
	a.number[0][0] = 3;
	a.number[0][1] = 5;
	a.number[1][0] = 9;
	a.number[1][1] = 4;
	Matrix b(2,2);
	b.number[0][0] = 5;
	b.number[0][1] = 2;
	b.number[1][0] = 5;
	b.number[1][1] = 1;
	Matrix c(2,2);
	c.number[0][0] = 8;
	c.number[0][1] = 7;
	c.number[1][0] = 14;
	c.number[1][1] = 5;
  EXPECT_EQ(a+b, c);
}

TEST(MultiplyTest, Blah2) {
	Matrix a(2,2);
	a.number[0][0] = 3;
	a.number[0][1] = 5;
	a.number[1][0] = 9;
	a.number[1][1] = 4;
	Matrix b(2,2);
	b.number[0][0] = 5;
	b.number[0][1] = 2;
	b.number[1][0] = 5;
	b.number[1][1] = 1;
	Matrix c(2,2);
	c.number[0][0] = 40;
	c.number[0][1] = 11;
	c.number[1][0] = 65;
	c.number[1][1] = 22;
  	EXPECT_EQ(a*b, c);
}

TEST(MultiplyAddTest, Blah3) {
	Matrix a(2,2);
	a.number[0][0] = 3;
	a.number[0][1] = 5;
	a.number[1][0] = 9;
	a.number[1][1] = 4;
	Matrix b(2,2);
	b.number[0][0] = 5;
	b.number[0][1] = 2;	
	b.number[1][0] = 5;
	b.number[1][1] = 1;
	Matrix c(2,2);
	c.number[0][0] = 8;
	c.number[0][1] = 3;
	c.number[1][0] = 1;
	c.number[1][1] = 4;
	Matrix d(2,2);
	d.number[0][0] = 48;
	d.number[0][1] = 14;
	d.number[1][0] = 66;
	d.number[1][1] = 26;
	EXPECT_EQ(a*b+c, d);

}