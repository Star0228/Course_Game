#include "ViewModel.h"

void GameViewModel::handleKeyPress(int key) {
    switch (key) {
        case Qt::Key_Left:
            player->moveLeft(*obstacles);
        break;
        case Qt::Key_Right:
            player->moveRight(*obstacles);
        break;
        case Qt::Key_Up:
            player->moveUp(*obstacles);
        break;
        case Qt::Key_Down:
            player->moveDown(*obstacles);
        break;
        case Qt::Key_S:
            player->attack();
        break;
    }
}

void GameViewModel::handleKeyRelease(int key) {
    // 根据需要处理按键释放事件
}

void GameViewModel::updateGame() {
    // 更新游戏状态
    emit gameUpdated();
}

Background* GameViewModel::getBackground() {
    return background;
}

Player* GameViewModel::getPlayer() {
    return player;
}

std::vector<Simple>* GameViewModel::getSmallEnemies() {
    return smallEnemies;
}

Boss* GameViewModel::getBoss() {
    return boss;
}