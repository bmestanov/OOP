//
// Created by bmestanov on 14.05.18.
//

#include <iostream>
#include "Button.h"
#include "TextButton.h"

int main13() {
    Color gray = Color(0.5, 0.5, 0.5); // Constructing color at address 140726081807056
    Button button(0, 0, gray);
    /*
     * Constructing view at address 140726081807088 (View part)
     * Copy-constructing color at address 140726081807128 (Button part - member-variables)
     * Constructing button at address 140726081807088 (Button part)
     *
     * Destructing button at address 140726081807088 (Button part)
     * Destructing color at address 140726081807128 (Button part - member-variables)
     * Destructing view at address 140726081807088 (View part)
     */

    TextButton textButton(0, 0, gray, "Text");
    /*
     * Constructing view at address 140726081807088 (View part)
     * Copy-constructing color at address 140726081807128 (Button part - member-variables)
     * Constructing button at address 140726081807088 (Button part)
     * Constructing text-button at address 140726081807088 (TextButton part)
     *
     * Destructing text-button at address 140726081807088 (TextButton part)
     * Destructing button at address 140726081807088 (Button part)
     * Destructing color at address 140726081807128 (Button part - member-variables)
     * Destructing view at address 140726081807088 (View part)
     */

    textButton.draw();
    /*
     * Drawing view at address 140726081807088
     * Drawing button at address 140726081807088
     * Drawing text-button at address 140726081807088
     */
    return 0; // Destructing color at address 140726081807056 (the "gray" instance)
}