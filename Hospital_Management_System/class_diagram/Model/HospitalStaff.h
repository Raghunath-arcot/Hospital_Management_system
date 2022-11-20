/**
 * Project Untitled
 */


#ifndef _HOSPITALSTAFF_H
#define _HOSPITALSTAFF_H

class HospitalStaff {
public: 
    string FullName;
    
void Getinfo();
    
void ChangeNumberOfPatients();
    
/**
 * @param Patient
 */
void AddNewPatient(void Patient);
    
void GetAllPatients();
    
void Operation1();
private: 
    void staffId;
    int numberOfPatients;
    List<Patient> listOfPatients;
};

#endif //_HOSPITALSTAFF_H