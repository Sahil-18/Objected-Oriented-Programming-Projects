public class Faculty extends Employee{
	public double calculateIncrement(){
		 return 1.25*super.getSalary();
	}
	public int calculatePromotedLevel() {
		if(super.getWorking_hours()>=1000) {
			super.setLevel(super.getLevel()+1);
		}
		return super.getLevel();
	}
	public Faculty() {
		super();
	}
	public Faculty(String name, String address, String emailID, String phoneNo, double salary, int level, int working_hours) {
		super(name, address, emailID, phoneNo, salary, level, working_hours);
	}
}
