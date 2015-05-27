 #include <iostream>
 #include <assert.h>
 using namespace std;
 #include "SafeArray.h"
 int main()
 {
     int data;
     bool result;
     SafeArray a(100);
     a.set(4,15);
     a.set(68,34);
     a.set(26,54);
     a.set(-1,45);
     a.set(100,64);
     data=a.get(4,&result);
     assert(data==15);
     assert(result);
     return 0;
 }

