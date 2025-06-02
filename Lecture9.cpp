
#include <iostream>
#include <string>

int main()
{
    std::cout << "Day 9\n";

    // References - declaring + initializing another var in a specific way that acts as an alias for your variable - once you change the value of the ref var, the... 
    // ...value of the var being referenced also changes. 
    // syntax - dataType& varName = otherVarName
    int age = 43;
    int& ageRef = age;

    std::cout << age << std::endl;
    std::cout << ageRef << std::endl;

    ageRef = 11;

    std::cout << ageRef << std::endl;

    std::string name = "Lesly";
    std::string& nameRef = name;

    std::cout << name + "     " + nameRef << std::endl;

    nameRef = "Lester";
    
    std::cout << nameRef + "    " + name << std::endl;

    // Git with GitHub - Version Control. URL to download https://git-scm.com/downloads/win (for windows). URL to base GitHub https://www.github.com 
    // additional student extras URL https://github.com/settings/education/benefits 
    // Command line
        /*
        * pwd - print working directory
        * ls - shows files and folders
        * cd - change directory
        * clear - clears the terminal
        * NOTE : knowing the path goes a long way, but you can always check the path in your files
        * shortcut tool for cd: ~/ it is an alias for userfolder
        * 
        set of commands that will create a connection from the online repo to the project on your computer
            echo "# Lecture9" >> README.md

            git config --global user.email "SCHOOL EMAIL"
            git config --global user.password "your password"

            git config --global credential.helper store (stores permanently)

            git init
            git add .
            git commit -m "first commit"
            git branch -M main
            git remote add origin https://github.com/Lesly-AM/Lecture9.git
            git push -u origin main

            [git init - initializes a git reposit locally 
            git add . - adds everything in the directory
            (git add README.md - adds a readme section to your repo)
            git commit -m "first commit" - preps the current version to be pushed to your repo 
            git branch -M main - " "
            git remote add origin (origin is an alias, you can use whatever - use github) https://github.com/Lesly-AM/Lecture9.git - actually does the connection from the machine to your github
            git push -u origin main - uolaods your current version of the project (timestamp 30:50)]
        */
}
