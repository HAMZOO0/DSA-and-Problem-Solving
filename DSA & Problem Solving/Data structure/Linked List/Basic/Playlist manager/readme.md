# Playlist Manager

## Overview

The **Playlist Manager** is a C++ program designed to help you manage a playlist of songs. It provides an easy way to add, remove, and navigate through songs, making it ideal for music enthusiasts who want to keep track of their favorite tracks in a structured way. The program uses a doubly linked list to store song information, allowing for efficient insertion and deletion operations.

## Features

- **Add Songs**: You can add new songs either at the beginning or the end of the playlist.
- **Remove Songs**: Remove a song from the playlist by specifying its title.
- **Insert After**: Add a new song immediately after an existing song based on its title.
- **Display Songs**: View all songs in the playlist in both forward and backward order.
- **Search Songs**: Quickly find a song in the playlist by its title.
- **Play Navigation**: Navigate through songs with options to play the next or previous song.

## How to Compile and Run

### Steps to Compile

1. Clone the repository or download the code files.
   ```bash
   git clone <repository-url>
   cd playlist-manager
   playlist-manager/
   ```

├── main.cxx # Main file with user interaction and menu

├── Playlist.cpp # Implementation of the Playlist class

├── Playlist.h # Header file for the Playlist class

├── Song.cpp # Implementation of the Song class

└── Song.h # Header file for the Song class

## 1. `main.cxx`

### Purpose

- This is the main entry point of the program. It handles user interactions and presents a menu to perform various actions on the playlist.

### Functions

- **User Menu**: Displays options for the user to choose actions such as adding, removing, or displaying songs.
- **Input Handling**: Captures user input and directs the flow of the program based on the selected option.
- **Playlist Interaction**: Calls methods from the `Playlist` class to manage the song list according to user commands.

### Example Functions

- `main()`: Initializes the program and enters the main loop to interact with the user.

## 2. `Playlist.h`

### Purpose

- This header file declares the `Playlist` class, which manages the collection of songs.

### Functions

- **Class Declaration**: Defines the structure of the `Playlist` class, including private and public members.
- **Method Prototypes**: Declares methods for adding, removing, and displaying songs, along with searching and navigation methods.

### Example Methods

- `addSong(Song* newSong)`: Adds a new song to the playlist.
- `removeSong(string title)`: Removes a song from the playlist by title.
- `displaySongs()`: Displays all songs in the playlist.

## 3. `Playlist.cpp`

### Purpose

- This file contains the implementation of the `Playlist` class methods declared in `Playlist.h`.

### Functions

- **Add, Remove, and Search Logic**: Implements the logic for managing songs in the playlist.
- **Traversal Methods**: Provides functionality to display songs in the correct order and manage song navigation.

### Example Methods

- `addSong(Song* newSong)`: Handles the logic to add a song to either the head or tail of the linked list.
- `removeSong(string title)`: Finds and removes a specified song from the playlist.
- `displaySongs()`: Iterates through the linked list and prints each song's details.

## 4. `Song.h`

### Purpose

- This header file declares the `Song` class, which represents individual songs in the playlist.

### Functions

- **Class Declaration**: Defines the structure of the `Song` class, including its attributes and methods.

### Example Methods

- `getTitle()`: Returns the title of the song.
- `getArtist()`: Returns the artist of the song.

## 5. `Song.cpp`

### Purpose

- This file contains the implementation of the `Song` class methods declared in `Song.h`.

### Functions

- **Attribute Management**: Implements methods to get and set song attributes.
- **Linked List Pointers**: Manages the pointers (`next` and `prev`) used for traversing the linked list of songs.

### Example Methods

- `getTitle()`: Returns the title of the song.
- `setTitle(string title)`: Sets the title of the song.
- `getArtist()`: Returns the artist of the song.

## Conclusion

This file structure provides a clear separation of concerns, with the `main.cxx` file focusing on user interactions, while `Playlist` and `Song` classes handle the data and logic behind managing a playlist of songs. Each file plays a crucial role in making the Playlist Manager functional and user-friendly.
