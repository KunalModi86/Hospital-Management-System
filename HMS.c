#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STAFF 100
#define MAX_DOCTORS 25
#define MAX_PATIENTS 100
#define MAX_MEDICINES 50
#define MAX_LABS 20
#define MAX_FACILITIES 10

#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"
#define BLUE    "\033[34m"
#define YELLOW  "\033[33m"
#define RED     "\033[31m"


// Define structures
typedef struct {
    char sid[10], sname[50], desg[20], sex[10];
    int salary;
} Staff;

typedef struct {
    char did[10], dname[50], specialist[30], work_time[20], doc_qual[30];
    int droom;
} Doctor;

typedef struct {
    char pid[10], pname[50], disease[50], admit_time[20], discharge_time[20];
    int room_no;
} Patient;

typedef struct {
    char mid[10], mname[50], mtype[20], exp_date[20];
    int price;
} Medicine;

typedef struct {
    char lid[10], lname[50], test_type[30], test_result[100];
    int price;
} Lab;


// Function prototypes
void add_staff(Staff *s, int *count);
void display_staff(Staff *s, int count);
void edit_staff(Staff *s, int count);
void delete_staff(Staff *s, int *count);
void search_staff(Staff *s, int count);

void add_doctor(Doctor *d, int *count);
void display_doctors(Doctor *d, int count);
void edit_doctor(Doctor *d, int count);
void delete_doctor(Doctor *d, int *count);
void search_doctor(Doctor *d, int count);

void add_patient(Patient *p, int *count);
void display_patients(Patient *p, int count);
void edit_patient(Patient *p, int count);
void delete_patient(Patient *p, int *count);
void search_patient(Patient *p, int count);

void add_medicine(Medicine *m, int *count);
void display_medicines(Medicine *m, int count);
void edit_medicine(Medicine *m, int count);
void delete_medicine(Medicine *m, int *count);
void search_medicine(Medicine *m, int count);

void add_lab(Lab *l, int *count);
void display_labs(Lab *l, int count);
void edit_lab(Lab *l, int count);
void delete_lab(Lab *l, int *count);
void search_lab(Lab *l, int count);


int main() {
    int choice, count_staff = 0, count_doctor = 0, count_patient = 0, count_medicine = 0, count_lab = 0;
    Staff staff[MAX_STAFF];
    Doctor doctors[MAX_DOCTORS];
    Patient patients[MAX_PATIENTS];
    Medicine medicines[MAX_MEDICINES];
    Lab labs[MAX_LABS];

    while (1) {
        printf("\n%s********** MODI-MEDICARE HOSPITAL MANAGEMENT SYSTEM **********%s\n", YELLOW, RESET);
        printf("\n%s********** MAIN MENU **********%s\n", CYAN, RESET);
        printf("1. Staff Section\n2. Doctor Section\n3. Patient Section\n4. Medicine Section\n5. Lab Section\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                int staff_choice;
                printf("\n%s** STAFF SECTION **%s\n", GREEN, RESET);
                printf("1. Add Staff\n2. Display Staff\n3. Edit Staff\n4. Delete Staff\n5. Search Staff\n");
                printf("Enter your choice: ");
                scanf("%d", &staff_choice);
                if (staff_choice == 1) add_staff(staff, &count_staff);
                else if (staff_choice == 2) display_staff(staff, count_staff);
                else if (staff_choice == 3) edit_staff(staff, count_staff);
                else if (staff_choice == 4) delete_staff(staff, &count_staff);
                else if (staff_choice == 5) search_staff(staff, count_staff);
                else printf("Invalid choice!\n");
                break;
            }
            case 2: {
                int doc_choice;
                printf("\n%s** DOCTOR SECTION **%s\n", GREEN, RESET);
                printf("1. Add Doctor\n2. Display Doctors\n3. Edit Doctor\n4. Delete Doctor\n5. Search Doctor\n");
                printf("Enter your choice: ");
                scanf("%d", &doc_choice);
                if (doc_choice == 1) add_doctor(doctors, &count_doctor);
                else if (doc_choice == 2) display_doctors(doctors, count_doctor);
                else if (doc_choice == 3) edit_doctor(doctors, count_doctor);
                else if (doc_choice == 4) delete_doctor(doctors, &count_doctor);
                else if (doc_choice == 5) search_doctor(doctors, count_doctor);
                else printf("Invalid choice!\n");
                break;
            }
            case 3: {
                int patient_choice;
                printf("\n%s** PATIENT SECTION **%s\n");
                printf("1. Add Patient\n2. Display Patients\n3. Edit Patient\n4. Delete Patient\n5. Search Patient\n", GREEN, RESET);
                printf("Enter your choice: ");
                scanf("%d", &patient_choice);
                if (patient_choice == 1) add_patient(patients, &count_patient);
                else if (patient_choice == 2) display_patients(patients, count_patient);
                else if (patient_choice == 3) edit_patient(patients, count_patient);
                else if (patient_choice == 4) delete_patient(patients, &count_patient);
                else if (patient_choice == 5) search_patient(patients, count_patient);
                else printf("Invalid choice!\n");
                break;
            }
            case 4: {
                int medicine_choice;
                printf("\n%s** MEDICINE SECTION **%s\n", GREEN, RESET);
                printf("1. Add Medicine\n2. Display Medicines\n3. Edit Medicine\n4. Delete Medicine\n5. Search Medicine\n");
                printf("Enter your choice: ");
                scanf("%d", &medicine_choice);
                if (medicine_choice == 1) add_medicine(medicines, &count_medicine);
                else if (medicine_choice == 2) display_medicines(medicines, count_medicine);
                else if (medicine_choice == 3) edit_medicine(medicines, count_medicine);
                else if (medicine_choice == 4) delete_medicine(medicines, &count_medicine);
                else if (medicine_choice == 5) search_medicine(medicines, count_medicine);
                else printf("Invalid choice!\n");
                break;
            }
            case 5: {
                int lab_choice;
                printf("\n%s** LAB SECTION **%s\n", GREEN, RESET);
                printf("1. Add Lab\n2. Display Labs\n3. Edit Lab\n4. Delete Lab\n5. Search Lab\n");
                printf("Enter your choice: ");
                scanf("%d", &lab_choice);
                if (lab_choice == 1) add_lab(labs, &count_lab);
                else if (lab_choice == 2) display_labs(labs, count_lab);
                else if (lab_choice == 3) edit_lab(labs, count_lab);
                else if (lab_choice == 4) delete_lab(labs, &count_lab);
                else if (lab_choice == 5) search_lab(labs, count_lab);
                else printf("Invalid choice!\n");
                break;
            }
            case 6:
                printf("Exiting Program...\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
                break;
        }
    }
    return 0;
}

void add_staff(Staff *s, int *count) {
    printf("Enter ID: ");
    scanf("%s", s[*count].sid);
    printf("Enter Name: ");
    scanf(" %[^\n]", s[*count].sname);
    printf("Enter Designation: ");
    scanf(" %[^\n]", s[*count].desg);
    printf("Enter Sex: ");
    scanf(" %[^\n]", s[*count].sex);
    printf("Enter Salary: ");
    scanf("%d", &s[*count].salary);
    (*count)++;
    printf("Staff added successfully.\n");
}

void display_staff(Staff *s, int count) {
    printf("\n%s+------------+----------------------+--------------------+----------+----------+%s\n", BLUE, RESET);
    printf("%s| ID         | Name                 | Designation        | Sex      | Salary   |%s\n", RESET);
    printf("%s+------------+----------------------+--------------------+----------+----------+%s\n", BLUE, RESET);
    for (int i = 0; i < count; i++) {
        printf("| %-10s | %-20s | %-18s | %-8s | %-8d |\n", s[i].sid, s[i].sname, s[i].desg, s[i].sex, s[i].salary);
    }
    printf("%s+------------+----------------------+--------------------+----------+----------+%s\n", BLUE, RESET);
}

void edit_staff(Staff *s, int count) {
    char id[10];
    printf("Enter Staff ID to edit: ");
    scanf("%s", id);
    for (int i = 0; i < count; i++) {
        if (strcmp(s[i].sid, id) == 0) {
            printf("Editing Staff with ID: %s\n", s[i].sid);
            printf("Enter new Name: ");
            scanf(" %[^\n]", s[i].sname);
            printf("Enter new Designation: ");
            scanf(" %[^\n]", s[i].desg);
            printf("Enter new Sex: ");
            scanf(" %[^\n]", s[i].sex);
            printf("Enter new Salary: ");
            scanf("%d", &s[i].salary);
            printf("Staff edited successfully.\n");
            return;
        }
    }
    printf("Staff with ID %s not found.\n", id);
}

void delete_staff(Staff *s, int *count) {
    char id[10];
    printf("Enter Staff ID to delete: ");
    scanf("%s", id);
    for (int i = 0; i < *count; i++) {
        if (strcmp(s[i].sid, id) == 0) {
            for (int j = i; j < *count - 1; j++) {
                s[j] = s[j + 1];
            }
            (*count)--;
            printf("Staff with ID %s deleted successfully.\n", id);
            return;
        }
    }
    printf("Staff with ID %s not found.\n", id);
}

void search_staff(Staff *s, int count) {
    char name[50];
    printf("Enter Staff Name to search: ");
    scanf(" %[^\n]", name);
    printf("\n%s+------------+----------------------+--------------------+----------+----------+%s\n", BLUE, RESET);
    printf("%s| ID         | Name                 | Designation        | Sex      | Salary   |%s\n", RESET);
    printf("%s+------------+----------------------+--------------------+----------+----------+%s\n", BLUE, RESET);
    for (int i = 0; i < count; i++) {
        if (strstr(s[i].sname, name) != NULL) {
            printf("| %-10s | %-20s | %-18s | %-8s | %-8d |\n", s[i].sid, s[i].sname, s[i].desg, s[i].sex, s[i].salary);
        }
    }
    printf("%s+------------+----------------------+--------------------+----------+----------+%s\n", BLUE, RESET);
}

void add_doctor(Doctor *d, int *count) {
    printf("Enter ID: ");
    scanf("%s", d[*count].did);
    printf("Enter Name: ");
    scanf(" %[^\n]", d[*count].dname);
    printf("Enter Specialization: ");
    scanf(" %[^\n]", d[*count].specialist);
    printf("Enter Work Time: ");
    scanf(" %[^\n]", d[*count].work_time);
    printf("Enter Qualification: ");
    scanf(" %[^\n]", d[*count].doc_qual);
    printf("Enter Room Number: ");
    scanf("%d", &d[*count].droom);
    (*count)++;
    printf("Doctor added successfully.\n");
}

void display_doctors(Doctor *d, int count) {
    printf("\n%s+------------+----------------------+--------------------+--------------------+----------------------+----------+%s\n", BLUE, RESET);
    printf("%s| ID         | Name                 | Specialization     | Work Time          | Qualification        | Room     |%s\n", RESET);
    printf("%s+------------+----------------------+--------------------+--------------------+----------------------+----------+%s\n", BLUE, RESET);
    for (int i = 0; i < count; i++) {
        printf("| %-10s | %-20s | %-18s | %-18s | %-20s | %-8d |\n", d[i].did, d[i].dname, d[i].specialist, d[i].work_time, d[i].doc_qual, d[i].droom);
    }
    printf("%s+------------+----------------------+--------------------+--------------------+----------------------+----------+%s\n", BLUE, RESET);
}

void edit_doctor(Doctor *d, int count) {
    char id[10];
    printf("Enter Doctor ID to edit: ");
    scanf("%s", id);
    for (int i = 0; i < count; i++) {
        if (strcmp(d[i].did, id) == 0) {
            printf("Editing Doctor with ID: %s\n", d[i].did);
            printf("Enter new Name: ");
            scanf(" %[^\n]", d[i].dname);
            printf("Enter new Specialization: ");
            scanf(" %[^\n]", d[i].specialist);
            printf("Enter new Work Time: ");
            scanf(" %[^\n]", d[i].work_time);
            printf("Enter new Qualification: ");
            scanf(" %[^\n]", d[i].doc_qual);
            printf("Enter new Room: ");
            scanf("%d", &d[i].droom);
            printf("Doctor edited successfully.\n");
            return;
        }
    }
    printf("Doctor with ID %s not found.\n", id);
}

void delete_doctor(Doctor *d, int *count) {
    char id[10];
    printf("Enter Doctor ID to delete: ");
    scanf("%s", id);
    for (int i = 0; i < *count; i++) {
        if (strcmp(d[i].did, id) == 0) {
            for (int j = i; j < *count - 1; j++) {
                d[j] = d[j + 1];
            }
            (*count)--;
            printf("Doctor with ID %s deleted successfully.\n", id);
            return;
        }
    }
    printf("Doctor with ID %s not found.\n", id);
}

void search_doctor(Doctor *d, int count) {
    char name[50];
    printf("Enter Doctor Name to search: ");
    scanf(" %[^\n]", name);
    printf("\n%s+------------+----------------------+--------------------+--------------------+----------------------+----------+%s\n", BLUE, RESET);
    printf("%s| ID         | Name                 | Specialization     | Work Time          | Qualification        | Room     |%s\n", RESET);
    printf("%s+------------+----------------------+--------------------+--------------------+----------------------+----------+%s\n", BLUE, RESET);
    for (int i = 0; i < count; i++) {
        if (strstr(d[i].dname, name) != NULL) {
            printf("| %-10s | %-20s | %-18s | %-18s | %-20s | %-8d |\n", d[i].did, d[i].dname, d[i].specialist, d[i].work_time, d[i].doc_qual, d[i].droom);
        }
    }
    printf("%s+------------+----------------------+--------------------+--------------------+----------------------+----------+%s\n", BLUE, RESET);
}

void add_patient(Patient *p, int *count) {
    printf("Enter ID: ");
    scanf("%s", p[*count].pid);
    printf("Enter Name: ");
    scanf(" %[^\n]", p[*count].pname);
    printf("Enter Disease: ");
    scanf(" %[^\n]", p[*count].disease);
    printf("Enter Admit Time: ");
    scanf(" %[^\n]", p[*count].admit_time);
    printf("Enter Discharge Time: ");
    scanf(" %[^\n]", p[*count].discharge_time);
    printf("Enter Room Number: ");
    scanf("%d", &p[*count].room_no);
    (*count)++;
    printf("Patient added successfully.\n");
}

void display_patients(Patient *p, int count) {
    printf("\n%s+------------+----------------------+--------------------+--------------------+--------------------+------------+%s\n", BLUE, RESET);
    printf("%s| ID         | Name                 | Disease            | Admit Time         | Discharge Time      | Room No    |%s\n", RESET);
    printf("%s+------------+----------------------+--------------------+--------------------+--------------------+------------+%s\n", BLUE, RESET);
    for (int i = 0; i < count; i++) {
        printf("| %-10s | %-20s | %-18s | %-18s | %-18s | %-10d |\n", p[i].pid, p[i].pname, p[i].disease, p[i].admit_time, p[i].discharge_time, p[i].room_no);
    }
    printf("%s+------------+----------------------+--------------------+--------------------+--------------------+------------+%s\n", BLUE, RESET);
}

void edit_patient(Patient *p, int count) {
    char id[10];
    printf("Enter Patient ID to edit: ");
    scanf("%s", id);
    for (int i = 0; i < count; i++) {
        if (strcmp(p[i].pid, id) == 0) {
            printf("Editing Patient with ID: %s\n", p[i].pid);
            printf("Enter new Name: ");
            scanf(" %[^\n]", p[i].pname);
            printf("Enter new Disease: ");
            scanf(" %[^\n]", p[i].disease);
            printf("Enter new Admit Time: ");
            scanf(" %[^\n]", p[i].admit_time);
            printf("Enter new Discharge Time: ");
            scanf(" %[^\n]", p[i].discharge_time);
            printf("Enter new Room No: ");
            scanf("%d", &p[i].room_no);
            printf("Patient edited successfully.\n");
            return;
        }
    }
    printf("Patient with ID %s not found.\n", id);
}

void delete_patient(Patient *p, int *count) {
    char id[10];
    printf("Enter Patient ID to delete: ");
    scanf("%s", id);
    for (int i = 0; i < *count; i++) {
        if (strcmp(p[i].pid, id) == 0) {
            for (int j = i; j < *count - 1; j++) {
                p[j] = p[j + 1];
            }
            (*count)--;
            printf("Patient with ID %s deleted successfully.\n", id);
            return;
        }
    }
    printf("Patient with ID %s not found.\n", id);
}

void search_patient(Patient *p, int count) {
    char name[50];
    printf("Enter Patient Name to search: ");
    scanf(" %[^\n]", name);
    printf("\n%s+------------+----------------------+--------------------+--------------------+--------------------+------------+%s\n", BLUE, RESET);
    printf("%s| ID         | Name                 | Disease            | Admit Time         | Discharge Time      | Room No    |%s\n", RESET);
    printf("%s+------------+----------------------+--------------------+--------------------+--------------------+------------+%s\n", BLUE, RESET);
    for (int i = 0; i < count; i++) {
        if (strstr(p[i].pname, name) != NULL) {
            printf("| %-10s | %-20s | %-18s | %-18s | %-18s | %-10d |\n", p[i].pid, p[i].pname, p[i].disease, p[i].admit_time, p[i].discharge_time, p[i].room_no);
        }
    }
    printf("+------------+----------------------+--------------------+--------------------+--------------------+------------+%s\n", BLUE, RESET);
}

void add_medicine(Medicine *m, int *count) {
    printf("Enter Medicine ID: ");
    scanf("%s", m[*count].mid);
    printf("Enter Medicine Name: ");
    scanf(" %[^\n]", m[*count].mname);
    printf("Enter Medicine Type: ");
    scanf(" %[^\n]", m[*count].mtype);
    printf("Enter Expiry Date: ");
    scanf(" %[^\n]", m[*count].exp_date);
    printf("Enter Price: ");
    scanf("%d", &m[*count].price);
    (*count)++;
    printf("Medicine added successfully.\n");
}

void display_medicines(Medicine *m, int count) {
    printf("\n%s+------------+----------------------+--------------------+--------------------+---------+%s\n", BLUE, RESET);
    printf("%s| ID         | Name                 | Type               | Expiry Date        | Price   |%s\n", RESET);
    printf("%s+------------+----------------------+--------------------+--------------------+---------+%s\n", BLUE, RESET);
    for (int i = 0; i < count; i++) {
        printf("| %-10s | %-20s | %-18s | %-18s | %-8d |\n", m[i].mid, m[i].mname, m[i].mtype, m[i].exp_date, m[i].price);
    }
    printf("%s+------------+----------------------+--------------------+--------------------+---------+%s\n", BLUE, RESET);
}

void edit_medicine(Medicine *m, int count) {
    char id[10];
    printf("Enter Medicine ID to edit: ");
    scanf("%s", id);
    for (int i = 0; i < count; i++) {
        if (strcmp(m[i].mid, id) == 0) {
            printf("Editing Medicine with ID: %s\n", m[i].mid);
            printf("Enter new Name: ");
            scanf(" %[^\n]", m[i].mname);
            printf("Enter new Type: ");
            scanf(" %[^\n]", m[i].mtype);
            printf("Enter new Expiry Date: ");
            scanf(" %[^\n]", m[i].exp_date);
            printf("Enter new Price: ");
            scanf("%d", &m[i].price);
            printf("Medicine edited successfully.\n");
            return;
        }
    }
    printf("Medicine with ID %s not found.\n", id);
}

void delete_medicine(Medicine *m, int *count) {
    char id[10];
    printf("Enter Medicine ID to delete: ");
    scanf("%s", id);
    for (int i = 0; i < *count; i++) {
        if (strcmp(m[i].mid, id) == 0) {
            for (int j = i; j < *count - 1; j++) {
                m[j] = m[j + 1];
            }
            (*count)--;
            printf("Medicine with ID %s deleted successfully.\n", id);
            return;
        }
    }
    printf("Medicine with ID %s not found.\n", id);
}

void search_medicine(Medicine *m, int count) {
    char name[50];
    printf("Enter Medicine Name to search: ");
    scanf(" %[^\n]", name);
    printf("\n%s+------------+----------------------+--------------------+--------------------+---------+%s\n", BLUE, RESET);
    printf("%s| ID         | Name                 | Type               | Expiry Date        | Price   |%s\n", RESET);
    printf("%s+------------+----------------------+--------------------+--------------------+---------+%s\n", BLUE, RESET);
    for (int i = 0; i < count; i++) {
        if (strstr(m[i].mname, name) != NULL) {
            printf("| %-10s | %-20s | %-18s | %-18s | %-8d |\n", m[i].mid, m[i].mname, m[i].mtype, m[i].exp_date, m[i].price);
        }
    }
    printf("%s+------------+----------------------+--------------------+--------------------+---------+%s\n", BLUE, RESET);
}

void add_lab(Lab *l, int *count) {
    printf("Enter Lab ID: ");
    scanf("%s", l[*count].lid);
    printf("Enter Lab Name: ");
    scanf(" %[^\n]", l[*count].lname);
    printf("Enter Test Type: ");
    scanf(" %[^\n]", l[*count].test_type);
    printf("Enter Test Result: ");
    scanf(" %[^\n]", l[*count].test_result);
    printf("Enter Price: ");
    scanf("%d", &l[*count].price);
    (*count)++;
    printf("Lab added successfully.\n");
}

void display_labs(Lab *l, int count) {
    printf("\n%s+------------+----------------------+--------------------+--------------------+---------+%s\n", BLUE, RESET);
    printf("%s| ID         | Name                 | Test Type          | Test Result        | Price   |%s\n", RESET);
    printf("%s+------------+----------------------+--------------------+--------------------+---------+%s\n", BLUE, RESET);
    for (int i = 0; i < count; i++) {
        printf("| %-10s | %-20s | %-18s | %-18s | %-8d |\n", l[i].lid, l[i].lname, l[i].test_type, l[i].test_result, l[i].price);
    }
    printf("%s+------------+----------------------+--------------------+--------------------+---------+%s\n", BLUE, RESET);
}

void edit_lab(Lab *l, int count) {
    char id[10];
    printf("Enter Lab ID to edit: ");
    scanf("%s", id);
    for (int i = 0; i < count; i++) {
        if (strcmp(l[i].lid, id) == 0) {
            printf("Editing Lab with ID: %s\n", l[i].lid);
            printf("Enter new Name: ");
            scanf(" %[^\n]", l[i].lname);
            printf("Enter new Test Type: ");
            scanf(" %[^\n]", l[i].test_type);
            printf("Enter new Test Result: ");
            scanf(" %[^\n]", l[i].test_result);
            printf("Enter new Price: ");
            scanf("%d", &l[i].price);
            printf("Lab edited successfully.\n");
            return;
        }
    }
    printf("Lab with ID %s not found.\n", id);
}

void delete_lab(Lab *l, int *count) {
    char id[10];
    printf("Enter Lab ID to delete: ");
    scanf("%s", id);
    for (int i = 0; i < *count; i++) {
        if (strcmp(l[i].lid, id) == 0) {
            for (int j = i; j < *count - 1; j++) {
                l[j] = l[j + 1];
            }
            (*count)--;
            printf("Lab with ID %s deleted successfully.\n", id);
            return;
        }
    }
    printf("Lab with ID %s not found.\n", id);
}

void search_lab(Lab *l, int count) {
    char name[50];
    printf("Enter Lab Name to search: ");
    scanf(" %[^\n]", name);
    printf("\n%s+------------+----------------------+--------------------+--------------------+---------+%s\n", BLUE, RESET);
    printf("%s| ID         | Name                 | Test Type          | Test Result        | Price   |%s\n", RESET);
    printf("%s+------------+----------------------+--------------------+--------------------+---------+%s\n", BLUE, RESET);
    for (int i = 0; i < count; i++) {
        if (strstr(l[i].lname, name) != NULL) {
            printf("| %-10s | %-20s | %-18s | %-18s | %-8d |\n", l[i].lid, l[i].lname, l[i].test_type, l[i].test_result, l[i].price);
        }
    }
    printf("%s+------------+----------------------+--------------------+--------------------+---------+%s\n", BLUE, RESET);
}
