//IT21161056
#pragma once
#include <string>
#include "Assistant.h"

using namespace std;

class Assistant;

class BudgetReport
{
	private:
		string budgtReportID;
		
	public:
		BudgetReport();
		BudgetReport(string bgreportID);
		void displayBudgetReport();
    
};