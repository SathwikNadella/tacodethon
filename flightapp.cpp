#include<iostream>
#include<cstring>
using namespace std;
int fnum[100]={0},price[100]={0};
char aname[100][50],source[100][50],dest[100][50],arrtime[100][50],arrdate[100][50],depdate[100][50],deptime[100][50];
int n=0;

void addflight()
{
	char c='y';
	while(c=='y')
	{
		cout<<"\nEnter the following flight-details:\n 1.Flight number: ";
		cin>>fnum[n];
		cout<<"2.Airlines name: ";
		cin>>aname[n];
		cout<<"3.Source: ";
		cin>>source[n];
		cout<<"4.Destination: ";
		cin>>dest[n];
		cout<<"5. Arrival date (DDMMYY): ";
		cin>>arrdate[n];
		cout<<"6. Arrival time (HHMM): ";
		cin>>arrtime[n];
		cout<<"7. Departure date (DDMMYY): ";
		cin>>depdate[n];
		cout<<"8. Departure time (HHMM): ";
		cin>>deptime[n];
		cout<<"9. Price: ";
		cin>>price[n];
		n++;
		cout<<"\nAdd another flight? (y/n): ";
		cin>>c;
	}
}

int compareFunction(string s1, string s2)
{
    // comparing both using inbuilt function
    int x = s1.compare(s2);
 
    if (x != 0)
        return -1;
    return 0;
        
 }

void listflights()
{
	cout<<"Flight number  Destination   DepartureDate   ArrivalDate \n";
	for(int i=0;i<n;i++)
	{
		cout<<fnum[i]<<"\t"<<dest[i]<<"\t"<<depdate[i]<<"\t"<<arrdate[i]<<endl;
	}

}

void filterflights()
{
	int c;
	cout<<"Enter filter parameter: 1.Destination 2.Source 3. Price: ";
	cin>>c;
	switch(c)
	{
		char inp[50];
		int inp1;
		case 1: cout<<"Enter Destination: ";
			cin>>inp;
			cout<<"Flightno.  Destination   DepartureDate   ArrivalDate \n";
			for(int i=0;i<n;i++)
			{
				if(strcmp(inp,dest[i])==0)
					cout<<fnum[i]<<"\t"<<dest[i]<<"\t"<<depdate[i]<<"\t"<<arrdate[i]<<endl;
			}
			break;
		case 2: cout<<"Enter Source: ";
			cin>>inp;
			cout<<"Flightno.  Source   DepartureDate   ArrivalDate \n";
			for(int i=0;i<n;i++)
			{
				if(strcmp(inp,source[i])==0)
					cout<<fnum[i]<<"\t"<<source[i]<<"\t"<<depdate[i]<<"\t"<<arrdate[i]<<endl;
			}
			break;
		case 3: cout<<"Enter Price ";
			cin>>inp1;
			cout<<"Flightno.  Price  DepartureDate   ArrivalDate \n";
			for(int i=0;i<n;i++)
			{
				if(inp1==price[i])
					cout<<fnum[i]<<"\t"<<price[i]<<"\t"<<depdate[i]<<"\t"<<arrdate[i]<<endl;
			}
			break;
			
	}
}

void option(int opt)
{
	switch(opt)
	{
		case 1: addflight();
			break;
		case 2: listflights();
			break;
		case 3: filterflights();
			break;

	}
}


int main()
{
	char c='y';
	cout<<"\t\tWelcome to Flight Ticketing:"<<endl;
	while(c=='y')
	{
		int opt;
		cout<<"Enter an option:\n";
		cout<<"1.Add flight data \n 2.List flights \n 3.Filter flights  :";
		cin>>opt;
		option(opt);
		cout<<"\nContinue using the application? (y/n): ";
		cin>>c;
	}
	listflights();

}



