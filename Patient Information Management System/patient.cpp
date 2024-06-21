#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream> // for stringstream

using namespace std;

struct Date {
    int day, month, year;
};

struct Patient {
    string name;
    string address;
    string insuranceNumber;
    Date dob;
    string emergencyContactName;
    string emergencyContactPhone;
    string pastDiagnosis;
    double weight;
    string bloodPressure;
    double temperature;
    string vitalSigns;
    string currentDiagnosis;
    string medicationPrescription;
    string medicationDosage;
    string medicationFrequency;
    int age;
};

class PatientManager {
private:
    vector<Patient> patients;

public:
    void addPatient() {
        Patient patient;
        cout << "Enter patient name: ";
        getline(cin, patient.name);
        cout << "Enter patient address: ";
        getline(cin, patient.address);
        cout << "Enter patient insurance number: ";
        getline(cin, patient.insuranceNumber);
        cout << "Enter patient date of birth (DD MM YYYY): ";
        cin >> patient.dob.day >> patient.dob.month >> patient.dob.year;
        cin.ignore(); // Ignore newline character left in input buffer
        cout << "Enter emergency contact name: ";
        getline(cin, patient.emergencyContactName);
        cout << "Enter emergency contact phone number: ";
        getline(cin, patient.emergencyContactPhone);
        cout << "Enter patient past diagnosis: ";
        getline(cin, patient.pastDiagnosis);
        cout << "Enter patient weight (kg): ";
        cin >> patient.weight;
        cin.ignore(); // Ignore newline character left in input buffer
        cout << "Enter patient blood pressure: ";
        getline(cin, patient.bloodPressure);
        cout << "Enter patient temperature (Â°C): ";
        cin >> patient.temperature;
        cin.ignore(); // Ignore newline character left in input buffer
        cout << "Enter patient vital signs: ";
        getline(cin, patient.vitalSigns);
        cout << "Enter patient current diagnosis: ";
        getline(cin, patient.currentDiagnosis);
        cout << "Enter patient medication prescription: ";
        getline(cin, patient.medicationPrescription);
        cout << "Enter patient medication dosage: ";
        getline(cin, patient.medicationDosage);
        cout << "Enter patient medication frequency: ";
        getline(cin, patient.medicationFrequency);

        // Calculate age based on current year and patient's birth year
        patient.age = getCurrentYear() - patient.dob.year;

        patients.push_back(patient);
        saveToFile("patient.txt"); // Automatically save patient information after addition
    }

    void displayPatients() {
        cout << "\nDisplaying Patients:\n";
        for (const auto& patient : patients) {
            cout << "Name: " << patient.name << endl;
            cout << "Address: " << patient.address << endl;
            cout << "Insurance Number: " << patient.insuranceNumber << endl;
            cout << "Date of Birth: " << patient.dob.day << "/" << patient.dob.month << "/" << patient.dob.year << endl;
            cout << "Age: " << patient.age << endl;
            cout << "Emergency Contact: " << patient.emergencyContactName << " - " << patient.emergencyContactPhone << endl;
            cout << "Past Diagnosis: " << patient.pastDiagnosis << endl;
            cout << "Weight: " << patient.weight << " kg" << endl;
            cout << "Blood Pressure: " << patient.bloodPressure << endl;
            cout << "Temperature: " << patient.temperature << " Â°C" << endl;
            cout << "Vital Signs: " << patient.vitalSigns << endl;
            cout << "Current Diagnosis: " << patient.currentDiagnosis << endl;
            cout << "Medication Prescription: " << patient.medicationPrescription << endl;
            cout << "Medication Dosage: " << patient.medicationDosage << endl;
            cout << "Medication Frequency: " << patient.medicationFrequency << endl;
            cout << "------------------------------------------" << endl;
        }
    }

    void modifyPatientInformation() {
        string insuranceNumber;
        cout << "Enter insurance number of the patient to modify: ";
        getline(cin, insuranceNumber);

        bool found = false;
        for (auto& patient : patients) {
            if (patient.insuranceNumber == insuranceNumber) {
                found = true;
                cout << "Patient found. Enter the information to modify (press Enter to keep unchanged):\n";

                cout << "Enter patient name [" << patient.name << "]: ";
                string input;
                getline(cin, input);
                if (!input.empty()) {
                    patient.name = input;
                }

                cout << "Enter patient address [" << patient.address << "]: ";
                getline(cin, input);
                if (!input.empty()) {
                    patient.address = input;
                }

                cout << "Enter emergency contact name [" << patient.emergencyContactName << "]: ";
                getline(cin, input);
                if (!input.empty()) {
                    patient.emergencyContactName = input;
                }

                cout << "Enter emergency contact phone number [" << patient.emergencyContactPhone << "]: ";
                getline(cin, input);
                if (!input.empty()) {
                    patient.emergencyContactPhone = input;
                }

                cout << "Enter patient past diagnosis [" << patient.pastDiagnosis << "]: ";
                getline(cin, input);
                if (!input.empty()) {
                    patient.pastDiagnosis = input;
                }

                cout << "Enter patient weight (kg) [" << patient.weight << "]: ";
                string weightInput;
                getline(cin, weightInput);
                if (!weightInput.empty()) {
                    patient.weight = stod(weightInput);
                }

                cout << "Enter patient blood pressure [" << patient.bloodPressure << "]: ";
                getline(cin, input);
                if (!input.empty()) {
                    patient.bloodPressure = input;
                }

                cout << "Enter patient temperature (Â°C) [" << patient.temperature << "]: ";
                string tempInput;
                getline(cin, tempInput);
                if (!tempInput.empty()) {
                    patient.temperature = stod(tempInput);
                }

                cout << "Enter patient vital signs [" << patient.vitalSigns << "]: ";
                getline(cin, input);
                if (!input.empty()) {
                    patient.vitalSigns = input;
                }

                cout << "Enter patient current diagnosis [" << patient.currentDiagnosis << "]: ";
                getline(cin, input);
                if (!input.empty()) {
                    patient.currentDiagnosis = input;
                }

                cout << "Enter patient medication prescription [" << patient.medicationPrescription << "]: ";
                getline(cin, input);
                if (!input.empty()) {
                    patient.medicationPrescription = input;
                }

                cout << "Enter patient medication dosage [" << patient.medicationDosage << "]: ";
                getline(cin, input);
                if (!input.empty()) {
                    patient.medicationDosage = input;
                }

                cout << "Enter patient medication frequency [" << patient.medicationFrequency << "]: ";
                getline(cin, input);
                if (!input.empty()) {
                    patient.medicationFrequency = input;
                }

                // Recalculate age based on modified date of birth
                cout << "Enter patient date of birth (DD MM YYYY) [" << patient.dob.day << " " << patient.dob.month << " " << patient.dob.year << "]: ";
                string dobInput;
                getline(cin, dobInput);
                if (!dobInput.empty()) {
                    stringstream ss(dobInput);
                    ss >> patient.dob.day >> patient.dob.month >> patient.dob.year;
                    patient.age = getCurrentYear() - patient.dob.year;
                }

                cout << "Patient information modified successfully." << endl;
                saveToFile("patient.txt"); // Save modified information to file
                break;
            }
        }
        if (!found) {
            cout << "Patient with insurance number " << insuranceNumber << " not found." << endl;
        }
    }

    void searchByInsuranceNumber() {
        string insuranceNumber;
        cout << "Enter insurance number to search for: ";
        getline(cin, insuranceNumber);
        cout << "\nSearch Result:\n";
        bool found = false;
        for (const auto& patient : patients) {
            if (patient.insuranceNumber == insuranceNumber) {
                found = true;
                cout << "Name: " << patient.name << endl;
                cout << "Address: " << patient.address << endl;
                cout << "Insurance Number: " << patient.insuranceNumber << endl;
                cout << "Date of Birth: " << patient.dob.day << "/" << patient.dob.month << "/" << patient.dob.year << endl;
                cout << "Age: " << patient.age << endl;
                cout << "Emergency Contact: " << patient.emergencyContactName << " - " << patient.emergencyContactPhone << endl;
                cout << "Past Diagnosis: " << patient.pastDiagnosis << endl;
                cout << "Weight: " << patient.weight << " kg" << endl;
                cout << "Blood Pressure: " << patient.bloodPressure << endl;
                cout << "Temperature: " << patient.temperature << " Â°C" << endl;
                cout << "Vital Signs: " << patient.vitalSigns << endl;
                cout << "Current Diagnosis: " << patient.currentDiagnosis << endl;
                cout << "Medication Prescription: " << patient.medicationPrescription << endl;
                cout << "Medication Dosage: " << patient.medicationDosage << endl;
                cout << "Medication Frequency: " << patient.medicationFrequency << endl;
                cout << "------------------------------------------" << endl;
            }
        }
        if (!found) {
            cout << "Patient with insurance number " << insuranceNumber << " not found." << endl;
        }
    }

private:
    void saveToFile(const string& filename) {
        ofstream file(filename);
        if (file.is_open()) {
            for (const auto& patient : patients) {
                file << "Name: " << patient.name << endl;
                file << "Address: " << patient.address << endl;
                file << "Insurance Number: " << patient.insuranceNumber << endl;
                file << "Date of Birth: " << patient.dob.day << "/" << patient.dob.month << "/" << patient.dob.year << endl;
                file << "Emergency Contact: " << patient.emergencyContactName << " - " << patient.emergencyContactPhone << endl;
                file << "Past Diagnosis: " << patient.pastDiagnosis << endl;
                file << "Weight: " << patient.weight << " kg" << endl;
                file << "Blood Pressure: " << patient.bloodPressure << endl;
                file << "Temperature: " << patient.temperature << " Â°C" << endl;
                file << "Vital Signs: " << patient.vitalSigns << endl;
                file << "Current Diagnosis: " << patient.currentDiagnosis << endl;
                file << "Medication Prescription: " << patient.medicationPrescription << endl;
                file << "Medication Dosage: " << patient.medicationDosage << endl;
                file << "Medication Frequency: " << patient.medicationFrequency << endl;
                file << "------------------------------------------" << endl;
            }
            file.close();
            cout << "Patients information saved to " << filename << endl;
        } else {
            cout << "Unable to open file " << filename << endl;
        }
    }

    // Helper function to get the current year
    int getCurrentYear() {
        time_t now = time(0);
        tm* currentTime = localtime(&now);
        return currentTime->tm_year + 1900; // tm_year is years since 1900
    }
};

int main() {
    PatientManager manager;
    int choice;

    do {
        cout << "\n1. Add Patient\n2. Display Patients\n3. Modify Patient Information\n4. Search Patient by Insurance Number\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore newline character left in input buffer
        switch (choice) {
            case 1:
                manager.addPatient();
                break;
            case 2:
                manager.displayPatients();
                break;
            case 3:
                manager.modifyPatientInformation();
                break;
            case 4:
                manager.searchByInsuranceNumber();
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
        }
    } while (choice != 5);

    return 0;
}
