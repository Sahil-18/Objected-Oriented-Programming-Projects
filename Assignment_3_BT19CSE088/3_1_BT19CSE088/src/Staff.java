public class Staff extends Employee{
	public double calculateIncrement(){
		 return 1.10*super.getSalary();
	}
	public int calculatePromotedLevel() {
		if(super.getWorking_hours()>=500) {
			super.setLevel(super.getLevel()+1);
		}
		return super.getLevel();
	}
	public Staff() {
		super();
	}
	public Staff(String name, String address, String emailID, String phoneNo, double salary, int level, int working_hours) {
		super(name, address, emailID, phoneNo, salary, level, working_hours);
	}
}
