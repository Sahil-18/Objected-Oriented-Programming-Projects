public abstract class Student extends Person {
	private double basic_fees;
	private double other_fees;
	private String status;
	public double getBasic_fees() {
		return basic_fees;
	}
	public void setBasic_fees(double basic_fees) {
		this.basic_fees = basic_fees;
	}
	public double getOther_fees() {
		return other_fees;
	}
	public void setOther_fees(double other_fees) {
		this.other_fees = other_fees;
	}
	public abstract double calculateFees();
	public Student(String name, String address, String emailID, String phoneNo, double basic_fees, double other_fees,
			String status) {
		super(name, address, emailID, phoneNo);
		this.basic_fees = basic_fees;
		this.other_fees = other_fees;
		this.setStatus(status);
	}
	public Student() {
		super();
		this.basic_fees=0;
		this.other_fees=0;
		this.setStatus("Freshman");
	}
	public String getStatus() {
		return status;
	}
	public void setStatus(String status) {
		this.status = status;
	}
}
