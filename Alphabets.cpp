#include <iostream>
#include <windows.h>
#include <MMsystem.h>

using namespace std;

int main()
{
    char alphabets[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    char alpha;



    for (int i = 0; i < 26; i++)
    {
        cout << alphabets[i] << " ";
    }
    cout << "\n";
    cout << "Please Chose An Alphabet\n";
    cin >> alpha;
    cout << "\n";

    if (alpha == 'A')
    {
        cout << "    *    " << "\n";
        cout << "   * *   " << "\n";
        cout << "  *   *  " << "\n";
        cout << " ******** " << "\n";
        cout << " *     * " << "\n";
        
        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\A.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'B')
    {
        cout << "**** " << "\n";
        cout << "*   *" << "\n";
        cout << "**** " << "\n";
        cout << "*   *" << "\n";
        cout << "**** " << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\B.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'C')
    {
        cout << "  *****" << "\n";
        cout << " *      " << "\n";
        cout << "*       " << "\n";
        cout << "*       " << "\n";
        cout << " *      " << "\n";
        cout << "  *****" << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\C.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'D')
    {
        cout << "***** " << "\n";
        cout << "*    *" << "\n";
        cout << "*    *" << "\n";
        cout << "*    *" << "\n";
        cout << "***** " << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\D.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'E')
    {
        cout << "*****" << "\n";
        cout << "*    " << "\n";
        cout << "*****" << "\n";
        cout << "*    " << "\n";
        cout << "*****" << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\E.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'F')
    {
        cout << "*****" << "\n";
        cout << "*    " << "\n";
        cout << "*    " << "\n";
        cout << "*****" << "\n";
        cout << "*    " << "\n";
        cout << "*    " << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\F.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'G')
    {
        cout << "  *****" << "\n";
        cout << " *      " << "\n";
        cout << "*       " << "\n";
        cout << "*   *** " << "\n";
        cout << " *    *" << "\n";
        cout << "  **** " << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\G.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'H')
    {
        cout << "*     *" << "\n";
        cout << "*     *" << "\n";
        cout << "*******" << "\n";
        cout << "*     *" << "\n";
        cout << "*     *" << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\H.wav"), NULL, SND_SYNC);


    }
    else if (alpha == 'I')
    {
        cout << "*****" << "\n";
        cout << "  *  " << "\n";
        cout << "  *  " << "\n";
        cout << "  *  " << "\n";
        cout << "*****" << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\I.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'J')
    {
        cout << "******" << "\n";
        cout << "     *" << "\n";
        cout << "     *" << "\n";
        cout << "     *" << "\n";
        cout << "*    *" << "\n";
        cout << " **** " << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\J.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'K')
    {
        cout << "*   *   " << "\n";
        cout << "*  *    " << "\n";
        cout << "* *     " << "\n";
        cout << "**      " << "\n";
        cout << "* *     " << "\n";
        cout << "*  *    " << "\n";
        cout << "*   *   " << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\K.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'L')
    {
        cout << "*      " << "\n";
        cout << "*      " << "\n";
        cout << "*      " << "\n";
        cout << "*      " << "\n";
        cout << "*******" << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\Dr. Kashif\\Alphabets\\L.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'M')
    {
        cout << "*     *" << "\n";
        cout << "**   **" << "\n";
        cout << "* * * *" << "\n";
        cout << "*  *  *" << "\n";
        cout << "*     *" << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\M.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'N')
    {
        cout << "*     *" << "\n";
        cout << "**    *" << "\n";
        cout << "* *   *" << "\n";
        cout << "*  *  *" << "\n";
        cout << "*   * *" << "\n";
        cout << "*    **" << "\n";
        cout << "*     *" << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\N.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'O')
    {
        cout << "  *****  " << "\n";
        cout << " *     * " << "\n";
        cout << "*       *" << "\n";
        cout << "*       *" << "\n";
        cout << " *     * " << "\n";
        cout << "  *****  " << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\O.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'P')
    {
        cout << "*****" << "\n";
        cout << "*    *" << "\n";
        cout << "*****" << "\n";
        cout << "*" << "\n";
        cout << "*" << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\P.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'Q')
    {
        cout << "  *****" << "\n";
        cout << " *     *" << "\n";
        cout << "*       *" << "\n";
        cout << "*       *" << "\n";
        cout << " *     *" << "\n";
        cout << "  **** *" << "\n";
        cout << "       *" << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\Q.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'R')
    {
        cout << "*****" << "\n";
        cout << "*    *" << "\n";
        cout << "*    *" << "\n";
        cout << "*****" << "\n";
        cout << "* *  " << "\n";
        cout << "*  * " << "\n";
        cout << "*   *" << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\R.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'S')
    {
        cout << " *****" << "\n";
        cout << "*     " << "\n";
        cout << "*     " << "\n";
        cout << "*     " << "\n";
        cout << " *****" << "\n";
        cout << "     *" << "\n";
        cout << "     *" << "\n";
        cout << "***** " << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\S.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'T')
    {
        cout << "*****" << "\n";
        cout << "  *  " << "\n";
        cout << "  *  " << "\n";
        cout << "  *  " << "\n";
        cout << "  *  " << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\T.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'U')
    {
        cout << "*     *" << "\n";
        cout << "*     *" << "\n";
        cout << "*     *" << "\n";
        cout << "*     *" << "\n";
        cout << " *   * " << "\n";
        cout << "  ***  " << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\U.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'V')
    {
        cout << "*     *" << "\n";
        cout << " *   * " << "\n";
        cout << "  * *  " << "\n";
        cout << "   *   " << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\V.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'W')
    {
        cout << "*     * " << "\n";
        cout << "*     * " << "\n";
        cout << "*  *  * " << "\n";
        cout << "* * * * " << "\n";
        cout << "*     * " << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\W.wav"), NULL, SND_SYNC);


    }
    else if (alpha == 'X')
    {
        cout << "*   *" << "\n";
        cout << " * * " << "\n";
        cout << "  *  " << "\n";
        cout << " * * " << "\n";
        cout << "*   *" << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\X.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'Y')
    {
        cout << "*     *" << "\n";
        cout << " *   *" << "\n";
        cout << "  * *" << "\n";
        cout << "   *" << "\n";
        cout << "   *" << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\Y.wav"), NULL, SND_SYNC);

    }
    else if (alpha == 'Z')
    {
        cout << "******" << "\n";
        cout << "    * " << "\n";
        cout << "   *  " << "\n";
        cout << "  *   " << "\n";
        cout << " *    " << "\n";
        cout << "******" << "\n";

        PlaySound(TEXT("C:\\Users\\anas_\\OneDrive\\Documents\\CYS-1-A\\PF CYS-A\\Dr. Kashif\\Alphabets\\Z.wav"), NULL, SND_SYNC);

    }
    else
    {
        cout << "Error\n";
        cout << "Type Your Letter In Captial Form\n";
        }
        return 0;
}
