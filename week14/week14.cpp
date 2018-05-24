//
// Created by bmestanov on 22.05.18.
//


#include "../week13/View.h"
#include "../week13/Button.h"
#include "../week13/TextButton.h"

int main14() {
    View view;
    Button button;
    TextButton textButton;

    View *views[] = {&view, &button, &textButton};
    for (auto v : views) {
        v->draw();
    }
}