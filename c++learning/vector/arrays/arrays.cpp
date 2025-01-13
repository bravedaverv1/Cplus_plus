// Arrays

// ? array , what is an array in c++ ?
// Like vectors, the array is a data structure used in C++ to 
// store a sequential collection of elements. Unlike vectors, its size cannot be changed.

// * Arrays vs. Vectors

// arrays are inherited from C, C++’s parent language. They are a low-level data structure and are 
// incredibly rigid. With arrays, you can’t add or remove elements; you can only modify existing elements.

// Vectors are originated from arrays. Early in the creation of C++, the 
// language developers took these basic arrays and wrote code to enhance 
// them and make them more flexible and powerful. Therefore you can think of vectors as super arrays!

// ? Creating an Array , HOW?
// We can create an array a lot like we create normal variables, 
// by specifying the data type, giving it a descriptive name, and also specifying its size:
int favoriteNums[4];

// ? what if we know whats going in the array?
// In many cases, you won’t know what data needs to go in the array 
// until after you’ve created it, but if you do happen to know the contents of the array ahead of 
// time, you can initialize it with custom values upfront:
int favoriteNums[] = {7, 9, 15, 16};
// This array would also have a size of 4, but we don’t need to explicitly specify that when we initialize it in this way.

// * you can refer an element by its index just like in vectors