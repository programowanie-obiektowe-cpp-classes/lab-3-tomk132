#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj

    unsigned int temp_towar = 0; 
    unsigned int zaglowce_liczba = 0;

    while (temp_towar < towar) {
        Stocznia stocznia{};
        Statek*  st1 = stocznia();
        temp_towar += st1->transportuj();

        if ((dynamic_cast< Zaglowiec* >(st1)) != NULL) {
            zaglowce_liczba += 1;

            delete st1;
        }
    }


    return zaglowce_liczba;
}