/*
Author: Muhammad Alliyan Fahad
Self Assessment # 2:
1-Write the C++ program to make a Triangle with
background color of Light Red and Foreground Color of
Light Aqua.
2-Write the C++ program to make a Parallelogram with
background color of Light Yellow and Foreground Color of
Black
Date: 26-Sep-2026
*/
#include<iostream>
#include<cstdlib>
using namespace std;

//defining constants for convenient color switching.
const string triangleColor="\033[101;96m";
const string parallelogramColor="\033[30;103m";
const string colorReset="\033[0m";

void enableANSI()
{
    #ifdef _WIN32
        system("");
    #endif
}

int main()
{
    enableANSI();

    //Triangle with Light Red BG and Light Aqua text.
    //This method restricts the color to the triangle's boundary.
    cout<<"                 "<<triangleColor<<"*"<<colorReset<<"                "<<endl;
    cout<<"                "<<triangleColor<<"* *"<<colorReset<<"               "<<endl;
    cout<<"               "<<triangleColor<<"*   *"<<colorReset<<"              "<<endl;
    cout<<"              "<<triangleColor<<"*     *"<<colorReset<<"             "<<endl;
    cout<<"             "<<triangleColor<<"*       *"<<colorReset<<"            "<<endl;
    cout<<"            "<<triangleColor<<"*         *"<<colorReset<<"           "<<endl;
    cout<<"           "<<triangleColor<<"*           *"<<colorReset<<"          "<<endl;
    cout<<"          "<<triangleColor<<"*             *"<<colorReset<<"         "<<endl;
    cout<<"         "<<triangleColor<<"*               *"<<colorReset<<"        "<<endl;
    cout<<"        "<<triangleColor<<"*                 *"<<colorReset<<"       "<<endl;
    cout<<"       "<<triangleColor<<"*                   *"<<colorReset<<"      "<<endl;
    cout<<"      "<<triangleColor<<"*                     *"<<colorReset<<"     "<<endl;
    cout<<"     "<<triangleColor<<"*                       *"<<colorReset<<"    "<<endl;
    cout<<"    "<<triangleColor<<"* * * * * * * * * * * * * *"<<colorReset<<"   "<<endl;

    //Parallelogram with Light Yellow BG and Black text.
    //This method colors the whole terminal upto the parallelogram's vicinity.
    cout<<parallelogramColor;
    cout<<"           * * * * * * * * * * * * * * *   "<<endl;
    cout<<"          *                           *    "<<endl;
    cout<<"         *                           *     "<<endl;
    cout<<"        *                           *      "<<endl;
    cout<<"       *                           *       "<<endl;
    cout<<"      *                           *        "<<endl;
    cout<<"     *                           *         "<<endl;
    cout<<"    *                           *          "<<endl;
    cout<<"   * * * * * * * * * * * * * * *           "<<endl;
    cout<<colorReset;
    cin.get();
    return 0;
}
