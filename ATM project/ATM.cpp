#include <iostream>
using namespace std;

    int password, selectService;
	double withdraw, deposit, transfer;
	unsigned long long accountNumber;
	long double cash=50000;
	string choice;

void displayMenu(){
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"====================WELCOME TO e-Banking===================="<<endl;
    cout<<"------------------------------------------------------------"<<endl<<endl;

	cout<<"==========MENU=========="<<endl;
	cout<<"1. English "<<endl;
	cout<<"2. Amharic "<<endl;
	cout<<"3. Wolaitato "<<endl;
    cout<<"====Select Language: ";
}

void English(){
   do{
        cout<<"Enter your pin: ";
        cin>> password;} while(password!=4545);
system("cls");
	do {
goToService:
	cout<<"1. Current balance"<<endl;
	cout<<"2. Transfer Money"<<endl;
	cout<<"3. Withdraw cash"<<endl;
	cout<<"4. Deposit cash"<<endl;
	cout<<"5. Other Services "<<endl;
	cout<<"====Enter option: ";
	cin>>selectService;
system("cls");
    switch(selectService){
	case 1: cout<<"Your current balance is: "<<cash<<endl; break;
	case 2:
	    do{
		cout<<"Enter recipient's account number: ";
        cin>>accountNumber;
        }while (accountNumber<=1000000000000);
        cout<<"Enter transfer amount: ";
        cin>>transfer;
        if(transfer<=cash){
            cash = cash-transfer;
            cout<<"Transfer completed!"<<endl;
           }
        else if(transfer>cash)
            cout<<"Insufficient balance!"<<endl; break;
     case 3:
            cout<<"Enter withdrawal amount: ";
            cin>>withdraw;
            if (withdraw<= cash){
                cash = cash-withdraw;
                cout<<"Withdraw complete!"<<endl;
				}
            else cout<<"Insufficient balance!"<<endl; break;
     case 4:
            cout<<"Enter deposit amount: ";
			cin>>deposit;
			cash=cash+deposit;
			cout<<"Deposit successful!"; break;
     case 5:
			int Us;
        goToAboutUs:
			cout<<"1. About Us "<<endl;
			cout<<"2. Contact Us "<<endl;
			cout<<"3. Leave Comment "<<endl;
			cout<<"====Enter option: ";
			cin>>Us;
system("cls");
			if(Us==1){
				cout<<"We are a leading online bank, providing secure and convenient banking services for our customers."<<endl;}
			else if(Us==2){
				cout<<"You Can Contact Us on "<<endl;
				cout<<"1. Telegram: @e-Banking_tg"<<endl;
				cout<<"2. Facebook: @e-Banking_fb "<<endl;
				cout<<"3. Instagram: @e-Banking_insta "<<endl;
				cout<<"4. Twitter: @e-Banking_twit"<<endl;}
            else if(Us==3){
                string comment;
                cout<<"Leave comment ";
                cin>>comment;
                cout<<"Thank you for your comment";}
            else goto goToAboutUs; break;
    default: goto goToService;}
           cout<<"1. Continue"<<endl;
           cout<<"2. Exit ";
           cin>>choice;
system("cls");
    } while(choice=="1");
        cout<<"=====THANKYOU🙏 FOR BEING WITH US====="<<endl;
        cout<<"                    WM";
}	      // End of English language

void Amharic (){
	do{
            cout<<"የይለፍ ቃል ያስገቡ: ";
            cin>> password;} while(password!=4545);
system("cls");
	do {
   goToService:
	cout<<"1. ቀሪ ሂሳብ ለማወቅ"<<endl;
	cout<<"2. ገንዘብ ለማስተላለፍ"<<endl;
	cout<<"3. ገንዘብ ለማውጣት"<<endl;
	cout<<"4. ገንዘብ ለማስገባት"<<endl;
	cout<<"5. ለሌላ አገልግሎት "<<endl;
	cout<<"====ምርጫዎን ያስገቡ: ";
	cin>>selectService;
system("cls");
    switch(selectService){
    case 1: cout<<"ያለዎት ቀሪ ሂሳብ: "<<cash<<endl;break;
    case 2:
        do{
            cout<<"አካውንት ቁጥር ያስገቡ: ";
            cin>>accountNumber;
        } while(accountNumber<=1000000000000);
			cout<<"የገንዘቡን መጠን ያስገቡ: ";
			cin>>transfer;
	        if(transfer<=cash){
			cash = cash-transfer;
			cout<<"በተሳካ ተላልፏል!"<<endl;}
			else if(transfer>cash) cout<<"ያለዎት ቀሪ ሂሳብ አነስተኛ ነው!"<<endl; break;
    case 3: {
        cout<<"የገንዘብ መጠን ያስገቡ: ";
        cin>>withdraw;
        if(withdraw<=cash){
                cash = cash-withdraw;
                cout<<"በተሳካ ተከናውኗል!"<<endl;
				}
        if(withdraw>cash) cout<<"ያለዎት ቀሪ ሂሳብ አነስተኛ ነው!"<<endl;
    } break;
    case 4: {
			cout<<"የገንዘብ መጠን ያስገቡ: ";
			cin>>deposit;
			cash=cash+deposit;
			} break;
	case 5: {
			int Us;
			goToAboutUs:
			cout<<"1. ስለ እኛ "<<endl;
			cout<<"2. እኛን ለማግኘት "<<endl;
			cout<<"3. አስተያየት "<<endl;
			cout<<"====ምርጫዎን ያስገቡ: ";
			cin>>Us;
system("cls");
			if(Us==1){
				cout<<"We are a leading online bank, providing secure and convenient banking services for our customers."<<endl;}
			else if(Us==2){
				cout<<"እኛን ማግኘት የምትችሉበት መንገድ"<<endl;
				cout<<"1. Telegram: @e-Banking_tg"<<endl;
				cout<<"2. Facebook: @e-Banking_fb "<<endl;
				cout<<"3. Instagram: @e-Banking_insta "<<endl;
				cout<<"4. Twitter: @e-Banking_twit"<<endl;}
            else if(Us==3){
                string comment;
                cout<<"አስተያየትዎን ያስቀምጡ ";
                cin>>comment;
                cout<<"ለአስተያየትዎ እናመሰግናለን";}
            else goto goToAboutUs;
		} break;

	default: goto goToService;
    }
        cout<<"1. ለመቀጠል"<<endl;
        cout<<"2. ለመውጣት ";
        cin>>choice;
system("cls");
    } while(choice=="1");
    cout<<"=====ከኛ ጋር ስለ ሆኑ እናመሰግናለን🙏====="<<endl;
	cout<<"                  WM";
} // End of Amharic language

void Wolaitato(){
    long double cash=50000;
    do{
            cout<<"Neega geema payduwa guja: ";
            cin>> password;} while(password!=4545);
system("cls");
	do {
    goToService:
	cout<<"1. Attida Marccuwa Eranawu"<<endl;
	cout<<"2. Marccuwa Harawu Yedanawu"<<endl;
	cout<<"3. Marccuwa Kessanawu"<<endl;
	cout<<"4. Marccuwa gujjanawu"<<endl;
	cout<<"5. Gujja hagaazaassi"<<endl;
	cout<<"====Dooruwa payduwa guja: ";
	cin>>selectService;
system("cls");
    switch(selectService){
	case 1: cout<<"Attida Marccoy: "<<cash<<endl; break;
    case 2:
           do{
            cout<<"Akawuntiya payduwa guja: ";
			cin>>accountNumber;
           }while (accountNumber<=1000000000000);
			cout<<"Marccuwa payduwa guja: ";
			double transfer;
			cin>>transfer;
	        if(transfer<=cash){
			cash = cash-transfer;
			cout<<"Suure polettis!"<<endl;}
			else if(transfer>cash) cout<<"Attida marccoy guuta!"<<endl; break;
	case 3: {
	    cout<<"Marccuwa payduwa guja: ";
        cin>>withdraw;
        if(withdraw<=cash){
                cash = cash-withdraw;
                cout<<"Suure polettis! "<<endl;}
        else if(withdraw>cash) cout<<"Attida marccoy guuta!"<<endl;} break;
	case 4:
	    cout<<"Marccuwa payduwa gujja: ";
        cin>>deposit;
        cash=cash+deposit; break;
    case 5: {
        int Us;
       goToAboutUs:
        cout<<"1. Nubaa eranawu "<<endl;
        cout<<"2. Nunaara gaytanawu "<<endl;
        cout<<"3. Qofaa wotanawu "<<endl;
        cout<<"====Dooruwa payduwa guja: ";
        cin>>Us;
system("cls");
        if(Us==1){
            cout<<"Nuuni sinta xeera onlinya bankiya hagaazaa immiya eqota, nuuni naagetida nne lo\"o hagaaza immetes."<<endl;}
        else if(Us==2){
            cout<<"Nuna demanawu "<<endl;
            cout<<"1. Telegram: @e-Banking_tg"<<endl;
            cout<<"2. Facebook: @e-Banking_fb "<<endl;
            cout<<"3. Instagram: @e-Banking_insta "<<endl;
            cout<<"4. Twitter: @e-Banking_twit"<<endl;}
        else if(Us==3){
                string comment;
                cout<<"Qofaa wotta ";
                cin>>comment;
                cout<<"Imiddo qofaa gishawu galalteetes";}
        else goto goToAboutUs;} break;
	default: goto goToService;
    }
			cout<<"1. Zaretanawu"<<endl;
			cout<<"2. Kiyanawu ";
            cin>>choice;
system("cls");
    } while(choice=="1");
	cout<<"=====Nunaara de\"iyo gishawu galateettes🙏=====";
	cout<<"\n                 WM";
	} // End of Wolaitato Language

int main()
{
	int language;
    goToMainMenu:
    displayMenu();
	cin>>language;
system("cls");
	switch(language){
	    case 1: English(); break;
	    case 2: Amharic(); break;
	    case 3: Wolaitato(); break;
	    default: goto goToMainMenu;
	}
return 0;
}
