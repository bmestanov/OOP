//
// Created by bmestanov on 15.05.18.
//

#ifndef OOP_VIEW_H
#define OOP_VIEW_H


class View {
public:

    View(double x = 0, double y = 0, double sizeX = 0, double sizeY = 0);

    View(const View &);

    View &operator=(const View &);

    virtual ~View();

    double getX() const;

    double getY() const;

    double getSizeX() const;

    double getSizeY() const;

    virtual void draw() const;

private:
    double x;
    double y;
    double sizeX;
    double sizeY;
};


#endif //OOP_VIEW_H
