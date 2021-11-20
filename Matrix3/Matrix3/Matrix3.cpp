#include "Matrix3.h"

Matrix3::Matrix3()
{
}

Matrix3::Matrix3(double t_a11, double t_a12, double t_a13, double t_a21, double t_a22, double t_a23, double t_a31, double t_a32, double t_a33)
{
}

Matrix3 Matrix3::operator+(const Matrix3 t_other) const
{
	return Matrix3();
}

Matrix3 Matrix3::operator-(const Matrix3 t_other) const
{
	return Matrix3();
}

Matrix3 Matrix3::operator*(const Matrix3 t_other) const
{
	return Matrix3();
}

Matrix3 Matrix3::operator*(const Vector3 t_vector) const
{
	return Matrix3();
}

Matrix3 Matrix3::operator*(const double t_scale) const
{
	return Matrix3();
}

Matrix3 Matrix3::transpose() const
{
	return Matrix3();
}

double Matrix3::determinant() const
{
	return 0.0;
}

Matrix3 Matrix3::inverse() const
{
	return Matrix3();
}

Matrix3 Matrix3::rotationZ(const double t_angleRadians)
{
	return Matrix3();
}

Matrix3 Matrix3::rotationY(const double t_angleRadians)
{
	return Matrix3();
}

Matrix3 Matrix3::rotationX(const double t_angleRadians)
{
	return Matrix3();
}

Matrix3 Matrix3::translation(const Vector3 t_displacement)
{
	return Matrix3();
}

Matrix3 Matrix3::scale(const double t_scalingfactor)
{
	return Matrix3();
}
