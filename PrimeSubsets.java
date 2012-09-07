public class PrimeSubsets {
	public static void main(String[] args) {
		findPrimeSubsets();
	}
	
	public static void findPrimeSubsets() {
		int N = 100;
		int sum = (N * (N+1))/2;
		
		boolean [][] matrix = new boolean[N+1][sum+1];
		
		for (int i=0; i<=N; i++) {
			matrix[i][0] = true;
		}
		
		for (int j=1; j<=sum; j++) {
			matrix[0][j] = false;
		}
		
		for (int i=1; i<=N; i++) {
			for (int j=1; j<=sum; j++) {
				matrix[i][j] = matrix[i-1][j] || ((i<=j) && (matrix[i-1][j-i]));
			}
		}
		
		//int s = 299;
		for (int n=1; n<=sum; n++) {
		int k = 0;
		int s = n;
		for (int i=N; i>=1; i--) {
			if (!matrix[i-1][s]) {
				System.out.print(i + " ");
				k = k + i;
				s = s - i;
			}
		}
		System.out.println();
		System.out.println("K:" + k);
		}
		
		
//		for (int i=1; i<=sum; i++) {
//			System.out.println(i + ":" + matrix[N][i]);
//		}
	}
}
