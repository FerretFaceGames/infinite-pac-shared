# Infinite Pac Shared
Example video of the game in action:
https://www.youtube.com/watch?v=LZImeRnXGvA

This repo contains the full source code for building the game *Infinite Pac Shared*, which is built from the same source code as *Infinite Pac* in the Windows 10 app store. The game *Infinite Pac* is available for free here: https://www.microsoft.com/store/apps/9nblggh4vbpc

This is meant to be an example for using the *ffcore* library for writing a game. The *ffcore* code is part of this repo in the core directory, but that's just for simplicity and stability. The live source code for *ffcore* is always here: https://github.com/FerretFaceGames/ffcore

## Starting point
Open the solution game.sln in Visual Studio 2015.

The file App.xaml.cpp in the Maze project is where game initialization starts. The file Main.cpp in the Maze project is where the main() function is, but really game init starts in App.xaml.cpp since Main.cpp is just minimal stuff to get into the App class.

## Copyright
Copyright 2016 Peter Spada
