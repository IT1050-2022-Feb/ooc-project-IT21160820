//IT21162664
#include <iostream>
#include <string>
#include "campaign.h"

campaign::campaign(){}
campaign::void addappointment(appointment *app1, appointment *app2)
		{
			app[0] = app1;
			app[1] = app2;
		}
      
void campaign::displayEventDetails(){
        cout<<"EventNo="<< eventNO <<endl;
        cout<<"Event Location="<< eventLocation <<endl;
        cout<<"Event Date="<< eventDate <<endl;
        
        for(int i = 0; i < SIZE; i++)
		
					app[i]->displayAppointmentDetails();
        
      }
      
campaign::~campaign(){
  cout << "Deleting campaign" << endl;
} 