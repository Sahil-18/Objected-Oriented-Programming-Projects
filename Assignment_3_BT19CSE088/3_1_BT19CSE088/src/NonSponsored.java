public class NonSponsored extends Student{
	public double calculateFees() {
		double Total_fees;
		Total_fees = getBasic_fees() + getOther_fees();
		return Total_fees;
	}
	public NonSponsored() {
		super();
	}
	public NonSponsored(String name, String address, String emailID, String phoneNo, double basic_fees, double other_fees,
			String status) {
		super(name, address, emailID, phoneNo, basic_fees, other_fees, status);
	}
}
