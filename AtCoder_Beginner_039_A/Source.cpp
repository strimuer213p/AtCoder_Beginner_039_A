/*
��蕶
�����N�͍����� Acm�A���� Bcm�A���s���� Ccm �̒����̂������Ă��܂��B���̒����̂̕\�ʐς͉� cm2 �ł��傤���H
*/
#include<iostream>

int main() {
	int vertical, side, height,longitudinal_side,transerse_plane,upper_surface;
	std::cin >> vertical >> side >> height;
	
	longitudinal_side = vertical*height;
	transerse_plane = side*height;
	upper_surface =vertical*side;

	std::cout << 2*longitudinal_side + 2*transerse_plane + 2*upper_surface << std::endl;
	return 0;
}