#include <iostream>
#include <utility>
#include "Helper.hpp"
#include "GridItem.hpp"
#include "Goal.hpp"
#include "Interactable.hpp"
#include "Obstacle.hpp"
#include "Robot.hpp"
#include "Game.hpp"

using namespace std;

int main(){
    std::vector<std::pair<int, int>> obstacleCoordinates = {{1, 1}, {2, 2}};
    Game newGame(5, 5, obstacleCoordinates);
    newGame.printGrid();
    newGame.movePlayer(1, 1);
    newGame.printGrid();

    return 0;
}