#include "Song.h"
class Playlist
{
private:
    Song *Head;
    Song *current;
    int size;

public:
    Playlist()
    {
        Head = new Song;
        Head->set_next(nullptr);
        Head->set_prev(nullptr);

        current = nullptr;
        size = 0;
    }

    void add_in_head(string title, string artist)
    {
        Song *newSong = new Song(title, artist);

        // fot 1st node
        if (Head->get_next() == nullptr)
        {
            Head->set_next(newSong);
            newSong->set_prev(Head);
            newSong->set_next(nullptr);
        }

        else
        {
            newSong->set_prev(Head);
            newSong->set_next(Head->get_next());
            Head->get_next()->set_prev(newSong);
            Head->set_next(newSong);
        }
        current = newSong;

        size++;
    }

    void add_song_to_end(string title, string artist)
    {
        if (current == nullptr)
        {
            add_in_head(title, artist);
            return;
        }
        else
        {
            Song *newSong = new Song(title, artist);
            Song *tail = Head;
            while (tail->get_next() != nullptr)
            {
                tail = tail->get_next();
            }
            tail->set_next(newSong);
            newSong->set_prev(tail);
            newSong->set_next(nullptr);
            current = newSong;
            size++;
        }
    }

    void insert_song_after(string existingTitle, string title, string artist)
    {
        // Check if the playlist is empty
        if (Head->get_next() == nullptr)
        {
            cout << "Playlist is empty!" << endl;
            return;
        }

        Song *temp = Head->get_next(); // Start with the first song after the Head node

        // Traverse through the playlist to find the existing song
        while (temp != nullptr)
        {
            if (temp->get_title() == existingTitle)
            {
                // Create a new song
                Song *newSong = new Song(title, artist);

                // Case 1: If the existing song is the last one
                if (temp->get_next() == nullptr)
                {
                    temp->set_next(newSong);
                    newSong->set_prev(temp);
                    newSong->set_next(nullptr);
                }
                // Case 2: Song is somewhere in the middle
                else
                {
                    newSong->set_prev(temp);
                    newSong->set_next(temp->get_next());
                    temp->get_next()->set_prev(newSong);
                    temp->set_next(newSong);
                }

                size++;
                cout << "\nSong inserted successfully after \"" << existingTitle << "\".\n";
                return;
            }

            // Move to the next song
            temp = temp->get_next();
        }

        // If the existing song was not found
        cout << "Song \"" << existingTitle << "\" not found!" << endl;
    }

    void remove_Song(string title)
    {
        Song *temp = Head->get_next(); // Start with the first actual song, skipping the Head node.

        // Check if the playlist is empty
        if (temp == nullptr)
        {
            cout << "Playlist is empty!" << endl;
            return;
        }

        while (temp != nullptr)
        {
            if (temp->get_title() == title)
            {
                // Case 1: Song is the first song (next to the Head)
                if (temp->get_prev() == Head)
                {
                    Head->set_next(temp->get_next());
                    if (temp->get_next() != nullptr)
                        temp->get_next()->set_prev(Head);
                }
                // Case 2: Song is the last song
                else if (temp->get_next() == nullptr)
                {
                    temp->get_prev()->set_next(nullptr);
                }
                // Case 3: Song is in the middle
                else
                {
                    temp->get_prev()->set_next(temp->get_next());
                    temp->get_next()->set_prev(temp->get_prev());
                }

                // Clean up the memory
                delete temp;
                size--;

                cout << "\n\nSong Deleted Successfully\n\n";
                return;
            }

            // Move to the next song
            temp = temp->get_next();
        }

        // If no match is found
        cout << "Song \"" << title << "\" not found!" << endl;
    }

    void display_songs_forward()
    {
        Song *temp = Head->get_next();
        while (temp)
        {
            cout << "Title: " << temp->get_title() << ", Artist: " << temp->get_artist() << endl;
            temp = temp->get_next();
        }
    }

    void display_songs_backward()
    {
        Song *temp = Head->get_next(); // if there is no song
        if (size == 0)
        {
            cout << "Playlist is empty!" << endl;
            return;
        }

        while (temp->get_next() != nullptr)
        {

            temp = temp->get_next();
        }

        while (temp != Head)
        {
            cout << "Title: " << temp->get_title() << ", Artist: " << temp->get_artist() << endl;
            temp = temp->get_prev();
        }
    }

    void search_song(string title)
    {
        Song *temp = Head;
        while (temp)
        {
            if (temp->get_title() == title)
            {
                cout << "Found!!! \n";
                return;
            }
            temp = temp->get_next();
        }
        cout << " Not Found";
    }

    void playNext()
    {
        if (current && current->get_next())
        {
            current = current->get_next();
            cout << "Now playing: " << current->get_title() << " by " << current->get_artist() << endl;
        }
        else
        {
            cout << "No next song to play." << endl;
        }
    }

    void play_previous()
    {
        if (current && current->get_prev())
        {
            current = current->get_prev();
            cout << "Now playing: " << current->get_title() << " by " << current->get_artist() << endl;
        }
        else
        {
            cout << "No previous song to play." << endl;
        }
    }

    // memory free
    ~Playlist()
    {
        Song *temp = Head;
        while (temp)
        {
            Song *nextSong = temp->get_next();
            delete temp;
            temp = nextSong;
        }
    }
};