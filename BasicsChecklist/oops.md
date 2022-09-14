- OOPs is a programming paradigm which basically breaks down code into **classes** and **objects**. 
  Classes are code pieces/ blueprints which can be reused and produce objects for functionality
  
- Inheritance is when we borrow properties from a parent class. It define an IS-A relationship. Mammal is an animal, animal is a mammal. 

- Polymorphism refers to having many forms. It revolves around the relation that different classes having same mebder name can respond to an action but differently.

    - Operator overloading is when same operator does different things with different operands. a+b can concatenate or give sum of ASCII codes, 97+98=195.
    - Function overloading is when two functions with same name in different inherited classes are declared.
      Then they can be distinguished on types of arguments passed and number of arguments passed. If return type different->error & if everything same-> redeclaration.
- Function overriding lets us use a function that is already declared in parent class in the child class. 
```cpp

class Base {
   public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1, derived2;
    derived1.print();

    
    derived2.Base::print();

    return 0;
}
```

OUTPUT:
```
Derived Function
Base Function
```


- We use scope resolution operator :: to access the base class declaration of the method.

- Function Overloading is **polymorphism** & function overriding is **inheritance**.

- A virtual function declared in a base class with keyword 'virtual' and another one derived class signals towards the fact 
that we want to decide which function to be called during compile time accrding to the objects passed. This is called late binding. 

- Pure virtual functions are the one which are assigned zero. It has no use in base class but must be implemented by all base classes.

- An **abstract class** is one with atleast one **pure virtual function**

- A structure has no constructor or destructor & does not support inheritance.

- Constructor overloading provides a way for us to define an object in more than one way.

- Friend function can access private and protected 

- Public is default. Private members cannot be accesed by derived classes, privately inherited class makes protected and public methods be inherited as private only.

- **Interface** is implemented to declare methods but not implement them in OOPs. the interface provides description of the purpose of an object and its properties.        Only function prototypes are allowed in interfaces. 
  ```cpp
  public interface Vehicle 
             { 
                 // NO data VARIABLES are allowed in an interface 
                 // only function PROTOTYPES 
 
 
                 /** 
                  * Comments... 
                  * Anything that wants to be a "Vehicle" must, implement this function 
                  */ 
                 function start_engine() : void; 
 
              
             } 
  ```
  
 - **Data abstraction** helps at design level and hides certain implementation to show only important aspects. 
 - **Encapsulation** works at implementatin level and bundles together data and hides it from the world.

- Virtual function to achieve runtime polymorphism.
- Overriding is resolved in runtime
- Overloading resolves in compile time.

- A destructor is a class method which is automatically invoked when the object of the class is destroyed. The destructor recovers heap space allocated, closes space and databse connections of the object.

- An exception is a notification that interrupts normal execution of program. It provides a pattern to the error and transfers it for exception handling. The state of program is saved as soon as an exception is raised.
  - **Exception handling** is an OOPs concept to handle errors and place a centralised mechanism to resolve them once thrown and caught.

- An error is something which shouldn't happen in a program and an exception is a condition that program can catch.
