#include<iostream>
#include<fstream>
#include"class.h"
using namespace std;

int main(){
	float a,b,Sa,Sb,k;
	record r;
	ofstream out("file.out",ios::out);
	ifstream in("file.in",ios::in);

	in>>k>>a>>b;
	r.setK(k);

	while(in>>Sa){
		r.setRa(a);
		r.setRb(b);
		Sb=1-Sa;
		out<<r.getRa()<<'\t'<<r.getRb()<<endl;
		a=r.newRa(Sa);
		b=r.newRb(Sb);
	}
	r.setRa(a);
	r.setRb(b);	
	out<<r.getRa()<<"\t"<<r.getRb()<<endl;
	return 0;
}
