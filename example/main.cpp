#include <iostream>
#include <string>
#include <cmath>

#include "AML.h"

using namespace AML;

int main (int argc, char **argv){

    Matrix33 R = Matrix33::identity();

    for (unsigned int i = 0; i<100; i++)
    {
        Matrix33 Rdot = dcmKinematicRates_BodyRates(R, Vector3(1, 0.0, 0.0));
        R = integrateDCM (R, Rdot, 0.01);
        std::cout << R << std::endl;
    }

    return 0;


}


//     double data [3][3] = {{1.2, 3.2, 0.5}, {0.1, 1.0, 6.0}, {-4.1, 6.0, 8.0}};
//     Matrix33 Mat1 = Matrix33 (data);

//     Vector3 v1 = Vector3 (1,0,0);

//     Vector3 v2 = Mat1 * v1; 

//     std::cout << v1 << std::endl;
//     std::cout << Mat1 << std::endl;
//     std::cout << v2 << std::endl;

//     return 0;
// }