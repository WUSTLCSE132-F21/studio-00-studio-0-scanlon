
public class Heartbeat {
	
	public static void main(String[] args) {
		
		long time = 0;
		
		while (true) {
		
			try {
				
				Thread.sleep(1000);
				time += 1;
				System.out.println(time + " sec have elapsed");
				
			}
			
			catch(Exception e){
				
				e.printStackTrace();
			}
		}
	}
}

//test comment