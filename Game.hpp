#ifndef __GAME_H__
#define __GAME_H__

#include <iostream>
#include <utility>
#include <vector>
#include "Helper.hpp"
#include "GridItem.hpp"
#include "Goal.hpp"
#include "Interactable.hpp"
#include "Obstacle.hpp"
#include "Robot.hpp"

using namespace std;

enum GameState{
    WIN,
    LOSE,
    PLAYING
};

class Game
{
protected:
    int width;
    int height;
    vector<GridItem*> obstacles;
    GridItem* robot = nullptr;
    GridItem* goal = nullptr;
    GameState gameState;
public:
    Game(int width, int height, std::vector<std::pair<int, int>> obstacleCoordinates){
        this->width = width;
        this->height = height;
        robot = new Robot(width, height);
        goal = new Goal(width, height);
        pair<int, int> pos_robot = robot->getCoordinates();
        pair<int, int> pos_goal = goal->getCoordinates();

        for(int i = 0; i<obstacleCoordinates.size(); i++){
            pair<int, int> pos = obstacleCoordinates[i];
            if(pos!=pos_robot && pos!=pos_goal){
                GridItem* newObstacle = new Obstacle(pos.first, pos.second, width, height);
                obstacles.push_back(newObstacle);
            }
        }
        gameState = PLAYING;
    }
    bool displayState(){
        string state;
        if(gameState == WIN){
            state = "You win!";
            cout << state << endl;
            return true;
        }
        else if(gameState == LOSE){
            state = "You lose :(";
            cout << state << endl;
            return true;
        }
        else{
            state = "Game on";
            cout << state << endl;
            return false;
        }
        return false;;
    }
    void movePlayer(int dx, int dy){
        if(gameState != PLAYING){
            displayState();
            return;
        }
        Robot* robot = static_cast<Robot*>(robot);
        if(gameState == PLAYING){
            if(robot->move(dx, dy)){
                for(GridItem* obs:obstacles){
                    if(static_cast<Obstacle*>(obs)->interact(robot) && robot->getHealth() > 0){
                        if(robot->getHealth() == 0){
                            gameState = LOSE;
                            displayState();
                            return;
                        }
                    }  
                }
                if(static_cast<Goal*>(goal)->interact(robot) && robot->getHealth() > 0){
                    gameState = WIN;
                    displayState();
                    return;
                }
                gameState = PLAYING;
                displayState();
                return;
            }
        }
    }
    void printGrid(){
        pair<int, int> pos_robot = robot->getCoordinates();
        pair<int, int> pos_goal = goal->getCoordinates();
        for(int i = 0; i<width; i++){
            for(int j = 0; j<height; j++){
                if(pos_robot.first == i && pos_robot.second == j){
                    cout << 'P';
                }
                else{
                    int obs = 0;
                    for(GridItem* obs:obstacles){
                        pair<int, int> pos_obs = obs->getCoordinates();
                        if(pos_obs.first == i && pos_obs.second == j){
                            cout << 'O';
                            obs++;
                            break;
                        }
                    }
                    if(obs == 0){
                        if(pos_goal.first == i && pos_goal.second == j){
                            cout << 'G';
                        }
                        else{
                            cout << '_';
                        }
                    }
                }
            }
            cout << "\n";
        }
    }
};



#endif