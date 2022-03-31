public class Sponsored extends Student{
	public double calculateFees() {
		double Total_fees;
		Total_fees = super.getBasic_fees();
		if(getStatus().equals("Freshman")) {
			Total_fees+=getOther_fees();
		}else if(getStatus().equals("Sophomore")) {
			Total_fees+=2*getOther_fees();
		}else if(getStatus().equals("Junior")) {
			Total_fees+=3*getOther_fees();
		}else {
			Total_fees+=4*getOther_fees();
		}
		return Total_fees;
	}
	public Sponsored() {
		super();
	}
	public Sponsored(String name, String address, String emailID, String phoneNo, double basic_fees, double other_fees,
			String status) {
		super(name, address, emailID, phoneNo, basic_fees, other_fees, status);
	}
}
