#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

class SongGenerator
{
private:

    const vector<string> verse1 = {
        "Maine Sikke Fekein The Nadiyon Mein",
        "Tootte Taaron Se Tujhe Maanga Tha....",
    };

    const vector<string> verse2 = {
        "Maine Sapne Dekhe The Bas Tere",
        "Pakke Dil Se Tujhe Pukara Tha..\n",
    };

    const vector<string> verse3 = {
        "~Music~\n",
        "Main Kaato Ka Aangan Tha",
        "Bemausam Saavan Tha",
        "Phir Tu Aa Gaya",
        "Mai Sheeshe Ka Kamra Tha",
        "Patthar Sa Chehra Tha",
        "Phir Tu Aa Gaya\n",
        "~Ohhh....~\n",
    };

    const vector<string> chorusPart1 = {
        "~Ooooo....~\n",
        "Kabhi Kabhi Sochta Hun Waadon Ka Itna Pakka",
        "Koi Dekha Hi Nahi..",
    };

    const vector<string> chorusPart2 = {
        "Kitne Phool Dekhe Maine..",
        "Tere Jaisa koi Mehka Hi Nahi..\n",
    };

    const vector<string> chorusPart3 = {
        "Kabhi Kabhi Sochta Hun tu Naa Aata",
        "To Koi Aata Hi Nahi..\n",
    };

    vector <string> fullSong;

   
    void addPartToSong(const vector<string> &part)
    {
        fullSong.insert(fullSong.end(), part.begin(), part.end());
        fullSong.push_back(""); 
    }

  
    void printAnimated(const string &text, int delayMs = 50)
    {
        for (char c : text)
        {
            cout << c << flush;
            this_thread::sleep_for(chrono::milliseconds(delayMs));
        }
        cout << endl;
    }

public:

    SongGenerator()
    {
        addPartToSong(verse1);
        addPartToSong(verse2);
        addPartToSong(chorusPart1);
        addPartToSong(chorusPart2);
        addPartToSong(verse3);
        addPartToSong(chorusPart3);
    }

   
    void generateSong()
    {
        cout << "\n🎵 Playing Track: 'Dekha Hi Nahi' by Osho Jain 🎶\n\n";

        for (const string &line : fullSong)
        {
            if (line.empty())
            {
                
                this_thread::sleep_for(chrono::milliseconds(2000));
            }
            else
            {
   
                printAnimated(line, 100);
              
                this_thread::sleep_for(chrono::milliseconds(1200));
            }
        }

        cout << "\n✨ End of Track ✨\n";
    }
};

int main()
{
    SongGenerator generator;
    generator.generateSong();
    return 0;
}
