#include <iostream>
using namespace std;
class Song
{
private:
    string title;
    string artist;
    Song *next;
    Song *prev;

public:
    Song(string t, string a)
    {
        title = t;
        artist = a;
        next = nullptr;
        prev = nullptr;
    }

    // defult const for playlist class header
    Song() {}

    string get_artist()
    {
        return artist;
    }

    string get_title()
    {
        return title;
    }

    Song *get_next()
    {
        return next;
    }

    Song *get_prev()
    {
        return prev;
    }

    void set_prev(Song *prev)
    {
        this->prev = prev;
    }

    void set_next(Song *next)
    {
        this->next = next;
    }
    void set_artist(string artist)
    {
        this->artist = artist;
    }
    void set_title(string title)
    {
        this->title = title;
    }
};