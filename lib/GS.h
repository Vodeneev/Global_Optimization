#pragma once
#include "FRandom.h"

double ArgMaxEl(std::vector<double> a);

double GlobalSearch(FRandom f, double a, double b);

double GlobalSearch_with_3_arg(double a, double b, double c);

pair<double, double> GlobalSearchMultivariate(double a1, double b1, double a2, double b2);

int GlobalSearchCounter(FRandom f, double a, double b);

