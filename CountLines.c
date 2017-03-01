#pragma config(Sensor, S1,     touch,          sensorEV3_Touch)
#pragma config(Sensor, S2,     light,          sensorEV3_Color)
#pragma config(Sensor, S4,     ultrasonic,     sensorEV3_Ultrasonic)
#pragma config(Motor,  motorB,          left,          tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          right,         tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//initialise light sensor
const tSensors lightSensor =  (tSensors) S2;

//Initialise touch sensor
const tSensors touchSensor = (tSensors) S1;

//Initialise sonar sensor
const tSensors sonarSensor = (tSensors) S4;

task main()
{
	int count = 0;

	while(1==1)
	{

		while(SensorValue(lightSensor) <= 60)
		{
			//Display total lines crossed
			displayCenteredBigTextLine(3, "%d", count);

			setMotorSyncTime(left, right, 0, 10, 25);
			sleep(750);

		}


		while(SensorValue(lightSensor) >= 40)
		{
			//Display total lines crossed
			displayCenteredBigTextLine(3, "%d", count);

			setMotorSyncTime(left, right, 0, 10, 25);
			sleep(750);

		}
		count = count++;
	}

}
