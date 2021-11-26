#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "organizacion.h"
#include "OPERACIONES.h"
using namespace System::Windows::Forms;
using namespace std;
using namespace msclr::interop;

namespace proyectfinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	organizacion organizacioncita;
	COLA colita;
	OPERACIONES operacioncita;
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  grilla_cola;
	protected: 

	protected: 

	protected: 

	protected: 

	protected: 





	private: System::Windows::Forms::Button^  btnevento;

	private: System::Windows::Forms::Button^  btnfecha;
	private: System::Windows::Forms::Button^  btnubi;
	private: System::Windows::Forms::Button^  btnPartMAX;
	private: System::Windows::Forms::TextBox^  txtevento;
	private: System::Windows::Forms::TextBox^  txtpartmax;

	private: System::Windows::Forms::TextBox^  txtubi;
	private: System::Windows::Forms::TextBox^  txtfecha;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btninsertar;




	private: System::Windows::Forms::Button^  btnmostrar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  evento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Ubicacion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PartMax;











	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->grilla_cola = (gcnew System::Windows::Forms::DataGridView());
			this->evento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ubicacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PartMax = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnevento = (gcnew System::Windows::Forms::Button());
			this->btnfecha = (gcnew System::Windows::Forms::Button());
			this->btnubi = (gcnew System::Windows::Forms::Button());
			this->btnPartMAX = (gcnew System::Windows::Forms::Button());
			this->txtevento = (gcnew System::Windows::Forms::TextBox());
			this->txtpartmax = (gcnew System::Windows::Forms::TextBox());
			this->txtubi = (gcnew System::Windows::Forms::TextBox());
			this->txtfecha = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btninsertar = (gcnew System::Windows::Forms::Button());
			this->btnmostrar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_cola))->BeginInit();
			this->SuspendLayout();
			// 
			// grilla_cola
			// 
			this->grilla_cola->BackgroundColor = System::Drawing::SystemColors::Control;
			this->grilla_cola->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_cola->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->evento, this->Fecha, 
				this->Ubicacion, this->PartMax});
			this->grilla_cola->GridColor = System::Drawing::SystemColors::GrayText;
			this->grilla_cola->Location = System::Drawing::Point(12, 67);
			this->grilla_cola->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->grilla_cola->Name = L"grilla_cola";
			this->grilla_cola->RowTemplate->Height = 28;
			this->grilla_cola->Size = System::Drawing::Size(546, 325);
			this->grilla_cola->TabIndex = 0;
			this->grilla_cola->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// evento
			// 
			this->evento->HeaderText = L"Evento";
			this->evento->Name = L"evento";
			this->evento->Width = 110;
			// 
			// Fecha
			// 
			this->Fecha->HeaderText = L"Fecha";
			this->Fecha->Name = L"Fecha";
			this->Fecha->Width = 110;
			// 
			// Ubicacion
			// 
			this->Ubicacion->HeaderText = L"Proceso";
			this->Ubicacion->Name = L"Ubicacion";
			this->Ubicacion->Width = 110;
			// 
			// PartMax
			// 
			this->PartMax->HeaderText = L"Equipo de Trabajo";
			this->PartMax->Name = L"PartMax";
			this->PartMax->Width = 150;
			// 
			// btnevento
			// 
			this->btnevento->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnevento->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnevento->Location = System::Drawing::Point(602, 80);
			this->btnevento->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnevento->Name = L"btnevento";
			this->btnevento->Size = System::Drawing::Size(110, 30);
			this->btnevento->TabIndex = 1;
			this->btnevento->Text = L"Evento";
			this->btnevento->UseVisualStyleBackColor = false;
			this->btnevento->Click += gcnew System::EventHandler(this, &Form1::btnevento_Click);
			// 
			// btnfecha
			// 
			this->btnfecha->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnfecha->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnfecha->Location = System::Drawing::Point(602, 141);
			this->btnfecha->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnfecha->Name = L"btnfecha";
			this->btnfecha->Size = System::Drawing::Size(110, 32);
			this->btnfecha->TabIndex = 3;
			this->btnfecha->Text = L"Fecha";
			this->btnfecha->UseVisualStyleBackColor = false;
			// 
			// btnubi
			// 
			this->btnubi->AutoSize = true;
			this->btnubi->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnubi->Location = System::Drawing::Point(602, 199);
			this->btnubi->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnubi->Name = L"btnubi";
			this->btnubi->Size = System::Drawing::Size(110, 34);
			this->btnubi->TabIndex = 4;
			this->btnubi->Text = L"Proceso";
			this->btnubi->UseVisualStyleBackColor = false;
			// 
			// btnPartMAX
			// 
			this->btnPartMAX->AutoSize = true;
			this->btnPartMAX->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->btnPartMAX->Location = System::Drawing::Point(602, 260);
			this->btnPartMAX->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnPartMAX->Name = L"btnPartMAX";
			this->btnPartMAX->Size = System::Drawing::Size(110, 34);
			this->btnPartMAX->TabIndex = 5;
			this->btnPartMAX->Text = L"Equipo Trab.";
			this->btnPartMAX->UseVisualStyleBackColor = false;
			// 
			// txtevento
			// 
			this->txtevento->Location = System::Drawing::Point(745, 82);
			this->txtevento->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtevento->Name = L"txtevento";
			this->txtevento->Size = System::Drawing::Size(166, 26);
			this->txtevento->TabIndex = 6;
			// 
			// txtpartmax
			// 
			this->txtpartmax->Location = System::Drawing::Point(745, 262);
			this->txtpartmax->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtpartmax->Name = L"txtpartmax";
			this->txtpartmax->Size = System::Drawing::Size(166, 26);
			this->txtpartmax->TabIndex = 7;
			this->txtpartmax->TextChanged += gcnew System::EventHandler(this, &Form1::txtPartMax_TextChanged);
			// 
			// txtubi
			// 
			this->txtubi->Location = System::Drawing::Point(745, 205);
			this->txtubi->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtubi->Name = L"txtubi";
			this->txtubi->Size = System::Drawing::Size(166, 26);
			this->txtubi->TabIndex = 8;
			this->txtubi->TextChanged += gcnew System::EventHandler(this, &Form1::txtubi_TextChanged);
			// 
			// txtfecha
			// 
			this->txtfecha->Location = System::Drawing::Point(745, 146);
			this->txtfecha->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtfecha->Name = L"txtfecha";
			this->txtfecha->Size = System::Drawing::Size(166, 26);
			this->txtfecha->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(14, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(426, 38);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Agenda Empresa \"AgroTec\"";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// btninsertar
			// 
			this->btninsertar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btninsertar->Location = System::Drawing::Point(772, 326);
			this->btninsertar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btninsertar->Name = L"btninsertar";
			this->btninsertar->Size = System::Drawing::Size(99, 36);
			this->btninsertar->TabIndex = 12;
			this->btninsertar->Text = L"Insertar";
			this->btninsertar->UseVisualStyleBackColor = false;
			this->btninsertar->Click += gcnew System::EventHandler(this, &Form1::btninsertar_Click);
			// 
			// btnmostrar
			// 
			this->btnmostrar->Location = System::Drawing::Point(244, 284);
			this->btnmostrar->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnmostrar->Name = L"btnmostrar";
			this->btnmostrar->Size = System::Drawing::Size(96, 36);
			this->btnmostrar->TabIndex = 13;
			this->btnmostrar->Text = L"Mostrar";
			this->btnmostrar->UseVisualStyleBackColor = true;
			this->btnmostrar->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1053, 403);
			this->Controls->Add(this->btninsertar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtfecha);
			this->Controls->Add(this->txtubi);
			this->Controls->Add(this->txtpartmax);
			this->Controls->Add(this->txtevento);
			this->Controls->Add(this->btnPartMAX);
			this->Controls->Add(this->btnubi);
			this->Controls->Add(this->btnfecha);
			this->Controls->Add(this->btnevento);
			this->Controls->Add(this->grilla_cola);
			this->Controls->Add(this->btnmostrar);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Text = L"AgroTec";
			this->TransparencyKey = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_cola))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnevento_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void txtPartMax_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btninsertar_Click(System::Object^  sender, System::EventArgs^  e) {
			 organizacioncita.SetEvento(marshal_as<string>(txtevento->Text));
			 organizacioncita.SetUbi(marshal_as<string>(txtubi->Text));
			 organizacioncita.SetFecha(marshal_as<string>(txtfecha->Text));
			 organizacioncita.SetMaxParticipantes(System::Convert::ToInt32(txtpartmax->Text));
			 colita.Insertar(organizacioncita);
			 operacioncita.GuardarColaGrilla(grilla_cola, colita); //para usar boton insertar y muestre directamente


		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			// operacioncita.GuardarColaGrilla(grilla_cola, colita); // para usar boton mostrar
		 }
private: System::Void txtubi_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

