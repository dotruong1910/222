#include <iostream>

using namespace std;

struct complexNumber
{
    double realPart,imaginaryPart;
    complexNumber()
    {
        realPart = 0;
        imaginaryPart = 0;
    }
    complexNumber(double initRealPart,double initImaginaryPart)
    {
        // your code here
        initRealPart = realPart;
        initImaginaryPart =imaginaryPart;
        
    }
    complexNumber multiply(complexNumber other)
    {
        // your code here
        complexNumber multi;
        multi.realPart = (realPart*other.realPart)-(imaginaryPart)*(other.imaginaryPart);
        multi.imaginaryPart= realPart*other.imaginaryPart + imaginaryPart*other.realPart;
        return multi;
    }
};

int main()
{
    double realPart,imaginaryPart;
    //cin >> realPart >> imaginaryPart;
    complexNumber complex1(realPart,imaginaryPart);
    cin >> complex1.realPart >> complex1.imaginaryPart;
    complexNumber complex2(realPart,imaginaryPart);
    cin >> complex2.realPart >> complex2.imaginaryPart;
    complexNumber product = complex1.multiply(complex2);
    cout << product.realPart << " " << product.imaginaryPart << endl;
    return 0;
}
