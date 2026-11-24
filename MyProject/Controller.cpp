
/*
#include "pch.h"
#include "Windows.h"
#include "Xinput.h"


#pragma comment(lib, "Xinput.lib")

class Controller {

public:

	Controller(int playerNumber) {
		this->playerNumber = playerNumber;


	}

	void begin() {
		ZeroMemory(&state, sizeof(XINPUT_STATE));

		result = XInputGetState(playerNumber, &state);

		if (result == ERROR_SUCCESS) {
			connected = true;
		}
		else {
			connected = false;
		}
	}

	int getPlayerNumber() {
		return playerNumber;
	}




	//each of these functions must test if the controller is connected

	double getLeftTrigger(bool deadband) {
		if (connected) {

			leftTrigger = state.Gamepad.bLeftTrigger;

			if (deadband) {
				if (leftTrigger >= XINPUT_GAMEPAD_TRIGGER_THRESHOLD) {
					return convertByteToDecimal(leftTrigger);
				}
				else {
					return 0.0;
				}
			}
			else {

				return convertByteToDecimal(leftTrigger);

			}
		}
		else {
			return 0.0;
		}
	}

	double getLeftTrigger(double deadband) {
		if (connected) {

			leftTrigger = state.Gamepad.bLeftTrigger;

			if (convertByteToDecimal(leftTrigger) >= deadband) {
				return convertByteToDecimal(leftTrigger);
			}
			else {
				return 0.0;
			}


		}
		else {
			return 0.0;
		}
	}

	double getRightTrigger(bool deadband) {
		if (connected) {

			rightTrigger = state.Gamepad.bRightTrigger;

			if (deadband) {
				if (rightTrigger >= XINPUT_GAMEPAD_TRIGGER_THRESHOLD) {
					return convertByteToDecimal(rightTrigger);
				}
				else {
					return 0.0;
				}
			}
			else {

				return convertByteToDecimal(rightTrigger);

			}

		}
		else {
			return 0.0;
		}
	}

	double getRightTrigger(double deadband) {
		if (connected) {

			rightTrigger = state.Gamepad.bRightTrigger;

			if (convertByteToDecimal(rightTrigger) >= deadband) {
				return convertByteToDecimal(rightTrigger);
			}
			else {
				return 0.0;
			}


		}
		else {
			return 0.0;
		}
	}

	boolean getAButton() {
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_A) {
			return true;
		}
		else {
			return false;
		}
	}

	boolean getBButton() {
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_B) {
			return true;
		}
		else {
			return false;
		}
	}

	boolean getXButton() {
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_X) {
			return true;
		}
		else {
			return false;
		}
	}

	boolean getYButton() {
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_Y) {
			return true;
		}
		else {
			return false;
		}
	}

	boolean getDPadUp() {
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_UP) {
			return true;
		}
		else {
			return false;
		}
	}

	boolean getDPadDown() {
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_DOWN) {
			return true;
		}
		else {
			return false;
		}
	}

	boolean getDPadLeft() {
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_LEFT) {
			return true;
		}
		else {
			return false;
		}
	}

	boolean getDPadRight() {
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_RIGHT) {
			return true;
		}
		else {
			return false;
		}
	}



private:

	int playerNumber;
	XINPUT_STATE state;
	DWORD result;
	bool connected;

	BYTE leftTrigger;
	BYTE rightTrigger;





	//functions to convert BYTE and SHORT values from input to decimals out of 1


	//for triggers
	double convertByteToDecimal(BYTE byteValue) {
		return (double)byteValue / 255.0;
	}

	//for sticks
	double convertShortToDecimal(SHORT shortValue) {
		if (shortValue >= 0) {
			return (double)shortValue / 32767.0;
		}
		else {
			return (double)shortValue / 32768.0;
		}


	}




};




*/







