/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fpgaprogrammerclient;

import javax.swing.UIManager;
import ui.MainFrame;

/**
 *
 * @author Saleh
 */
public class FPGAProgrammerClient {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        try {
            UIManager.setLookAndFeel("com.seaglasslookandfeel.SeaGlassLookAndFeel");
        } catch (Exception e) {
            e.printStackTrace();
        }
        MainFrame m = new MainFrame();
        m.setVisible(true);
    }
}
