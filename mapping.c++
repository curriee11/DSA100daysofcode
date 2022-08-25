//general mapping c++
//   https://www.youtube.com/watch?v=KwS-Vbsha1k&t=568s

//helpful question
// https://www.youtube.com/watch?v=yHIEUkW6BnY

Mapping

Maps are part of the C++ STL (Standard Template Library). Maps are the associative containers that store sorted key-value pair, in which each key is unique and it can be inserted or deleted but cannot be altered. Values associated with keys can be changed.

Keys	Values
101	Nikita
102	Robin
103	Deep
104	John

   map<int, string> Employees;  
   // 1) Assignment using array index notation  
   Employees[101] = "Nikita";  
   Employees[105] = "John";  
   Employees[103] = "Dolly";  
   Employees[104] = "Deep";  
   Employees[102] = "Aman";  


 //  https://cplusplus.com/reference/map/map/
