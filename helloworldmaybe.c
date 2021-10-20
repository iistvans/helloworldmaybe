#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float userInput;
    printf("Seed: ");
    scanf("%f", &userInput);

    //                         H               e                l                   l                o                 w               o                r               l                 d
    float userArray[] = {(userInput/4.4), (userInput/4.1), (userInput/3.9), (userInput/2.47), (userInput/2.45), (userInput/2.4), (userInput/3), (userInput/3.1), (userInput/2.03), (userInput/6)};

    int a;
    char userLetters[] = {'H'};
    for(a = 0; a <= 10; a++) {
        userArray[a] = (3.5*(cos(userArray[a])))+3.5;
        userArray[a] = floor(userArray[a]);
        if (userArray[a] == 0.0) {
            userLetters[a] = 'H';
        }
        if (userArray[a] == 1.0) {
            userLetters[a] = 'e';
        }
        if (userArray[a] == 2.0) {
            userLetters[a] = 'l';
        }
        if (userArray[a] == 3.0) {
            userLetters[a] = 'o';
        }
        if (userArray[a] == 4.0) {
            userLetters[a] = 'W';
        }
        if (userArray[a] == 5.0) {
            userLetters[a] = 'r';
        }
        if (userArray[a] == 6.0) {
            userLetters[a] = 'd';
        }

    }
    printf("%c%c%c%c%c %c%c%c%c%c!", userLetters[0], userLetters[1], userLetters[2], userLetters[3], userLetters[4], userLetters[5], userLetters[6], userLetters[7], userLetters[8], userLetters[9], userLetters[10]);

    return 0;

}
