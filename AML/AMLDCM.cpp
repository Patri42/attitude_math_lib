#include "AMLDCM.h"
#include "AMLVector3.h"
#include <cmath>

namespace AML
{

    const Matrix33 DCM::rotationX(double theta){}
    const Matrix33 DCM::rotationY(double theta){}
    const Matrix33 DCM::rotationZ(double theta){}

    bool isValidDCM(const Matrix33& dcm, double tol){}
    void normalise(Matrix& dcm){}

    // DCM Kinematic Functions
    Matrix33 integrateDCM(const Matrix33& dcm, const Matrix33& dcmRates, double dt){}
    Matrix33 dcmKinematicRates_BodyRates (const Matrix33& dcm, const Vector3& bodyRates){}
    Matrix33 dcmKinematicRates_WorldRates (const Matrix33& dcm, const Vector3& bodyRates){}

};