//Lab 2 til ELI1500
//(husk 1 mikro F til jord på Vcc til H-Broen)
//Define pin number constants
#define TEMP_IN 19
#define MOTOR_CTRL 6
#define MOTOR_ACTIVE 7
//Variable to keep track of cycles.
int count = 0;
//Declare functions
int average(int *temps);
int motor_speed(int temp_val);
void print_temp(int temp, int temp_val);
int cels_conv(int bit_temp);
int collect_temp();
int get_temp();

void setup() {
	//Setup serial communication
	Serial.begin(9600);
	//setup digital pins
	pinMode(MOTOR_CTRL, OUTPUT);
	pinMode(MOTOR_ACTIVE, OUTPUT);
}
//#Main
void loop() {
	//Get the current temperature average
	int current_temp = average(collect_temp());	
	//wait for 8 passes, then send the average temperature value in Celsius over
	//Serial connection. resets the count to repeat. Evaluate number of counts
	if(count >= 8){
		print_temp(cels_conv(current_temp), current_temp);
		count = 0;
	}
	//set the turning speed of the motor
	motor_speed(current_temp);
	count++;
}
//Take average temp value in mV, convert to correct range for PWM and push to
//motor
int motor_speed(int temp_val){
	int output = map(temp_val, 650, 850, 0, 255);
	analogWrite(MOTOR_ACTIVE, output);
}
//write temperature C and mV values to serial output
void print_temp(int temp, int temp_val){
	Serial.println("****************************");
	Serial.print("The temperature is now: ");
	Serial.println(temp);
	Serial.print("Signal: ");
	Serial.println(temp_val);
}
//convert input from mV range of temp sensor to corresponding Cels values
int cels_conv(int bit_temp){
	return map(bit_temp, 650, 850, 15, 35); 
}
//get spaced out temperature values and return the array
int collect_temp(){
	int temp_vals[10];
	for(int i = 0;i < 10;i++){
		temp_vals[i] = get_temp;
		delay(10);
	}
	return &temp_vals;
}
//take array of ints and sort
/*
int sort(int *temps){
	int buff;
	for(int i = 0;i < 20;i++){
		for(int j = 0;j < 20;j++){
			if(temps[j] > temp[j+1]){
				buff = temps	
*/
//take an array of 10 temp readings and return the average
int average(int *temps){
	int avg, sum;
	avg = sum = 0;
	for(int i = 0;i < 10;i++)
		sum += temps[i];
	avg = sum/10;
	return avg;
}	
//collect temperature reading and return value as mV
int get_temp(){
	float mV = analogRead(TEMP_IN)*(5000.0/1024.0);
	int temp_val = (int)mV;	
	return temp_val;
}
