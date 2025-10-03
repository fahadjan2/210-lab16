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
    //Getter/Setters
    int getRed() {return red;}
    int getGreen() {return green;}
    int getBlue() {return blue;}
    void setRed(int r) {red = r;}
    void setGreen(int g) {green = g;}
    void setBlue(int b) {blue = b;}

    //Constructors
    Color() {red = 0; green = 0; blue = 0;}
    Color(int r) {red = r; green = 0; blue = 0;}
    Color(int r, int g, int b) {red = r; green = g; blue = b;}

    void print() {
        cout << "Red: " << red << endl;
        cout << "Green: " << green << endl;
        cout << "Blue: " << blue << endl; 
    }
};

//Populating the data and printing
int main() {
    Color * colors = new Color[COLOR_SIZE];


    for (int i = 0; i < COLOR_SIZE; i++) {
        colors[i].print();
    }

    delete [] colors;
}