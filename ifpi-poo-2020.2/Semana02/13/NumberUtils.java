import java.util.*;

public class NumberUtils {
	int n;

	public boolean isPair() {
		if (this.n % 2 == 0) {
			return true;
		} else {
			return false;
		}
	}

	public boolean isOdd() {
		if (this.n % 2 != 0) {
			return true;	
		} else {
			return false;
		}
	}

	public boolean isPrime() {
        for (int i = 2; i < this.n; i++) {
            if (this.n % i == 0) {
                return false;
            }
        }
        return true;
    }

	public void printCount() {
		for (int i = 0; i <= this.n; i++) {
			System.out.format(i + " ");
		}
	}

	public void printReverseCount() {
		for (int j = this.n; j >= 0; j--) {
			System.out.format(j + " ");
		}
	}
}