#include "complex.h"
#include <stdio.h>
#include <math.h>

boolean IsCOMPLEXValid(float Re, float Im) {
    return true; // Semua bilangan real valid untuk bilangan kompleks
}

void CreateComplex(COMPLEX *C, float Re, float Im) {
    Real(*C) = Re;
    Imag(*C) = Im;
}

void BacaCOMPLEX(COMPLEX *C) {
    float Re, Im;
    scanf("%f %f", &Re, &Im);
    CreateComplex(C, Re, Im);
}

void TulisCOMPLEX(COMPLEX C) {
    if (Imag(C) >= 0) {
        printf("%.2f+%.2fi\n", Real(C), Imag(C));
    } else {
        printf("%.2f%.2fi\n", Real(C), Imag(C));
    }
}

COMPLEX AddCOMPLEX(COMPLEX C1, COMPLEX C2) {
    COMPLEX hasil;
    CreateComplex(&hasil, Real(C1) + Real(C2), Imag(C1) + Imag(C2));
    return hasil;
}

COMPLEX SubtractCOMPLEX(COMPLEX C1, COMPLEX C2) {
    COMPLEX hasil;
    CreateComplex(&hasil, Real(C1) - Real(C2), Imag(C1) - Imag(C2));
    return hasil;
}

COMPLEX MultiplyCOMPLEX(COMPLEX C1, COMPLEX C2) {
    COMPLEX hasil;
    float a = Real(C1), b = Imag(C1), c = Real(C2), d = Imag(C2);
    CreateComplex(&hasil, (a * c) - (b * d), (a * d) + (b * c));
    return hasil;
}

COMPLEX DivideCOMPLEX(COMPLEX C1, COMPLEX C2) {
    COMPLEX hasil;
    float a = Real(C1), b = Imag(C1), c = Real(C2), d = Imag(C2);
    float penyebut = (c * c) + (d * d);
    
    if (penyebut == 0) {
        CreateComplex(&hasil, 0, 0);
    } else {
        float bagianReal = ((a * c) + (b * d)) / penyebut;
        float bagianImajiner = ((b * c) - (a * d)) / penyebut;
        CreateComplex(&hasil, bagianReal, bagianImajiner);
    }
    return hasil;
}

float AbsCOMPLEX(COMPLEX C) {
    return sqrt(Real(C) * Real(C) + Imag(C) * Imag(C));
}

COMPLEX ConjugateCOMPLEX(COMPLEX C) {
    COMPLEX hasil;
    CreateComplex(&hasil, Real(C), -Imag(C));
    return hasil;
}

boolean CEQ(COMPLEX C1, COMPLEX C2) {
    return (Real(C1) == Real(C2)) && (Imag(C1) == Imag(C2));
}

boolean CNEQ(COMPLEX C1, COMPLEX C2) {
    return !CEQ(C1, C2);
}