# Dotty
- A tiny dot product calculator in C++

## Architecture
### A Vector3 struct
- A small data structure that holds `x`, `y`, and `z` floats
### A length function
- A function using the Pythagorean theorem to find out how long a vector is
### A dot product function
- A function that takes two Vector3 inputs, multiplies their coordinates, and returns a single float

## Repo structrure
dotty/
├── CMakeLists.txt        <-- The build instructions (Standard for C++)
├── include/              <-- Where your header files live
│   └── Vector3.hpp       <-- Declares your vector and math functions
├── src/                  <-- Where your actual logic lives
│   └── Vector3.cpp       <-- Implements the math functions
└── apps/                 <-- Where your runnable programs live
    └── main.cpp          <-- The "demo" that tests your code

## How to run Dotty
- Open terminal
- Navigate to `dotty/` folder
- Run commands:
  - mkdir build
  - cd build
  - cmake ..
  - cmake --build .
  - ./dotty_app2