#pragma once

#include "GameObject.hpp"

class Monster : public GameObject
{
public:
    Monster();
    void Update() override;
};

