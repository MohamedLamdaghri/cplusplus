#include <iostream>
#include <vector>

using namespace std;

vector<int> secuencia(vector<int> vec)
{
    vector<int> cons, aux;
    int tam = vec.size(), tam_comp = 0;;
    for(int i = 1; i < tam; i++)
    {
        if(vec[i-1] == (vec[i] - 1))
        {
            if(cons.size()==0)
            {
                cons.push_back(vec[i-1]);
                cons.push_back(vec[i]);
            }
            else{
                cons.push_back(vec[i]);
            }
        }
        else
        {
            if(cons.size()>tam_comp)
            {
                aux = cons;
                tam_comp = cons.size();
                cons.clear();
                
            }
        }
    }
    if(cons.size()>tam_comp)
    {
        aux = cons;
        tam_comp = cons.size();
        cons.clear();
        
    }
    return aux;
}

int main ()
{
    vector<int> sec {1,2,3,1,4,5,6,7,5,2,4,1,2,3,4,5,5,6,7,8,9,10,11};

    for(int i: secuencia(sec))
    {
        cout << i << " ";
    }
    return 0;
}