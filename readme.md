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

├── main.cxx           # Main file with user interaction and menu

├── Playlist.cpp       # Implementation of the Playlist class

├── Playlist.h         # Header file for the Playlist class

├── Song.cpp           # Implementation of the Song class

└── Song.h             # Header file for the Song class
