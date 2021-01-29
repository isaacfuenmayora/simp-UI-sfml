#pragma once

class BaseUI {
protected:
    bool selected;
public:
    int x, y;
    virtual void display()=0;
};