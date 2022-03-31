/* 
Name: Sahil Purohit
Enrollment Number: BT19CSE088
Assignment Number: 3
Question Number: 2
*/
import java.util.Scanner;
public class Data {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		System.out.println("Input name, address, emailID and Phone number of Person");
		String name = sc.nextLine();
		String address = sc.nextLine();
		String emailID = sc.nextLine();
		String PhoneNo =sc.nextLine();
		
		System.out.println("Input status, basic fees and other fees of student");
		String status = sc.nextLine();
		double basic_fees = sc.nextDouble();
		double other_fees = sc.nextDouble();
		if(status.equals("Freshman") || status.equals("Sophomore") || status.equals("Junior") || status.equals("Senior"));
		else{
			status="Freshman";
		}
		
		Sponsored Stud1 = new Sponsored(name, address, emailID, PhoneNo, basic_fees, other_fees, status);
		System.out.println("The total fee of Sponsored student "+ Stud1.getName() + " has to pay total fee of " 
				+Stud1.calculateFees());
		
		NonSponsored Stud2 = new NonSponsored(name, address, emailID, PhoneNo, basic_fees, other_fees, status);
		System.out.println("The total fee of NonSponsed student "+ Stud2.getName() + " has to pay total fee of " 
				+Stud2.calculateFees());
		
		System.out.println("Input name, address, emailID and Phone number of Person");
		String name1 = sc.nextLine();
		String address1 = sc.nextLine();
		String emailID1 = sc.nextLine();
		String PhoneNo1 = sc.nextLine();
		
		System.out.println("Input salary, level, working hours of Employee");
		double salary = sc.nextDouble();
		int level = sc.nextInt();
		int working_hours = sc.nextInt();
		
		
		Faculty Emp1 = new Faculty(name1, address1, emailID1, PhoneNo1, salary, level, working_hours);
		System.out.println("The increment of Faculty "+ Emp1.getName() + " is " + Emp1.calculateIncrement() +
				 " new level is "+ Emp1.calculatePromotedLevel());
		
		Staff Emp2 = new Staff(name1, address1, emailID1, PhoneNo1, salary, level, working_hours);
		System.out.println("The increment of Staff "+ Emp2.getName() + " is " + Emp2.calculateIncrement() +
				 " new level is "+ Emp2.calculatePromotedLevel());
		
		sc.close();
	}

}
