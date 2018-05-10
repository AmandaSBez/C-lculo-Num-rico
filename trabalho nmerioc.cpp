#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>

using namespace std;

int main(float argc, char *argv[])
{
    cout << "Metodo de Eliminacao de Gauss";
    cout << "\n";

    float matriz[4][5];

    cout << "Quem eh o elemento a11,a12,a13,a14,b1 : " << endl;
    for(int i=0;i<5;i++)
    {
        cin >> matriz[0][i];
    }

    cout << "Quem eh o elemento a21,a22,a23,a24,b2 : " << endl;
    for(int i=0;i<5;i++)
    {
        cin >> matriz[1][i];
    }

    cout << "Quem eh o elemento a31,a32,a33,a34,b3 : " << endl;
    for(int i=0;i<5;i++)
    {
        cin >> matriz[2][i];
    }

    cout << "Quem eh o elemento a41,a42,a43,a44,b4 : " << endl;
    for(int i=0;i<5;i++)
    {
        cin >> matriz[3][i];
    }

    cout << "\n";

    cout << matriz [0][0]<< "x1  "<< matriz [0][1]<< "x2  "<< matriz [0][2]<< "x3  "<< matriz [0][3]<< "x4  "<< "| " << matriz [0][4] << endl;
    cout << matriz [1][0]<< "x1  "<< matriz [1][1]<< "x2  "<< matriz [1][2]<< "x3  "<< matriz [1][3]<< "x4  "<< "| " << matriz [1][4] << endl;
    cout << matriz [2][0]<< "x1  "<< matriz [2][1]<< "x2  "<< matriz [2][2]<< "x3  "<< matriz [2][3]<< "x4  "<< "| " << matriz [2][4] << endl;
    cout << matriz [3][0]<< "x1  "<< matriz [3][1]<< "x2  "<< matriz [3][2]<< "x3  "<< matriz [3][3]<< "x4  "<< "| " << matriz [3][4] << endl;
//-------------------------------------------------------------------------------------------//
//--------------------------Defini��o dos Multiplicadores------------------------------------//
    cout << "Definicoes dos multiplicadores (l=1)" <<endl;
    cout << "\n";

    //cout << matriz[1][0]<<endl;
    //cout << matriz[0][0]<<endl;

    cout << "Divisao  m211 = a21/a11(0) = 1/2" <<endl;
    float(m211) = (matriz[1][0] /matriz[0][0]);
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(m211) << endl;

    // << matriz[2][0]<<endl;
    // << matriz[0][0]<<endl;

    cout << "Divisao  m311 = a31/a11(0) = 3/2" <<endl;
    float(m311) = (matriz[2][0] /matriz[0][0]);
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(m311) << endl;

    cout << "Divisao  m411 = a41/a11(0) = 3/2" <<endl;
    float(m411) = (matriz[3][0] /matriz[0][0]);
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(m411) << endl;

//-------------------------------------------------------------------------------------------//
//--------------------------Defini��o da linha 2(1)------------------------------------------//

    cout << "Definicoes das linhas (l=1)" <<endl;
    cout << "\n";

    cout << "Linha l21)" <<endl;
    cout << "\n";

    float(a211)= matriz[1][0] - float(m211) * matriz [0][0];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a211) << endl;
    matriz[1][0] = float(a211);

    float(a221)= matriz[1][1] - float(m211) * matriz [0][1];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a221) << endl;
    matriz[1][1] = float(a221);

    float(a231)= matriz[1][2] - float(m211) * matriz [0][2];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a231) << endl;
    matriz[1][2] = float(a231);

    float(a241)= matriz[1][3] - float(m211) * matriz [0][3];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a241) << endl;
    matriz[1][3] = float(a241);

    float(b21)= matriz[1][4] - float(m211) * matriz [0][4];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(b21) << endl;
    matriz[1][4] = float(b21);

//-------------------------------------------------------------------------------------------//
//--------------------------Defini��o da linha 3(1)------------------------------------------//

    cout << "Linha L31)" <<endl;
    cout << "\n";

    float(a311)= matriz[2][0] - float(m311) * matriz [0][0];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a311) << endl;
    matriz[2][0] = float(a311);

    float(a321)= matriz[2][1] - float(m311) * matriz [0][1];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a321) << endl;
    matriz[2][1] = float(a321);

    float(a331)= matriz[2][2] - float(m311) * matriz [0][2];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a331) << endl;
    matriz[2][2] = float(a331);

    float(a341)= matriz[2][3] - float(m311) * matriz [0][3];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a341) << endl;
    matriz[2][3] = float(a341);

    float(b31)= matriz[2][4] - float(m311) * matriz [0][4];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(b31) << endl;
    matriz[2][4] = float(b31);


//-------------------------------------------------------------------------------------------//
//--------------------------Defini��o da linha 4(1)------------------------------------------//

    cout << "Linha L41)" <<endl;
    cout << "\n";

    float(a411)= matriz[3][0] - float(m411) * matriz [0][0];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a411) << endl;
    matriz[3][0] = float(a411);


    float(a421)= matriz[3][1] - float(m411) * matriz [0][1];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a421) << endl;
    matriz[3][1] = float(a421);

    float(a431)= matriz[3][2] - float(m411) * matriz [0][2];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a431) << endl;
    matriz[3][2] = float(a431);

    float(a441)= matriz[3][3] - float(m411) * matriz [0][3];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a441) << endl;
    matriz[3][3] = float(a441);

    float(b41)= matriz[3][4] - float(m411) * matriz [0][4];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(b41) << endl;
    matriz[3][4] = float(b41);

//-------------------------------------------------------------------------------------------//
//--------------------------Matriz Expandida A(1),b(1)---------------------------------------//

    cout << "A matriz expandida para o passso l=1 eh: "<< endl;
    cout << "\n";

    cout << matriz [0][0]<< "x1  "<< matriz [0][1]<< "x2  "<< matriz [0][2]<< "x3  "<< matriz [0][3]<< "x4  "<< "| " << matriz [0][4] << endl;
    cout << matriz [1][0]<< "x1  "<< matriz [1][1]<< "x2  "<< matriz [1][2]<< "x3  "<< matriz [1][3]<< "x4  "<< "| " << matriz [1][4] << endl;
    cout << matriz [2][0]<< "x1  "<< matriz [2][1]<< "x2  "<< matriz [2][2]<< "x3  "<< matriz [2][3]<< "x4  "<< "| " << matriz [2][4] << endl;
    cout << matriz [3][0]<< "x1  "<< matriz [3][1]<< "x2  "<< matriz [3][2]<< "x3  "<< matriz [3][3]<< "x4  "<< "| " << matriz [3][4] << endl;
//-------------------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------------------//
//--------------------------Defini��o dos Multiplicadores------------------------------------//
    cout << "Definicoes dos multiplicadores (l=2)" <<endl;
    cout << "\n";

    cout << "Divisao  m322 = a32(1)/a22(1) = 1/2" <<endl;
    float(m322) = (matriz[2][1] /matriz[1][1]);
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(m322) << endl;

    cout << "Divisao  m422 = a42(1)/a22(1) = -1/2" <<endl;
    float(m422) = (matriz[3][1] /matriz[1][1]);
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(m422) << endl;

//-------------------------------------------------------------------------------------------//
//--------------------------Defini��o da linha 3(2)------------------------------------------//

    cout << "Definicoes das linhas (l=2)" <<endl;
    cout << "\n";

    cout << "Linha L3(2)" <<endl;
    cout << "\n";

    float(a322)= matriz[2][1] - float(m322) * matriz [1][1];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a322) << endl;
    matriz[2][1] = float(a322);

    float(a332)= matriz[2][2] - float(m322) * matriz [1][2];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a332) << endl;
    matriz[2][2] = float(a332);

    float(a342)= matriz[2][3] - float(m322) * matriz [1][3];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a342) << endl;
    matriz[2][3] = float(a342);

    float(b32)= matriz[2][4] - float(m322) * matriz [1][4];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(b32) << endl;
    matriz[2][4] = float(b32);

//-------------------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------------------//
//--------------------------Defini��o da linha 4(1)------------------------------------------//

    cout << "Linha L4(2)" <<endl;
    cout << "\n";

    float(a422)= matriz[3][1] - float(m422) * matriz [1][1];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a422) << endl;
    matriz[3][1] = float(a422);

    float(a432)= matriz[3][2] - float(m422) * matriz [1][2];
    cout << "debug" << matriz[3][2] << "debug" << matriz[1][2] << endl;
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a432) << endl;
    matriz[3][2] = float(a432);

    float(a442)= matriz[3][3] - float(m422) * matriz [1][3];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(a442) << endl;
    matriz[3][3] = float(a442);

    float(b42)= matriz[3][4] - float(m422) * matriz [1][4];
    cout <<setprecision(4)<< setiosflags(ios::fixed)<<float(b42) << endl;
    matriz[3][4] = float(b42);

//-------------------------------------------------------------------------------------------//
//--------------------------Matriz Expandida A(1),b(1)---------------------------------------//

    cout << "A matriz expandida para o passso l=2 eh: "<< endl;
    cout << "\n";

    cout << matriz [0][0]<< "x1  "<< matriz [0][1]<< "x2  "<< matriz [0][2]<< "x3  "<< matriz [0][3]<< "x4  "<< "| " << matriz [0][4] << endl;
    cout << matriz [1][0]<< "x1  "<< matriz [1][1]<< "x2  "<< matriz [1][2]<< "x3  "<< matriz [1][3]<< "x4  "<< "| " << matriz [1][4] << endl;
    cout << matriz [2][0]<< "x1  "<< matriz [2][1]<< "x2  "<< matriz [2][2]<< "x3  "<< matriz [2][3]<< "x4  "<< "| " << matriz [2][4] << endl;
    cout << matriz [3][0]<< "x1  "<< matriz [3][1]<< "x2  "<< matriz [3][2]<< "x3  "<< matriz [3][3]<< "x4  "<< "| " << matriz [3][4] << endl;
//-------------------------------------------------------------------------------------------//

    system("PAUSE");
    return EXIT_SUCCESS;
    }
