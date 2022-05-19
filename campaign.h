//IT21162664
#pragma onece
#include <iostream>
#include <cstring>
class Appointment;
class campaign {
   private:
      char eventNO[10];
      char eventLocation[12];
      char eventDate[10];
      appointment *app[SIZE];
      
   public:
      campaign();
      voiddisplayEventDetails();
      ~campaign(); 
};





