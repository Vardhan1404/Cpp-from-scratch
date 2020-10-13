/*     RULES
- Any class where atleast one virtual function exists, in that class the compiler declares the variable as the member in that class.
- It says that if any class contains atleast one virtual function then object created of that class must contains/exists vptr pointer.
- No separate vptr pointer for child class if one is already in parent class.
- Any class where atleast one virtual function exists, there must exists a vtable (static array) - which consists of pointers containing address of virtual functions.
- for descedent classes, separate individual vtable is there
- vtable: the static array, does not depend upon objects.
- vptr contains address of static array, if A class object is made, then vptr contains class A vtable address.



*/

