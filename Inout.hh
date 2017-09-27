/** @file Inout.hh
	@brief Classe Inout
*/


#ifndef INOUT_HH
#define INOUT_HH

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>


using namespace std;

template <class T>
class Inout{

	private:


	public:
/*
		Inout();

		~Inout();
*/
        void Guardar(string Nom_Conjunt, vector<T>& conjunt){
            //fstream fs("prueba.dat", ios::out | ios::trunc | ios::binary);
            ofstream fs("Estat.txt"); 
            fs << Nom_Conjunt << endl;
            for(int i = 0; i < conjunt.size(); ++i){
                fs << conjunt[i] << endl;
            }
            fs << "EOS" << endl; //End of Set
            //fs << "Això no hauria de sortir" << endl;
            fs.close();
        }

        vector<T> Carregar(string Nom_Conjunt){
            char s[128];
            vector<T> v_ret;
            ifstream fe("Estat.txt");
            fe.getline(s,128);
            cout << s << endl;
            copy(istream_iterator<T>(fe),istream_iterator<T>(), back_inserter(v_ret) );
            fe.clear();
            fe.getline(s,128);
            // cout << s << endl;
            
            return v_ret;
        }

        vector<vector<T>> Carregar_Programa();

};
#endif
