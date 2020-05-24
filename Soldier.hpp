//
// Created by avichai on 5/18/20.
//
#pragma once


class Soldier {
public:
    int health;
    int damage;
    int teamNum;



    Soldier(int health, int damage, int teamNum)
{
this->health=health;
this->damage=damage;
this->teamNum=teamNum;
}


    virtual void attack()=0;


};
