import java.util.Random;
import java.awt.Dimension;
import java.awt.Toolkit;
import java.awt.Robot;


public class MouseMover{

	public static void main(String[] args){
		try{
		Robot robot = new Robot();
		Random random = new Random();
		Dimension dims = Toolkit.getDefaultToolkit().getScreenSize();
		
		while(true){
			robot.mouseMove( random.nextInt( (int)(dims.width) ), random.nextInt( (int)(dims.height) ) );
	//		Thread.sleep(500);
		}
		
		}catch(Exception e){}
	}

}
			
