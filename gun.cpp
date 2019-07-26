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

// Include the ability to print things.
#include <iostream>


#include "gun.h"  // This cpp file will include the matching header file.
                            // The convention for classes is to have declarations in the header, and definitions in the source file.
                            // This way, we can include the header anywhere, and use the functions before they are defined.
                            // When the cpp files are compiled, they define the functions that have already been declared in the headers.


// Function Definition
// The function definition is actually outside of the class definition.
// That's why we use the scope resolution operator ::
void Gun::Fire()
{
    if (mag.bullets > 0)
    {
        // If there are bullets, fire the gun.
        std::cout << "BANG!" << std::endl;
        mag.bullets--;
    }
    else
    {
        // If there are no bullets, click instead.
        std::cout << "click" << std::endl;
    }
}

void Gun::Reload()
{
    std::cout << "Loading Gun" << std::endl;
    mag.bullets = mag.capacity;
}
