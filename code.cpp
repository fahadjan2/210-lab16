// COMSC-210 | Lab 16 | Fahad Fawad Ahmad
// IDE used: Visual Studio
#include <iostream>
using namespace std;

const int COLOR_SIZE = 3;

//Colors class, includes setters and getters for each color value, as well as a print method to print all the values
class Color {
private:
    int red;
    int green;
    int blue;

public:
    int getRed() {return red;}
    int getGreen() {return green;}
    int getBlue() {return blue;}

    void setRed(int r) {red = r;}
    void setGreen(int g) {green = g;}
    void setBlue(int b) {blue = b;}

    void print() {
        cout << "Red: " << red << endl;
        cout << "Green: " << green << endl;
        cout << "Blue: " << blue << endl; 
    }
};

//Populating the data and printing
int main() {
    Color * colors = new Color[COLOR_SIZE];
    
    colors[0].setRed(5);
    colors[0].setGreen(8);
    colors[0].setBlue(59);

    colors[1].setRed(45);
    colors[1].setGreen(25);
    colors[1].setBlue(51);

    colors[2].setRed(57);
    colors[2].setGreen(85);
    colors[2].setBlue(95);

    for (int i = 0; i < COLOR_SIZE; i++) {
        colors[i].print();
    }

    delete [] colors;
}