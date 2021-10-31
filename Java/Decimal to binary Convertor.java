/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package binaryconvet;

import java.util.Scanner;

/**
 *
 * @author lenovo
 */
public class BinaryConvet {
// BINARY CONVERTER FUNCTION BELOW:            
public static int BinaryConverter(int Input){
           //CHECHING IF NUMBER IS ZERO
            if (Input == 0)  
            return 0;  
              
        else
          //FROMULA OF CONERTING TO BINARY
        return (Input % 2 + 10 *  BinaryConverter(Input / 2));
    }
       public static void main(String[] args) {
          //CREATING SCANNER CLASS OBJECT TO TAKE INPUT
           Scanner s=new Scanner(System.in);
           System.out.println("Enter a decimal number ");
            //DECIMAL VARIABLE FRO DECIMAL NUMBER
            int DecimalNumber=s.nextInt();
            //PRINTING AND PASSING ARGUMENTS TO BINARYCONVERTER FUNCTION
            System.out.println("Binary number is :"+BinaryConverter(DecimalNumber));
       
    }
    
}
