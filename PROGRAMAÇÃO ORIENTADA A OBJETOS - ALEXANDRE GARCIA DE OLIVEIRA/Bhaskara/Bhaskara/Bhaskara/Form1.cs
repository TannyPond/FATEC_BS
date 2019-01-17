using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Bhaskara
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnCalcular_Click(object sender, EventArgs e)
        {
            //Criar as variáveis
            double a = 0, b = 0, c = 0, delta =0;
            try
            {
                //Converte e guarda o texto dos TextBoxes em doubles
                a = double.Parse(tbA.Text);
                b = double.Parse(tbB.Text);
                c = double.Parse(tbC.Text);
            }
            catch (Exception)
            {
                MessageBox.Show("Digite os 3 valores.");
            }
            //Se 'a' for zero então não é equação de segundo grau
            if (a != 0)
            {
                //Calcula o delta
                delta = Math.Pow(b, 2) - (4 * a * c);
                if (delta >= 0)
                {
                    tbR1.Text = ((-b + Math.Sqrt(delta)) / (2 * a)).ToString();
                    tbR2.Text = ((-b - Math.Sqrt(delta)) / (2 * a)).ToString();
                }
                else
                {
                    MessageBox.Show("Delta não pode ser negativo. \n Δ = " + delta, "Erro", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
                }
            }
            else
            {
                MessageBox.Show("\"a\" não pode ser 0");
            }
        }

        //É possível fazer um único método para centralizar as validações abaixo
        private void tbA_KeyPress(object sender, KeyPressEventArgs e)
        {
            //Validar se é ou não número //Também deixa passar as teclas Backspace(decimal 8) e Menos(decimal 45)
            if ((!char.IsDigit(e.KeyChar)) && (e.KeyChar != 8) && (e.KeyChar != 45))
            {
                //Se NÃO for número muda o Handled para true para cancelar o evento KeyPress
                e.Handled = true;
            }
        }

        private void tbB_KeyPress(object sender, KeyPressEventArgs e)
        {
            //Validar se é ou não número //Também deixa passar as teclas Backspace(decimal 8) e Menos(decimal 45)
            if ((!char.IsDigit(e.KeyChar)) && (e.KeyChar != 8) && (e.KeyChar != 45))
            {
                //Se NÃO for número muda o Handled para true para cancelar o evento KeyPress
                e.Handled = true;
            }
        }

        private void tbC_KeyPress(object sender, KeyPressEventArgs e)
        {
            //Validar se é ou não número //Também deixa passar as teclas Backspace(decimal 8) e Menos(decimal 45)
            if ((!char.IsDigit(e.KeyChar)) && (e.KeyChar != 8) && (e.KeyChar != 45))
            {
                //Se NÃO for número muda o Handled para true para cancelar o evento KeyPress
                e.Handled = true;
            }
        }
    }
}