public class Person {
	private String name;
	private String address;
	private String emailID;
	private String phoneNo;
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getAddress() {
		return address;
	}
	public void setAddress(String address) {
		this.address = address;
	}
	public String getEmailID() {
		return emailID;
	}
	public void setEmailID(String emailID) {
		this.emailID = emailID;
	}
	public String getPhoneNo() {
		return phoneNo;
	}
	public void setPhoneNo(String phoneNo) {
		this.phoneNo = phoneNo;
	}
	public Person(String name, String address, String emailID, String phoneNo) {
		super();
		this.name = name;
		this.address = address;
		this.emailID = emailID;
		this.phoneNo = phoneNo;
	}
	public Person() {
		super();
		this.name = "empty";
		this.address = "empty";
		this.emailID = "empty";
		this.phoneNo = "empty";
	}
}
