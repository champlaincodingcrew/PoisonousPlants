int poisonousPlants(vector<int> p) 
{
    vector<int> previousDay = p;
    vector<int> currentDay;
    int numDays = 0;
    while(true)
    {
        numDays++;
        currentDay.push_back(previousDay[0]);
        bool plantDiedToday = false;
        for (auto index = 1; index < previousDay.size(); index++)
        {
            if (previousDay[index] <= previousDay[index - 1])
            {
                currentDay.push_back(previousDay[index]);
            } else {
              plantDiedToday = true;
            }
        }
        if(!plantDiedToday)
        {
            return numDays - 1;
        }
        previousDay = currentDay;
        currentDay.clear();
    } 
}
