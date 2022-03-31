/* 
Name: Sahil Purohit
Enrollment Number: BT19CSE088
Assignment Number: 3
Question Number: 2
 */
import java.util.Scanner;

public class CIBIL extends Account{

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter the Account number");
		int account_no = sc.nextInt();
		System.out.println("Enter the account balance");
		int balance = sc.nextInt();
		System.out.println("Enter the available loan limit for account");
		int available_loan_limit=sc.nextInt();
		System.out.println("Enter the outstanding load limit for account");
		int outstanding_loan_amount = sc.nextInt();
		System.out.println("Enter the available no of credit application for account");
		int no_of_credit_application=sc.nextInt();
		System.out.println("Enter the available no of times credit application accepted for account");
		int no_of_times_accepted=sc.nextInt();
		int i,j;
		System.out.println("How many months of payment data you want to input");
		j=sc.nextInt();
		System.out.println("Enter the last five months amount paid");
		int[] amount_paid_monthly = new int[j];
		for(i=0;i<j;i++) {
			amount_paid_monthly[i] = sc.nextInt();
		}

		CIBIL Sahil = new CIBIL(account_no, balance, available_loan_limit, outstanding_loan_amount, no_of_credit_application,
				no_of_times_accepted, amount_paid_monthly);
		if(Sahil.isEligible()==true) {
			System.out.println("This Account with account number: "+Sahil.getAccount_no() +"is Eligible for with "
					+ "CIBIL Score: "+ Sahil.calculateCIBIL());
		}else {
			System.out.println("This Account with account number: "+Sahil.getAccount_no() +"is not Eligible for with "
					+ "CIBIL Score: "+ Sahil.calculateCIBIL());
		}
		
		sc.close();
	}
	public double calculateCIBIL() {
		double CIBIL=0.0;
		int i=0,j,size;
		size=getamount_paid_monthly().length;
		CIBIL=350*getOutstanding_loan_amount()/getAvailable_loan_limit();
		CIBIL=CIBIL+250*getNo_of_times_accepted()/getNo_of_credit_application();
		for(j=size-1;j<size-6;j--) {
			if(getAmount_paid_monthly(j)>0) {
				i++;
			}
		}
		CIBIL=CIBIL+400*i/5;
		return CIBIL;
	}
	public boolean isEligible() {
		boolean ret_val = false;
		if(calculateCIBIL()>=600) {
			ret_val = true;
		}
		return ret_val;
	}
	public CIBIL(int account_no, int balance, int available_loan_limit, int outstanding_loan_amount,
			int no_of_credit_application, int no_of_times_accepted, int[] amount_paid_monthly) {
		super(account_no, balance, available_loan_limit, outstanding_loan_amount, no_of_credit_application,
		 no_of_times_accepted, amount_paid_monthly);
	}
	public CIBIL() {
		super();
	}
}
