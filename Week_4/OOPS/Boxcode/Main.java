package Week_4.OOPS.Boxcode;
public class Main {
    public static void main(String[] args) {
        Box b = new Box(10, 5);
        System.out.println("Area = " + b.area() );

        Box3D b3 = new Box3D(10, 5, 3);
        System.out.println("Area = " + b.area());
        System.err.println("Volume=" + b3.volume() );
    }
}
