public abstract class Employee extends Person{
	private double Salary;
	private int level;
	private int working_hours;
	public double getSalary() {
		return Salary;
	}
	public void setSalary(double salary) {
		Salary = salary;
	}
	public int getLevel() {
		return level;
	}
	public void setLevel(int level) {
		this.level = level;
	}
	public int getWorking_hours() {
		return working_hours;
	}
	public void setWorking_hours(int working_hours) {
		this.working_hours = working_hours;
	}
	public abstract double calculateIncrement();
	public abstract int calculatePromotedLevel();
	public Employee(String name, String address, String emailID, String phoneNo, double salary, int level, int working_hours) {
		super(name, address, emailID, phoneNo);
		this.Salary = salary;
		this.level = level;
		this.working_hours = working_hours;
	}
	public Employee() {
		super();
		this.Salary=0;
		this.level=0;
		this.working_hours=0;
	}
	
}
