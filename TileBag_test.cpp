#include <gtest/gtest.h>
#include "TileBag.h"
#include "Player.h"
#include "Hand.h"

TEST(TileBagTest, FillBag)
{
    TileBag *tileBag = new TileBag();
    tileBag->fillTileBag();

    std::cout << "Tile bag size: " << tileBag->getSize() << std::endl;
    std::cout << "BAG_SIZE " << TileBag::MAX_BAG_SIZE << std::endl;

    ASSERT_TRUE(tileBag->getSize() == TileBag::MAX_BAG_SIZE);
}

TEST(TileBagTest, RemoveTilesFromFrontOfList)
{
    TileBag *tileBag = new TileBag();
    tileBag->fillTileBag();

    // Remove 1 tile from the tile bag
    tileBag->removeNodesFromFront(1);
    ASSERT_TRUE(tileBag->getSize() == TileBag::MAX_BAG_SIZE - 1);

    // Remove 2 more tiles from the tile bag
    tileBag->removeNodesFromFront(2);
    // 3 total tiles have been removed from the tile bag
    ASSERT_TRUE(tileBag->getSize() == TileBag::MAX_BAG_SIZE - 3);
}