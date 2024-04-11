#include <iostream>
#include <cmath>

using namespace std;

class Value
{
protected:
	int coordinates_to_vector_x;
	int coordinates_to_vector_y;
	double side_length;
	double side_width;
public:
	Value(int coordinates_to_vector_x = 0, int coordinates_to_vector_y = 0)
	{
		this->coordinates_to_vector_x = coordinates_to_vector_x;
		this->coordinates_to_vector_y = coordinates_to_vector_y;
	}

	Value(double side_length = 0, double side_width = 0)
	{
		this->side_length = side_length;
		this->side_width = side_width;
	}
};

class Length_Vector : public Value
{
public:
	Length_Vector(int coordinates_to_vector_x = 0, int coordinates_to_vector_y = 0) : Value(coordinates_to_vector_x, coordinates_to_vector_y) {}
	double Get_Length_Vector()
	{
		double length_vector = sqrt(pow(coordinates_to_vector_x, 2) + pow(coordinates_to_vector_y, 2));
		return abs(length_vector);
	}
};

class Area_Rectangle : public Value
{
public:
	Area_Rectangle(double side_length = 0, double side_width = 0) : Value(side_length, side_width) {}
	double Get_Area_Rectangle()
	{
		return side_length <= 0 || side_width <= 0 ? -1 : side_length * side_width;
	}
};

int main()
{
	/*int coordinates_A = 6;
	int coordinates_B = 8;

	Length_Vector vector_AB(coordinates_A,coordinates_B);
	double length_vector = vector_AB.Get_Length_Vector();
	cout << "Length vector = " << length_vector << endl;*/

	double side_length = 3.4;
	double side_width = 4.3;

	Area_Rectangle area_rectangle_1(side_length, side_width);
	double result = area_rectangle_1.Get_Area_Rectangle();
	result<=0 ? cout<<"Error!\n" : cout << "Area rectangle = " << result << endl;


	return 0;
}