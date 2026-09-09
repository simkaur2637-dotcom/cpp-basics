//Check whether the user enters the correct code:

int doorCode = 1337;
if( doorCode == 1337){
cout<<" correct code.\n the door is open now;
  }else{
  cout<< " wrong code.\n the door remains closed.\n;
  }

//Find out if a number is positive or negative:
int myNum = 10; // Is this a positive or negative number?

if (myNum > 0) {
  cout << "The value is a positive number.\n";
} else if (myNum < 0) {
  cout << "The value is a negative number.\n";
} else {
  cout << "The value is 0.\n";
}

//Find out if a person is old enough to vote:
int myAge = 25;
int votingAge = 18;

if (myAge >= votingAge) {
  cout << "Old enough to vote!\n";
} else {
  cout << "Not old enough to vote.\n";
}


//Use the weekday number to calculate and output the weekday name:
int day = 4;
switch(day){
case 1:
cout<<"monday";
break;
case 2:
cout<<"tuesday";
break;
case 3:
cout<<"wednesday";
break;
case 4:
cout<<"thursday";
break;
case 5:
cout<<"friday";
break;
case 6:
cout<<"saturday";
break;
case 7:
cout<<"sunday";
break;
}
// Outputs "Thursday" (day 4)

// while loops
//Create a simple "countdown" program:

int countdown = 3;
while( countdown > 0 ){
cout<< countdown <<"\n";
countdown--;
}
cout<< "HAPPY NEW YEAR!!\n";

//Create a program that only print even numbers between 0 and 10 (inclusive):
int i = 0;

while (i <= 10) {
  cout << i << "\n";
  i += 2;
}

