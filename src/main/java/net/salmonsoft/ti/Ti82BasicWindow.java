package net.salmonsoft.ti;

import java.awt.event.ActionEvent;
import java.io.IOException;

import javax.swing.GroupLayout;
import javax.swing.GroupLayout.Alignment;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
import javax.swing.LayoutStyle.ComponentPlacement;
import javax.swing.SwingConstants;
import javax.swing.SwingUtilities;

@SuppressWarnings("serial")
class Ti82BasicWindow extends JFrame {

	private JTextField asciiFile = new JTextField();
	private JTextField compileFile = new JTextField();

	Ti82BasicWindow() {
		initUI();
	}

	private void compile(ActionEvent event) {
		try {
			var tokenizer = new Ti82BasicTokenizer();
			var program = tokenizer.readText(asciiFile.getText());
			tokenizer.writeTokenized(compileFile.getText(), program);
		} catch (IOException ex) {
			ex.printStackTrace();
			JOptionPane.showMessageDialog(this, ex.getLocalizedMessage(), "Error while compiling",
					JOptionPane.ERROR_MESSAGE);
		}
	}

	private void decompile(ActionEvent event) {
		JOptionPane.showMessageDialog(this, "This function is not implemented yet.", "Not Implemented",
				JOptionPane.ERROR_MESSAGE);
	}

	private void initUI() {
		setTitle("TI-82 Basic Utilities");
		setDefaultCloseOperation(DISPOSE_ON_CLOSE);

		var pane = getContentPane();
		var layout = new GroupLayout(pane);
		pane.setLayout(layout);
		layout.setAutoCreateContainerGaps(true);
		layout.setAutoCreateGaps(true);

		var desc = new JLabel("Convert between TI-82 tokenized programs (.82p files) and plain text representations.");
		var compileLabel = new JLabel("Tokenized file:");
		var asciiLabel = new JLabel("Text file:");
		var compileButton = new JButton("Compile");
		var decompileButton = new JButton("Decompile");

		layout.setHorizontalGroup(layout.createParallelGroup().addComponent(desc)
				.addGroup(layout.createSequentialGroup().addComponent(asciiLabel).addComponent(asciiFile))
				.addGroup(layout.createSequentialGroup().addComponent(compileLabel).addComponent(compileFile))
				.addGroup(Alignment.TRAILING,
						layout.createSequentialGroup().addComponent(compileButton).addComponent(decompileButton)));
		layout.setVerticalGroup(layout.createSequentialGroup().addComponent(desc)
				.addGroup(layout.createParallelGroup(Alignment.BASELINE).addComponent(asciiLabel).addComponent(
						asciiFile, GroupLayout.PREFERRED_SIZE, GroupLayout.PREFERRED_SIZE, GroupLayout.PREFERRED_SIZE))
				.addGroup(layout.createParallelGroup(Alignment.BASELINE).addComponent(compileLabel).addComponent(
						compileFile, GroupLayout.PREFERRED_SIZE, GroupLayout.PREFERRED_SIZE,
						GroupLayout.PREFERRED_SIZE))
				.addPreferredGap(ComponentPlacement.UNRELATED, GroupLayout.PREFERRED_SIZE, Integer.MAX_VALUE)
				.addGroup(layout.createParallelGroup().addComponent(compileButton).addComponent(decompileButton)));
		layout.linkSize(SwingConstants.HORIZONTAL, asciiLabel, compileLabel);

		compileButton.addActionListener(this::compile);
		decompileButton.addActionListener(this::decompile);

		pack();
		setMinimumSize(getSize());
	}

	public static void main(String[] args) {
		SwingUtilities.invokeLater(() -> {
			var window = new Ti82BasicWindow();
			window.setVisible(true);
		});
	}

}
