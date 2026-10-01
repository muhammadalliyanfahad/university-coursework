/*
    Author: Muhammad Alliyan Fahad
    PF Assignment No.1:
    Create a complex shape using c++.
    Date:26-Sep-2026 to 27-Sep-2026
*/

    // Note for Reader:
    // This code might look scary but once you understand its really easy, you just need mad amount of focus. Good Luck :)
    // You can read the progress log and discarded sections at the end of the program.

#include<iostream> // provides basic io operations ie. cin, cout
#include<cstdlib> // provides system()
#include<string> // provides string datatype

using namespace std; // allows standard library names to be used without writing std::

void enableANSI() // this function was created to enable ANSI escape sequences in Windows CMD, thats why you see preprocessor #ifdef
{
    #ifdef _WIN32 // Targets Windows (defines both 32-bit and 64-bit builds).
        system("");
    #endif
} //You can safely skip this function if you dont want to make this program cross platform(ie linux, MacOS, Android)


int main()
{
    enableANSI(); // calls the function; its windows-specific code is excluded on non-windows systems.
    char repeatProgram; // to loop the program incase user wants to view a different art style.
    
    do
    {
        int choice; // to store art style choice
        bool invalidInput; // to loop back the program incase of invalid input

        do
        {
            invalidInput=false; 
            cout << "======================================"<<endl;
            cout << "   SPIDERMAN CONSOLE ART GENERATOR    "<<endl;
            cout << "======================================"<<endl;
            cout << "Choose Your Preferred Art Style:"<<endl;
            cout << "1. Background Pixels (Solid Blocks)"<<endl;
            cout << "2. Hashtag Art (##)"<<endl;
            cout << "3. At-Symbol Art (@@)"<<endl;
            cout << "4. Dollar-Sign Art ($$)"<<endl;
            cout << "5. Asterisk Art (**)"<<endl;
            cout << "6. Colon Art (::)"<<endl;
            cout << "7. Exclamation-Mark Art (!!)"<<endl;
            cout << "8. Plus-Sign Art (++)"<<endl;
            cout << "9. Ampersand-Sign Art (&&)"<<endl;
            cout << "10. Percentage-Sign Art (%%)"<<endl; // initially designed for 5 signs, later expanded to 10 and made changes
            cout << "Enter choice (1-10): ";
            cin >> choice;

            if( cin.fail() || choice<1 || choice>10 ) // if user enters any number outside the range of 1-10, the program will loop back and ask for input again.
            {
                cout<< "INVALID INPUT!"<<endl;
                invalidInput=true;
                cin.clear();
                cin.ignore(1000,'\n');
            }
        }
            while(invalidInput);
        cout<<endl;

        // color variables (not const, so we can configure them based on choice) (for more info, read log and discarded section for more info)
        string R, B, W, K, _; // R for Red, B for Blue, W for White, K for Black and _ for Grey Padding/Background, will hold the selected art style.

        if (choice == 1)
        {
            // Solid Background Blocks
            R = "\033[48;5;196m  \033[0m"; // those scary numbers are ANSI Escape Codes
            B = "\033[48;5;27m  \033[0m"; // \033[ starts the ANSI escape sequence and numbers are arguments (color codes), m is to close the sequence.
            W = "\033[107m  \033[0m";    // 0 is the SGR reset parameter.
            K = "\033[40m  \033[0m";    // so basically in every command, Each ANSI sequence applies the desired color, prints the character,
            _ = "\033[48;5;234m  \033[0m"; // and then resets the formatting.
        } 
        else if (choice == 2) // same logic for all blocks, only the 2 characters inside ANSI Codes Change. ie. In this Case, ##.
        {
            // Hashtags
            R = "\033[38;5;196m##\033[0m";
            B = "\033[38;5;27m##\033[0m";
            W = "\033[97m##\033[0m";
            K = "\033[30m##\033[0m";
            _ = "\033[38;5;238m##\033[0m";
        }
        else if (choice == 3)
        {
            // @ Symbols
            R = "\033[38;5;196m@@\033[0m";
            B = "\033[38;5;27m@@\033[0m";
            W = "\033[97m@@\033[0m";
            K = "\033[30m@@\033[0m";
            _ = "\033[38;5;238m@@\033[0m";
        } 
        else if (choice == 4)
        {
            // Dollar signs
            R = "\033[38;5;196m$$\033[0m";
            B = "\033[38;5;27m$$\033[0m";
            W = "\033[97m$$\033[0m";
            K = "\033[30m$$\033[0m";
            _ = "\033[38;5;238m$$\033[0m";
        } 
        else if (choice == 5)
        {
            // Asterisks
            R = "\033[38;5;196m**\033[0m";
            B = "\033[38;5;27m**\033[0m";
            W = "\033[97m**\033[0m";
            K = "\033[30m**\033[0m";
            _ = "\033[38;5;238m**\033[0m";
        }
        else if (choice == 6)
        {
            // Colons
            R = "\033[38;5;196m::\033[0m";
            B = "\033[38;5;27m::\033[0m";
            W = "\033[97m::\033[0m";
            K = "\033[30m::\033[0m";
            _ = "\033[38;5;238m::\033[0m";
        }
        else if (choice == 7)
        {
            // Exclamation Marks
            R = "\033[38;5;196m!!\033[0m";
            B = "\033[38;5;27m!!\033[0m";
            W = "\033[97m!!\033[0m";
            K = "\033[30m!!\033[0m";
            _ = "\033[38;5;238m!!\033[0m";
        }
        else if (choice == 8)
        {
            // Plus Signs
            R = "\033[38;5;196m++\033[0m";
            B = "\033[38;5;27m++\033[0m";
            W = "\033[97m++\033[0m";
            K = "\033[30m++\033[0m";
            _ = "\033[38;5;238m++\033[0m";
        }
        else if (choice == 9)
        {
            // Ampersand Sign
            R = "\033[38;5;196m&&\033[0m";
            B = "\033[38;5;27m&&\033[0m";
            W = "\033[97m&&\033[0m";
            K = "\033[30m&&\033[0m";
            _ = "\033[38;5;238m&&\033[0m";
        }
        else if (choice == 10)
        {
            // Percentage Signs or Modulus Operators you can say
            R = "\033[38;5;196m%%\033[0m";
            B = "\033[38;5;27m%%\033[0m";
            W = "\033[97m%%\033[0m";
            K = "\033[30m%%\033[0m";
            _ = "\033[38;5;238m%%\033[0m";
        }

        // this is the actual code printing the shape using the above color pallete.
    
        cout<<endl<<"================================================================"<<endl<<endl;
        // just wrote this numbering to easily compare the pixels with the grid boxes, it's 32 columns* 37 rows.
        //    1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32
        cout<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<K<<K<<K<<K<<K<<K<<K<<K<<K<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<K<<K<<K<<R<<R<<R<<K<<R<<R<<R<<K<<K<<K<<_<<_<<_<<_<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<_<<_<<K<<K<<R<<R<<R<<R<<R<<R<<K<<R<<R<<R<<R<<R<<R<<K<<K<<_<<_<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<_<<K<<R<<K<<R<<R<<R<<R<<R<<R<<K<<R<<R<<R<<R<<R<<R<<K<<R<<K<<_<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<K<<R<<R<<K<<R<<R<<R<<K<<K<<K<<K<<K<<K<<K<<R<<R<<R<<K<<R<<R<<K<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<K<<R<<R<<R<<K<<K<<K<<R<<R<<R<<K<<R<<R<<R<<K<<K<<K<<R<<R<<R<<K<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<K<<R<<R<<R<<K<<K<<R<<R<<R<<R<<R<<K<<R<<R<<R<<R<<R<<K<<K<<R<<R<<R<<K<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<K<<R<<R<<R<<K<<R<<K<<R<<R<<R<<R<<K<<R<<R<<R<<R<<K<<R<<K<<R<<R<<R<<K<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<K<<R<<R<<K<<R<<R<<K<<R<<R<<R<<R<<K<<R<<R<<R<<R<<K<<R<<R<<K<<R<<R<<K<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<K<<R<<R<<R<<K<<R<<R<<R<<K<<R<<R<<R<<K<<R<<R<<R<<K<<R<<R<<R<<K<<R<<R<<R<<K<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<K<<R<<K<<K<<R<<R<<R<<R<<K<<R<<R<<K<<K<<K<<R<<R<<K<<R<<R<<R<<R<<K<<K<<R<<K<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<K<<R<<K<<K<<R<<R<<R<<R<<K<<K<<K<<R<<K<<R<<K<<K<<K<<R<<R<<R<<R<<K<<K<<R<<K<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<K<<R<<K<<K<<K<<R<<R<<R<<K<<K<<R<<R<<K<<R<<R<<K<<K<<R<<R<<R<<K<<K<<K<<K<<K<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<K<<K<<K<<K<<K<<K<<R<<R<<R<<K<<R<<R<<K<<R<<R<<K<<R<<R<<R<<K<<K<<K<<K<<R<<K<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<K<<R<<K<<K<<W<<K<<K<<R<<R<<R<<K<<R<<K<<R<<K<<R<<R<<R<<K<<K<<W<<K<<K<<R<<K<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<K<<R<<K<<K<<W<<W<<K<<K<<R<<R<<K<<R<<K<<R<<K<<R<<R<<K<<K<<W<<W<<K<<K<<R<<K<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<K<<R<<K<<K<<W<<W<<W<<K<<K<<R<<R<<K<<K<<K<<R<<R<<K<<K<<W<<W<<W<<K<<K<<R<<K<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<K<<R<<K<<W<<W<<W<<W<<K<<K<<R<<K<<R<<K<<R<<K<<K<<W<<W<<W<<W<<K<<R<<K<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<K<<K<<K<<K<<W<<W<<W<<W<<K<<K<<R<<R<<R<<K<<K<<W<<W<<W<<W<<K<<K<<K<<K<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<K<<R<<R<<K<<W<<W<<W<<W<<W<<K<<K<<K<<K<<K<<W<<W<<W<<W<<W<<K<<R<<R<<K<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<K<<R<<R<<K<<K<<W<<W<<W<<W<<K<<K<<R<<K<<K<<W<<W<<W<<W<<K<<K<<R<<R<<K<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<K<<R<<K<<K<<K<<W<<W<<K<<K<<K<<R<<K<<K<<K<<W<<W<<K<<K<<K<<R<<K<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<K<<R<<R<<K<<K<<K<<K<<K<<K<<R<<R<<R<<K<<K<<K<<K<<K<<K<<R<<R<<K<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<_<<K<<R<<R<<K<<K<<K<<K<<K<<R<<R<<R<<K<<K<<K<<K<<K<<R<<R<<K<<_<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<_<<K<<R<<K<<K<<R<<R<<R<<K<<K<<K<<K<<K<<R<<R<<R<<K<<K<<R<<K<<_<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<_<<_<<K<<R<<R<<K<<R<<K<<R<<R<<R<<R<<R<<K<<R<<K<<R<<R<<K<<_<<_<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<_<<_<<K<<R<<R<<R<<K<<K<<R<<R<<R<<R<<R<<K<<K<<R<<R<<R<<K<<_<<_<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<_<<_<<_<<K<<R<<R<<R<<K<<K<<K<<K<<K<<K<<K<<R<<R<<R<<K<<_<<_<<_<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<K<<R<<K<<R<<R<<R<<R<<R<<R<<R<<K<<R<<K<<_<<_<<_<<_<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<K<<K<<R<<R<<R<<R<<R<<R<<R<<K<<K<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<K<<R<<R<<R<<R<<R<<R<<R<<K<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<K<<K<<K<<K<<K<<K<<K<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<endl;
        cout<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<_<<endl;
        
        cout<<endl<<"================================================================"<<endl;
        
        cout<<"Do you want to view this art in another style? (y/n): ";
        cin>>repeatProgram;
        cin.ignore(1000, '\n'); // removes the remaining chracters from the input buffer.
    }
    while(repeatProgram=='y' || repeatProgram=='Y'); // This loop will go back to the art selection style.

    cout <<endl<<endl;
    cout << "============================================================="<<endl;
    cout <<"Thanks for using SPIDERMAN CONSOLE ART GENERATOR, Goodbye :(";
    cout <<endl<<"============================================================="<<endl;

    cin.get(); // waits for the user to press Enter.
    return 0; // sends 0 to OS which means successful program execution.
}
/*
 LOG:
    Update:
    While creating complex shapes with asterisks and hashtags, I realized that building monochromatic figures felt monotonous.
    That's when I decided to research how to change the colors of individual characters and eventually discovered
    that using double space as colored pixels allowed me to render full, vibrant pixel art directly in the console.
    That was really a gotcha moment and I even celebrated just finding this new way :)
    Update:
    discovered that i can put ANSI Escape Codes along with the characters inside const strings and then just type them easily.
    Update:
    Shifted from fixed const strings to string variables to allow choice based selection for art style.
    Update:
    I just integrated an if-else structure to render this in multiple formats, ie. pixel art, hashtag art.
    Update:
    I just integrated do-while loops to let the user view multiple art styles in one execution cycle.
    Update:
    Added 5 more art styles, now a total of 10 art styles are available.
*/
/*
    Discarded Sections:(discarded after finding better alternatives)

    {
    (created pixels by combining two spaces and changing their bg color with ANSI escape codes, writing the whole structure again
    and again was quite slow so i stored them in a string constant for ease of use in cout statements.)
    const string R = "\033[48;5;196m  \033[0m"; // red color pixels
    const string B = "\033[48;5;27m  \033[0m"; //blue color pixels
    const string W = "\033[107m  \033[0m";    //white color pixels
    const string K = "\033[40m  \033[0m";    //black color pixels
    const string _ = "  "; (Transparent padding discarded due to overlapse with borders)
    const string _ = "\033[48;5;234m  \033[0m"; // dark grey pixels (for padding)
    (removed these constants after getting the idea of using variables for dynamic rendering with different characters)
    }
*/
