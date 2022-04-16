package view;

import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

public class PessoaJuridica extends JFrame{
	public PessoaJuridica() {
		super("Tela de Cadastro - Pessoa Jurídica");
		JLabel lblRazao = new JLabel("Razao Social: ");
		JTextField txtRazao = new JTextField();
		
		JLabel lblCnpj = new JLabel("CNPJ: ");
		JTextField txtCnpj = new JTextField();
		
		JLabel lblNomef = new JLabel("Nome fantasia: ");
		JTextField txtNomef = new JTextField();
		
		JButton btnCad = new JButton("Cadastrar");
		
		JLabel lblEnd = new JLabel("Endereço: ");
		JTextField txtEnd = new JTextField();
		
		JLabel lblBai = new JLabel("Bairro: ");
		JTextField txtBai = new JTextField();
		
		JLabel lblTel = new JLabel("Telefone: ");
		JTextField txtTel = new JTextField();
		
		Container paine = this.getContentPane();
		paine.setLayout(null);
		
		lblRazao.setBounds(20, 20, 80, 20);
		paine.add(lblRazao);
		
		txtRazao.setBounds(100, 20, 200, 20);
		paine.add(txtRazao);
		
		lblCnpj.setBounds(20, 50, 80, 20);
		paine.add(lblCnpj);
		
		txtCnpj.setBounds(80, 50, 150, 20);
		paine.add(txtCnpj);
		
		lblNomef.setBounds(20, 80, 80, 20);
		paine.add(lblNomef);
		
		txtNomef.setBounds(120, 80, 150, 20);
		paine.add(txtNomef);
		
		lblEnd.setBounds(20, 110, 80, 20);
		paine.add(lblEnd);
		
		txtEnd.setBounds(80, 110, 200, 20);
		paine.add(txtEnd);
		
		lblBai.setBounds(20, 140, 100, 20);
		paine.add(lblBai);
		
		txtBai.setBounds(80, 140, 200, 20);
		paine.add(txtBai);
		
		lblTel.setBounds(20, 170, 200, 20);
		paine.add(lblTel);
		
		txtTel.setBounds(80, 170, 200, 20);
		paine.add(txtTel);
		
		
		
		btnCad.setBounds(50, 200, 200, 80);
		paine.add(btnCad);
		btnCad.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				model.PessoaJuridica pj = new model.PessoaJuridica();
				pj.setRazaoSocial(txtRazao.getText());
				pj.setCnpj(Double.parseDouble(txtCnpj.getText()));
				pj.setRazaoSocial(txtNomef.getText());
				pj.setEndereco(txtEnd.getText());
				pj.setBairro(txtBai.getText());
				pj.setTelefone(Double.parseDouble(txtTel.getText()));
				
				JOptionPane.showMessageDialog(null,"Nome Fantasia: " + pj.getRazaoSocial() + "\n Nome: " + pj.getRazaoSocial() + "\n Cpf: " + pj.getCnpj() + "\n Endereço: " + pj.getEndereco() + "\n Bairro: " + pj.getBairro() + "\n Telefone: " + pj.getTelefone());
			}
		});
		
		this.setSize(400, 400);
		this.setResizable(false);
		this.setVisible(true);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}
