#include <iostream>
using namespace std;

//masuk ke pasien
class personType
{
    private:
        string firstName;
        string lastName;
    
    public:
        void print();
        void setName (string first, string last);
        string getFirstName () const;
        string getLastName() const;
        personType (string first = "", string last = ""); //constructor

};

void personType :: print()
{
    cout << " Name: " << firstName << " " << lastName;
}
void personType :: setName (string first, string last)
{
    firstName = first;
    lastName = last;
}
string personType :: getFirstName() const
{
    return firstName;
}
string personType :: getLastName() const
{
    return lastName;
} 
personType :: personType (string first, string last)
{
    firstName = first;
    lastName = last;
}

//class billtype
class billType
{
    private:
        int patientID;
        double chargeMedicine;
        double doctorFee;
        double chargeRoom;
        double totalCharge;
    public:
        void setPatientID(int);
        void setChargeMedicine(double);
        void setDoctorFee(double);
        void setChargeRoom(double);
        int getPatientID ();
        double getChargeMedicine();
        double getDoctorFee();
        double getChargeRoom();
        consBillType(int, double, double, double);
        void print();

};

void billType :: setPatientID(int id)
{
    patientID = id;
}
void billType :: setChargeMedicine(double med)
{
    chargeMedicine = med;
}
void billType :: setDoctorFee(double fee)
{
    doctorFee = fee;
} 
void billType :: setChargeRoom(double room)
{
    chargeRoom = room;
}
int billType :: getPatientID()
{
    return patientID;
}
double billType :: getChargeMedicine()
{
    return chargeMedicine;
}
double billType :: getDoctorFee()
{
    return doctorFee;
}
double billType :: getChargeRoom()
{
    return chargeRoom;
}
billType ::consBillType (int id, double med, double fee, double room)
{
    patientID = id;
    chargeMedicine = med;
    doctorFee = fee;
    chargeRoom = room; 
}
void billType :: print()
{
    cout << " Medicine Cost: " << chargeMedicine << endl;
    cout << " Room Charges: " << chargeRoom << endl;
    cout << " Doctor Fee: " << doctorFee<< endl;
}

class dateType
{
    private:
    string dateBirth;
    string admittedDate;
    string dischargedDate;

    public:
    void setDate(string);
    string getDate();
    void setAdmittedDate(string);
    string getAdmittedDate();
    void setDischargedDate(string);
    string getDischargedDate();
    void printDate();
    consDateType(string, string, string);
};

void dateType :: setDate(string hbd)
{
    dateBirth = hbd;
}
string dateType :: getDate()
{
    return dateBirth;
}
void dateType :: setAdmittedDate(string adDate)
{
   this-> admittedDate = adDate;
}
string dateType :: getAdmittedDate()
{
    return admittedDate;
}
void dateType :: setDischargedDate(string diDate)
{
   dischargedDate = diDate;
}
string dateType:: getDischargedDate()
{
    return dischargedDate;
}
void dateType :: printDate()
{
    cout << " Date of Birth : " << dateBirth << endl;
    cout << " Admitted Date : " << admittedDate << endl;
    cout << " Discharged Date : " << dischargedDate << endl;
}
dateType :: consDateType (string hbd, string masuk, string out)
{
    dateBirth = hbd;
    admittedDate = masuk;
    dischargedDate = out;
}

//class doctortype
class doctorType : public personType
{
    private:
        string doctorSpeciality;
        string doctorName;
    public:
        void setDoctorSpeciality(string);
        string getDoctorSpeciality();
        void setDoctorName(string);
        string getDoctorName();
        consdoctorType(string, string); //contructor
        void print();
};

void doctorType :: setDoctorSpeciality(string spc)
{
    doctorSpeciality = spc;
}
string doctorType :: getDoctorSpeciality()
{
    return doctorSpeciality;
}
void doctorType :: setDoctorName(string name)
{
    doctorName = name;
}
string doctorType :: getDoctorName()
{
    return doctorName;
}
doctorType :: consdoctorType (string name, string spc)
{
    doctorSpeciality = spc;
    doctorName = name;
}
void doctorType :: print()
{
    cout << " Dr. Name: " << doctorName << endl;
    cout << " Speciality: " << doctorSpeciality;
}





//class patientType
class patientType : public personType
{
    private:
        int patientID;
        int age;
        dateType bDay;
        dateType inDate;
        dateType outDate;
        doctorType dcName;
        
    public:
        void setbDay(string);
        void setinDate(string);
        void setoutDate(string);
        void setAge(int);
        void setID(int);
        void setdcName(string);
        void print();
};

void patientType :: setbDay(string a)
{
    bDay.setDate(a);
}
void patientType :: setinDate(string b)
{
    bDay.setAdmittedDate(b);
}
void patientType :: setoutDate(string c)
{
    bDay.setDischargedDate(c);
}
void patientType :: setdcName(string d)
{
    dcName.setDoctorName(d);
}
void patientType :: setAge(int e)
{
    age = e;
}
void patientType :: setID(int f)
{
    patientID = f;
}
void patientType :: print()
{
    cout << " Patient ID: " << patientID << endl;
    cout << " Patient age: " << age << endl << endl;
    cout << "More Details : " << endl;
    bDay.printDate();
    cout << " Doctor Name: " << dcName.getDoctorName() << endl;
}

int main()
{
    personType p1;
    billType b1;
    doctorType dt1;
    patientType pt1;
    p1.setName("Luthfi", "Hakim");
    b1.setPatientID(545668);
    b1.setDoctorFee(100000);
    b1.setChargeRoom(150000);
    b1.setChargeMedicine(250000);
    dt1.consdoctorType("Dr. Octopus Hurt", "Dermatologists");
    pt1.setbDay("12-05-2003");
    pt1.setdcName("Dr.Octopus Hurt");
    pt1.setinDate("20-11-2022");
    pt1.setoutDate("22-11-2022");
    pt1.setAge(18);
    pt1.setID(545668);
    
    cout <<"\n";
    

    //print output
    cout << "Doctor Details : " << endl;
        dt1.print();
        cout << "\n\n";
    cout << "Patien Details : " << endl;
        p1.print();
        cout << "\n";
        pt1.print();
        cout <<"\n";
    cout << "Billing Details : " << endl;
        b1.print();
        cout << " Total bill: " << b1.getChargeMedicine() + b1.getChargeRoom() + b1.getDoctorFee();
}