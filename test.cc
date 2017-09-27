#include <iostream>
#include <string>
#include "Inout.hh"

using namespace std;

int main(){
	vector<int> v(5);
    	vector<int> res;
	v[0] = 0;
	v[1] = 1;
	v[2] = 2;
	v[3] = 3;
	v[4] = 4;

    string s = "Numeros";
    
    Inout<int> io;
	io.Guardar(s, v);
	res = io.Carregar(s);
	for(int i = 0; i < res.size(); ++i){
		cout << res[i] << endl;
	}
}
