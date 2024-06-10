#pragma once
/*
Создайте класс Автомобиль с параметрами:
- диаметр колёс
- количество дверей
- клиренс
- цвет
- кузов

Используйте паттерн разработки Строитель

Создайте 3 разных автомобиля.
*/

#include <string>
using std::string;
using std::cout;

class Auto {
	double dWhell;	//диаметр колеса
	int cWhell; //количество колес
	double dClearance;	// клиренс
	string Color; // цвет
	string theBody; // кузов
public:
	void SetdWhell(double dW) { dWhell = dW; }
	void SetcWhell(int cW) { cWhell = cW; }
	void SetdClearance(double dC) { dClearance = dC; }
	void SetColor(string color) { Color = color; }
	void SettheBody(string body) { theBody = body; }

	void Display() {
		cout << "Авто с диаметром колеса: " << dWhell
			<< "\nс количеством колёс " << cWhell << "\nс клиренсом в " << dClearance
			<< "\nс цветом \"" << Color << "\"\nи типом кузова \"" << theBody << "\"\n";
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

