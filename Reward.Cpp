#include"Reward.hpp"

Reward::Reward(){
    this->pts=0;
    this->NORes=0;
}

double Reward::PTOM(){
    return (this->pts/10);
}

void Reward::setPts(int pts){
    this->pts=pts;
}

int Reward::getPts(){
    return this->pts;
}

int Reward::getNORes(){
    return this->NORes;
}

void Reward::updateNORes(){
    this->NORes++;
}
