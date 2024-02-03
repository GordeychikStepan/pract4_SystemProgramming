// Practice4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");

    FILE* inputFile;

    if (fopen_s(&inputFile, "coordinates.txt", "r") != 0) {
        std::cout << "Невозможно открыть файл" << std::endl;
        return -1;
    }
    
    float x, y, z;
    fscanf_s(inputFile, "%f %f %f", &x, &y, &z);

    std::fclose(inputFile);

    std::cout << "Координаты: (" << x << ", " << y << ", " << z << ")" << std::endl;
    double distance = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    std::cout << "Расстояние от начала координат до точки: " << distance << std::endl;

    return 0;
}

