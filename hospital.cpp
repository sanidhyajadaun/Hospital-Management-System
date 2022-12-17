#include <iostream>
#include <conio.h>
using namespace std;

string patient_name,patient_problem, patient_address, appointment_date;
int patient_age;

class hospital
{
    string patient_name,patient_problem, patient_address, appointment_date;
    int patient_age;
    long int number;
public:
    void patient_appointment();
    void doctor_list();
    void payment();
    void hospital_details();
};

class doctor : public hospital
{
public:
    void one();
    void two();
    void three();
    void four();
    void five();
    void six();
    void seven();
    void eight();
};

void doctor::one()
{
    patient_appointment();
    cout<<endl;
    cout<<"\t\t\tThank You for Booking!!!! We will soon inform about your meeting details through call & message."<<endl;
}

void doctor::two()
{
    patient_appointment();
    cout<<endl;
    cout<<"\t\t\tThank You for Booking!!!! We will soon inform about your meeting details through call & message."<<endl;
}

void doctor::three()
{
    patient_appointment();
    cout<<endl;
    cout<<"\t\t\tThank You for Booking!!!! We will soon inform about your meeting details through call & message."<<endl;
}

void doctor::four()
{
    patient_appointment();
    cout<<endl;
    cout<<"\t\t\tThank You for Booking!!!! We will soon inform about your meeting details through call & message."<<endl;
}

void doctor::five()
{
    patient_appointment();
    cout<<endl;
    cout<<"\t\t\tThank You for Booking!!!! We will soon inform about your meeting details through call & message."<<endl;
}

void doctor::six()
{
    patient_appointment();
    cout<<endl;
    cout<<"\t\t\tThank You for Booking!!!! We will soon inform about your meeting details through call & message."<<endl;
}

void doctor::seven()
{
    patient_appointment();
    cout<<endl;
    cout<<"\t\t\tThank You for Booking!!!! We will soon inform about your meeting details through call & message."<<endl;
}

void doctor::eight()
{

    patient_appointment();
    cout<<endl;
    cout<<"\t\t\tThank You for Booking!!!! We will soon inform about your meeting details through call & message."<<endl;
}


void hospital :: patient_appointment()
{
    cout<<"\t\t\t\t\t\tPatient Name: ";
    cin.ignore();
    getline(cin, patient_name);
    cout<<"\t\t\t\t\t\tPatient age: ";
    cin>>patient_age;
    cout<<"\t\t\t\t\t\tPatient problem: ";
    cin.ignore();
    getline(cin, patient_problem);
    cout<<"\t\t\t\t\t\taddress: ";
    cin.ignore();
    getline(cin, patient_address);
    cout<<"\t\t\t\t\t\tEnter Your Mobile Number: ";
    cin>>number;
    cout<<"\t\t\t\t\t\tAppointment date: ";
    cin.ignore();
    getline(cin, appointment_date);
    cout<<"\n\t\t\t\t\t\tPatient Successfully Booked!"<<endl<<endl;
}


void hospital::doctor_list()
{
    cout<<"\t\t\t\t\t1. Dr. Amrendra Singh\t\t*Eye Specialist"<<endl<<endl;
    cout<<"\t\t\t\t\t2. Dr. Devendra Singh\t\t*Heart Specialist"<<endl<<endl;
    cout<<"\t\t\t\t\t3. Dr. Munaf Patel\t\t*Diabetic Specialist"<<endl<<endl;
    cout<<"\t\t\t\t\t4. Dr. Virat Kapoor\t\t*Heart Surgent"<<endl<<endl;
    cout<<"\t\t\t\t\t5. Dr. Nitin Humar\t\t*Eye Specialist"<<endl<<endl;
    cout<<"\t\t\t\t\t6. Dr. Manas Kataria\t\t*Diabetic Specialist"<<endl<<endl;
    cout<<"\t\t\t\t\t7. Dr. Siddharth Rajput\t\t*Medicine Specialist"<<endl<<endl;
    cout<<"\t\t\t\t\t8. Dr. Vansh Yadav\t\t*Medicine Specialist"<<endl<<endl;
}


void hospital::payment()
{
    int amount, number;

    cout<<"\t\t\t\t\t\tPatient Name: "<<patient_name<<endl<<endl;
    cout<<"\t\t\t\t\t\tPatient problem: "<<patient_problem<<endl<<endl;
    cout<<"\t\t\t\t\t\tEnter Amount of treatment: ";
    cin>>amount;
    cout<<endl;
    cout<<"\t\t\t\t\t\tEnter Your Mobile Number: ";
    cin>>number;

    cout<<"\n\t\t\t\t\t\tPayment Successful, Thank You!"<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t"<<patient_name<<endl;
    cout<<"\t\t\t\t\t\t------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t|    Patient Name: "<<patient_name<<endl;
    cout<<"\t\t\t\t\t\t|    Patient problem: "<<patient_problem<<endl;
    cout<<"\t\t\t\t\t\t|    Payment Amount: "<<amount<<endl;
    cout<<"\t\t\t\t\t\t|    Mobile: "<<number<<endl;
    cout<<"\n\t\t\t\t\t\t\tThank You!!!"<<endl;

}


void hospital::hospital_details()
{
    cout<<"\t\t\tName and location: Om Medical Center, located at 123 Main Street, Dehradun, Uttarakhand\n"<<endl;
    cout<<"\t\t\tServices offered: Om Medical Center offers a wide range of services, including emergency "<<endl;
    cout<<"\t\t\tcare,surgery, inpatient care, outpatient care, diagnostic services, and specialized treatment"<<endl;
    cout<<"\t\t\tfor conditions such as cancer and cardiovascular disease.\n"<<endl;
    cout<<"\t\t\tStaff and facilities: Om Medical Center has a team of highly trained doctors, nurses, and"<<endl;
    cout<<"\t\t\tother healthcare professionals, as well as support staff such as administrators and custodial"<<endl;
    cout<<"\t\t\tworkers. The hospital has state-of-the-art facilities, including operating rooms, examination"<<endl;
    cout<<"\t\t\trooms, and patient rooms.\n"<<endl;
    cout<<"\t\t\tAffiliations: Om Medical Center is affiliated with the national healthcare system"<<endl;
    cout<<"\t\t\tHealthFirst\n"<<endl;
    cout<<"\t\t\tPolicies and procedures: Om Medical Center has policies in place related to visiting hours,"<<endl;
    cout<<"\t\t\tpayment and insurance, and patient rights and responsibilities.\n"<<endl;
    cout<<"\t\t\tPatient population: Om Medical Center serves a diverse patient population, including"<<endl;
    cout<<"\t\t\tchildren, seniors, and individuals with a wide range of medical conditions.\n"<<endl;
    cout<<"\t\t\tAccreditations and certifications: Om Medical Center is accredited by the Joint"<<endl;
    cout<<"\t\t\tCommission and is certified by the Centers for Medicare and Medicaid Services.\n"<<endl;
    cout<<"\t\t\tResearch and education: Om Medical Center has an active research program, including "<<endl;
    cout<<"\t\t\tclinical trials in various areas of medicine, and offers a residency program for medical "<<endl;
    cout<<"\t\t\tstudents."<<endl;
}


int main()
{
    int answer, doc, x;
    hospital obj;
    doctor pat;

    do{
        system("cls");
        cout<<"\n\n\t\t\t\t\t\tHospital Manpatient_agement System"<<endl;
        cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
        cout<<"\t\t\t\t\t\t1. Emergency Seat Booking"<<endl<<endl;
        cout<<"\t\t\t\t\t\t2. Treatment Payment Receipt"<<endl<<endl;
        cout<<"\t\t\t\t\t\t3. Doctor List & Appointment"<<endl<<endl;
        cout<<"\t\t\t\t\t\t4. Hospital Details"<<endl<<endl;
        cout<<"\t\t\t\t\t\t5. Exit"<<endl<<endl;
        cout<<"\n\t\t\t\t\tSelect An Option from here 1/2/3/4/5: ";
        cin>>answer;
    switch(answer)
    {
        case 1: cout<<"\n\t\t\t\t\t\t1. Patient Appoint"<<endl;
        cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
        obj.patient_appointment();
        break;
        case 2: cout<<"\n\t\t\t\t\t\t2. Treatment Payment"<<endl;
        cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
        obj.payment();
        break;
        case 3: cout<<"\n\t\t\t\t\t\t3. Doctor List"<<endl;
        cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
        obj.doctor_list();
        cout<<"\n\t\t\t\t\t\tSelect A Doctor For Appointment: ";
        cin>>doc;
        switch(doc)
        {
            case 1: cout<<"\n\t\t\t\t\t\t1. Dr. Amrendra Singh"<<endl;
            cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
            pat.one();
            break;
            case 2: cout<<"\n\t\t\t\t\t\t2. Dr. Devendra Singh"<<endl;
            cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
            pat.two();
            break;
            case 3: cout<<"\n\t\t\t\t\t\t3. Dr. Munaf Patel"<<endl;
            cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
            pat.three();
            break;
            case 4: cout<<"\n\t\t\t\t\t\t4. Dr. Virat Kapoor"<<endl;
            cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
            pat.four();
            break;
            case 5: cout<<"\n\t\t\t\t\t\t5. Dr. Nitin Humar"<<endl;
            cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
            pat.five();
            break;
            case 6: cout<<"\n\t\t\t\t\t\t6. Dr. Manas Kataria"<<endl;
            cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
            pat.six();
            break;
            case 7: cout<<"\n\t\t\t\t\t\t7. Dr. Siddharth Rajput"<<endl;
            cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
            pat.seven();
            break;
            case 8: cout<<"\n\t\t\t\t\t\t8. Dr. Vansh Yadav"<<endl;
            cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
            pat.eight();
            break;
            default:
                cout<<"Wrong Choice!!! Please select Again."<<endl<<endl;
        }
        break;
        case 4: cout<<"\n\t\t\t\t\t\t4. Hospital Details"<<endl;
        cout<<"\t\t\t\t\t\t_____________________________"<<endl<<endl;
        obj.hospital_details();
        break;
        case 5:
            if(answer == 5)
            {
                exit(1);
            }
        default:
            cout<<"\t\t\t\t\t\tThis is not exit. Try Again!"<<endl<<endl;
    }
    cout<<"\n\t\t\t\t\tSelect An Option Again: yes(y) or no(n) = ";
    x = getch();

    if(x == 'n' || x == 'N')
    {
        exit(0);
    }
}
while(x == 'y' || x == 'Y');

    getch();
}