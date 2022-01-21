# CS-451-ASN-1
Introduction
The goal of Assignments 1 and 2 is to get (further?) acquainted with the C programming language.
Assignment 1 is to write a hash table abstract data type (ADT) that delegates to the list ADT that we will
write in class, while Assignment 2 is to write a set ADT that delegates to the hash table from Assignment 1.
Assignment 1:
Pervasive idea: the hash table should work for any element data type
Our hash table will have sev en parts: an array of “buckets”, a constructor,adestructor, three access functions, and a collection of iterators. We will delegate much of the functionality to the list ADT. For example, a bucket is simply a list. All values having the same “hash value” are stored in the same bucket. Hash
values are computed by a user-supplied hash function.
The constructor ht_initialize allocates space for an empty hash table, initializes its size, hash
function and comparison function fields, and initializes each bucket to an empty list. The destructor
ht_free frees all memory currently allocated by the hash table. The three access functions
ht_delete, ht_insert, and ht_lookup perform the obvious operations. Each iterator,
ht_foreach? takes a hash table, a function, and zero to two additional arguments (the “?” indicates the
number of additional parameter the function takes); it then calls the function passing each element in the
hash table and any additional arguments.
Your implementation must use and not modify the main program and header files found on the course
moodle page (i.e., main.c, and ht.h). You must use my main program because I will use its interface to
grade your program. Finally, you can modify and must use the makefile from the course moodle page.
What to Hand in
(1) Upload ht.c only to moodle before 6:00am on the due date.
Notes
(1) Your code’s first line must be “//This is my code” followed by your name.
(2) Consider first writing a hash table of ints and then a hash table of playing cards. Then consider where the two are identical and how you might abstract out the remaining functionality.
(3) I expect you to ask about foreach when you are ready. Make sure that is not too late!
(4) I’m happy to look at your plateau schedule and test plan. I grow less happy as the deadline
approaches :)
Grading Rubric
See the course moodle page.
CS451, Spring ’22 -1- Assignment #1,2
I understand and will uphold the ideals of academic honesty as stated in the Honor Code.
Assignment 2: (Homogeneous) Sets
If you implemented Assignment 1 correctly, Assignment 2 should be trivial :) Your task in Assignment 2
is to implement a homogeneous set ADT based on your hash table ADT (all the elements in a homogeneous set have the same type). You can not change your hash table at all without my approval.
Our set ADT will have eight parts: a container for the elements of the set (in our case a hashtable), a constructor,adestructor, and five functions. The constructor, set_initialize, creates an empty set. The
destructor set_free, frees the memory allocated by a set. The five functions are set_insert,
set_intersection, set_member, set_union, which do the obvious, and set_collect, which
takes a set an a filter function having the type “void * → boolean.” Set_collect returns a set
containing the elements of the input set for which the filter function returns true.
Your implementation must use and not modify the main program and header files found on the course
moodle page (i.e., main.c, and set.h). Finally, you can modify and must use the makefile from the
course moodle page.
What to hand in
Upload set.c only to moodle before 6:00am on the due date.
Notes
(1) Your code’s first line must be “//This is my code.”
(2) Expect to do more thinking than coding. For example,
sloc_count_c set/solution/set.c
reports 92 SLoC (Source Lines of Code).
(3) I’m again happy to look at your plateau schedule and test plan. Again I grow less happy as the
deadline approaches :)
Grading Rubric
See the course moodle page.
Security
You should secure your source code. I suggest the following:
After logging issue the following commands from your home directory
mkdir cs451
mkdir cs451/assignment.1
mkdir cs451/assignment.2
chmod 700 cs451 cs451/assignment.1 cs451/assignment.2
< download the necessary files form the course moodle page >
To work on your program login then issue the following commands
cd cs451/assignment.1
< dev elop your program >
If this is unclear please read the man pages for chmod and mkdir or come to chat me up.
