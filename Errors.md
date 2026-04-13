g++ -o c-/Sintassi variable_and_data_type.cpp
cc1plus: fatal error: variable_and_data_type.cpp: No such file or directory
compilation terminated.

g++ -o Sintassi variable_and_data_type.cpp 
variable_and_data_type.cpp: In function ‘int main()’:
variable_and_data_type.cpp:11:19: error: ‘Marco’ was not declared in this scope
   11 |     string nome = Marco;
      |                   ^~~~~

operators.cpp: In function ‘int main()’:
operators.cpp:24:89: error: expected ‘;’ before ‘cin’
   24 |     cout << "Insert a number for the switch: ( if you will select 1 it will print One )"
      |                                                                                         ^
      |                                                                                         ;
   25 |     cin << y;
      |     ~~~          

functions.cpp: In function ‘int main()’:
functions.cpp:11:1: error: expected ‘,’ or ‘;’ before ‘}’ token
   11 | }
      | ^

classes.cpp:9:2: error: expected ‘;’ after class definition
    9 | }
      |  ^
      |  ;
classes.cpp: In function ‘int main()’:
classes.cpp:15:13: error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]
   15 |     a.age = "29";
      |             ^~~~
      |             |
      |             const char*