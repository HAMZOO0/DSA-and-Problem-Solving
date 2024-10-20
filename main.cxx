#include "Playlist.h"
#include <iostream>
using namespace std;

void displayMenu()
{
    cout << "\n--- Playlist Manager Menu ---" << endl;
    cout << "1. Add song at the beginning" << endl;
    cout << "2. Add song at the end" << endl;
    cout << "3. Insert song after a specific song" << endl;
    cout << "4. Remove a song" << endl;
    cout << "5. Display all songs (Forward)" << endl;
    cout << "6. Display all songs (Backward)" << endl;
    cout << "7. Search for a song" << endl;
    cout << "8. Play next song" << endl;
    cout << "9. Play previous song" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter your choice: ";
}

int main()
{
    Playlist list;
    int choice;
    string title, artist, existingTitle;

    do
    {
        displayMenu();
        cin >> choice;

        switch (choice)
        {
        case 1: // Add song at the beginning
            cout << "Enter song title: ";
            cin.ignore(); // Ignore newline from previous input
            getline(cin, title);
            cout << "Enter artist name: ";
            getline(cin, artist);
            list.add_in_head(title, artist);
            break;

        case 2: // Add song at the end
            cout << "Enter song title: ";
            cin.ignore();
            getline(cin, title);
            cout << "Enter artist name: ";
            getline(cin, artist);
            list.add_song_to_end(title, artist);
            break;

        case 3: // Insert song after a specific song
            cout << "Enter existing song title: ";
            cin.ignore();
            getline(cin, existingTitle);
            cout << "Enter new song title: ";
            getline(cin, title);
            cout << "Enter artist name: ";
            getline(cin, artist);
            list.insert_song_after(existingTitle, title, artist);
            break;

        case 4: // Remove a song
            cout << "Enter song title to remove: ";
            cin.ignore();
            getline(cin, title);
            list.remove_Song(title);
            break;

        case 5: // Display all songs (Forward)
            list.display_songs_forward();
            break;

        case 6: // Display all songs (Backward)
            list.display_songs_backward();
            break;

        case 7: // Search for a song
            cout << "Enter song title to search: ";
            cin.ignore();
            getline(cin, title);
            list.search_song(title);
            break;

        case 8: // Play next song
            list.playNext();
            break;

        case 9: // Play previous song
            list.play_previous();
            break;

        case 0: // Exit
            cout << "Exiting the Playlist Manager. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}
