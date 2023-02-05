#include <gtest/gtest.h>
#include "../TileBag.h"
#include "../Player.h"
#include "../Hand.h"

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
    tileBag->removeTilesFromFront(1);
    ASSERT_TRUE(tileBag->getSize() == TileBag::MAX_BAG_SIZE - 1);

    // Remove 2 more tiles from the tile bag
    tileBag->removeTilesFromFront(2);
    // 3 total tiles have been removed from the tile bag
    ASSERT_TRUE(tileBag->getSize() == TileBag::MAX_BAG_SIZE - 3);
}

TEST(TileBagTest, ReplaceTileSize)
{
    TileBag *tileBag = new TileBag();
    tileBag->fillTileBag();
    int tileBagSize = tileBag->getSize();

    // Tile chosen at random to be replaced
    Tile *tileToReplace = tileBag->getTileAtIndex(TileBag::MAX_BAG_SIZE - 3);
    Colour tileToReplaceColour = tileToReplace->getColour();
    Shape tileToReplaceShape = tileToReplace->getShape();

    // The tile at the end of the TileBag
    Tile *tailTile = tileBag->getTail()->tile;
    Colour tailTileColour = tailTile->getColour();
    Shape tailTileShape = tailTile->getShape();

    // Put the tile to be replaced in the tile bag (add to back of list)
    tileBag->addTileToBag(tileToReplace);
    ASSERT_TRUE(tileBag->getSize() == tileBagSize + 1);
    // The tile to be replaced is now the tile tail tile
    ASSERT_TRUE(tileBag->getTail()->tile->getColour() == tileToReplaceColour);
    ASSERT_TRUE(tileBag->getTail()->tile->getShape() == tileToReplaceShape);

    // The tile at the front of the list
    Colour expectedNewTileColour = tileBag->getHead()->tile->getColour();
    Shape expectedNewTileShape = tileBag->getHead()->tile->getShape();

    // Draw a new tile from the tile bag (remove from front of list)
    Tile *newTile = tileBag->drawTile();

    ASSERT_TRUE(tileBag->getSize() == tileBagSize);
    ASSERT_TRUE(newTile->getColour() == expectedNewTileColour);
    ASSERT_TRUE(newTile->getShape() == expectedNewTileShape);
}

TEST(TileBagTest, ReplaceTileValue)
{
    TileBag *tileBag = new TileBag();
    tileBag->fillTileBag();
    int tileBagSize = tileBag->getSize();

    // Tile chosen at random
    Tile *tileToReplace = tileBag->getTileAtIndex(TileBag::MAX_BAG_SIZE - 3);
    Colour color = tileToReplace->getColour();
    Shape shape = tileToReplace->getShape();

    // Tiles are added to the end of the list
    tileBag->addTileToBag(tileToReplace);
    // Check that the tile added to the end of the list is the same
    // as the tile that was replaced
    ASSERT_TRUE(tileBag->getTileAtIndex(tileBagSize)->getColour() == color);
    ASSERT_TRUE(tileBag->getTileAtIndex(tileBagSize)->getShape() == shape);

    // Tiles are drawn from the front of the list
    // Check that the tile drawn from the front of the list is the same
    // as the replacement tile
    color = tileBag->getTileAtIndex(0)->getColour();
    shape = tileBag->getTileAtIndex(0)->getShape();
    Tile *replacementTile = tileBag->drawTile();
    ASSERT_TRUE(replacementTile->getColour() == color);
    ASSERT_TRUE(replacementTile->getShape() == shape);
}
