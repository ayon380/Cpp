#include <iostream> //made by Bjarne Straustrup
int main()
{
    ? ? ? "BASIC SYNTAX" ~
        /*
        This is the basic syntax of a C++ program on the upper we have a header file known as iostream.
        */

        ? ? ? "I/O" ~
        /*
        we use cin>> to get input from the user And cout<< to print output in the console.
        */

        ? ? ? "SETW()" ~(03)
        /*
        We use setw() (in header file <iomanip>) function to equalize the amount of spaces in the print statements.
        */

        ? ? ? "VARIABLE SCOPE" ~
        /*
        You can access global variables by using.("::")Global operator in c++ or by using extern keyword in C.
        */

        ? ? ? "ENDL" ~
        /*
         In C++ we use "endl" at the end of the input or output statement to clear the buffer.
        */

        ? ? ? "STRING WITH SPACES" ~
        /*
        We use the function "getline(cin,string_name);" to take input with spaces , if this doesnt work then we have ti use  "getline(cin>>ws,string_name)" , ">>ws" deletes all the spaces before .
        */

        ? ? ? "STRUCTURE,UNION,ENUM" ~(07)
        /*
         In C++, structure, union and enum are the same as we had in C ,if we use typedef,we don't have to declare name of  structure every time we use it in a function.And in a structure the size of the structure is the sum of the Size of the variables in it.But in the case of Union, The size of the Union is the maximum.Value of the variable in union.
        */

        ? ? ? "POINTER" ~(05)
        /*
        Pointer is a variable that stored the address of another variable.One of the main uses of pointers is to pass a variable by pointer to function. What it does is this changes the value of the original value in the main function.
        */

        ? ? ? "FUNCTION TYPES" ~(08)
        /*
        In C we have three types of function calls.First one is called by value.Second one is called by reference variables.Third one is called by reference pointers.In the type called by value,
        One copy of the data is sent to the function.Secondly, in the case of Called by reference variables as well as by the reference pointer.The address of the data is sent to the function.So.The actual value from where the function is called.Is changed.
        */

        ? ? ? "INLINE FUNCTION" ~(09)
        /*
         In the case of inline functions.The code of the function is directly placed instead of the place where the function is called.This is useful only with short functions like only the functions which are written only for addition, subtraction, or just one two lines of code only.In case of large functions we should not use the inline functions because that will increase the memory usage to a very high extent. To that extent that it will make the usage of the function.Very Unsuitable.
        */

        ? ? ? "STATIC VARIABLES" ~
        /*
        In the case of static variables that we use in functions.The value of the variables that are declared static retains its value after every function loop. That means if we call the function 10 times.The value that was assigned to it on the first time, for example one it will just increment over that only like 2345 like that.Default Value of static variable is  0 .
         */

        ? ? ? "FUNCTION PARAMETERS" ~
        /*
         In the case of default parameters,We have to assign a certain value that will be taken as a default value for the function when the value will be not provided in the main function.
        */

        ? ? ? "CONST" ~
        /*
        We use the keyword constant to a variable when we don't want the value of the variable to be changed by function or any code inside the function.
        */

        ? ? ? "OOP" ~
        /* Data abstraction is the simplification of data into a readable or simple form.Data encapsulation means wrapping data and functions into a single unit.Inheritance means that properties of one class can be inherited to another class.Polymorphism is the ability of a class to take on many forms. */

        ? ? ? "CLASSES, ACCESS MODIFIERS" ~(12)
        /*
         The public modifier states that's the variables and functions under the public modifier.Can you accessible by any other function or method outside the class?But in the case of private modifiers, the variables and functions declared within  the private modifier can be used only within the respective class. It can't be accessed outside the class.We have to use the scope resolution operator("::") to define a function outside the class. Private is the default access modifier for any class.
        */

        ? ? ? "STATIC FUNCTIONS" ~(15)
        /*
        The default value of any static variable declared is 0.The default value cannot be changed inside the class. It has to be changed outside the classs using global scope operator.Static functions can only take and use static variables inside it.Static functions are called directly using the class name, Not by using the object name.
        */

        ? ? ? "FRIEND FUNCTIONS" ~(18)
        /*
        Friend functions are a certain type of functions which are used to access private data or private functions of a class.Private functions can be declared inside the private part or the public part,by just adding a keyword "friend" to the front of the function and this function can be called without the help of any object. It can be directly called like any normal function.
        */

        ? ? ? "FRIEND CLASSES" ~
        /*
         In C Plus plus, we can define a full class as friend.And with the help of this, we don't have to Individually define every function as friend function.
        */

        ? ? ? "CONSTRUCTORS" ~(22)
        /*
        Constructors are a kind of functions that are automatically invoked when a Class is initiated .Constructors are used to set values to the private data of a class.Constructors can be of two types, default and parameterized.Constructors do not return anything at and they don't have any return data type.Constructors MUST be defined in the public section of the class.In the case of parameters constructors, we can define constructors for every kind of parametrization,even by kind of data type .So the function will automatically choose the correct constructor for the respective parameters.
        */

        ? ? ? "COPY CONSTRUCTORS" ~(27)
        /*
        Copy constructor  are used to initialise a class with the help of another class.Copy constructors are automatically initialised by the compiler.Copy constructors only work when the class is defined externally in the same line.
        */

        ? ? ? "DESTRUCTOR" ~(28)
        /*
        Destructors are automatically initialised by the compiler upon the termination of the block or the definition of the main function. We can even define the destructor in the class itself by just adding "~"mark on the front of the class name.Destructors can also be used with stacks, queues, heaps, another advanced things that can be also be used for dynamic memory allocation as well. Destructors allow us to take even more control over the memory.
        */

        ? ? ? "INHERITANCE" ~(29)
        /*
        The concept of reusability of code is in C by the use of the concept called inheritance.What United's technically means is that we can form different classes from different classes.The existing class is called the base class.And the classes which are derived from the base class is called the derived class.Reusing classes saves a lot of time because we don't have to write the same functions of the base class into derived class. We can just initiate a new class and just implement the functions of different base classes right into it. Thus, we don't have to write the same code again, and again, and in this  way it saves a lot of time .
        */

        ? ? ? "INHERITANCE TYPES" ~(30)
        /*
        There are 5 forms of inheritance in C++.Following single inheritance, multiple inheritance, hierarchical inheritance, multi level inheritance, and hybrid inheritance.
        -->  "SINGLE INHERITANCE" ---  Single Inheritance is a type of inheritance in which the derived class is inherited from only one base class.For example,Programmer class from an employee class,Programmer class will be able to implement all of the functions from the employee class..

        --> "MULTIPLE INEHRITANCE" --- Multiple inheritance is a kind of inheritance in which the derived classes inherit tent from more than one base class.For example, we take three classes, employee, assistant and programmer.If the programmer class is inherited from the employee and assistant classes, that means that a programmer class can now inherit all the functions from the employee as well as the assistant class.

        --> "HIERARCHIAL INHERITANCE" --- Hierarchical inheritance is a type of inheritance in which several derived classes, at inherited from only a single base class.For example, if you take employee, manager and programmer classes.If the programmer and manager classes are inherited from the employee class.Then the programmer as well as the manager class will be able to implement all of the functions from the employee class.

        --> "MULTILEVEL INHERITANCE" -- Multi level inheritance is a kind of inheritance in which the derived class is inherited from another derived class.For example, we take the take three classes animal, mammal and cow.If the mammal class is inherited from the animal class and the cow classes is inherited from the mammal class, the cow class will be able to inherit all the function from the mammal class.

        --> "HYBRID INHERITANCE" -- Hybrid inheritance is a combination of multiple inheritance and multi level inheritance. In hybrid inheritance classes derived from two classes, as in the case of multiple inheritance. However, the parent classes is not a base class. For example, we have four classes “animal”, “mammal”, “bird”, and “bat”. If “mammal”  and “bird” classes are inherited from the “animal” class and “bat” class is inherited from “mammal” and “bird” classes which means that “mammal” and “bird” classes can now implement the functionalities of “animal” class and “bat” class can now implement the functionalities of “mammal” and “bird” classes.
        */

        ? ? ? "INHERITANCE SYNTAX" ~
        /*
        The default visibility mode for inherited classes is private.The private members of the base class and never inherited, and the private members cannot be accessed in any case.A default constructor is compulsory in the base class for inheriting.
        */

        ? ? ? "VISIBILITY MODES" ~(30)
        /*
        There are three types of visibility modes, namely public, protected and private.In the public mode, the public members of the base class becomes the public members of the derived class.And in the private mode, the public members of the base class becomes the private members of the derived class. Protected mode means that the data members will be private in the base class , but can be inherited in the derived class.

                                    Public Derivation      	Private Derivation    	Protected Derivation
        Private members           	Not Inherited             Not Inherited             Not Inherited
        Protected members     	      Protected                	Private                   Protected
        Public members           	    Public                   Private                  Protected
        */

        ? ? ? "AMBIGUITY RESOLUTION" ~(36)
        /*Suppose two or more base classes have the same function with the same name. It will create a confusion in the compiler to choose which function to call in the derived  class . Therefore we can prevent this ambiguity by creating another function in the derived class using group scope resolution operator, and stating from which base class to call the function for ex. "base1::greet();".And in the case of in which the base class and derived class has the same function name, then the compiler will automatically call the function in the derived class.*/

        ? ? ? "VIRTUAL BASE CLASS" ~(37)
        /*
        Suppose we have a base class and we have two derived class from the first base class, and we again take another derived class from the two derived classes we got.So in this case we will have two copies of all the data members on the first base class in the last Derived Class .The compiler will get confused about which data member to use from the first derived class or from the second derived class.So in this case we use the keyword "virtual" and we assign the two derived classes as a virtual base class. So what it means is that now the compiler will understand , and will take only one instance of the data from the two base classes,  thus preventing ambiguity.
        */

        ? ? ? "CONSTRUCTOR IN DERIVED CLASS" ~(38)
        /*
        Constructors are called in the order ,it is declared in the derived class , when virtual base classes are present in , virtual is given the most priority, in case of multiple virtual classes , the order is to be maintained .
        */

        ? ? ? "INITIALIZATION LIST IN CONSTRUCTOR" ~(40)
        /*
        Initialization list in constructor is nothing but a syntax to initialize the values to the variables of the same class within the constructor  header only.The variables will be initialized in the same way the variables were declared in the class, not in the way they were declared in the constructor header.
        */

        ? ? ? "NEW AND DELETE KEYWORD" ~(39)
        /*
        New and delete keyword is used for dynamic memory allocation in C++.The new keyword is used to allocate memory dynamically during the runtime to a particular variable array or a class.And the delete keyword is used to deallocate the memory that was taken by the variable ,array or the particular class.And the delete keyword also calls the destructor.
        */

        ? ? ? "ARROW OPERATOR" ~(41)
        /*
        Arrow Operator "c->setadata();" is another way of writing as "(*c),setdata();"
        */

        ? ? ? "THIS POINTER" ~(43)
        /*
        This is a kind of pointer that is used to point mainly objects.This keyboard is also used to return classes from a function.
        */

        ? ? ? "POLYMORPHISM IN C++" ~
        /*
        Polymorphism means the ability of function to take on many forms.Polymorphism are of two types in C++.They are compile time polymorphism as well as runtime polymorphism.The compile time polymorphism is further divided into function overloading as well as operator overloading.Whereas the runtime polymorphism is achieved by Virtual function.
        */

        ? ? ? "POINTERS TO DERIVED CLASS" ~(44)
        /*
        Pointers to drive classes works the same way as normal variables do.for example the derived class pointers can access all the variables as well as functions of the base class but it's not the same for the vice versa if we have a pointer to the base class it can't access the variables or anything of the derived class
        */

        ? ? ? "VIRTUAL FUNCTIONS" ~(45)
        /*
        Virtual functions are used in C++ to Access the functions of the derived class from the base class pointer.By default, the pointer will always use the base class function instead of the derived class function. But when we add the keyword virtual to the base class function of the same name as in the derived class.The function automatically  will use the function defined in the derived class.
         *Virtual functions cannot be static.
         *Virtual functions can be friend functions of another class.
         *Virtual functions can be accessed using object pointers.
         *A virtual function in a base class might not be used.
         *It's not mandatory to define a virtual function in the derived class, because by default, if there is no function with the same name in the derived class, it will automatically call the Virtual function in the base class.
         */

        ? ? ? "PURE VIRTUAL FUNCTION" ~(47)
        /*
        Pure virtual function is just  a simple virtual function whose value is initialized to zero at the initialization ,"virtual void display()=0;" ,And the virtual function MUST  to be overwritten in the derived classes, otherwise it will give an error.
        */

        ? ? ? "FILE HANDLING" ~(48)
        /*
        We can read , write files in C++, using (fstream class) , ifstream to read from  the files , ofstream to write to the files. file.close() function is complulsory to properly close the file otherwise data might not be properly saved in the file.
        MemberConstant         StandsFor                      Access
        in                                         input                File open for reading.
        out                                      output             File open for writing.
        binary                                binary              Operations performed in binary mode rather that text.
        ate                                       at end             The output positions start at the end of the file.
        app                                     append           All output operations happen at the end of the file,appending to its existing contents.
        trunc                                 truncate           All contents that existed in the file before it is open are discarded.

        ***Default mode of fstream is "ios::in | ios::out".
        **Default mode of ifstream is "ios::in".
        *Default mode of ofstream is "ios::out".

        Example :
        fstream file;
        file.open("Sample.txt",ios::in | ios::out | ios::trunc);
        */

        ? ? ? "TEMPLATES" ~(50)
        /*
        Templates are used in   C++ to declare data types during the declaration of the class object in the main function ,Templates are mainly used to pass data  types as arguments to funcitons or classes , templates are declared like this  "template < class a> ;", wherever we want data type to change we have to use a variable and we need to declare like this " vector<int> v1;",templates can also have mutiple as well as default parameteres .
        */

        ? ? ? "STANDARD TEMPLATE LIBRARY(STL)" ~
        /*
        STL consists of three things-Containers,algorithms  and iterators . Containers are of three types - Sequence containers(Vector,list,Dequeue),Associative Containers(Set,Map) and Derived Containers(Stack,Queue,Priority Queue).
        */

        ? ? ? "VECTORS" ~
        /*
        Victor has same as dynamic carries with Timothy to reset itself. Dynamic killing when an element is inserted or deleted, with the storage being handled automatically by the container.In vectors, data is normally inserted at the end.
        */

        ? ? ? "VECTOR ITERATORS FUNCTIONS" ~(54)
        /*
        (we have to use Deferencing operator to get the value of the position (ex , *v1.begin()) )
        1.begin()-Returns iterator pointing to the first element of the vector.
        2.end()-Returns iterator pointing to the theoritical element after the end element of the vector.
        3.rbegin()-Returns iterator pointing to the last element of the vector(Reverse end).
        4.rend()-Returns iterator pointing to the theoritical element before the first element in the vector .
        **add a c for constant iterator (the iterator value wont change  )
        */

        ? ? ? "VECTOR CAPACITY FUNCTIONS" ~(55)
        /*
        1.size()-Returns the number of elements in the vector.
        2.max_size()-Returns the maximum number of elements a vector can hold.
        3.capacity()-Returns the size of the storage capacirty allocated to the vector .
        4.resize(n)-Resizes the container so that the vector contains n no of elements .
        5.empty()-Boolean whether the vector is empty or not .
        6.shrink_to_fit()-Reduces the capacity of the vector to fill its size and destroys all elements beyond capacity.
        7.reserve(n)-Requests the vector capacity to be atleast enough to contain n elements.
        */

        ? ? ? "VECTOR ELEMENT ACCESS" ~(56)
        /*
        1.vector[i]-returns the element at i position.
        2.at(i)-returns the element at i position.
        3.front()-returns the first element of the vector .
        4.back()-returns the last element of tyhe vector.
        5.data()-returns a direct pointer to the vector and we can perform all normal pointer operations .
        */

        ? ? ? "VECTOR MODIFIERS" ~(57)
        /*
        1.assign(x,y)-assigns new value replacing the old ones , x parameter takes no of elements to be assigned , y represents the value that will be assigned.
        2.push_back(x)-pushes value x to the end of the vector.
        3.pop_back(x)-pops or removes the last value from he vector.
        4.insert(v1.begin()+2,x)- it inserts new elements at the specified position without changing the length of the vector.
        5.erase(v1.begin()+2,x)-deletes the value at specified position of the vector.
        6.swap(v1)-swaps the values of vectors irrespective of their sizes.
        7.clear()-clears all the elements of the vector.
        8.emplace()-it extends the container by inserting a new element at position.
        9.emplace_back()-it used to insert a new element into the vector container , the new element is added to the end of the vector.
        */

        ? ? ? "TO RUN CODE FASTER" ~
        /*
        1.use "ios_base::sync_with_stdio(false)" and "cin.tie(NULL), this disables synchronization i/o streams from C and  C++ , and makes the code run faster , because by default both are synchronised for the ease of use of both printf and cin in the same code."
        */

        ? ? ? "STACK AND HEAP" ~
        /*
        Stack is the automatic memory allocation of C Plus plus, whereas heap is the dynamic memory allocation.In which we have to manually allocate or dealocate memory manually.
        * new - we use new operator to allocate memory from the heap to a pointer.
        ** delete - we use delete variable to deallocate memory from the heap.
        Stacks follow the scope resolution, whereaas heap is kind of global variable , it can be accessed anywhere using the memory address.
        Dangling pointer is a pointer whose memory is deallocated or freed.
        It is very important to free unnecessary memory, otherwise it can cause memory leaks.
        */

        ? ? ? "BITWISE OPERATIONS" ~(130)
        /*
        Bitwise Operators are of 6 types :
        1. & (bitwise AND) - takes two numbers as operands and result of AND is 1 only if both bits are 1.
        2. | (bitwise OR) - takes two numbers as operands and result of OR is 1 if any of the two bits is 1.
        3. ^ (bitwise XOR) - takes two numbers as operands and result of XOR is 1 if two bits are different.
        4. << (left shift) - takes two numbers as operands , left shifts the bits of the first operand ,the second operand decides the number of places to shift .
        5. >> (right shift) - takes two numbers as operands, right shifts the bits of the first operand, the second operand decides the number of places to shift.
        6. ~ (bitwise NOT) - takes one number and inverts all bits of it .
        */

        ? ? ? "1's and 2's complement" ~
        /*
        1.   1's complement can be achieved by BITWISE NOT(~) operator, this will invert all the bits of the operand .Ex.(~a).
        2.   2's complement can be achieved by BITWISE NOT +1(~a+1).
        */

        ? ? ? "BITWISE TRICKS" ~
        /*
        1. Division by 2 can be achieved by BITWISE Right shift operator, (num>>1).
        2. Multiplication by 2 can be achieved by BITWISE Left shift operator, (num<<1).
        */

        ? ? ? "MEMSET()" ~
        /*
        memset() is used  to fill the memory block with a constant value.
        Ex-memset(ptr,x,sizeof(data_type))
        ptr -> memory address
        x -> value to be filled with
        */

        ? ? ? "BITSET" ~
        /*
        Bitset is an array of boolean values which is not stored separately, but instead in a compressed format , such thagt each value only take size of 1 bit only , operations are much more faster on  bitsets as compared to arrays or vectors , but the size of bitset has to be determined beforehand ,instead of dynamically in the case of vectors.
        Ex-bitset<20> set(100) , (bitset of capacity 20 initialized with binary value of 100)
        */

        ? ? ? "SET" ~
        /*
        Sets are a type of associative containers in which each element has to be unique because the value of the element identifies it. The values are stored in a specific order.
        Properties:
        -> All the elements in a set have unique values.
        -> The set stores the elements in sorted order.
        -> The value of the element cannot be modified once it is added to the set, though it is possible to remove and then add the modified value of that element. Thus, the values are immutable.
        -> Sets follow the Binary search tree implementation.
        -> The values in a set are unindexed
        * use the greater<int> to store the values in the set in descending order , by default it is inserted in ascending order .
        */

        ? ? ? "SET FUNCTIONS" ~
        /*
        -> upper_bound(K) - returns iterator pointing to just the next element after the value given.
        -> lower_bound(K) - If the value is present in the set then this function will return the iterator pointing to the same element only. But if the element K is not present in the set then it will point to just the nearest value, greater than K.
        -> erase(iterator) - deletes the element the iterator points to.
        -> erase(value) - deletes all the instances of the value from the set.
        -> clear - removes all the elements from the set.
        -> find(K) - returns an iterator pointing to the element in the set.
        -> count(K) - returns 1 or 0 based on if the element is present or not .
        */

        ? ? ? "UNORDERED SET" ~
        /*
        An unordered_set is implemented using a hash table where keys are hashed into indices of a hash table so that the insertion is always randomized. All operations on the unordered_set takes constant time O(1) on an average which can go up to linear time O(n) in worst case which depends on the internally used hash function, but practically they perform very well and generally provide a constant time lookup operation.
        */

        ? ? ? "MULTISET" ~
        /*
        Multisets are a type of associative containers similar to the set, with the exception that multiple elements can have the same values.
        */

        ? ? ? "HEAP" ~
        /*
        A Heap is a special Tree-based data structure in which the tree is a complete binary tree. Generally, Heaps can be of two types:
        ->    Max-Heap: In a Max-Heap the key present at the root node must be greatest among the keys present at all of it’s children. The same property must be recursively true for all sub-trees in that Binary Tree.
        ->    Min-Heap: In a Min-Heap the key present at the root node must be minimum among the keys present at all of it’s children. The same property must be recursively true for all sub-trees in that Binary Tree.
        */

        ? ? ? "HEAPS STL" ~
        /*
        -> make_heap(iterator , iterator) - converts a container to a heap.
        -> front() - returns the first element or the heap ,i.e the maximum element in the heap.
        -> push_heap() - pushes an element into the heap.
        -> pop_heap() - deletes an element from the heap ,i.e deletes the maximum element from the heap.
        -> sort_heap() - sorts the elements in the heap , but after sorting it is no more a heap.
        -> is_heap() - checks if it is heap or not.
        -> is_heap_until() - returns the iterator of the element upto which the container is a heap.
        */

        ? ? ? "PRIORITY QUEUE" ~
        /*
        Priority Queue are a kind of container adapters which are specially designed, such that the first element is either the largest or the smallest element in the queue , by default priority queue acts as max heap , but we can convert it into a min heap by the following syntax : priority_queue<int,vector<int>,greater<int>> minheap;
        *In case of priorityQueues with pairs , it is sorted by default on the basis of first element of the pair.
        */

        ? ? ? "HASHING" ~
        /*
        Suppose we have to keep track of a large dataset , and the time complexity of accessing , inserting and deleting must be very low, so here comes hashing , in hashing , time complexity of above functions is often O(1) and in worst case O(n) . Hashing works by large dataset into hash table by using some hash function .
        -> Hash Table - An array that stores pointers to records corresponding to a given phone number. An entry in hash table is NIL if no existing phone number has hash function value equal to the index for the entry.  In simple terms, we can say that hash table is a generalization of array. Hash table gives the functionality in which a collection of data is stored in such a way that it is easy to find those items later if required. This makes searching of an element very efficient.
        -> Hash Function -  A function that converts a given big phone number to a small practical integer value. The mapped integer value is used as an index in hash table. So, in simple terms we can say that a hash function is used to transform a given key into a specific slot index. Its main job is to map each and every possible key into a unique slot index. If every key is mapped into a unique slot index, then the hash function is known as a perfect hash function. It is very difficult to create a perfect hash function but our job as a programmer is to create such a hash function with the help of which the number of collisions are as few as possible.
        */

        ? ? ? "HASHING COLLISION" ~
        /*
        Since a hash function gets us a small number for a big key, there is possibility that two keys result in same value. The situation where a newly inserted key maps to an already occupied slot in hash table is called collision and must be handled using some collision handling technique. Following are the ways to handle collisions:
        -> Chaining - The idea is to make each cell of hash table point to a linked list of records that have same hash function value. Chaining is simple, but requires additional memory outside the table.
        -> Open Addressing - In open addressing, all elements are stored in the hash table itself. Each table entry contains either a record or NIL. When searching for an element, we examine the table slots one by one until the desired element is found or it is clear that the element is not in the table.
        */

        ? ? ? "OPEN ADDRESSING" ~
        /*
        Like separate chaining, open addressing is a method for handling collisions. In Open Addressing, all elements are stored in the hash table itself. So at any point, the size of the table must be greater than or equal to the total number of keys (Note that we can increase table size by copying old data if needed). This approach is also known as closed hashing.
        -> Linear Probing - In linear probing, the hash table is searched sequentially that starts from the original location of the hash. If in case the location that we get is already occupied, then we check for the next location.
        -> Quadratic Probing - If you observe carefully, then you will understand that the interval between probes will increase proportionally to the hash value. Quadratic probing is a method with the help of which we can solve the problem of clustering that was discussed above.  This method is also known as mid-square method. In this method we look for i2‘th slot in i’th iteration.
        -> Double Hashing - The intervals that lie between probes is computed by another hash function. Double hashing is a technique that reduces clustering in an optimized way. In this technique, the increments for the probing sequence are computed by using another hash function.
        */

        ? ? ? "TIME COMPLEXITY" ~
        /*
        Time complexity of an algorithm is used to measure the amount of time that the algorithm requires to run.
        Time complexity are of three types. O notation, Omega notation, and Sigma notation.
        1.O notations signifies is the worst case scenario in which algorithm takes the longest time to run.
        2.Omega notation signifies the best case scenario in which the algorithm takes the least amount of time to run.
        3.Sigma notation signifies the average time the algorithm will take to execute.
        For example, a single for loop will have a time complexity of O(n) and a nested for loop will have time complexity of O(n^2).
        */

        ? ? ? "SPACE COMPLEXITY" ~
        /*
        Space complexity of an algorithm is the amount of memory that algorithm will take to execute.
        */

        ? ? ? "SELECTION SORT" ~(110)
        /*
        Selection sort work works by picking up the minimum element from the array and putting it at the beginning of the array  and just doing it until the whole array become sorted.
        Time COMPLEXITY : O(n^2)
        */

        ? ? ? "BUBBLE SORT" ~(111)
        /*
        Bubble Sort works by swapping adjacent elements in the array, till the array is fully sorted.
        Time COMPLEXITY : O(n^2)
        */

        ? ? ? "INSERTION SORT" ~(112)
        /*
        Insertion sort works by putting the elements of the unsorted array into a sorted array till the whole array get  sorted.
        Time COMPLEXITY : O(n^2).
        */

        ? ? ? "SIEVE OF ERATOSTHENES" ~(135)
        /*
        In mathematics, the sieve of Eratosthenes is an ancient algorithm for finding all prime numbers up to any given limit. It does so by iteratively marking as composite (i.e., not prime) the multiples of each prime, starting with the first prime number, 2. The multiples of a given prime are generated as a sequence of numbers starting from that prime, with constant difference between them that is equal to that prime.
        */

        ? ? ? "INCLUSION EXCLUSION PRINCIPLE" ~(138)
        /*
        Inclusion-Exclusion principle says that for any number of finite sets A_1, A_2, A_3... A_i  , Union of the sets is given by = Sum of sizes of all single sets – Sum of all 2-set intersections + Sum of all the 3-set intersections – Sum of all 4-set intersections .. + (-1)^{i+1}  Sum of all the i-set intersections.
        */

        ? ? ? "EUCLID'S ALGORITHM" ~(139)
        /*
        Euclid's algorithm stated the modulus of two numbers (x,y), shares the common hcf with y .
        for example-42,24(42-24=18,24-18=6,18-6=12,12-6=6,6-6=0)
        */

        ? ? ? "MERGE SORT" ~(161)
        /*
        Merge sort works on Divide and Conquere Algorithm , what merge sort does is it divides the array into halves and conrinues to divide it into smaller arrays , and then sorts the values in the final array.
        Time Complexity : O(nlog(n))
        For more details -https://www.geeksforgeeks.org/merge-sort/
        */

        ? ? ? "QUICK SORT" ~(162)
        /*
        Quick Sort works on Divide and Conquere Algorithm , what merge sort does is it sorts the values in the array around the pivot element and finallly sorts into the final array.
        Time Complexity : O(nlog(n))
        For more details -https://www.geeksforgeeks.org/quick-sort/
        */

        ? ? ? "COUNTING SORT" ~(163)
        /*
        Counting Sort works by first counting the occurences of each element,and then it adds the occurences of each element to each other, then sets the previous value in a new array ,and then array is again initialized with the sorted values of the output array.
        Time Complexity : O(n+k),(n=number of elements , k= range of elements)
        For more details -https://www.geeksforgeeks.org/counting-sort/
        */

        ? ? ? "DNF(Dutch National Flag) SORT" ~(164)
        /*
        DNF Sort works by using three iterators : low ,mid , high, if the value is 0, we swap the values in the mid and low pos , but if it is 1 , we increment the value of mid , and if it is 2 , we swap mid and high values ,and decrement the high iterator, and finallly the array gets sorted .
        Time COMPLEXITY : O(n)
        For more details : http://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/
        **This only works for 0s, 1s and 2s.
        */

        ? ? ? "WAVE SORT" ~(165)
        /*
        Wave Sort sorts the elements of an array in a wave form by simple swapping.
        Time COMPLEXITY : O(n)
        For more details : https://www.geeksforgeeks.org/sort-array-wave-form-2/
        */

        ? ? ? "LINKED LIST" ~(167)
        /*
        Linked List is a linear data structure,it is represented by a pointer linked to the first node in the linked list, the first node is called the head , if the linked list is empty, it return NULL.Each node consists of two parts -value and a pointer.
        For more details : https://www.geeksforgeeks.org/linked-list-set-1-introduction/
        */

        ? ? ? "CIRCULAR LINKED LIST" ~(171)
        /*
        Circular Linked List is a kind of linked list, in which the last node of the linked list does not point to Null pointer , instead it points to another node in the linked list , or even the head of the linked list , thus creating a circular chain of nodes.
        */

        ? ? ? "DOUBLY LINKED LIST" ~(172)
        /*
        Doubly Linked List is a kind of linked list , which contains two pointer - previous and next pointers, which allow  us to traverse the list from the front as well as from the back, thus making the insertion as well as deletion faster in the linked list at the expense of additional memory consumption.
        */

        ? ? ? "STACK" ~(183)
        /*
        Stack is a linear data structure which follows the principle of LIFO(Last In First Out) , There are mainly three operations in Stack:
        Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
        Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
        Peek or Top: Returns the top element of the stack.
        isEmpty: Returns true if the stack is empty, else false.
        */

        ? ? ? "STACK STL FUNCTIONS" ~(185)
        /*
        1.empty()- Returns whether the stack is empty.
        2.push()-Pushes an item into the stack.
        3.pop()-Removes an item from the stack.
        4.top()-Returns the top element in the stack.
        5.size()-Returns the size of the stack.
        6.swap()-swap values with another stack of same type.
        7.emplace()-While push() function inserts a copy of the value or the parameter passed to the function into the container at the top, the emplace() function constructs a new element as the value of the parameter and then adds it to the top of the container.
        */

        ? ? ? "INFIX, PREFIX AND POSTFIX EXPRESSION" ~(186)
        /*
        1. Infix expression is the normal expression that we humans use to evaluate  mathematical statements , We use BODMAS Rule to evaluate infix expressions.
        Syntax - operand (operator) operand.
        Example- A*B+(C/D)

        2. Prefix expression is the kind of expression in which the operator is written before the operands, we take the value from right to left , but the operator from left to right.
        Syntax- (operator) operand,operand.
        Example- +*AB/CD

        3. Postfix expression is the kind of expression in which the operator is written after the operands, and the order of evaluation is always from left to right.
        Syntax- operator,operand (operator).
        Example- AB*CD/+
        */

        ? ? ? "QUEUE" ~(191)
        /*
        Queue is a linear data structure like stacks but it follow the principle of First In First Out (FIFO), it is just like a queue of people that we see in real life , in where the first people that stands in the queue finishes the work first.
        Enqueue: Adds an item to the queue. If the queue is full, then it is said to be an Overflow condition.
        Dequeue: Removes an item from the queue. The items are popped in the same order in which they are pushed. If the queue is empty, then it is said to be an Underflow condition.
        Front: Get the front item from queue.
        Rear: Get the last item from queue.
        */

        ? ? ? "DEQUE STL" ~
        /*
        Double-ended queues are sequence containers with the feature of expansion and contraction on both ends. They are similar to vectors, but are more efficient in case of insertion and deletion of elements. Unlike vectors, contiguous storage allocation may not be guaranteed.

        Double Ended Queues are basically an implementation of the data structure double-ended queue. A queue data structure allows insertion only at the end and deletion from the front. This is like a queue in real life, wherein people are removed from the front and added at the back. Double-ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.
        For more information : https://www.geeksforgeeks.org/deque-cpp-stl/
        */

        ? ? ? "BINARY TREES" ~
        /*
        Binary Trees are hierachrial data structures that consists of three data elements - Data variable, left node variable and right node variable.The topmost node is called the root node and the two pointers associated with are left and right pointers.
        For more information : https://www.geeksforgeeks.org/binary-tree-set-1-introduction/
        */

        ? ? ? "BINARY TREES PROPERTIES" ~
        /*
        1. The maximum no of nodes in a binary tree at level 'L' = 2^L. for example, at level =0 , nodes = 2^0=1.
        2. The maximum number of nodes in a binary tree of height 'h' = 2^h-1.
        3. In a binary tree with n nodes , the minimum no  of levels is = log(2)(n+1).
        4. A binary tree with L leaves has atleast = (|log(2)L|+1) levels.
        5. In Binary tree where every node has 0 or 2 children, the number of leaf nodes is always one more than nodes with two children.
        For more information : https://www.geeksforgeeks.org/binary-tree-set-2-properties/?ref=lbp
        */

        ? ? ? "BINARY TREE TYPES" ~
        /*
        1. Full Binary Tree - A Binary tree is a full binary tree if all the nodes in the tree has 0 or 2 children nodes.
        2. Complete Binary Tree - A Binary tree is a complete binary tree if it has completely filled levels except the last level and last level has all keys as left as possible.
        3. Perfect Binary Tree - A Binary tree is a perfect binary tree if it has completely filled levels i.e every node has 2  children node , and all leaf nodes are on the same level.
        4. Balanced Binary Tree - A binary tree is a balanced binary tree if the height of the binary tree is O(log(n)) , n is the no of nodes .
        5. A Degenerate Tree - A binary tree is a Degenerate tree if the nodes in the tree have only one child.
        */

        ? ? ? "BINARY TREE TRAVERSALS" ~
        /*
        1. Inorder Traversal - Left node -> root -> right node.
        2. PreOrder Traversal - root -> left node -> right node.
        3. PostOrder Traversal - left node -> right node -> root.
        */

        ? ? ? "DIAMETER OF BINARY TREE" ~
        /*
        The diameter of the binary tree is the longest distance between two nodes in the binary tree through the root.
        */

        ? ? ? "BINARY SEARCH TREE(BST)" ~
        /*
        Binary Search Tree (BST) is a node based data strcuture with the following properties:
        1. BST always contains LEFT node with LESS value than the root node .
        2. BST always contains RIGHT node with GREATER value than the root node.
        3. BST should not contain duplicate values.
        4. INORDER traversal always gives nodes in the sorted order.
        */

        ? ? ? "GRAPHS" ~
        /*
        A Graph is a non-linear data structure consisting of edges and vertices .

        Vertices - Vertices are fundamental units of graph , vertices are also known as vertex or nodes.

        Edges - Edges are ued to connect two nodes of a grpah . edges can be connected in either way .
        */

        ? ? ? "TYPES OF GRAPHS" ~
        /*
        1.NULL Graph - Graph with no edges.
        2.TRIVIAL Graph - Graph having only one vertex.
        3.UNDIRECTED Graph - Graph with edges which doesnt have any direction .
        4.DIRECTED Graph - Graph in which edge has direction .
        5.CONNECTED Graph - Graph where from any node, we can visit every other node.
        6.DISCONNECTED Graph - Graph where atleast one node is not reachable from every other node .
        7.REGULAR Graph - Graph in which degree of every vertex is equal to the other vertices of the graph.
        8.COMPLETE Graph - Graph in which from each vertices ,there is an edge to other vertices.
        9.CYCLE Graph - Graph which is a cycle in itself , the degree of each vertex is 2.
        10.CYCLIC Graph - Graph containing atleast one cycle.
        11.DIRECTED ACYCLIC Graph - Graph that doesnt contain any cycle.
        12.BIPARTITE Graph - Graph in which vertex can be divided into two sets such that vertex in each set doesnt contain any edge between them .
        13.WEIGHTED Graph - Graph in which edges are already specified with suitable weight is known as weighted graphs ,they can be further classified into directed and undirected weighted graphs.
        */

        ? ? ? "REPRESENTATION OF GRAPHS" ~
        /*
        ADJACENCY MATRIX - Graph is stored in the form of 2D matrix where rows and columns denote vertices. Each entry in the matrix denotes the weight of the edges between those vertices.

        ADJACENCY LIST - Graph is represented as collection of linked lists. There is an array of pointer which points to the edges connected to that vertex.
        */

        ? ? ? "BFS" ~
        /*
        BFS is a traversing algorithm where you should start traversing from a selected node (source or starting node) and traverse the graph layerwise thus exploring the neighbour nodes (nodes which are directly connected to source node). You must then move towards the next-level neighbour nodes.
        */

        ? ? ? "DFS" ~
        /*DFS is a traversing algorithm where you should start traversing from a selected node (source or starting node) and traverse the graph until you find the desired node or the node which has no children (i.e. leaf node).
        */

       
        return 0;
}