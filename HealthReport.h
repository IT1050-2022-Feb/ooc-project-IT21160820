//IT21162664
#pragma once
#include <iostream>
#include <string>
class HealthReport {
   private:
      char hrepNO;
      
   public:
      HealthReport();
      HealthReport(string hrNO);
      void getreportdetails();
      ~HealthReport(); 
};