/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Javanode;

/**
 *
 * @author DianaAlessa
 */
public class Javanode {
        int cargo; 
    Javanode next; 
   
    public Javanode () { 
        cargo = 0; 
        next = null; 
    } 
        
    public Javanode (int cargo, Javanode next) { 
        this.cargo = cargo; 
        this.next = next; 
    } 
    
        @Override
    public String toString () { 
        return cargo + ""; 
    }
    
        public static void main(String[] args) {
        Javanode node = new Javanode (1, null); 
        System.out.println (node); 
        }
}
    