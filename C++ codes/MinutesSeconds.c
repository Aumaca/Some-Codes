/*
A certain radioactive material loses half of its mass every 50 seconds.
Given the initial mass in kilograms, construct an algorithm that calculates and displays the
time required for its mass to be less than 0.5 grams.
The time must be displayed in mmss format (mm-minutes,ss-seconds).
*/

#include <stdio.h>

int main()
{
    float massKG = 10;
    int minutes, seconds = 0;
    while (massKG >= 0.5)
    {
        seconds = seconds + 50;
        massKG = massKG / 2;
    }
    minutes = seconds / 60;
    seconds = seconds - minutes * 60;
    printf("%i:%i", minutes, seconds);
}