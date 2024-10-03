#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int>l1={15,20,30};//15,20,30
    auto it=l1.insert_after(l1.begin(),10);//15,10,20,30
    it=l1.insert_after(it,{2,3,5});//15,10,2,3,5,20,30   //15,10,2,3,5(iterator points here),20,30
    it=l1.emplace_after(it,40);////15,10,2,3,5,40,20,30         //15,10,2,3,5,40(pointiong here),20,30


     it=l1.erase_after(it,l1.end());
    for(int x: l1)
    cout<<x<<"  ";
   
    // it=l1.erase_after(it);////15,10,2,3,5,40,30  //eraase.after removes an element after the given iterator.
    // for(int x: l1)
    // cout<<x<<"  ";
    // cout<<endl;
//if we use this ans will be : 15  10  2  3  5  40  30
  


    return 0;
}

//Output:  15  10  2  3  5  40  


//Emplace after insert after do the same thing.Emplace after set of functions were added in C11. The idea was to do optimization over insert functions. Functionality wise, they are always same whether you are doing Emplace after on vector stack or any container Emplace after functions work same as insert. The only difference is they do some optimization. The optimization that they do is not an optimization for primitive types. So if you are using insert.or Emplace after for a primitive type like int char float double that would not help much. But if you are using insert.and Emplace after for large objects then Emplace after will perform better. The idea is this insert function. It accepts an object. If you are having a link list of some user defined type or any other predefined class types. On the other hand,  Emplace after function accepts constructor  parameters also. So what happens in place you do not have to construct the object then pass the object, right? So you have to construct the object first, then pass the object, then there will be a copy of this object to the object that we're going to insert. That is what happens in the insert function. But in the Emplace after functions.this object is constructed and then inserted, not 2,2 objects are not created, right? So customer parameters are passed and object is constructed and inserted. What happens in insert? You first create an object, then you create a copy of it, because you are passing the object as a function. So the basic idea is this, your insert after function accepts an object. It can be a primitive type.or object of user defined type of predefine classes.If object is not there, you create the object..here Emplace after you can pass constructors.parameters of class of that object. So you do not have to create that object. That object will be created when it is inserted.So that's where Emplace after works better than insert after. Here the.effect is same and when you are using for primitive types it does not help much.