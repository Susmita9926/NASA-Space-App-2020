#include<iostream>
using namespace std;

int main()
{
    int choice;
    try
    {
        cout<<"Do you want to turn on your location?"<<endl;
        cout<<"1. Yes\n2. No"<<endl;
        cout<<"Enter your choice: ";

        cin>>choice;

        if(choice!= 1 && choice!=2)
        {
            throw -5;
        }
    }
    catch(...)
    {
        cout<<"Wrong Input!! Please Try again using 1 or 2.."<<endl;
    }
    if(choice==1)
    {
        int choice;
        try
        {
            cout<<"You've received a notification. Do you want to open it?"<<endl;
            cout<<"1. Yes\n2. No"<<endl;
            cout<<"Enter your choice: ";

            cin>>choice;

            if(choice!= 1 && choice!=2)
            {
                throw -5;
            }
        }
        catch(...)
        {
            cout<<"Wrong Input!! Please Try again using 1 or 2.."<<endl;
        }
        if(choice==1)
        {
            int option;
            try
            {
                cout<<"Enter your option to know the details about Coral Reefs-->"<<endl;
                cout<<"1. Present Condition of Coral Reefs\n2. What we have to do?"<<endl;
                cout<< "Enter your choice: ";

                cin>>option;

                if(option!= 1 && option!=2)
                {
                    throw -5;
                }
            }
            catch(...)
            {
                cout<<"Wrong Input!! Please Try again using 1 or 2.."<<endl;
            }
            if(option==1)
            {
                int c;
                try
                {
                    cout<<"1. The Pacific Ocean."<<endl;
                    cout<<"2. The Indian Ocean."<<endl;
                    cout<<"3. The Caribbean Sea."<<endl;
                    cout<<"4. The Red Sea."<<endl;
                    cout<<"5. The Persian Gulf."<<endl;
                    cout<<"To Know Details enter an option: "<<endl;

                    cin>>c;

                    if(c!= 1 && c!=2 && c!=3 && c!=4 && c!=5)
                    {
                        throw -5;
                    }
                }
                catch(...)
                {
                    cout<<"Wrong Input!! Please Try again using option 1 to 5.."<<endl;
                }
                if(c==1)
                {
                    cout<<"In December, 2014 wide spread coral bleaching was reported for the Marshall Islands, Guam,Northern Mariana Islands, the North West  Hawaiian Islands, and Kiribati, potentially causing wide-spread coralmortalities in these regions.Coral bleaching occurs when stressed corals expel their zooxanthellae(symbiotic algae that give corals their distinctive colors), resulting in the white coral skeleton being exposed.While bleached, corals are susceptible to damage and prolonged bleaching can result in the death of the coral.For example, in 2005 co bleaching was responsible for loss of half of the corals in the US's Caribbean waters."<<endl;
                }
                else if(c==2)
                {
                    cout<<"Reefs in the Chagos Archipelago, central Indian Ocean, suffered severe bleaching and mortality in 2015 following a7.5 maximum degree heating weeks (DHWs) thermal anomaly, causing a 60% coral cover decrease from 30% cover in 2012 to 12% in April 2016.Mortality was taxon specific, with Porites becoming the dominant coral genus post-bleaching because of an 86% decline in Acroporafrom 14 to 2% cover. Spatial heterogeneity in Acropora mortality across the Archipelago was significantly negativelycorrelated with variation in DHWs and with chlorophyll-a concentrations.In 2016, a 17.6 maximum DHWs thermal anomaly caused further damage, with 68% of remaining corals bleaching in May 2016,and coral cover further declining by 29% at Peros Banhos Atoll (northern Chagos Archipelago)from 14% in March 2016 to 10% in April 2017. We therefore document back-to-back coral bleaching and mortality events for two successive years in the remote central Indian Ocean."<<endl;
                }
                else if(c==3)
                {
                    cout<<"A new study, published Feb. 20 in the journal Proceedings of the Royal Society B, uses environmental, socioeconomic and management data from 30 Caribbean islands to identify which communities may be most at risk from the social and ecological effects of coral bleaching, which occurs when warm water causes coral polyps to expel algae living in their tissues, resulting in the corals turning white."<<endl;
                }
                else if(c==4)
                {
                    cout<<" in the Gulf of Aqaba/Eilat, the situation seems to be somewhat different: research has shown that the coral reefs of the northern Red Sea are unusually resilient to climatic changes, and are likely to survive even harsher conditions in the future. Israeli scientists agree the coral reef of Eilat, the northernmost coral reef in the world, is unique and needs to be protected and preserved.Recently, it was found that the northern Red Sea corals are not only adaptable to changing environmental conditions but also continue to produce offspring at the same rate and quality, which could ensure reef survival for many years to come, provided we humans do not interfere." <<endl;
                }
                else if(c==5)
                {
                    cout<<"In Kish Island, where coral reefs are more exposed to temperature rise due to gentle slopes of the reefs corals are more exposed to bleaching while in Faror and Khark Islands it is less likely for the corals to lose color.Some species of corals are adapted to the new climatic conditions, but others, such as staghorn corals, are not as adaptable and are dying, ISNA news agency quoted Rezaei as saying on May 6.In the year 1378 (March 1999-March 2000) only 23 percent of the corals in Shidvar Island were alive and currently the amount decreased to 13 percent, he regretted, adding that staghorn corals are totally extinct in the area."<<endl;
                }
            }
            else if(option==2)
            {
                cout<<"1. Use Mineral Sunscreen."<<endl;
                cout<<"2. Avoid Organic Sunscreen."<<endl;
                cout<<"3. Use Ultraviolet Protection Factor(UPF) Sun wear."<<endl;
            }
        }
        else if(choice==2){
            cout<<"Notification Closed Successfully."<<endl;
        }
    }
    else
    {
        cout<<"Location Turned Off."<<endl;
    }
}
