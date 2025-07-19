// A pure virtual function is a function declared in a base class using = 0, with no definition.
// It must be overridden in a derived class.


// virtual void draw() = 0;
//  What is an abstract class?
// A class that contains at least one pure virtual function is called an abstract class.
// You cannot create objects of an abstract class.

//  Why can’t we create an object of an abstract class?
// Because it has incomplete functions (pure virtual), and creating an object would mean trying to use something that is not fully defined.