#include<bits/stdc++.h>

using namespace std;

int main(){

    int qtd;
    int caso=0;
    cin >> qtd;
    while(qtd--){
        string sheldon, raj;
        cin >> sheldon >> raj;
        int vencedor=0;
        caso++;
        if(sheldon.compare(raj)==0){
                cout << "Caso #" << caso << ": De novo!" << endl;
                vencedor=2;
        }
        else if(sheldon.compare("pedra")==0){
            if(raj.compare("lagarto")==0 || raj.compare("tesoura")==0){
                vencedor=1;
            }
            else{
                vencedor=0;
            }
        }
        else if(sheldon.compare("papel")==0){
            if(raj.compare("pedra")==0 || raj.compare("Spock")==0){
                vencedor=1;
            }
            else{
                vencedor=0;
            }
        }
        else if(sheldon.compare("tesoura")==0){
            if(raj.compare("papel")==0 || raj.compare("lagarto")==0){
                vencedor=1;
            }
            else{
                vencedor=0;
            }
        }
        else if(sheldon.compare("lagarto")==0){
            if(raj.compare("Spock")==0 || raj.compare("papel")==0){
                vencedor=1;
            }
            else{
                vencedor=0;
            }
        }
        else if(sheldon.compare("Spock")==0){
            if(raj.compare("pedra")==0 || raj.compare("tesoura")==0){
                vencedor=1;
            }
            else{
                vencedor=0;
            }
        }


        if(vencedor==1){
            cout << "Caso #" << caso << ": Bazinga!" << endl;
        }
        else if(vencedor==0){
            cout << "Caso #" << caso << ": Raj trapaceou!" << endl;
        }
    }

    return 0;
}