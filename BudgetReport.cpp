//IT21161056
#pragma once
#include <string>
#include "BudgetReport.h"

using namespace std;


BudgetReport::BudgetReport(){
  
}
BudgetReport::BudgetReport(string bgreportID)
{
			budgtReportID = bgreportID ;
		
}
void BudgetReport::displayBudgetReport()
{
			cout << " Budget ReportID  = " << budgtReportID << endl;
      
}
