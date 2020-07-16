/*
 * チャレンジ課題
 *
 * 動作確認
 * OS: Windows 8
 *
 *入力する座標について
 *座標の最大値：0.89e+308
 *座標の最小値：-0.89e+308
 */

#include<iostream>

bool is_triangle(double x0, double y0, double x1, double y1, double x2, double y2) {
	if (x0 != x1 && x0 != x2) {
		double grad0, grad1;

		grad0 = (y1 - y0) / (x1 - x0);
		grad1 = (y2 - y0) / (x2 - x0);

		if (grad0 == grad1) {
			return false;
		}
		else {
			return true;
		}
	}
	else {
		if (x0 == x1 && x0 == x2) {
			return false;
		}
		else {
			if (x0 == x1 && y0 == y1) {
				return false;
			}
			else if (x0 == x2 && y0 == y2) {
				return false;
			}
			else {
				return true;
			}
		}
	}
}

int main(void) {
	double x[3], y[3];

	for (int i = 0; i < 3; i++) {
		std::cout << i+1 << "番目の座標をスペース区切りで入力してください。\n";
		std::cin >> x[i] >> y[i];
	}

	std::cout << "結果" << std::endl;
	std::cout << is_triangle(x[0], y[0], x[1], y[1], x[2], y[2]) << std::endl;


	////下テストコード////
	std::cout << "以下、テスト結果" << std::endl;

	//2点が一致している
	std::cout << (is_triangle(9.5, 3.2, 2.0, 4.1, 2.0, 4.1) == false) << std::endl;
	std::cout << (is_triangle(-3.8, 1.9, -3.8, 1.9, 5.2, 8.7) == false) << std::endl;
	std::cout << (is_triangle(-3.0, -4.9, 7.0, 2.3, -3.0, -4.9) == false) << std::endl;
	//3点が一致している
	std::cout << (is_triangle(2.6, 4.9, 2.6, 4.9, 2.6, 4.9) == false) << std::endl;
	//3点が一直線上にある
	std::cout << (is_triangle(-9.0, 6.0, -6.0, 4.0, 3.0, -2.0) == false) << std::endl;
	std::cout << (is_triangle(6.4, 3.0, 6.4, 9.0, 6.4, -4.0) == false) << std::endl;
	std::cout << (is_triangle(2.0, 4.0, 7.0, 4.0, 8.0, 4.0) == false) << std::endl;
	//三角形が構成される
	std::cout << (is_triangle(-2.8, 5.7, -2.8, 3.7, 0.0, 4.0) == true) << std::endl;
	std::cout << (is_triangle(2.0, -4.0, 3.0, -6.0, 4.0, 6.0) == true) << std::endl;

	return 0;
}