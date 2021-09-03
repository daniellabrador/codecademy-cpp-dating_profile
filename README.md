# **Object of Your Affection**

This repository houses the classes and objects needed for the Object of Your Affections (OOYA) program. This training project, prepared by [Codecademy](https://www.codecademy.com/learn/learn-c-plus-plus), has been an invaluable exercise in using classes and objects using C++.

## Table of Contents

- [Project Prompt](#project-prompt)
- [Technologies](#technologies)
- [Setup](#setup)
- [Sources](#sources)

## Project Prompt

Your friend is building a new match-making service: The Object of Your Affection or OOYA for short (don’t worry, you still have time to convince them to change the name).

![dating app](./resources/img/ooya.webp)

With your new understanding of C++ objects and classes, your friend thought you could build a pretty well-organized system of dating profiles.

Your first step? Build a `Profile` class that allows users to generate profile objects.

The `Profile` should store the following information:

- User’s `name`
- User’s `age`
- User’s `city`
- User’s `country`
- User’s `pronouns`
- User’s `hobbies`

And this is how users should be able to interact with their own profiles:

- Create a new profile with some information
- Add `hobbies`
- View profile

## Technologies

- C++

## Setup

Generally, you would want to compile and execute the program locally. To do that:

1. Download the `hpp` and `cpp` files. Save them in a single directory/folder.
2. Open the terminal or command line and navigate to the directory where the downloaded file resides.
3. Run the following commands to compile and execute the program:

### Command Line / Bash

```git
g++ app.cpp profile.cpp -o ooya
./ooya
```

### Command Prompt

```git
g++ app.cpp profile.cpp -o ooya
ooya.exe
```

## Sources

The techniques utilized was based on the lessons taught in [Codecademy's Learn C++ Course](https://www.codecademy.com/learn/learn-c-plus-plus
). The challenge is also provided by Codecademy.
