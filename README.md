# Linked List Basics

A linked list is a collection of values (in this case, integers) where each value is connected to the next one.  
Unlike arrays, the elements of a linked list are not stored in one continuous block of memory — they are scattered across memory and connected through pointers.
# Advantages of Linked Lists

 Faster insertions, especially at the beginning of the list.

 In contrast to arrays, you don't need to create a new array and copy all the data just to insert one element at the front.

# Disadvantages of Linked Lists

 Slower access to elements. Because the elements are not next to each other in memory, you have to start at the head and follow each link to find a specific value.

 In arrays, random access is much faster because all elements are located next to each other in memory.

# When to Use a Linked List?

When your data changes often — frequent insertions or deletions.

When you mostly process data as it comes (e.g., queues, stacks), but still want to keep some of the older data around.
