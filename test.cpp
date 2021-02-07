#include <iostream>
#include "pch.h"
#include "gtest/gtest.h"

TEST(LinkedList, pushFront)
{
    LinkedList<int> list;
    list.pushFront(7);
    list.pushFront(13);
    ASSERT_TRUE(list[1] == 7);
    ASSERT_TRUE(list[0] == 13);

}

TEST(LinkedList, pushBack)
{
    LinkedList<int> list;
    list.pushBack(46);
    list.pushBack(28);
    ASSERT_TRUE(list[1] == 28);
    ASSERT_TRUE(list[0] == 46);
}


TEST(LinkedList, popFront)
{
    LinkedList<int> list;
    list.pushBack(7);
    list.pushBack(13);
    ASSERT_TRUE(list.popFront() == 7);
    ASSERT_TRUE(list.popFront() == 13);
    ASSERT_TRUE(list.getSize() == 0);
}

/*TEST(LinkedList, popBack)
{
    LinkedList<int> list;
    list.pushBack(2);
    list.pushBack(1);
    ASSERT_TRUE(list.popBack() == 1);
    ASSERT_TRUE(list.popBack() == 2);
    ASSERT_TRUE(list.getSize() == 0);
}*/

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}