//#3181 Marte3
#include <iostream>
using namespace std;

int main(){
    int nr_zile,nr_ore,nr_antene,ani,ore,zile,
        un_an,ore_ramase_din_an;
    cin>>nr_zile>>nr_ore>>nr_antene;
    un_an = nr_zile * nr_ore;
    ani = nr_antene / un_an;
    ore_ramase_din_an = nr_antene % un_an;
    zile = ore_ramase_din_an / nr_ore;
    ore = ore_ramase_din_an % nr_ore;
    cout<<ani<<endl <<zile<<endl<<ore;
    return 0;
    }
