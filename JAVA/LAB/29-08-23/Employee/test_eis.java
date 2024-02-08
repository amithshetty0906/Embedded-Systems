import java.util.Scanner;


public class test_eis{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the number of employees");
		int size = sc.nextInt();

		employee[] emp = new employee[size];

		for(int i=0;i<size;i++) {
			System.out.println("Enter the Employee ID:");
			int empId = sc.nextInt();
		    System.out.println("Enter the Employee Name:");
		    String empName = sc.next();
		    System.out.println("Enter the Employee Designation:");
		    String empDesignation = sc.next();
		    System.out.println("Enter the Employee salaray:");
		    Double empSalary = sc.nextDouble();

		    emp[i] = new employee(empId, empName,empDesignation,empSalary);

		}

		for (int i=0;i<size;i++) {
			emp[i].employeedetails();

	    }

	    System.out.println("Enter the employee ID: ");
	    int id = sc.nextInt();


	    boolean foundIt = false;
	    for(int i=0;i<size;i++){
	    	if(emp[i].searchbyempId(id)){
	    		foundIt = true ;
	    		emp[i].employeedetails();
	    		break;
	    	}
	    }

	    if(!foundIt){
	    	System.out.println("details not found!!!");
	    }			
	}
}