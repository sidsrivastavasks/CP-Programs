#include<iostream>
#include<math.h>
using namespace std;
class Human
{
   int arr[10]={50,80,100,100,50,100,120,110,20,100};
      protected:
      string nameC;

   public:
      Human(const string & name) : nameC(name) { }

      string name() const { return nameC; }


		int x,i;
		/*
		 energy requirement's code starts
		*/
		int totalnutrients;
		string food_type[10] ={"Rice","Chapati","Veggies","Egg","Pulses","Milk","Meat","Fish","Sweet","Salad"};
		int food_taken()
		{
			cout<<"==============================="<<endl;
            cout<<"Press 1 For YES"<<endl;
            cout<<"Press 2 For NO"<<endl;
            cout<<"==============================="<<endl;
            for(i=0;i<=9;i++)
            {
                cout<<"Have you taken "<<food_type[i]<<": ";
                cin>>x;
                switch(x){
                	case 1: totalnutrients+=arr[i];break;
                	case 2: break;
                	default: cout<<"Oops! Invalid Input"<<endl;i--;
				}
            }

        return totalnutrients;
        };


       void energy_supplied()
       {
           if (totalnutrients>=230 && totalnutrients<=350)
                {
                	cout<<"**************************************\n";
                    cout<<"Energy requirement is Fullfilled"<<endl;
                    cout<<"**************************************\n";
                }
           else if (totalnutrients<=230)
                {
                	cout<<"**************************************\n";
                    cout<<"Energy requirement is not Fulfilled"<<endl;
                    cout<<"**************************************\n";
                }
           else if (totalnutrients>=350)
                {
                	cout<<"*********************\n";
                    cout<<"Overeating!!\n";
                    cout<<"*********************\n";
                }
       }
       /*
		 energy requirement's code ends
		*/

       /*
		 digestion's code starts
		*/
       void digestion()
       {
           int fstfoodtimes;
           int fstfood;
           int litre;
           int meal_type;
        	cout<<"==============================="<<endl;
            cout<<"Press 1 For YES"<<endl;
            cout<<"Press 2 For NO"<<endl;
            cout<<"==============================="<<endl;
		    cout<<"Was your meal spicy? : ";
           	cin>> meal_type;
           	
           	switch(meal_type){
           		
           		case 1: cout<<"Poor Digestion will occur"<<endl;break;
           		
           		case 2 :{
						cout<<"How many glasses of water you drank today? : ";
           				cin>>litre;
           				bool ok = true;
           				while(ok){
           					cout<<"\nHave you eaten any fast food today? : ";
           					cin>>fstfood;
           					switch(fstfood){
           						case 1: cout<<"How many times? : ";
                            			cin>>fstfoodtimes;ok = false;break;
                            	case 2: ok = false;break;
                            	
								default: cout<<"Oops! Invalid Input";
							}
						}
                        if (litre>=8 && fstfoodtimes<=2){
                        	cout<<"**************************************\n";
                            cout<<"Good digestion will occur"<<endl;
                        	cout<<"\n**************************************\n";
                        }
                    	else if (litre<=8 || fstfoodtimes>=2){
                        	cout<<"**************************************\n";
                            cout<<"Poor digestion will occur"<<endl;
                        	cout<<"\n**************************************\n";
                        }break;
                    }
                        
                default : cout<<"Oops, Invalid Input"<<endl;
			}
			
		
    	}
       
       /*
		 digestion's code ends
		*/
		/*
		 mental state code starts
		*/
		
	bool valid(int x){
		if(x==0 || x==1 || x==2){
			return true;
		}
		return false;
	}
    void mentalstate()
    {
    int x1,x2,x3,x4,x5,x6,x7,x8,x9;
    	cout<<"===================================\n";
    	cout<<"Score the MFQ as follows:"<<endl<< "NOT TRUE = 0"<<endl<<"SOMETIMES = 1"<<endl<<"TRUE = 2"<<endl;
    	cout<<"===================================\n";
    	cout<<"1. I felt miserable or unhappy : ";
    	cin>>x1;
    	if(!valid(x1)){
    		while(!valid(x1)){
    			cout<<"Invalid Input"<<endl;
    			cout<<"1. I felt miserable or unhappy : ";
    			cin>>x1;
    			cout<<endl;
    		}
		}
		
    	cout<<"2. I didn’t enjoy anything : ";
    	cin>>x2;
    	if(!valid(x2)){
    		while(!valid(x2)){
    			cout<<"Invalid Input"<<endl;
    			cout<<"1. I felt miserable or unhappy : ";
    			cin>>x2;
    			cout<<endl;
    		}
		}
    	cout<<"3. I found it hard to think properly or concentrate : ";
    	cin>>x3;
    	if(!valid(x3)){
    		while(!valid(x3)){
    			cout<<"Invalid Input"<<endl;
    			cout<<"1. I felt miserable or unhappy : ";
    			cin>>x3;
    			cout<<endl;
    		}
		}
    	cout<<"4. I was a bad person : ";
    	cin>>x4;
    	if(!valid(x4)){
    		while(!valid(x4)){
    			cout<<"Invalid Input"<<endl;
    			cout<<"1. I felt miserable or unhappy : ";
    			cin>>x4;
    			cout<<endl;
    		}
		}
    	cout<<"5. I felt lonely : ";
    	cin>>x5;
    	if(!valid(x5)){
    		while(!valid(x5)){
    			cout<<"Invalid Input"<<endl;
    			cout<<"1. I felt miserable or unhappy : ";
    			cin>>x5;
    			cout<<endl;
    		}
		}
    	cout<<"6. I thought nobody really loved me : ";
    	cin>>x6;
    	if(!valid(x6)){
    		while(!valid(x6)){
    			cout<<"Invalid Input"<<endl;
    			cout<<"1. I felt miserable or unhappy : ";
    			cin>>x6;
    			cout<<endl;
    		}
		}
    	cout<<"7. I thought I could never be as good as other people : ";
    	cin>>x7;
    	if(!valid(x7)){
    		while(!valid(x7)){
    			cout<<"Invalid Input"<<endl;
    			cout<<"1. I felt miserable or unhappy : ";
    			cin>>x7;
    			cout<<endl;
    		}
		}
    	cout<<"8. I did everything wrong : ";
    	cin>>x8;
    	if(!valid(x8)){
    		while(!valid(x8)){
    			cout<<"Invalid Input"<<endl;
    			cout<<"1. I felt miserable or unhappy : ";
    			cin>>x8;
    			cout<<endl;
    		}
		}
    	cout<<"9. I felt so tired I just sat around and did nothing : ";
    	cin>>x9;
    	if(!valid(x9)){
    		while(!valid(x9)){
    			cout<<"Invalid Input"<<endl;
    			cout<<"1. I felt miserable or unhappy : ";
    			cin>>x9;
    			cout<<endl;
    		}
		}
    	int mood_index=x1+x2+x3+x4+x5+x6+x7+x8+x9;

       if (mood_index<=6)
           {
           		cout<<"----------"<<endl;
             	cout<<"Happy"<<endl;
             	cout<<"----------"<<endl;
           }
       else if (mood_index<=12&& mood_index>=7)
           {
           		cout<<"----------"<<endl;
             	cout<<"Moderate"<<endl;
             	cout<<"----------"<<endl;
           }
       else if (mood_index>=12)
           {
           		cout<<"----------"<<endl;
             	cout<<"Depressed"<<endl;
             	cout<<"----------"<<endl;
           }


    }
		/*
		 mental state code ends
		*/
		/*
		 fitness state code starts
		*/
		void fitness()
		{
		    float weight,height,bmi,a;
		    cout<<"What is your weight : ";
		    cin>>weight;
		    cout<<"What is your height?";
		   	cout<<"\n======================\n";
		    cout<<"1. Enter in feet"<<endl<<"2. Enter in m"<<endl;
		    cout<<"======================\n"<<endl;
		    cout<<"Enter here : ";
		    cin>>a;
		    switch(1)
            {
                case 1: cout<<"Enter your height : ";
                		cin>>height;
                		height=height*0.3048;
                		bmi=weight/(height*height);break;
                case 2: cout<<"Enter your height :";
                		cin>>height;
                		bmi=weight/(height*height);break;
                		
                default: cout<<"Oops! Wrong Input"<<endl;

            }

            if (bmi<=18.5)
            {
                cout<<"You are Underweight"<<endl;
            }
            else if (bmi>=18.5&&bmi<=24.9)
            {
                cout<<"You are Healthy"<<endl;
            }
            else if (bmi>=25&&bmi<=29.9)
            {
                cout<<"You are Overweight"<<endl;
            }
            else if (bmi>=29.9&&bmi<=39.9)
            {
                cout<<"You are Obese"<<endl;
            }





		}
		/*
		 fitness state code ends
		*/
        /*
		 talk to code starts
		*/

		void talkTo(const Human & person) const {
         cout << nameC << " says: Hello, " << person.name() << "!" << endl;
         }
        /*
		 talk to code ends
		*/
		void lowOrHigh(){
			int age,mesru,mesrl;
			cout<<"Enter your Age: ";
			cin>>age;
			cout<<"Enter your SYSTOLIC measurement(upper number) : ";
			cin>>mesru;
			cout<<"Enter yout DIASTOLIC measurement(lower number): ";
			cin>>mesrl;
			if(mesru<=120 && mesru>=90&& mesrl<=80){
				if(mesru<100){
					cout<<"Low Level"<<endl;
				}
				else{
					cout<<" Good, Normal Level :)"<<endl;
				}
			}
			else if((mesru>=120 && mesru<=129) && mesrl<=80){
				cout<<"Elevated"<<endl;
			}
			else if((mesru>=130 && mesru<=139) || (mesrl>=80 && mesrl<=89)){
				cout<<"High Blood Pressure (STAGE 1)  :("<<endl;
			}
			else if(mesru>=140 || mesrl>=90){
				cout<<"High Blood Pressure (STAGE 2) :("<<endl;
			}
			else{
				cout<<"High Blood Pressure (STAGE 3) :("<<endl;
			}
		}
		
		void sleep(){
			int st,ut;
			string s,s1;
			cout<<"Enter Only in Hours"<<endl;
			cout<<"Enter your Sleep Time and (AM/PM) : ";
			cin>>st>>s;
			cout<<"Time you woke up with (AM/PM) : ";
			cin>>ut>>s1;
			if(s=="PM" && s1=="AM"){
				st+=12;
				cout<<"\n******************************************\n";
				if(abs(st-ut)%24<8){
					cout<<"Your brain requires more "<<abs((st-ut)-8)<<" hours to sleep :)"<<endl;
				}
				else{
					cout<<"You had a good sleep time :)"<<endl;
					cout<<"You were in deep sleep during "<<abs(st+3)%24<<" to "<<ut-2<<endl;
				}
				cout<<"\n******************************************\n";
			}
			else if(s=="AM" && s1=="PM"){
				ut+=12;
				cout<<"\n******************************************\n";
				if(abs(st-ut)%24<8){
					cout<<"Your brain requires more "<<abs(abs(st-ut)-8)<<" hours to sleep :)"<<endl;
				}
				else{
					cout<<"You had a good sleep time :)"<<endl;
					cout<<"You were in deep sleep during "<<abs(st+3)%24<<" to "<<(ut-2)%24<<endl;
				}
				cout<<"\n******************************************\n";
			}
			else{
				cout<<"Wrong Input"<<endl;
			}
		}
		
		void hydration(){
			int wtr;
			cout<<"Please enter your Water consumption(in glass) : ";
			cin>>wtr;
			if(wtr<8){
				cout<<"You need to have more "<<8-wtr<<" glass of water"<<endl;
			}
			else{
				cout<<"Good work, its enough to get a healthy body"<<endl;
			}
		}


};
int main(){
	while(1){
    int process_no;
	Human saket("Saket");
	Human somesh("Somesh");
	cout<<"\n================================================================================"<<endl;
	cout<<"		About Which Process You Want to Know			"<<endl;
	cout<<"\nPress your desired Key Input"<<endl;
	cout<<"1. ENERGY REQUIREMENT"<<endl;
	cout<<"2. DIGESTION "<<endl;
	cout<<"3. TALK TO"<<endl;
	cout<<"4. MENTAL STATE"<<endl;
	cout<<"5. FITNESS(according to BMI index)"<<endl;
	cout<<"6. CHECK FOR BLOOD PREASUE DATA"<<endl;
	cout<<"7. CHECK YOUR SLEEP HABIT"<<endl;
	cout<<"8. CHECK YOUR HYDRATION"<<endl;
	cout<<"9. To Exit"<<endl;
	cout<<"\n================================================================================"<<endl;
	cout<<"\nEnter Your Choice : ";
	cin>> process_no;


	switch(process_no)
    {
        case 1: saket.food_taken();
            	saket.energy_supplied();break;
    
    	case 2:saket.digestion();break;
    	
   		case 3:saket.talkTo(somesh);
           	   somesh.talkTo(saket);break;
           	   
    	case 4:saket.mentalstate();break;
        
    	case 5: saket.fitness();break;
    	
    	case 6: saket.lowOrHigh();break;
    	case 7: saket.sleep();break;
    	case 8: saket.hydration();break;
		case 9: exit(0);
    	default: cout<<"Oops! Invalid Input"<<endl;
    }
    
	}

	return 0;
}
