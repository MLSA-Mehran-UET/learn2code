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
public static int BinaryConverter(int Input){
            if (Input == 0)  
            return 0;  
              
        else
          
        return (Input % 2 + 10 *  
               BinaryConverter(Input / 2));
    }
       public static void main(String[] args) {
           Scanner s=new Scanner(System.in);
           System.out.println("Enter a decimal number ");
            int DecimalNumber=s.nextInt();
            System.out.println("Binary number is :"+BinaryConverter(DecimalNumber));
       
    }
    
}
