#include<cmath>
#include"class.h"

void record::setK(float k){
	K=k;
}

void record::setRa(float a){
	Ra=a;
}

void record::setRb(float b){
	Rb=b;
}

float record::getK(){
	return K;
}

int record::getRa(){
	float R;
	R=roundf(Ra);
	setRa(R);
	return	static_cast<int>(R);
}

int record::getRb(){
	float R;
	R=roundf(Rb);
	setRb(R);
	return static_cast<int>(R);
}

float record::cntEa(){
	return 1/(1+pow(10.,(Rb-Ra)/400));
}

float record::cntEb(){
	return 1/(1+pow(10.,(Ra-Rb)/400));
}

float record::newRa(float Sa){
	float a;
	a=Ra+K*(Sa-cntEa());
	return a;
}

float record::newRb(float Sb){
	float b;
	b=Rb+K*(Sb-cntEb());
	return b;
}
