public class Account {
	private int Account_no;
	private int balance;
	private int available_loan_limit;
	private int outstanding_loan_amount;
	private int no_of_credit_application;
	private int no_of_times_accepted;
	private int[] amount_paid_monthly;
	public int getAccount_no() {
		return Account_no;
	}
	public void setAccount_no(int account_no) {
		Account_no = account_no;
	}
	public int getBalance() {
		return balance;
	}
	public void setBalance(int balance) {
		this.balance = balance;
	}
	public int getAvailable_loan_limit() {
		return available_loan_limit;
	}
	public void setAvailable_loan_limit(int available_loan_limit) {
		this.available_loan_limit = available_loan_limit;
	}
	public int getOutstanding_loan_amount() {
		return outstanding_loan_amount;
	}
	public void setOutstanding_loan_amount(int outstanding_loan_amount) {
		this.outstanding_loan_amount = outstanding_loan_amount;
	}
	public int getNo_of_credit_application() {
		return no_of_credit_application;
	}
	public void setNo_of_credit_application(int no_of_credit_application) {
		this.no_of_credit_application = no_of_credit_application;
	}
	public int getNo_of_times_accepted() {
		return no_of_times_accepted;
	}
	public void setNo_of_times_accepted(int no_of_times_accepted) {
		this.no_of_times_accepted = no_of_times_accepted;
	}
	public int[] getamount_paid_monthly(){
		return amount_paid_monthly;
	}
	public int getAmount_paid_monthly(int i) {
		return amount_paid_monthly[i];
	}
	public void setAmount_paid_monthly(int amount_paid_monthly,int i) {
		this.amount_paid_monthly[i] = amount_paid_monthly;
	}
	public Account(int account_no, int balance, int available_loan_limit, int outstanding_loan_amount,
			int no_of_credit_application, int no_of_times_accepted, int[] amount_paid_monthly) {
		super();
		this.Account_no = account_no;
		this.balance = balance;
		this.available_loan_limit = available_loan_limit;
		this.outstanding_loan_amount = outstanding_loan_amount;
		this.no_of_credit_application = no_of_credit_application;
		this.no_of_times_accepted = no_of_times_accepted;
		this.amount_paid_monthly =new int[(amount_paid_monthly).length];
		this.amount_paid_monthly = amount_paid_monthly;
	}
	public Account() {
		super();
		this.Account_no = 0;
		this.balance = 0;
		this.available_loan_limit = 0;
		this.outstanding_loan_amount = 0;
		this.no_of_credit_application = 0;
		this.no_of_times_accepted = 0;
		int i;
		for(i=0;i<5;i++) {
			this.amount_paid_monthly[i]=0;
		}
	}
}
