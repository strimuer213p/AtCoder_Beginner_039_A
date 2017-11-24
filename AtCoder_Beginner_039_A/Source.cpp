/*
問題文
高橋君は高さが Acm、幅が Bcm、奥行きが Ccm の直方体を持っています。この直方体の表面積は何 cm2 でしょうか？
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