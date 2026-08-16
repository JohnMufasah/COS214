#ifndef OBSTACLE_H
#define OBSTACLE_H

class Obstacle
{
public:
    virtual void describe() = 0;

    virtual ~Obstacle() {}
};

class DesertObstacle : public Obstacle
{
public:
    void describe() override;
};

class ForestObstacle : public Obstacle
{
public:
    void describe() override;
};

#endif