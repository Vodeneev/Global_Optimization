#pragma once
#include <iostream>
#include "stdio.h"
#include "math.h"
#include <algorithm>
#include "vector"
#include "iterator"
#include "time.h"
using namespace std;

class FRandom
{
    double PI = 3.1415926535897932384626433832795;
    int HH_COUNT = 4;
    double A[20];
    double B[20];


public:
    FRandom();
   
    double GetFuncValue(double x);
    
    double leftBorder();

    double rigthBorder();

    friend ostream& operator<<(ostream& out, const FRandom& F)
    {
        for (int i = 0; i < F.HH_COUNT; i++)
            out << F.A[i] << "*sin(" << i << "* 2 * PI * x)" << ' ' << F.B[i] << "*cos(" << i << "* 2 * PI * x)";
        return out;
    }

};

double function(double y1, double y2);
