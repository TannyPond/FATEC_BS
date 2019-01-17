using System;
using System.Collections.Generic;
using System.ComponentMode1;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

name space JogoAdivinhacao
{
public class Jogo
	{
		private void geradorRandom();
		{
			Random randomico = new Random();
			num = randomico.next(0, 99);
			
		}
		
		private void txtNumero_KeyPress(object sender, KeyPressEventArgs e)
		{
				if((Keys))e.KeyChar == Keys.Enter
				{
					verificarNumero();
					verificarTentativa();
					
				}
		}	
		
		private void verificarTentativa()
		{
			switch(contador)
			{
				case 0;
				break;
				
				case 1;
				
				break;
				
				case 2;
				
				break;
				
				case 3;
				
				MessageBox.Show ("YOU LOOSE! O número correto é " + num, "Tristeza : (");
				txtNumero.Enable = false;
				break;
				
				
			}
			
		}
		
		private void verificarNumero()
		{
			int numeroDigitado = convert.ToInt16(txtNumero.Text);
			if(numeroDigitado > num)
				{
				MessageBox.Show("Número menor que o digitado!", "Errou! :(");
				txtNumero.Clear();
				contador ++;
				}
				else if (numeroDigitado < num)
						{
						MessageBox.Show("Numero maior que o digitado!", "Errou!:(");
						textNumero.Clear();
						contador++;
						}
							else
							{
								MessageBox.Show("Você Acertou!", "Parabéns! :(");
							textNumero.Enable = false;
							textNumero.Clear();
							}
		}
		}
	}
}
				
