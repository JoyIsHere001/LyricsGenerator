### LyricsGenerator In C++:

🎵 A C++ console application that animates and displays the lyrics of the song "Dekha Hi Nahi" by Osho Jain. It demonstrates object-oriented programming (OOP) principles and uses multithreading for text animation.

### Features:

1. animated Lyrics: Lyrics are displayed character by character, simulating a typewriter effect.

2. Song Structure: Includes multiple verses and choruses, organized and played sequentially.

3. Customizable Delay: Animation speed can be adjusted via the printAnimated() function.

4. Pause Between Sections: Automatic delay between song parts for realistic reading experience.

5. Object-Oriented Design: Implements a SongGenerator class for modularity and reuse.


## Requirements: 

- **C++ Compiler** (e.g. [MinGW](https://sourceforge.net/projects/mingw/) or g++)  
- **Windows Command Prompt** or **PowerShell**  

### Project Structure:

i. **SongGenerator**  class:

- Handles all song-related data and operations.

- Private member fullSong stores the combined lyrics.

ii. **Private methods** :

- **addPartToSong(const vector<string>& part)**: Adds verses or choruses to the full song.

- **printAnimated(const string &text, int delayMs)**: Prints each line with animated delay.

iii. **Public methods**:

-  **generateSong()**: Plays the full song in the console.

iv. **main() function**:

- Instantiates the SongGenerator object.

- Calls **generateSong()** to display the song.

## 📥 How to Clone the Project (via GitHub Desktop):

1. Open **GitHub Desktop**  
2. Click **“Current repository” → "Add" → “Clone Repository…”**  
3. In the **URL tab**, paste the repo link:
https://github.com/JoyIsHere001/LyricsGenerator\src 
4. Choose a local path (e.g. `Documents\GitHub`)  
5. Click **Clone** ✅  
6. Navigate to the folder:
[cloned repo]/project folder/src


### Compile the program using gcc:

g++ -std=c++11 -o SongGenerator SongGenerator.cpp

### Run the program:

./SongGenerator

