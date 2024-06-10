#pragma once
/*
�������� ����� ���������� � �����������:
- ������� ����
- ���������� ������
- �������
- ����
- �����

����������� ������� ���������� ���������

�������� 3 ������ ����������.
*/

#include <string>
using std::string;
using std::cout;

class Auto {
	double dWhell;	//������� ������
	int cWhell; //���������� �����
	double dClearance;	// �������
	string Color; // ����
	string theBody; // �����
public:
	void SetdWhell(double dW) { dWhell = dW; }
	void SetcWhell(int cW) { cWhell = cW; }
	void SetdClearance(double dC) { dClearance = dC; }
	void SetColor(string color) { Color = color; }
	void SettheBody(string body) { theBody = body; }

	void Display() {
		cout << "���� � ��������� ������: " << dWhell
			<< "\n� ����������� ���� " << cWhell << "\n� ��������� � " << dClearance
			<< "\n� ������ \"" << Color << "\"\n� ����� ������ \"" << theBody << "\"\n";
	}
};

class AutoBuild {
	Auto autos;
public:
	Auto build() { return autos; }
	AutoBuild& dWhell(double value) {
		autos.SetdWhell(value);
		return *this;
	}
	AutoBuild& cWhell(int value) {
		autos.SetcWhell(value);
		return *this;
	}
	AutoBuild& Clearance(double value) {
		autos.SetdClearance(value);
		return *this;
	}
	AutoBuild& Color(string value) {
		autos.SetColor(value);
		return *this;
	}
	AutoBuild& Body(string value) {
		autos.SettheBody(value);
		return *this;
	}
};

