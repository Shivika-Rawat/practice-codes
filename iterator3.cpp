//So advanced is slightly different from next. Next returns an iterator. Advanced modifies the same past iterator  
#include<bits/stdc++.h>
using namespace std;
    int main(){
        vector<int> v={10,20,30,40,50};
        vector<int>:: iterator i=v.begin();
        advance(i,3);
        cout<<(*i)<<" ";//40
        return 0;
    }
//Types of iterators:
//There are mainly five types of iterators. input and output .
//forward iterators They have all the capabilities of input iterators and output iterators. 
//Bidirectional iterators, they have all the capabilities of forward iterators plus some additional capabilities. 
//Random access iterators, they have all the capabilities of bidirectional iterators plus some additional capabilities.

//Input iterators are the simplest ones We are allowed to only read data from these iterators. So we can't write anything using these input iterators. We can only read the dataAlso, we can move ahead only by doing prefix or postfix. 

//Output iterators do not allow you to read. They only allowed you to write something on these iterators. So they are also basic, opposite of input. You can access iterators using operators, prefix or post fix. But you cannot read. You can only write

//The forward iterators, whichCapability of both input and output. You can read, and you can write, and you can move forward only using plus plus operators, right? So forward is an iterator, which is which are capabilities of both input and output. 
//These five types of iterators, they are just logical classifications. Please note that these five iterators are only logical classifications of items. There are no classes as such in C Library that say this is a forward iterator. This is a bidirectional title, right? So these are basic capabilitiesand these are some advanced capabilities, or capabilities, of both input and output. 

//At bidirectional iterators have all the capital forward iterators. You can lead, right? You can move in forward direction. But they have additional capability, and you can move backward direction also. 

//Random access iterators are the most capable. They have all the capabilities of bidirectional. You can move forward and backward. You can lead, you can writeand you have random access. You can get nth item from this given address. You can compare two iterators, which one is smaller, which one is greater? So these capabilities are provided by the randomised societyGood evening

/*
            forward_list                forward            // forward is, which is singly linked list. It has only forward iterator. So when you get an iterator of a forward list, you get a forward write error, which can only move in the forward direction. You can do read and write operations
simple:     list                        Bidirectional     // list, which is doubly linked list. So you have bidirectional iterator, which can move forward and backward both directions. And you can do read write operations
            vector                      Random           //Vector, which is an array. So you have random access iterators, which allow you to move forward, backward and also allow you random access. Also allow you comparisons, whether this element came 1st or that element came 1st
***********************************************************************************************************************
            set                                           //Ordered containers. We have bidirectional iterators, and they make a lot of sense. Because when you have data ordered, you want to know sometimes who is the previous item. Say you have ordered items as when I say ordered, I mean sorted. 5 10152030 you have an iterative to current elements in 30. You want to know, what is the previous smaller element? You can access in the back directionSo they have both forward and backward traversal. And that is why they have bidirectional iterators
            map                
Associate:  multimap                      Bidirectional
            multiset            


            unordered_set
                                            forward      //Unordered set and unordered map. They only have forward iterator. You can only traverse them in the forward direction
            unordered_map          

***********************************************************************************************************************

             queue                        
Aapters:     stack                        Do not have iterators
             priority_queue                      




                //Stack queue and priority queue, container adapters as we discussed in the previous video. They do not have their own implementation. They are just interfaces on top of some simple containers. SoDon't have any idea. We do not need to travel through a stack. We only need to do the top item of this tag, remove the top item of this tag, or probably add an item at the top. Same is the case with other container editors, like queue and priority queue. They also allow only some certain operations. We do not generally needThat is why these container adapters, they do not have it. 
***********************************************************************************************************************



*/