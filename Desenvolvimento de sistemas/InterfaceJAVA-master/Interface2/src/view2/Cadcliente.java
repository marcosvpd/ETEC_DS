package view2;

import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class Cadcliente extends JFrame {
	JLabel lblnome = new JLabel ("Nome: ");
	JTextField txtnome = new JTextField();
	JButton btn  = new JButton("Cadastrar");
	public Cadcliente () {
		super("Tela com o cadastro do cliente");
		
		Container paine = this.getContentPane();
		
		lblnome.setBounds(20, 20, 100, 30);
		paine.add(lblnome);
		
		txtnome.setBounds(140, 20, 100, 30);
		paine.add(txtnome);
		
		btn.setBounds(140, 50, 100, 50);
		paine.add(btn);
		
		btn.addActionListener (new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				System.out.println("Nome: " + txtnome.getText());
			}
		});
	
		this.setLayout(null);
		this.setSize(400,400);
		this.setResizable(false);
		this.setVisible(true);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		}
	public static void main (String args[]) {
			Cadcliente tela = new Cadcliente();
	}
}
