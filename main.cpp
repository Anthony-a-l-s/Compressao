#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void decodificador(vector<string> d)
{
    
    cout<<"Decodificando"<<endl;
    for(int i = 1; i < d.size(); i++)
    {
        cout<<d[i];
    }
}
void codificador(string s)
{
    vector<string> d;
    cout<<"String codificada: ";
    if(d.size() == 0)
    {
        string aux;
        aux = s.at(0);
        d.push_back("NULL");
        d.push_back(aux);
        cout<<0<<","<<d[1]<<" ";
    }
    for(int i = 1; i < s.size(); i++)
    {
        int x = 0;
        string aux;
        aux = s.at(i);
        for(int j = 1; j < d.size(); j++)
        {

            if( aux == d[j])
            {
                 x = j;
                for(int k = i+1; k < s.size(); k++)
                {

                    i++;
                    string temp;
                    temp = s.at(k);
                    aux.append(temp);
                    int cont = 1;
                    for(int l = 1; l < d.size(); l++)
                    {

                        if(aux == d[l])
                        {
                            x = l;
                            break;
                        }
                        cont ++;
                    }
                    if(cont == d.size())
                    {

                        break;
                    }
                }
               break;
            }

        }
        d.push_back(aux);
        cout<<x<<","<<d[d.size()-1][d[d.size()-1].size()-1]<<" ";

    }
    cout<<endl;
    decodificador(d);
    cout<<endl;
}


int main()
{
    ofstream arqSaida;
    arqSaida.open("string.txt");
    arqSaida << "bananabananabofana";
    arqSaida.close();
    ifstream arqEntrada;
    string str;
    arqEntrada.open("string.txt");
    if(arqEntrada.is_open()){
        while(getline(arqEntrada,str)){
           
        }

    }else
    cout<<"Erro!"<<endl;

    codificador(str);
    return 0;
}
