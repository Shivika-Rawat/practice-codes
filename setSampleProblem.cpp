//we need to support the following operations
bool search(x)
void insert(x)
void delete()
int getFloor(x):Largest value smaller than or equal to X.
int getCeiling(x):A smallest value greater than or equal to X.
Example:
insert(10);
insert(20);
insert(15);
insert(5);
insert(25);//O(1)
search(15);//true
delete(15);//remove 15  //O(n)
search(15);//false   O(n)
getFloor(6);//5   //O(n)
getFloor(5);//5
getCeiling(6);//10   //O(n)
getCeiling(25);//25
getCeiling(100);//+infinite
getFloor(1);// -infinite
Naive Approach: applied by vector
Better Approach: unordered_set

bool search(x) //in unordered set , search insert and delete in O(1) TC
void insert(x);
void delete(x)
int getFloor(x):Largest value smaller than or equal to X.// O(n) in unordered set
int getCeiling(x):Smallest value greater than or equal to X.// O(n)  in unordered set

Best Approach :set//is to use set container, A set container is implemented using Search balancing binary search tree specially red black tree.
bool search(x)//serach insert and delete in O(log n) TC
void insert(x)
void delete(x)
int getFloor(x)//getFloor  and getCeiling ->o(log n) time becaue it is a ordered container, We can Traverse item in a sorted way.
int getCeiling(x)

