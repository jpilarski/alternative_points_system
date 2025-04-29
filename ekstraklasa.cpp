#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;
struct club
{
    int id;
    string nazw;
    int miej;
    int punk;
};
struct match
{
    vector <int> wyni;
    vector <int> gosp;
    vector <int> gosc;
};
club tab[18];
match mecze[34];
int kolejk=34;
ofstream wyj;
bool abc(club &a, club &b)
{
    return a.punk>b.punk;
}
bool def(club &a, club &b)
{
    return a.id<b.id;
}
void inic()
{
    wyj.open("wyniki.txt");
    for(int i=0; i<18; i++)
    {
        tab[i].id=i;
        tab[i].miej=1;
        tab[i].punk=0;
    }
    /*2021-2022
    tab[0].nazw="CRACOVIA";
    tab[1].nazw="GORNIK LECZNA";
    tab[2].nazw="GORNIK ZABRZE";
    tab[3].nazw="JAGIELLONIA BIALYSTOK";
    tab[4].nazw="LECH POZNAN";
    tab[5].nazw="LECHIA GDANSK";
    tab[6].nazw="LEGIA WARSZAWA";
    tab[7].nazw="PIAST GLIWICE";
    tab[8].nazw="POGON SZCZECIN";
    tab[9].nazw="RADOMIAK RADOM";
    tab[10].nazw="RAKOW CZESTOCHOWA";
    tab[11].nazw="SLASK WROCLAW";
    tab[12].nazw="STAL MIELEC";
    tab[13].nazw="TERMALICA NIECIECZA";
    tab[14].nazw="WARTA POZNAN";
    tab[15].nazw="WISLA KRAKOW";
    tab[16].nazw="WISLA PLOCK";
    tab[17].nazw="ZAGLEBIE LUBIN";
    //1
    mecze[0].gosp.insert(mecze[0].gosp.begin(), {13, 4, 1, 3, 6, 7, 11, 8, 15});
    mecze[0].gosc.insert(mecze[0].gosc.begin(), {12, 9, 0, 5, 16, 10, 14, 2, 17});
    mecze[0].wyni.insert(mecze[0].wyni.begin(), {1, 1, 1, 1, 0, 2, 1, 0, 0});
    //2
    mecze[1].gosp.insert(mecze[1].gosp.begin(), {17, 2, 12, 13, 9, 14, 0, 3, 5});
    mecze[1].gosc.insert(mecze[1].gosc.begin(), {1, 4, 7, 15, 6, 8, 11, 10, 16});
    mecze[1].wyni.insert(mecze[1].wyni.begin(), {0, 2, 2, 1, 0, 1, 2, 0, 0});
    //3
    mecze[2].gosp.insert(mecze[2].gosp.begin(), {1, 4, 3, 2, 8, 15, 11, 16, 6});
    mecze[2].gosc.insert(mecze[2].gosc.begin(), {14, 0, 13, 12, 7, 10, 5, 9, 17});
    mecze[2].wyni.insert(mecze[2].wyni.begin(), {2, 0, 0, 0, 0, 2, 1, 0, 0});
    //4
    mecze[3].gosp.insert(mecze[3].gosp.begin(), {13, 12, 7, 5, 14, 11, 17, 3, 10});
    mecze[3].gosc.insert(mecze[3].gosc.begin(), {4, 15, 16, 0, 6, 1, 8, 2, 9});
    mecze[3].wyni.insert(mecze[3].wyni.begin(), {2, 0, 0, 0, 2, 1, 0, 2, 1});
    //5
    mecze[4].gosp.insert(mecze[4].gosp.begin(), {16, 9, 8, 0, 1, 7, 4, 10, 6});
    mecze[4].gosc.insert(mecze[4].gosc.begin(), {17, 14, 12, 3, 15, 11, 5, 2, 13});
    mecze[4].wyni.insert(mecze[4].wyni.begin(), {0, 0, 0, 0, 2, 1, 0, 2, 0});
    //6
    mecze[5].gosp.insert(mecze[5].gosp.begin(), {12, 14, 13, 5, 4, 2, 16, 17, 15});
    mecze[5].gosc.insert(mecze[5].gosc.begin(), {1, 3, 0, 9, 8, 7, 10, 11, 6});
    mecze[5].wyni.insert(mecze[5].wyni.begin(), {0, 1, 2, 1, 1, 2, 1, 2, 0});
    //7
    mecze[6].gosp.insert(mecze[6].gosp.begin(), {14, 0, 3, 11, 7, 15, 10, 1, 9});
    mecze[6].gosc.insert(mecze[6].gosc.begin(), {13, 2, 12, 6, 17, 5, 4, 16, 8});
    mecze[6].wyni.insert(mecze[6].wyni.begin(), {1, 1, 1, 0, 2, 1, 1, 0, 1});
	//8
	mecze[7].gosp.insert(mecze[7].gosp.begin(), {17, 4, 16, 8, 9, 5, 12, 2, 6});
	mecze[7].gosc.insert(mecze[7].gosc.begin(), {13, 15, 3, 0, 11, 7, 10, 14, 1});
	mecze[7].wyni.insert(mecze[7].wyni.begin(), {0, 0, 0, 1, 1, 0, 2, 0, 0});
	//9
	mecze[8].gosp.insert(mecze[8].gosp.begin(), {1, 3, 12, 14, 6, 13, 11, 15, 7});
	mecze[8].gosc.insert(mecze[8].gosc.begin(), {5, 4, 9, 17, 10, 2, 16, 8, 0});
	mecze[8].wyni.insert(mecze[8].wyni.begin(), {2, 0, 0, 2, 2, 0, 0, 2, 2});
	//10
	mecze[9].gosp.insert(mecze[9].gosp.begin(), {17, 7, 9, 0, 4, 2, 10, 8, 5});
	mecze[9].gosc.insert(mecze[9].gosc.begin(), {3, 15, 13, 12, 11, 16, 14, 1, 6});
	mecze[9].wyni.insert(mecze[9].wyni.begin(), {2, 0, 1, 1, 0, 0, 0, 0, 0});
	//11
	mecze[10].gosp.insert(mecze[10].gosp.begin(), {1, 13, 2, 11, 16, 0, 6, 12, 3});
	mecze[10].gosc.insert(mecze[10].gosc.begin(), {7, 5, 15, 10, 8, 14, 4, 17, 9});
	mecze[10].wyni.insert(mecze[10].wyni.begin(), {1, 2, 2, 2, 0, 0, 2, 0, 1});
	//12
	mecze[11].gosp.insert(mecze[11].gosp.begin(), {9, 4, 10, 5, 8, 15, 17, 14, 7});
	mecze[11].gosc.insert(mecze[11].gosc.begin(), {1, 16, 13, 2, 3, 11, 0, 12, 6});
	mecze[11].wyni.insert(mecze[11].wyni.begin(), {0, 0, 0, 1, 0, 2, 1, 1, 0});
	//13
	mecze[12].gosp.insert(mecze[12].gosp.begin(), {0, 12, 13, 14, 2, 3, 16, 1, 6});
	mecze[12].gosc.insert(mecze[12].gosc.begin(), {9, 4, 11, 5, 17, 7, 15, 10, 8});
	mecze[12].wyni.insert(mecze[12].wyni.begin(), {2, 1, 0, 2, 1, 1, 0, 1, 2});
	//14
	mecze[13].gosp.insert(mecze[13].gosp.begin(), {16, 11, 7, 9, 5, 1, 10, 6, 15});
	mecze[13].gosc.insert(mecze[13].gosc.begin(), {13, 3, 14, 2, 17, 4, 8, 12, 0});
	mecze[13].wyni.insert(mecze[13].wyni.begin(), {1, 1, 2, 0, 0, 1, 1, 2, 0});
	//15
	mecze[14].gosp.insert(mecze[14].gosp.begin(), {14, 3, 12, 4, 13, 8, 2, 17, 0});
	mecze[14].gosc.insert(mecze[14].gosc.begin(), {16, 15, 5, 7, 1, 11, 6, 9, 10});
	mecze[14].wyni.insert(mecze[14].wyni.begin(), {2, 0, 1, 0, 1, 0, 0, 2, 0});
	//16
	mecze[15].gosp.insert(mecze[15].gosp.begin(), {7, 15, 1, 11, 8, 10, 16, 4, 6});
	mecze[15].gosc.insert(mecze[15].gosc.begin(), {13, 9, 2, 12, 5, 17, 0, 14, 3});
	mecze[15].wyni.insert(mecze[15].wyni.begin(), {0, 2, 2, 0, 0, 0, 0, 0, 0});
	//17
	mecze[16].gosp.insert(mecze[16].gosp.begin(), {12, 2, 13, 3, 5, 17, 0, 14, 9});
	mecze[16].gosc.insert(mecze[16].gosc.begin(), {16, 11, 8, 1, 10, 4, 6, 15, 7});
	mecze[16].wyni.insert(mecze[16].wyni.begin(), {0, 0, 2, 2, 0, 2, 0, 1, 1});
	//18
	mecze[17].gosp.insert(mecze[17].gosp.begin(), {12, 10, 9, 17, 5, 0, 16, 2, 14});
	mecze[17].gosc.insert(mecze[17].gosc.begin(), {13, 7, 4, 15, 3, 1, 6, 8, 11});
	mecze[17].wyni.insert(mecze[17].wyni.begin(), {0, 0, 0, 0, 2, 2, 0, 1, 0});
	//19
	mecze[18].gosp.insert(mecze[18].gosp.begin(), {15, 16, 7, 8, 11, 10, 1, 4, 6});
	mecze[18].gosc.insert(mecze[18].gosc.begin(), {13, 5, 12, 14, 0, 3, 17, 2, 9});
	mecze[18].wyni.insert(mecze[18].wyni.begin(), {0, 0, 1, 1, 2, 0, 0, 0, 2});
	//20
	mecze[19].gosp.insert(mecze[19].gosp.begin(), {13, 17, 12, 7, 5, 14, 10, 0, 9});
	mecze[19].gosc.insert(mecze[19].gosc.begin(), {3, 6, 2, 8, 11, 1, 15, 4, 16});
	mecze[19].wyni.insert(mecze[19].wyni.begin(), {0, 2, 2, 2, 0, 1, 0, 1, 1});
	//21
	mecze[20].gosp.insert(mecze[20].gosp.begin(), {1, 0, 15, 9, 4, 16, 8, 6, 2});
	mecze[20].gosc.insert(mecze[20].gosc.begin(), {11, 5, 12, 10, 13, 7, 17, 14, 3});
	mecze[20].wyni.insert(mecze[20].wyni.begin(), {1, 0, 2, 2, 0, 2, 0, 2, 2});
	//22
	mecze[21].gosp.insert(mecze[21].gosp.begin(), {17, 12, 3, 11, 13, 14, 2, 5, 15});
	mecze[21].gosc.insert(mecze[21].gosc.begin(), {16, 8, 0, 7, 6, 9, 10, 4, 1});
	mecze[21].wyni.insert(mecze[21].wyni.begin(), {0, 2, 1, 2, 1, 0, 1, 0, 1});
	//23
	mecze[22].gosp.insert(mecze[22].gosp.begin(), {10, 6, 8, 1, 7, 3, 9, 11, 0});
	mecze[22].gosc.insert(mecze[22].gosc.begin(), {16, 15, 4, 12, 2, 14, 5, 17, 13});
	mecze[22].wyni.insert(mecze[22].wyni.begin(), {0, 0, 2, 0, 1, 1, 0, 1, 2});
	//24
	mecze[23].gosp.insert(mecze[23].gosp.begin(), {12, 8, 13, 17, 5, 16, 2, 4, 6});
	mecze[23].gosc.insert(mecze[23].gosc.begin(), {3, 9, 14, 7, 15, 1, 0, 10, 11});
	mecze[23].wyni.insert(mecze[23].wyni.begin(), {1, 0, 0, 1, 1, 0, 0, 2, 0});
	//25
	mecze[24].gosp.insert(mecze[24].gosp.begin(), {13, 1, 14, 7, 0, 3, 11, 15, 10});
	mecze[24].gosc.insert(mecze[24].gosc.begin(), {17, 6, 2, 5, 8, 16, 9, 4, 12});
	mecze[24].wyni.insert(mecze[24].wyni.begin(), {2, 2, 0, 0, 1, 2, 1, 1, 0});
	//26
	mecze[25].gosp.insert(mecze[25].gosp.begin(), {17, 8, 16, 10, 5, 4, 9, 0, 2});
	mecze[25].gosc.insert(mecze[25].gosc.begin(), {14, 15, 11, 6, 1, 3, 12, 7, 13});
	mecze[25].wyni.insert(mecze[25].wyni.begin(), {2, 0, 2, 1, 0, 0, 1, 2, 1});
	//27
	mecze[26].gosp.insert(mecze[26].gosp.begin(), {12, 11, 14, 1, 6, 13, 3, 15, 16});
	mecze[26].gosc.insert(mecze[26].gosc.begin(), {0, 4, 10, 8, 5, 9, 17, 7, 2});
	mecze[26].wyni.insert(mecze[26].wyni.begin(), {2, 2, 2, 2, 0, 1, 0, 1, 0});
	//28
	mecze[27].gosp.insert(mecze[27].gosp.begin(), {17, 8, 7, 4, 5, 14, 15, 10, 9});
	mecze[27].gosc.insert(mecze[27].gosc.begin(), {12, 16, 1, 6, 13, 0, 2, 11, 3});
	mecze[27].wyni.insert(mecze[27].wyni.begin(), {0, 2, 0, 1, 0, 0, 0, 1, 1});
	//29
	mecze[28].gosp.insert(mecze[28].gosp.begin(), {12, 1, 13, 3, 16, 0, 11, 2, 6});
	mecze[28].gosc.insert(mecze[28].gosc.begin(), {14, 9, 10, 8, 4, 17, 15, 5, 7});
	mecze[28].wyni.insert(mecze[28].wyni.begin(), {2, 0, 2, 2, 2, 0, 1, 2, 2});
	//30
	mecze[29].gosp.insert(mecze[29].gosp.begin(), {9, 17, 11, 7, 5, 4, 10, 8, 15});
	mecze[29].gosc.insert(mecze[29].gosc.begin(), {0, 2, 13, 3, 14, 12, 1, 6, 16});
	mecze[29].wyni.insert(mecze[29].wyni.begin(), {2, 2, 2, 0, 0, 0, 0, 0, 2});
	//31
	mecze[30].gosp.insert(mecze[30].gosp.begin(), {4, 8, 14, 2, 3, 17, 12, 13, 0});
	mecze[30].gosc.insert(mecze[30].gosc.begin(), {1, 10, 7, 9, 11, 5, 6, 16, 15});
	mecze[30].wyni.insert(mecze[30].wyni.begin(), {0, 2, 2, 1, 1, 1, 0, 0, 1});
	//32
	mecze[31].gosp.insert(mecze[31].gosp.begin(), {9, 6, 16, 11, 15, 5, 10, 7, 1});
	mecze[31].gosc.insert(mecze[31].gosc.begin(), {17, 2, 14, 8, 3, 12, 0, 4, 13});
	mecze[31].wyni.insert(mecze[31].wyni.begin(), {2, 0, 2, 1, 1, 0, 1, 2, 1});
	//33
	mecze[32].gosp.insert(mecze[32].gosp.begin(), {0, 3, 13, 14, 17, 5, 12, 2, 9});
	mecze[32].gosc.insert(mecze[32].gosc.begin(), {16, 6, 7, 4, 10, 8, 11, 1, 15});
	mecze[32].wyni.insert(mecze[32].wyni.begin(), {0, 1, 2, 2, 0, 1, 1, 0, 0});
	//34
	mecze[33].gosp.insert(mecze[33].gosp.begin(), {16, 15, 11, 10, 8, 7, 6, 1, 4});
	mecze[33].gosc.insert(mecze[33].gosc.begin(), {12, 14, 2, 5, 13, 9, 0, 3, 17});
	mecze[33].wyni.insert(mecze[33].wyni.begin(), {0, 2, 2, 0, 1, 1, 0, 2, 0});*/
	//2022-2023
	tab[0].nazw="CRACOVIA";
    tab[1].nazw="GORNIK ZABRZE";
    tab[2].nazw="JAGIELLONIA BIALYSTOK";
    tab[3].nazw="KORONA KIELCE";
    tab[4].nazw="LECH POZNAN";
    tab[5].nazw="LECHIA GDANSK";
    tab[6].nazw="LEGIA WARSZAWA";
    tab[7].nazw="MIEDZ LEGNICA";
    tab[8].nazw="PIAST GLIWICE";
    tab[9].nazw="POGON SZCZECIN";
    tab[10].nazw="RADOMIAK RADOM";
    tab[11].nazw="RAKOW CZESTOCHOWA";
    tab[12].nazw="SLASK WROCLAW";
    tab[13].nazw="STAL MIELEC";
    tab[14].nazw="WARTA POZNAN";
    tab[15].nazw="WIDZEW LODZ";
    tab[16].nazw="WISLA PLOCK";
    tab[17].nazw="ZAGLEBIE LUBIN";
    	//1
	mecze[0].gosp.insert(mecze[0].gosp.begin(), {11, 17, 4, 2, 3, 10, 16, 9, 1});
	mecze[0].gosc.insert(mecze[0].gosc.begin(), {14, 12, 13, 8, 6, 7, 5, 15, 0});
	mecze[0].wyni.insert(mecze[0].wyni.begin(), {0, 1, 2, 0, 1, 1, 0, 0, 2});
	//2
	mecze[1].gosp.insert(mecze[1].gosp.begin(), {14, 2, 0, 6, 12, 13, 8, 5, 7});
	mecze[1].gosc.insert(mecze[1].gosc.begin(), {16, 15, 3, 17, 9, 10, 11, 1, 4});
	mecze[1].wyni.insert(mecze[1].wyni.begin(), {2, 2, 0, 0, 0, 1, 2, 0, 1});
	//3
	mecze[2].gosp.insert(mecze[2].gosp.begin(), {8, 0, 10, 7, 9, 11, 4, 15, 3});
	mecze[2].gosc.insert(mecze[2].gosc.begin(), {17, 6, 1, 14, 2, 13, 16, 5, 12});
	mecze[2].wyni.insert(mecze[2].wyni.begin(), {2, 0, 2, 2, 0, 0, 2, 2, 0});
	//4
	mecze[3].gosp.insert(mecze[3].gosp.begin(), {13, 6, 5, 2, 12, 14, 17, 1, 16});
	mecze[3].gosc.insert(mecze[3].gosc.begin(), {0, 8, 3, 10, 15, 9, 4, 11, 7});
	mecze[3].wyni.insert(mecze[3].wyni.begin(), {0, 0, 2, 2, 1, 2, 1, 0, 0});
	//5
	mecze[4].gosp.insert(mecze[4].gosp.begin(), {7, 15, 0, 1, 9, 10, 11, 4, 3});
	mecze[4].gosc.insert(mecze[4].gosc.begin(), {17, 6, 8, 13, 16, 5, 2, 12, 14});
	mecze[4].wyni.insert(mecze[4].wyni.begin(), {2, 2, 2, 2, 1, 0, 1, 2, 2});
	//6
	mecze[5].gosp.insert(mecze[5].gosp.begin(), {2, 6, 16, 12, 14, 17, 8, 11, 5});
	mecze[5].gosc.insert(mecze[5].gosc.begin(), {7, 1, 3, 0, 15, 10, 13, 9, 4});
	mecze[5].wyni.insert(mecze[5].wyni.begin(), {0, 1, 0, 1, 2, 2, 0, 0, 2});
	//7
	mecze[6].gosp.insert(mecze[6].gosp.begin(), {1, 13, 10, 7, 9, 15, 0, 12, 4});
	mecze[6].gosc.insert(mecze[6].gosc.begin(), {2, 6, 3, 5, 17, 16, 14, 11, 8});
	mecze[6].wyni.insert(mecze[6].wyni.begin(), {1, 2, 2, 0, 0, 0, 2, 2, 0});
	//8
	mecze[7].gosp.insert(mecze[7].gosp.begin(), {6, 13, 5, 0, 17, 3, 4, 8, 16});
	mecze[7].gosc.insert(mecze[7].gosc.begin(), {10, 12, 14, 11, 2, 9, 15, 7, 1});
	mecze[7].wyni.insert(mecze[7].wyni.begin(), {0, 0, 1, 0, 1, 2, 0, 0, 1});
	//9
	mecze[8].gosp.insert(mecze[8].gosp.begin(), {14, 15, 12, 10, 1, 7, 9, 11, 2});
	mecze[8].gosc.insert(mecze[8].gosc.begin(), {17, 0, 5, 16, 8, 3, 4, 6, 13});
	mecze[8].wyni.insert(mecze[8].wyni.begin(), {1, 0, 0, 0, 1, 1, 1, 0, 0});
	//10
	mecze[9].gosp.insert(mecze[9].gosp.begin(), {8, 6, 13, 5, 11, 0, 3, 17, 14});
	mecze[9].gosc.insert(mecze[9].gosc.begin(), {12, 7, 15, 2, 10, 9, 1, 16, 4});
	mecze[9].wyni.insert(mecze[9].wyni.begin(), {1, 0, 2, 1, 0, 1, 2, 0, 2});
	//11
	mecze[10].gosp.insert(mecze[10].gosp.begin(), {10, 16, 1, 4, 9, 7, 2, 15, 12});
	mecze[10].gosc.insert(mecze[10].gosc.begin(), {0, 8, 17, 6, 5, 13, 3, 11, 14});
	mecze[10].wyni.insert(mecze[10].wyni.begin(), {2, 0, 2, 1, 0, 2, 0, 1, 2});
	//12
	mecze[11].gosp.insert(mecze[11].gosp.begin(), {13, 2, 12, 6, 0, 17, 4, 11, 8});
	mecze[11].gosc.insert(mecze[11].gosc.begin(), {9, 16, 1, 14, 5, 3, 10, 7, 15});
	mecze[11].wyni.insert(mecze[11].wyni.begin(), {0, 1, 0, 0, 2, 1, 0, 0, 2});
	//13
	mecze[12].gosp.insert(mecze[12].gosp.begin(), {3, 16, 10, 5, 14, 9, 7, 15, 1});
	mecze[12].gosc.insert(mecze[12].gosc.begin(), {13, 6, 12, 11, 2, 8, 0, 17, 4});
	mecze[12].wyni.insert(mecze[12].wyni.begin(), {2, 0, 0, 2, 0, 1, 1, 0, 2});
	//14
	mecze[13].gosp.insert(mecze[13].gosp.begin(), {15, 13, 6, 11, 14, 12, 0, 8, 17});
	mecze[13].gosc.insert(mecze[13].gosc.begin(), {7, 16, 9, 3, 1, 2, 4, 10, 5});
	mecze[13].wyni.insert(mecze[13].wyni.begin(), {0, 1, 1, 0, 1, 1, 1, 2, 2});
	//15
	mecze[14].gosp.insert(mecze[14].gosp.begin(), {7, 1, 3, 2, 16, 17, 5, 4, 10});
	mecze[14].gosc.insert(mecze[14].gosc.begin(), {9, 15, 8, 6, 12, 0, 13, 11, 14});
	mecze[14].wyni.insert(mecze[14].wyni.begin(), {2, 0, 1, 2, 2, 2, 0, 2, 2});
	//16
	mecze[15].gosp.insert(mecze[15].gosp.begin(), {13, 6, 8, 0, 9, 11, 7, 15, 4});
	mecze[15].gosc.insert(mecze[15].gosc.begin(), {17, 5, 14, 2, 1, 16, 12, 10, 3});
	mecze[15].wyni.insert(mecze[15].wyni.begin(), {0, 0, 2, 0, 2, 0, 0, 2, 0});
	//17
	mecze[16].gosp.insert(mecze[16].gosp.begin(), {14, 16, 3, 1, 2, 17, 10, 5, 12});
	mecze[16].gosc.insert(mecze[16].gosc.begin(), {13, 0, 15, 7, 4, 11, 9, 8, 6});
	mecze[16].wyni.insert(mecze[16].wyni.begin(), {1, 0, 2, 2, 2, 2, 2, 2, 1});
	//18
	mecze[17].gosp.insert(mecze[17].gosp.begin(), {7, 13, 14, 15, 12, 8, 6, 5, 0});
	mecze[17].gosc.insert(mecze[17].gosc.begin(), {10, 4, 11, 9, 17, 2, 3, 16, 1});
	mecze[17].wyni.insert(mecze[17].wyni.begin(), {1, 1, 1, 1, 2, 1, 0, 0, 0});
	//19
	mecze[18].gosp.insert(mecze[18].gosp.begin(), {15, 11, 1, 17, 10, 4, 9, 3, 16});
	mecze[18].gosc.insert(mecze[18].gosc.begin(), {2, 8, 5, 6, 13, 7, 12, 0, 14});
	mecze[18].wyni.insert(mecze[18].wyni.begin(), {1, 0, 1, 2, 0, 0, 2, 0, 0});
	//20
	mecze[19].gosp.insert(mecze[19].gosp.begin(), {13, 5, 12, 16, 2, 17, 1, 6, 14});
	mecze[19].gosc.insert(mecze[19].gosc.begin(), {11, 15, 3, 4, 9, 8, 10, 0, 7});
	mecze[19].wyni.insert(mecze[19].wyni.begin(), {1, 1, 1, 2, 0, 2, 1, 1, 1});
	//21
	mecze[20].gosp.insert(mecze[20].gosp.begin(), {0, 15, 3, 11, 9, 7, 4, 8, 10});
	mecze[20].gosc.insert(mecze[20].gosc.begin(), {13, 12, 5, 1, 14, 16, 17, 6, 2});
	mecze[20].wyni.insert(mecze[20].wyni.begin(), {0, 0, 0, 0, 0, 0, 2, 2, 1});
	//22
	mecze[21].gosp.insert(mecze[21].gosp.begin(), {2, 6, 8, 14, 5, 13, 16, 12, 17});
	mecze[21].gosc.insert(mecze[21].gosc.begin(), {11, 15, 0, 3, 10, 1, 9, 4, 7});
	mecze[21].wyni.insert(mecze[21].wyni.begin(), {2, 1, 0, 0, 2, 2, 2, 0, 0});
	//23
	mecze[22].gosp.insert(mecze[22].gosp.begin(), {13, 4, 15, 3, 1, 7, 9, 0, 10});
	mecze[22].gosc.insert(mecze[22].gosc.begin(), {8, 5, 14, 16, 6, 2, 11, 12, 17});
	mecze[22].wyni.insert(mecze[22].wyni.begin(), {2, 0, 2, 0, 2, 1, 2, 1, 2});
	//24
	mecze[23].gosp.insert(mecze[23].gosp.begin(), {5, 11, 3, 17, 2, 14, 8, 6, 16});
	mecze[23].gosc.insert(mecze[23].gosc.begin(), {7, 12, 10, 9, 1, 0, 4, 13, 15});
	mecze[23].wyni.insert(mecze[23].wyni.begin(), {0, 0, 0, 2, 0, 1, 1, 0, 1});
	//25
	mecze[24].gosp.insert(mecze[24].gosp.begin(), {1, 10, 12, 2, 9, 11, 14, 7, 15});
	mecze[24].gosc.insert(mecze[24].gosc.begin(), {16, 6, 13, 17, 3, 0, 5, 8, 4});
	mecze[24].wyni.insert(mecze[24].wyni.begin(), {0, 2, 1, 1, 1, 0, 0, 2, 2});
	//26
	mecze[25].gosp.insert(mecze[25].gosp.begin(), {17, 8, 3, 6, 5, 16, 0, 4, 13});
	mecze[25].gosc.insert(mecze[25].gosc.begin(), {14, 1, 7, 11, 12, 10, 15, 9, 2});
	mecze[25].wyni.insert(mecze[25].wyni.begin(), {1, 0, 0, 0, 1, 1, 1, 1, 1});
	//27
	mecze[26].gosp.insert(mecze[26].gosp.begin(), {12, 1, 16, 15, 9, 4, 2, 10, 7});
	mecze[26].gosc.insert(mecze[26].gosc.begin(), {8, 3, 17, 13, 0, 14, 5, 11, 6});
	mecze[26].wyni.insert(mecze[26].wyni.begin(), {2, 1, 0, 2, 0, 0, 0, 1, 1});
	//28
	mecze[27].gosp.insert(mecze[27].gosp.begin(), {14, 17, 0, 3, 5, 8, 11, 6, 13});
	mecze[27].gosc.insert(mecze[27].gosc.begin(), {12, 1, 10, 2, 9, 16, 15, 4, 7});
	mecze[27].wyni.insert(mecze[27].wyni.begin(), {0, 2, 0, 0, 2, 0, 0, 1, 1});
	//29
	mecze[28].gosp.insert(mecze[28].gosp.begin(), {16, 14, 5, 7, 9, 3, 15, 1, 10});
	mecze[28].gosc.insert(mecze[28].gosc.begin(), {2, 6, 0, 11, 13, 17, 8, 12, 4});
	mecze[28].wyni.insert(mecze[28].wyni.begin(), {2, 0, 2, 2, 0, 1, 2, 0, 1});
	//30
	mecze[29].gosp.insert(mecze[29].gosp.begin(), {6, 11, 2, 17, 8, 12, 13, 4, 0});
	mecze[29].gosc.insert(mecze[29].gosc.begin(), {16, 5, 14, 15, 9, 10, 3, 1, 7});
	mecze[29].wyni.insert(mecze[29].wyni.begin(), {0, 0, 0, 0, 1, 2, 0, 2, 1});
	//31
	mecze[30].gosp.insert(mecze[30].gosp.begin(), {2, 1, 10, 4, 5, 16, 3, 9, 7});
	mecze[30].gosc.insert(mecze[30].gosc.begin(), {12, 14, 8, 0, 17, 13, 11, 6, 15});
	mecze[30].wyni.insert(mecze[30].wyni.begin(), {1, 0, 2, 0, 2, 1, 0, 0, 2});
	//32
	mecze[31].gosp.insert(mecze[31].gosp.begin(), {8, 6, 12, 0, 15, 13, 9, 11, 14});
	mecze[31].gosc.insert(mecze[31].gosc.begin(), {3, 2, 16, 17, 1, 5, 7, 4, 10});
	mecze[31].wyni.insert(mecze[31].wyni.begin(), {0, 0, 0, 2, 2, 1, 0, 2, 2});
	//33
	mecze[32].gosp.insert(mecze[32].gosp.begin(), {17, 3, 2, 1, 5, 12, 10, 16, 14});
	mecze[32].gosc.insert(mecze[32].gosc.begin(), {13, 4, 0, 9, 6, 7, 15, 11, 8});
	mecze[32].wyni.insert(mecze[32].wyni.begin(), {0, 2, 1, 0, 0, 0, 0, 2, 1});
	//34
	mecze[33].gosp.insert(mecze[33].gosp.begin(), {15, 13, 11, 9, 8, 7, 6, 4, 0});
	mecze[33].gosc.insert(mecze[33].gosc.begin(), {3, 14, 17, 10, 5, 1, 12, 2, 16});
	mecze[33].wyni.insert(mecze[33].wyni.begin(), {2, 0, 1, 0, 0, 1, 0, 0, 0});
}
int main()
{
    inic();
    for(int i=0; i<kolejk; i++)
    {
        for(int j=0; j<mecze[i].wyni.size(); j++)
        {
            //int r=abs(tab[mecze[i].gosp[j]].miej-tab[mecze[i].gosc[j]].miej);
            int m_gosp=tab[mecze[i].gosp[j]].miej;
            int m_gosc=tab[mecze[i].gosc[j]].miej;
            if(mecze[i].wyni[j]==0)
            {
                int r=m_gosp-m_gosc+18;
                tab[mecze[i].gosp[j]].punk += 3*36;
                tab[mecze[i].gosp[j]].punk += 3*r;
                tab[mecze[i].gosc[j]].punk -= 3*r;
                /*if(tab[mecze[i].gosp[j]].miej<tab[mecze[i].gosc[j]].miej)
                {
                    //tab[mecze[i].gosp[j]].punk=tab[mecze[i].gosp[j]].punk+108-3*r;
                    //tab[mecze[i].gosc[j]].punk=tab[mecze[i].gosc[j]].punk-54+3*r;
                }
                else if(tab[mecze[i].gosp[j]].miej==tab[mecze[i].gosc[j]].miej)
                {
                    tab[mecze[i].gosp[j]].punk=tab[mecze[i].gosp[j]].punk+54;
                }
                else if(tab[mecze[i].gosp[j]].miej>tab[mecze[i].gosc[j]].miej)
                {
                    tab[mecze[i].gosp[j]].punk=tab[mecze[i].gosp[j]].punk+54+3*r;
                    tab[mecze[i].gosc[j]].punk=tab[mecze[i].gosc[j]].punk-3*r;
                }*/
            }
            else if(mecze[i].wyni[j]==1)
            {
                int r=m_gosp-m_gosc;
                tab[mecze[i].gosp[j]].punk += 36;
                tab[mecze[i].gosc[j]].punk += 36;
                tab[mecze[i].gosp[j]].punk += r*2;
                tab[mecze[i].gosc[j]].punk -= r*2;
                /*if(tab[mecze[i].gosp[j]].miej<tab[mecze[i].gosc[j]].miej)
                {
                    tab[mecze[i].gosp[j]].punk=tab[mecze[i].gosp[j]].punk+18-r;
                    tab[mecze[i].gosc[j]].punk=tab[mecze[i].gosc[j]].punk+18+r;
                }
                else if(tab[mecze[i].gosp[j]].miej==tab[mecze[i].gosc[j]].miej)
                {
                    tab[mecze[i].gosp[j]].punk=tab[mecze[i].gosp[j]].punk+18;
                    tab[mecze[i].gosc[j]].punk=tab[mecze[i].gosc[j]].punk+18;
                }
                else if(tab[mecze[i].gosp[j]].miej>tab[mecze[i].gosc[j]].miej)
                {
                    tab[mecze[i].gosp[j]].punk=tab[mecze[i].gosp[j]].punk+18+r;
                    tab[mecze[i].gosc[j]].punk=tab[mecze[i].gosc[j]].punk+18-r;
                }*/
            }
            else if(mecze[i].wyni[j]==2)
            {
                int r=m_gosc-m_gosp+18;
                tab[mecze[i].gosc[j]].punk += 3*36;
                tab[mecze[i].gosc[j]].punk += 3*r;
                tab[mecze[i].gosp[j]].punk -= 3*r;
                /*if(tab[mecze[i].gosp[j]].miej<tab[mecze[i].gosc[j]].miej)
                {
                    tab[mecze[i].gosp[j]].punk=tab[mecze[i].gosp[j]].punk-3*r;
                    tab[mecze[i].gosc[j]].punk=tab[mecze[i].gosc[j]].punk+54+3*r;
                }
                else if(tab[mecze[i].gosp[j]].miej==tab[mecze[i].gosc[j]].miej)
                {
                    tab[mecze[i].gosc[j]].punk=tab[mecze[i].gosc[j]].punk+54;
                }
                else if(tab[mecze[i].gosp[j]].miej>tab[mecze[i].gosc[j]].miej)
                {
                    tab[mecze[i].gosp[j]].punk=tab[mecze[i].gosp[j]].punk-54+3*r;
                    tab[mecze[i].gosc[j]].punk=tab[mecze[i].gosc[j]].punk+108-3*r;
                }*/
            }
        }
        sort(tab, tab+18, abc);
        tab[0].miej=1;
        for(int i=1; i<18; i++)
        {
            tab[i].miej=i+1;
            if(tab[i].punk==tab[i-1].punk) tab[i].miej=tab[i-1].miej;
        }
        cout << "KOLEJKA " << i+1 << endl;
        for(int i=0; i<18; i++)
        {
            cout << tab[i].miej << "\t";
            printf("%.3f", double(tab[i].punk)/36);
            cout << "\t" << tab[i].nazw << endl;
        }
        cout << endl;
        sort(tab, tab+18, def);
        for(int i=0; i<18; i++)
        {
            wyj << tab[i].punk << "\t";
        }
        wyj << endl;
    }
    wyj.close();
}
