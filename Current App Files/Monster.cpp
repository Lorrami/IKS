#include <iostream>
#include "Monster.hpp"

Monster::Monster()
{
    Position = 100.0f;
    Size = 1.0f;
    FillColor = Color::Yellow;
    Rotation = 30;
}

void Monster::Update() {
    std::cout << "Monster" << std::endl;
}
