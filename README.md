 Smart Library Manager

 Project Description
A small C++ application to manage library items using Classes, Inheritance, STL containers, and File Persistence.

 Design Decisions
Inheritance: Used a base class `LibraryItem` and a derived class `Book`.
STL Containers: Used `std::vector` to store items and `std::shared_ptr` for memory management.
File Persistence: Data is saved in `data/library.txt` so it's not lost when the program closes.
Organization: Code is organized into `src`, `include`, and `data` folders for better structure.

How to Build & Run
1. Open terminal in the project root.
2. Compile: `g++ src/main.cpp -o main`
3. Run: `./main`
