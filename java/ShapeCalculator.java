import java.util.Scanner;

class ShapeCalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Choose a shape:");
        System.out.println("1. Circle");
        System.out.println("2. Rectangle");
        System.out.println("3. Square");
        System.out.print("Enter choice (1-3): ");
        int choice = sc.nextInt();

        switch (choice) {
            case 1: // Circle
                System.out.print("Enter radius: ");
                double radius = sc.nextDouble();
                double circleArea = Math.PI * radius * radius;
                double circlePerimeter = 2 * Math.PI * radius;
                System.out.println("Circle Area: " + circleArea);
                System.out.println("Circle Perimeter: " + circlePerimeter);
                break;

            case 2: // Rectangle
                System.out.print("Enter length: ");
                double length = sc.nextDouble();
                System.out.print("Enter width: ");
                double width = sc.nextDouble();
                double rectangleArea = length * width;
                double rectanglePerimeter = 2 * (length + width);
                System.out.println("Rectangle Area: " + rectangleArea);
                System.out.println("Rectangle Perimeter: " + rectanglePerimeter);
                break;

            case 3: // Square
                System.out.print("Enter side: ");
                double side = sc.nextDouble();
                double squareArea = side * side;
                double squarePerimeter = 4 * side;
                System.out.println("Square Area: " + squareArea);
                System.out.println("Square Perimeter: " + squarePerimeter);
                break;

            default:
                System.out.println("Invalid choice!");
        }

        sc.close();
    }
}

