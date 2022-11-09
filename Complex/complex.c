#include <stdio.h>
#include <assert.h>
#include "complex.h"

/* Creation */ 
//Add your code here
COMPLEX CreateComplex(double real, double imaginary)
{
    COMPLEX create_complex;

    create_complex.real = real;
    create_complex.imaginary = imaginary;

    return create_complex;
}
// End of your code 

/* Destruction */ 
//Add your code here
void DestroyComplex(CPTR complex)
{
    complex->imaginary = 0;
    complex->real = 0;
}
// End of your code 

/* Addition */ 
//Add your code here
COMPLEX AddComplex(CPTR first, CPTR second)
{
    COMPLEX add_complex;

    add_complex.real = first->real + second->real;
    add_complex.imaginary = first->imaginary + second->imaginary;

    return add_complex;
}
// End of your code 

/* Subtraction */ 
//Add your code here
COMPLEX SubtractComplex(CPTR first, CPTR second)
{
    COMPLEX subtract_complex;

    subtract_complex.real = first->real - second->real;
    subtract_complex.imaginary = first->imaginary - second->imaginary;

    return subtract_complex;
}
// End of your code 

/* Multiplication */ 
//Add your code here
COMPLEX MultiplyComplex(CPTR first, CPTR second)
{
    COMPLEX multiply_complex;

    multiply_complex.real = first->real * second->real - first->imaginary * second->imaginary;
    multiply_complex.imaginary = first->real * second->imaginary + first->imaginary * second->real;

    return multiply_complex;
}
// End of your code 

/* Conjugate */ 
//Add your code here
COMPLEX ConjugateComplex(CPTR complex)
{
    COMPLEX Conjugate_complex;

    Conjugate_complex.imaginary = complex->imaginary * (-1);

    return Conjugate_complex;
}
// End of your code 

/* Division */ 
//Add your code here
COMPLEX DivideComplex(CPTR first, CPTR second)
{
    COMPLEX Divide_complex;

    Divide_complex.real = ((( first->real * second->real ) + (first->imaginary * second->imaginary)) / ((second->imaginary * second->imaginary ) + (second->real * second->real )));
    Divide_complex.imaginary = (((first->imaginary * second->real) - (first->real * second->imaginary)) / ((second->imaginary * second->imaginary ) + (second->real * second->real )));

    return Divide_complex;
}
// End of your code 

/* Printing */ 
//Add your code here
void PrintComplex(CPTR complex)
{
    if((complex->real) == 0)
    {
        printf("complex number is (%lf)i\n", complex->imaginary);
    }
    else if((complex->imaginary) == 0)
    {
        printf("complex number is %lf\n", complex->real);
    }
    else
    {
        printf("complex number is %lf + (%lf)i\n", complex->real, complex->imaginary);
    }
}
// End of your code 
