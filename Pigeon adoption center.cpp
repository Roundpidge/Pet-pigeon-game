//Pigeon adoption center
#include <iostream>
#include <fstream>


using namespace std;

struct Pigeon{
	
	string name;
	int age;
	string color;
	int hunger;
	int thirst;
	int hapiness;
	int health;	
}p[3];



void percy(){
cout<<"<(o)"<<endl;
cout<<" (V )"<<endl;
cout<<endl;
cout<<"Name: Percy"<<endl;
cout<<"Age: 4"<<endl;
cout<<"Color: Gray"<<endl;
}

void malik(){
cout<<"(ovo)"<<endl;
cout<<"(V  V)"<<endl;
cout<<endl;
cout<<"Name: Malik"<<endl;
cout<<"Age: 8"<<endl;
cout<<"Color: Black"<<endl;
}

void obel(){
cout<<"<(u)"<<endl;
cout<<"( V )"<<endl;
cout<<endl;
cout<<"Name: Obel"<<endl;
cout<<"Age: 2"<<endl;
cout<<"Color: Brown"<<endl;
}

int main_data(int &cash, int &food, int &medicine, int &days){
	cout<<"| Day: "<<days<<"      | "<<endl;
	cout<<"| Cash: "<<cash<<"     |"<<endl;
	cout<<"| Food: "<<food<<"     |"<<endl;
	cout<<"| Medicine: "<<medicine<<" |"<<endl;
}

void first(Pigeon p[], int &adopted, int &days){
	cout<<"Number of adopted pigeons: "<<adopted<<endl;
		if(adopted==3){
		cout<<"Sorry, all the pigeons have been adopted, check in next time! "<<endl;
		return;
		}
	cout<<"Welcome to the Sanja's adoption center!"<<endl;
		if(adopted>1){
		cout<<"Would you like to take a look and adopt another pigeon today?"<<endl;
		cout<<" Yes "<<" No "<<endl;
		string choice;
		cin>>choice;
			if(choice=="No"){
			cout<<"See you next time! Bye!"<<endl;
			return;
			}	
		}
	cout<<" Take a look at these pigeons we rescued recently: "<<endl;
		percy();
		cout<<endl;
		malik();
		cout<<endl;
		obel();
		cout<<"Which pigeon would you like(Type their name)? : "<<endl;
		string pick_p;
		cin>>pick_p;
				if(pick_p=="Percy" || pick_p=="percy"){
				cout<<"Aww, you picked Percy, what a cutie!"<<endl;
				cout<<endl;
				percy();
				p[adopted].name="Percy";
				p[adopted].age=4;
				p[adopted].color="Gray";
				p[adopted].hunger=100;
				p[adopted].thirst=100;
				p[adopted].hapiness=100;
				p[adopted].health=100;
				adopted++;
				}
															
					if(pick_p=="Malik" || pick_p=="malik"){
					cout<<"Great choice! This one is a feisty fellow."<<endl;
					cout<<endl;
					malik();
					p[adopted].name="Malik";
					p[adopted].age=8;
					p[adopted].color="Black";
					p[adopted].hunger=100;
					p[adopted].thirst=100;
					p[adopted].hapiness=100;
					p[adopted].health=100;
					adopted++;	
					}
																
						if(pick_p=="Obel" || pick_p=="obel"){
						cout<<"Thank you for adopting such magnificent bird! "<<endl;
						cout<<endl;
						obel();
						p[adopted].name="Obel";
						p[adopted].age=2;
						p[adopted].color="Brown";
						p[adopted].hunger=100;
						p[adopted].thirst=100;
						p[adopted].hapiness=100;
						p[adopted].health=100;
						adopted++;		
						}
				
return;
}

void data(Pigeon &p){
	cout<<"| Name: "<<p.name<<" | "<<"Age: "<<p.age<<" | "<<"Color: "<<p.color<<" | "<<"Hunger: "<<p.hunger<<" | "<<"Thirst: "<<p.thirst<<" | "<<"Hapiness: "<<p.hapiness<<" | "<<"Health: "<<p.health<<" |"<<endl;
	
}

void second(Pigeon p[], int &adopted, int &food, int &medicine, int &cash, int &days){
	if(adopted==0){
		cout<<"You don't have any pigeons! "<<endl;
		return;
	}
	bool continueAction=true;
		if(days%4==0){
		cout<<"Your pet(s) escaped!Don't worry, they will most likely return in 2 days, they have fantastic inner GPS."<<endl;
		p[adopted].hunger-=10;
		p[adopted].thirst-=10;
		days++;
		return;
		}
	cout<<"Your pet pigeon(s): "<<endl;
	for(int i=0;i<adopted;i++){
	data(p[i]);	
	}
	cout<<"Type your pet's name or type 'exit' to leave this window:"<<endl;
	string namePet;
	cin>>namePet;
	if (namePet == "exit"){
    return;
    }
	bool found=false;
	while (continueAction){
		for(int i=0;i<adopted;i++){
			if(namePet==p[i].name){
			found=true;	
				if(p[i].hunger==0 && p[i].thirst==0){
				p[i].health-=10;
				p[i].hapiness-=10;
					if(p[i].hapiness<51 || p[i].health<51){
					cout<<"Oh no, your pet"<<p[i].name<<"isn't feeling well"<<endl;	
					}
				}
			main_data(cash, food, medicine, days);
			data(p[i]);
			cout<<"What would you like to do with "<<p[i].name<<"? :"<<endl;
			cout<<"1-Feed(+5 hunger)"<<endl;
			cout<<"2-Give water(+5 thirst)"<<endl;
			cout<<"3-Play(-10 hunger, -5 thirst, +10 hapiness)"<<endl;
			cout<<"4-Walk(-5 hunger, -10 thirst, +10 hapiness)"<<endl;
			cout<<"5-Heal(+10 health)"<<endl;
			cout<<"6-Exit"<<endl;
			int choice2;
			cin>>choice2;
			switch(choice2){
				case 1:
					if(p[i].hunger==100){
					cout<<"Your pet isn't hungry!"<<endl;
					break;
					}	
					if(food==0){
					cout<<"You don't have enough birdfeed! To get more birdfeed, you need to buy more in supermarket."<<endl;
					break;
					}
					cout<<" 0"<<endl;
					cout<<"  0"<<"0<(o)"<<endl;
		    		cout<<"(___)"<<"(V )"<<endl;
		    		cout<<endl;
		    		p[i].hunger+=5;
		    		cout<<"Your bird is well fed!"<<p[i].hunger<<"/100"<<endl;	
					break;	
					
				case 2:
					if(p[i].thirst==100){
					cout<<"Your pet isn't thirsty!"<<endl;
					break;
					}	
					cout<<endl;
					cout<<"    <(o)"<<endl;
		    		cout<<"(___)(V )"<<endl;
		    		cout<<endl;
		    		p[i].thirst+=5;
		    		cout<<"Your bird is well satiated!"<<p[i].thirst<<"/100"<<endl;	
					break;	
				
				case 3:
					cout<<"  (ovo)  O"<<endl;
					cout<<"<(    )>  "<<endl;
					cout<<"  v v     "<<endl;
					
					if(p[i].hapiness<100){
					p[i].hapiness+=10;	
					}
					p[i].hunger-=10;
					p[i].thirst-=5;				
				break;
				
				case 4:
					cout<<"  (o)> "<<endl;
				cout<<" (  )  "<<endl;
					cout<<"  v v  "<<endl;

					
					if(p[i].hapiness<100){
					p[i].hapiness+=10;	
					}
					p[i].hunger-=5;
					p[i].thirst-=10;	
				break;
				
				case 5:
					if(p[i].health==100){
					cout<<"Your bird is feeling well!"<<endl;
					break;
					}
					if(medicine==0){
					cout<<"You don't have enough medicine! To get more medicine, you need to buy more at drugstore."<<endl;
					break;
					}
				cout<<"        "<<endl;
				cout<<" (o)>--D"<<endl;
				cout<<"( V)    "<<endl;
				p[i].health+=10;
				cout<<"Your bird is feeling much better!"<<p[i].health<<"/100"<<endl;
				break;
				
				case 6:	      
				days++;              
                continueAction = false;
				break;
				
				default:
				cout<<"Wrong answer, try again! "<<endl;
				}
			if (continueAction==false) break;
			}
		}
	if (found==false) {
    cout << "Pigeon not found. Please try again." << endl;
    return;
    }
}
days++;
return;
}

void third(int &food, int &medicine,int &cash, int &days){
	int choice2;
	do{
	cout<<"Where would you like to go? "<<endl;
	cout<<"1-Supermarket"<<endl;
	cout<<"2-Drugstore"<<endl;
	cout<<"3-Exit"<<endl;
	
	cin>>choice2;
		switch(choice2){
			case 1:
			main_data(cash, food, medicine, days);
			cout<<"___________"<<endl;	
			cout<<"|  MAMA'S |"<<endl;
			cout<<"|---------|"<<endl;
			cout<<"|[][][] || [][][][]|"<<endl;
			cout<<"|[][][] || [][][][][]|"<<endl;
			cout<<endl;
			cout<<"Welcome to Mama's supermarket! WHat would you like to purchase? "<<endl;
			cout<<" | 1-Unsalted seeds 100g(+10 food, -10 cash)          |"<<endl;
			cout<<" | 2-Dried insects and seeds 300g(+30 food, -30 cash) |"<<endl;
			cout<<" | 3-XXL various seeds pack 1kg(+50 food, -50 cash)   |"<<endl;
			int choice3;
			cin>>choice3;
				if(choice3==1){
					if(cash<10){
						cout<<"You don't have enough money! To get more cash, in menu press option 4-->Work"<<endl;
						break;
					}
				food+=10;
				cash-=10;
				cout<<"Have a nice day and see you next time!"<<endl;	
				}
					if(choice3==2){
						if(cash<30){
						cout<<"You don't have enough money! To get more cash, in menu press option 4-->Work"<<endl;
						break;
						}
					food+=30;
					cash-=30;
					cout<<"Have a nice day and see you next time!"<<endl;	
					}
					
						if(choice3==3){
							if(cash<50){
							cout<<"You don't have enough money! To get more cash, in menu press option 4-->Work"<<endl;
							break;
							}
						food+=50;
						cash-=50;
						cout<<"Have a nice day and see you next time!"<<endl;	
						}	
			break;
			
			case 2:
			main_data(cash, food, medicine, days);
			cout<<" __________ "<<endl;
			cout<<"|----------|"<<endl;
			cout<<"|DR.PHILGER|"<<endl;	
			cout<<"|----------|"<<endl;
			cout<<"|   |  |   |"<<endl;
			cout<<endl;
			cout<<" Welcome to Dr.Philger's drugstore, what would you like to purchase? "<<endl;
			cout<<" | 1-Golden Syrup(+10 medicine, -10 cash) |"<<endl;
			cout<<" | 2-Safety kit(+30 medicine, -30 cash)   |"<<endl;
			cout<<" | 3-Imuno pills(+50 medicine, -50 cash)  |"<<endl;			
			int choice4;
			cin>>choice4;
				if(choice4==1){
					if(cash<10){
						cout<<"You don't have enough money! To get more cash, in menu press option 4-->Work"<<endl;
						break;
					}
				medicine+=10;
				cash-=10;
				cout<<"Have a nice day and see you next time!"<<endl;
				}
					if(choice4==2){
						if(cash<30){
						cout<<"You don't have enough money! To get more cash, in menu press option 4-->Work"<<endl;
						break;
						}
					medicine+=30;
					cash-=30;
					cout<<"Have a nice day and see you next time!"<<endl;	
					}
					
						if(choice4==3){
							if(cash<50){
							cout<<"You don't have enough money! To get more cash, in menu press option 4-->Work"<<endl;
							break;
							}
						medicine+=50;
						cash-=50;
						cout<<"Have a nice day and see you next time!"<<endl;	
						}			
			break;
			
			default:
			cout<<"Wrong answer, try again! "<<endl;		
		}
	}while(choice2!=3);
	
return;
}

void fourth(int &cash, Pigeon p[], int &adopted, int &days){
	if(days%4==0){
		cout<<"Your pet(s) escaped!Don't worry, they will most likely return in 2 days, they have fantastic inner GPS."<<endl;
	}
	if(cash==100){
	cout<<"Max capacity reached(100/100)!"<<endl;
	return;	
	}
	cash+=20;
		for(int i=0;i<adopted;i++){
		p[i].hapiness-=10;	
		}
	cout<<"Work done!"<<endl;
	cout<<"Cash: "<<cash<<"/100"<<endl;
	days++;
return;
}

void saveGame(Pigeon p[], int adopted, int food, int medicine, int cash, int days) {
    ofstream saveFile("savegame.txt");

    if (!saveFile.is_open()) {
        cout << "Unable to save the game." << endl;
        return;
    }

    saveFile<<"Number of adopted pigeon(s): "<<adopted<<endl;
    saveFile<<"Food: "<<food<<endl;
    saveFile<<"Medicine: "<<medicine<<endl;
    saveFile<<"Cash: "<<cash<<endl;
    saveFile<<"Day(s): "<<days<<endl;
	
    for (int i = 0; i < adopted; ++i) {
        saveFile <<"Name: "<<p[i].name<<endl;
        saveFile <<"Age: "<<p[i].age<<endl;
        saveFile <<"Color: "<<p[i].color<<endl;
        saveFile <<"Hunger: "<<p[i].hunger<<endl;
        saveFile <<"Thirst: "<<p[i].thirst<<endl;
        saveFile <<"Hapiness: "<<p[i].hapiness<<endl;
        saveFile <<"Health: "<<p[i].health<<endl;
    }

    saveFile.close();
    cout << "Game saved successfully!" << endl;
return;
}

void loadGame(Pigeon p[], int &adopted, int &food, int &medicine, int &cash, int &days) {
    ifstream loadFile("savegame.txt");

    if (!loadFile.is_open()) {
        cout << "Unable to load the game." << endl;
        return;
    }

    loadFile >> adopted;
    loadFile >> food;
    loadFile >> medicine;
    loadFile >> cash;
    loadFile >> days;

    for (int i = 0; i < adopted; ++i) {
        loadFile >> p[i].name;
        loadFile >> p[i].age;
        loadFile >> p[i].color;
        loadFile >> p[i].hunger;
        loadFile >> p[i].thirst;
        loadFile >> p[i].hapiness;
        loadFile >> p[i].health;
    }

    loadFile.close();
    cout << "Game loaded successfully!" << endl;
return;
}

void resetGame(Pigeon p[], int &adopted, int &food, int &medicine, int &cash, int &days){
	cout<<"Do you want to proceed with this? This process will delete ALL of your progress."<<endl;
	cout<<"Yes  No"<<endl;
	string choice3;
	cin>>choice3;
		if(choice3=="Yes"){
		cout<<"Alright, starting to delete everything.."<<endl;
		adopted=0;
    	food=0;
    	medicine=0;
    	cash=0;
    	days=1;
    	cout<<"Main data has been sucessfully deleted."<<endl;
			for(int i=0;i<3;i++){
			p[i].name="";
			p[i].age=0;
			p[i].color="";
			p[i].hunger=0;
			p[i].thirst=0;
			p[i].hapiness=0;
			p[i].health=0;
			}
				if(remove("savegame.txt") == 0) {
        		cout << "Progress has been reset and save file deleted successfully!" << endl;
    			} 
				else{
        		cout << "Progress has been reset, but no save file was found." << endl;
    			}
			}
}

int main() {
    int adopted = 0;
    int menu = 0;
    int food = 0;
    int medicine = 0;    
    int cash = 0;    
    int days = 1;

    do {
        main_data(cash, food, medicine, days);
        cout << " Welcome to the game Sanja's adoption center, to start pick an option from 1 to 9: " << endl;
        cout << " | 1-Adoption center                                               |" << endl;
        cout << " | 2-My pet pigeon(s)                                              |" << endl;
        cout << " | 3-Supermarket & Drugstore                                       |" << endl;
        cout << " | 4-Work(+20 cash, -10 hapiness, -10 hunger, -10 thirst)          |" << endl;
        cout << " | 5-Help                                                          |" << endl;
        cout << " | 6-Save Game                                                     |" << endl;
        cout << " | 7-Load Game                                                     |" << endl;
        cout << " | 8-Reset Game(WARNING:This option deletes all of your progress!) |" << endl;
        cout << " | 9-Exit                                                          |" << endl;
        cin >> menu;
        
        switch(menu) {
            case 1:
                first(p, adopted, days);
                break;
                
            case 2:
                second(p, adopted, food, medicine, cash, days);
                break;
                
            case 3:
                third(food, medicine, cash, days);
                break;
                
            case 4:
                fourth(cash, p, adopted, days);
                break;
                
            case 5:
                {
                    ifstream dat("How_to_play.txt");
                    if (!dat.is_open()) {
                        cout << "Unable to open the file." << endl;
                        return 1;
                    }
                    string content((istreambuf_iterator<char>(dat)), (istreambuf_iterator<char>()));
                    cout << content << endl;
                    dat.close();
                }
                break;

            case 6:
                saveGame(p, adopted, food, medicine, cash, days);
                break;

            case 7:
                loadGame(p, adopted, food, medicine, cash, days);
                break;
                
            case 8:
            resetGame(p, adopted, food, medicine, cash, days);
            break;
			
			case 9:
                cout << "See ya, hope the game was fun :D" << endl;    
                break;
                
            default:
                cout << "Wrong option! Try again. " << endl;
                break;
        }    
    } while(menu != 9);

    system("pause");
    return 0;
}
