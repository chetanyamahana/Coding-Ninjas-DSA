public class fudd{
     public static void returnelement(int array[]){
        for(int i=0;i<= array.length;i++)
        {
            if(array[i]>array[i+1]){
                int temp=array[i];
                array[i+1]=array[i];
                temp=array[i];
            }

        }

    }
    public static void main(String[] args){
        int array[]={10,20,30,89,45};
        
        int a = 10;
        int b = 20;
        System.out.println("Sum is "+(a+b));
    }
}