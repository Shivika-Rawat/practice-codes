/*
clear()  //It cleared the content of forward list.

empty()   //It returns to if the forward list is empty.Otherwise it returns false.

reverse()      //It reverses the content of the forward list.
forward_list<int>l={10,20,30};
l.reverse();        //30 20 10

merge()         //Merge function assumed two sorted list and.merges second list into the first list. Second list becomes empty after the March. All the elements.Of the second list are transferred into the first list.

forward_list<int>l1={10,20,30};        //5 10 15 20 30
forward_list<int>l2={5,15};             //empty


sort        //It storts the forward list.
forward_list<int>l1={5,15,10};
l1.sort();
*/

/* Time complaxity of all operations On forward list.

insert_after() //Insert after function inserts a given value after a given iterator. Please remember your forward list is a single linked list. And if you are given address of a node, and if you want to insert an item after it, how much time you will require O(1). and Insert  M items and big O (M), 

erase_after() //If you wanted to delete a single note O(1), if you wanted to delete M nodes O(M)

push_front() //O(1)

pop_front()  //O(1)

reverse()  //O(n)

sort()      //O(n logn)
remove()        //O(n)
assign()        //O(1) for 1 item and ,O(n) for n items

*/
