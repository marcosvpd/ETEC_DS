package view;

import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

public class PessoaFisica extends JFrame{
	JLabel lblNome = new JLabel("Nome: ");
	JTextField txtNome = new JTextField();
	
	JLabel lblCpf = new JLabel("CPF: ");
	JTextField txtCpf = new JTextField();
	
	JLabel lblEnd = new JLabel("Endereço: ");
	JTextField txtEnd = new JTextField();
	
	JLabel lblBai = new JLabel("Bairro: ");
	JTextField txtBai = new JTextField();
	
	JLabel lblTel = new JLabel("Telefone: ");
	JTextField txtTel = new JTextField();
	
	JButton btnCad = new JButton("Cadastrar");
	
	public PessoaFisica() {
		super("Tela de Cadastro - Pessoa Física");
		
		Container paine = this.getContentPane();
		paine.setLayout(null);
		
		lblNome.setBounds(20, 20, 80, 20);
		paine.add(lblNome);
		
		txtNome.setBounds(80, 20, 200, 20);
		paine.add(txtNome);
		
		lblCpf.setBounds(20, 50, 80, 20);
		paine.add(lblCpf);
		
		txtCpf.setBounds(80, 50, 200, 20);
		paine.add(txtCpf);
		
		lblEnd.setBounds(20, 80, 80, 20);
		paine.add(lblEnd);
		
		txtEnd.setBounds(80, 80, 200, 20);
		paine.add(txtEnd);
		
		lblBai.setBounds(20, 120, 100, 20);
		paine.add(lblBai);
		
		txtBai.setBounds(80, 120, 200, 20);
		paine.add(txtBai);
		
		lblTel.setBounds(20, 160, 200, 20);
		paine.add(lblTel);
		
		txtTel.setBounds(80, 160, 200, 20);
		paine.add(txtTel);
		
		
		btnCad.setBounds(50, 200, 200, 100);
		paine.add(btnCad);
		btnCad.addActionListener(new ActionListener() {
		
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				model.PessoaFisica pf = new model.PessoaFisica();
				pf.setNome(txtNome.getText());
				pf.setCpf(Double.parseDouble(txtCpf.getText()));
				pf.setEndereco(txtEnd.getText());
				pf.setBairro(txtBai.getText());
				pf.setTelefone(Double.parseDouble(txtTel.getText()));
				
				JOptionPane.showMessageDialog(null, "Nome: " + pf.getNome() + "\n Cpf: " + pf.getCpf() + "\n Endereço: " + pf.getEndereco() + "\n Bairro: " + pf.getBairro() + "\n Telefone: " + pf.getTelefone());
			}
		});
		
		this.setSize(400, 400);
		this.setResizable(false);
		this.setVisible(true);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}
