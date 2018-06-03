# Practice while reading Stroustrup: Programming
Principles and Practice Using C++

## Notes (C++)

### Local classes

It is possible to have function with class inside of it.
This class will have no linkage.

**! It is a bad practice to use such a class**

* In any version of C++ it 
  [cannot have static members]
  [local_class_cannot_have_static_members_stackoverflow]
  
* Member function [have to be defined within their class definition]
  [short_about_local_class]
  (if they are defined at all). At the result, they are
  automatically inline.
  
* Static variables from function scope and global variables are
  accessible from the inside of local class
  
* Obviously, class cannot be used anywhere outside the function.
  
### Global namespace

```::x``` is a variable ```x``` from global namespace

### constexpr

### const is static

Unline in C, ```const``` qualifier implies ```static```
automatically.

## Notes (Programmings)

1. It can be a good practice to use references not to rewrite
   long element "name" such as ```v[f(x)][g(y)]```

## Questions

1. Which types can be used as constexpr



[local_class_cannot_have_static_members_stackoverflow]: https://stackoverflow.com/questions/8162994/why-arent-static-data-members-allowed-in-local-classes?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa
[short_about_local_class]: https://www.ibm.com/support/knowledgecenter/en/SS3KZ4_9.0.0/com.ibm.xlcpp9.bg.doc/language_ref/cplr062.htm