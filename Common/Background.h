//
// Created by 16579 on 2024/7/9.
//

#ifndef DAD_N_ME_BACKGROUND_H
#define DAD_N_ME_BACKGROUND_H

#include <QWidget>
#include <QPainter>
#include <QImage>
#include <QRectF>
#include <QRandomGenerator>
#include "Common.h"
#include "ResourceManager.h"
#include "Animation.h"
class Background {
public:
    QColor backgroundColor; // 背景颜色
    QVector<QImage> obstacleImages;   // 障碍物图片
    bool obstaclePlaced;    // 是否已经放置障碍物
    std::vector<Point> positions;
public:
    Background(const QColor& color = Qt::white) : backgroundColor(color), obstaclePlaced(true){
        obstacleImages.append(ResourceManager::getInstance().getImage("../resource/background/house_brown.png"));
        positions.push_back({50, 50});
        obstacleImages.append(ResourceManager::getInstance().getImage("../resource/background/bush1.png"));
        positions.push_back({400,400});
    }

    // void setObstacleImage(const QString& imagePath) {
    //
    //     obstacleImage.load(imagePath);
    // }

    void draw(QPainter* painter, const QRectF& rect) {
        // 绘制背景颜色
        painter->fillRect(rect, backgroundColor);

        for(int i = 0; i < 2 ; i++) {
            painter->drawImage(positions[i].x, positions[i].y, obstacleImages[i]);
        }

    }
    void addObstacles(QVector<QRect>* obstacles){
        obstacles->append(QRect(50, 50, obstacleImages[0].width(), obstacleImages[0].height()));
        obstacles->append(QRect(400, 400, obstacleImages[1].width(), obstacleImages[1].height()));
    }
};

#endif //DAD_N_ME_BACKGROUND_H
