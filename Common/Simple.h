//
// Created by 16579 on 2024/7/9.
//

#ifndef DAD_N_ME_SIMPLE_H
#define DAD_N_ME_SIMPLE_H

#include <QWidget>
#include <QApplication>
#include <QPainter>
#include <QTimer>
#include <QImage>
#include <QDebug>
#include <QString>
#include <cmath>
#include <vector>
#include <cmath>
#include <QHash>
#include <cstdlib>
#include <iostream>
#include <QKeyEvent>
#include <QPainter>
#include <utility> // for std::exchange


#include "Common.h"

class Simple {
private:
    const float SPEED = 2;
    float speed = SPEED; // 当前速度，可以为正或负
    Point position;

    bool isHit = false;

    int hit_timer = 0;
    bool FacingRight = true;

    bool isReversed = false; // 速度是否反向

public:
    Simple(float startX = 20, float startY = 200)
            : position{startX, startY} {}

    // 移动构造函数
    Simple(Simple&& other) noexcept{
        *this = std::move(other);
    }

    // 移动赋值运算符
    Simple& operator=(Simple&& other) noexcept {
        if (this != &other) {
            position = other.position;
            isHit = other.isHit;
            hit_timer = other.hit_timer;
            isHit = other.isHit;
            isReversed = other.isReversed;
            speed = other.speed;
        }
        return *this;
    }

    void move() {
        position.x += speed;
    }


    Point getPosition() const {
        return position;
    }

    bool GetIsHit(){
        return isHit;
    }

    void Change_IsHit(bool signal){
        isHit = signal;
    }

    int GetTimer(){
        return hit_timer;
    }

    bool GetFacingRight(){
        return FacingRight;
    }

    void AddTimer(int adder){
        hit_timer += adder;
    }

    void ResetTimer() {
        hit_timer = 0;
    }
    void checkCollision(const QRect& obstacle) {
        QRect playerRect(position.x, position.y, 10, 20);
        if (playerRect.intersects(obstacle)) {
            speed = -speed; // 反转速度
            //isReversed = !isReversed; // 更新反向状态
        }
    }
};


#endif //DAD_N_ME_SIMPLE_H