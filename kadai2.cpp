/*
 * �`�������W�ۑ�
 *
 * ����m�F
 * OS: Windows 8
 *
 *���͂�����W�ɂ���
 *���W�̍ő�l�F0.89e+308
 *���W�̍ŏ��l�F-0.89e+308
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
		std::cout << i+1 << "�Ԗڂ̍��W���X�y�[�X��؂�œ��͂��Ă��������B\n";
		std::cin >> x[i] >> y[i];
	}

	std::cout << "����" << std::endl;
	std::cout << is_triangle(x[0], y[0], x[1], y[1], x[2], y[2]) << std::endl;


	////���e�X�g�R�[�h////
	std::cout << "�ȉ��A�e�X�g����" << std::endl;

	//2�_����v���Ă���
	std::cout << (is_triangle(9.5, 3.2, 2.0, 4.1, 2.0, 4.1) == false) << std::endl;
	std::cout << (is_triangle(-3.8, 1.9, -3.8, 1.9, 5.2, 8.7) == false) << std::endl;
	std::cout << (is_triangle(-3.0, -4.9, 7.0, 2.3, -3.0, -4.9) == false) << std::endl;
	//3�_����v���Ă���
	std::cout << (is_triangle(2.6, 4.9, 2.6, 4.9, 2.6, 4.9) == false) << std::endl;
	//3�_���꒼����ɂ���
	std::cout << (is_triangle(-9.0, 6.0, -6.0, 4.0, 3.0, -2.0) == false) << std::endl;
	std::cout << (is_triangle(6.4, 3.0, 6.4, 9.0, 6.4, -4.0) == false) << std::endl;
	std::cout << (is_triangle(2.0, 4.0, 7.0, 4.0, 8.0, 4.0) == false) << std::endl;
	//�O�p�`���\�������
	std::cout << (is_triangle(-2.8, 5.7, -2.8, 3.7, 0.0, 4.0) == true) << std::endl;
	std::cout << (is_triangle(2.0, -4.0, 3.0, -6.0, 4.0, 6.0) == true) << std::endl;

	return 0;
}