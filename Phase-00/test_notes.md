# Day 00 – Environment Setup

Date: 20 February 2026

## Objective:
Setup C++ development environment and connect GitHub repository.

---

## Step 1: Installed Required Tools

- Installed GCC (MinGW-w64)
- Added GCC to system PATH
- Verified installation using:
  g++ --version

- Installed Git
- Verified installation using:
  git --version

- Installed VS Code
- Installed C/C++ extension

---

## Step 2: Created GitHub Repository

Repository Name:
C++-DSA-Journey

Selected:
- Public repository
- Added README
- Added .gitignore (C++ template)
- Added MIT License

---

## Step 3: Cloned Repository

Used command:
git clone <repository-link>

Opened project in VS Code.

---

## Step 4: Created Test Program

Created file:
test_repository.cpp

Program:

#include <iostream>
using namespace std;

int main() {
    cout << "Repository setup successful!" << endl;
    return 0;
}

Compiled using:(command prompt)
g++ test_repository.cpp

Ran using:
a.exe   (command prompt)
.\a.exe (powershell)

---

## Step 5: First Push

Commands used:
git add .    // git add : prepare file for saving  and . : add everything if we want to add specific file then // git add filename
git commit -m "Day 00 setup completed"
git push

---

## Learnings:

- Understood how compiler works
- Learned how to compile C++ manually
- Learned basic Git workflow (add, commit, push)
- Repository successfully connected

---
## What is an IDE :

    IDE stands for Integrated Development Environment. 

    It is nothing more than an enhanced version of a text editor that helps you write more efficient and nicer code. 

    It helps to differentiate different parts of your codes with different colors and notifies you if you are missing some semicolon or bracket at some place by highlighting that area.

## Summary:

Environment setup completed successfully.
Ready to start Day 01 learning tomorrow.