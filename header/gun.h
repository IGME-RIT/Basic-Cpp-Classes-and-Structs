/*
Classes and Structs
(c) 2016
Author: David Erbelding
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once        // Prevents the compiler from reading this file twice.

// This is a struct declaration.
struct Magazine
{
    // This are the member variables for our struct.
    // Creating a struct also creates all of its member variables.
    // Members are accessed with "objectName.memberName"
    // These are public by default, meaning any object can access and change them.
    // Because of this, structs are typically used to describe blocks of data that don't manage themselves.
    int bullets = 0;
    int capacity = 6;
};

// This is a class declaration.
// A class is a type of object.
class Gun
{
    // Member variables in classes work just like they do in structs.
    // The only difference being members in classes are private by default. (they can't be directly accessed by other types)
    Magazine mag;

public: // This line makes all following declarations public so that they can be accessed by other types.
    
    // These are member functions.
    // Member functions are called with "object.functionName(parameters)";
    // The function gets called in the context of that specific object.
    void Fire();

    void Reload();
};