public class Box3D extends Box{

    double height;

    Box3D(double length,double breadth,double height){
        super(length,breadth);
        this.height=height;
    }

    double volume(){
        return length*breadth*height;
    }

    public static void main(String[] args){

        Box3D b=new Box3D(5,4,3);

        System.out.println("Area = "+b.area());
        System.out.println("Volume = "+b.volume());
    }
}