

 class employee{

	//instance variables
		int empId;
		String empName;
		String empDesignation;
		Double empSalary;

		//constructor
		employee(){

		}

		employee(int empId , String empName , String empDesignation , Double empSalary){
			this.empId = empId;
			this.empName = empName;
			this.empDesignation = empDesignation ;
			this.empSalary = empSalary;

		}

		//method for displaying employee details

		public void employeedetails(){
			System.out.println("Employee ID:"+empId);
			System.out.println("Employee Name:"+empName);
			System.out.println("Employee Designation:"+empDesignation);
			System.out.println("Employee salaray:"+empSalary);
		}

        //search employee by ID
		public boolean searchbyempId(int empId){

			if(this.empId == empId)
			return true ;

		    return false ;
		}


		public double salaryincrement(Double percentage){

			return (this.empSalary*1.1);

		}

	}
