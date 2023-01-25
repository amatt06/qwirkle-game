#include <gtest/gtest.h>
#include "Tile.h"

TEST(TileTest, Constructor)
{
    int value = 1;
    std::cout << "TileTest: Constructor" << std::endl;
    Tile *tile = new Tile();
    EXPECT_EQ(1, 1);
}