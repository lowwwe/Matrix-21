// peter lowe

#include "Vector3.h"
#include "Matrix3.h"

int main()
{
	Vector3 V1; // default vector {0,0,0,}
	Vector3 V2{ 3.0,2.0,1.0 }; // specific Vector {3,2,1}
	V1.x = 5.0; // edit x component

	Matrix3 M1; // default matrix { 0,0,0 / 0,0,0  / 0,0,0 }
	Matrix3 M2{ 1.25,2.5,3.75,-4.0,5.0,6.0,7.25,8.5,9.75 }; // specific matrix { 1.25,2.5,3.75 / -4.0,5.0,6.0 / 7.25,8.5,9.75 }
	
	M1.m11 = 5.0; // edit m11 element expecting 5.0
	M1.m13 = -6.0; // edit m11 element expecting -6.0
	M1.m31 = 7.5; // edit m11 element expecting 7.5
	
	return 0;
}