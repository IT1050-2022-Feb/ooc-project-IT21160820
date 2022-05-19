//IT21162664
#include <iostream>
#include <string>
#include "health.h"
using namespace std;

HealthReport::HealthReport(){
        hrepNO = "";
      	}
      	
HealthReport::HealthReport(string hrNO){
        hrepNO = hrNO;
      	}
      	
void HealthReport::getreportdetails(){
 		cout <<  " health report: "  << hrepNO << endl;
		}
        
HealthReport::~HealthReport(){};