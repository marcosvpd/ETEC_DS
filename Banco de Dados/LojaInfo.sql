
use master
go

drop database Lojainfo
go
create database Lojainfo 
go 

use Lojainfo
GO

create table tb_clientes(
       id_cliente int PRIMARY KEY IDENTITY(1,1),
       nome nvarchar(50) not null,
       endereco nvarchar(100),
       idade int NOT NULL,
       sexo char(1) NOT NULL,
       fone nvarchar(15),
       email nvarchar(70),
)
GO

create table tb_hardware(
       id_hardware int PRIMARY KEY IDENTITY(1,1),
       descricao nvarchar(50) not null,
       preco_unit decimal NOT NULL,
       qtde_atual int NOT NULL, --0 caso nao tenha no estoque
       qtde_minima int,
       img image DEFAULT NULL
)
GO

create table tb_vendas(
       id_venda int primary key IDENTITY(1,1),
       id_cliente int not null,
       data date not null,
       desconto decimal(2,2)
)
GO

create table tb_vendas_itens(
       id_item int PRIMARY KEY identity(1,1),
       id_venda int not null,
       id_hardware int not null,
       qtde_item int not null,
       pco_vda decimal(8,2) not null
)
GO
create table tb_vds_cancel(
       id_vd_cancel int unique identity(1,1),
       id_venda int not null)
       go

alter table tb_vendas
      ADD CONSTRAINT fk_vda_cli
      FOREIGN KEY (id_cliente) REFERENCES tb_clientes(id_cliente)
      go 

alter table tb_vendas_itens
	ADD CONSTRAINT fk_vda_venda 
	FOREIGN KEY (id_venda) REFERENCES tb_vendas(id_venda)
	go
alter table tb_hardware
	ADD CONSTRAINT fk_vda_hardware
	FOREIGN KEY (id_hardware) REFERENCES tb_hardware(id_hardware)
	go
alter table tb_vendas_itens
	ADD CONSTRAINT fk_vda_hardware2
	FOREIGN KEY (id_hardware) REFERENCES tb_hardware(id_hardware)
	go
alter table tb_vds_cancel
      ADD CONSTRAINT fk_vendas_canceladas
      FOREIGN KEY (id_venda) REFERENCES tb_vendas(id_venda)
      go	
insert into tb_clientes (nome,idade,sexo,email,endereco,fone) VALUES ('Marcos',17,'M','marcos@gmail.com','Rua josézinho, 12', 25678523),
																					('Joao',45,'M','joao@gmail.com','Rua josézinho, 17', 25786817),
																					('Gustavo',18,'F','gugay@gmail.com','Rua joaozinho, 24', 24242424),
																					('Celsa',19,'F','celsinha@gmail.com','Rua solina, 69', 56789411),
																					('Maria',16,'F','maria@gmail.com','Rua da feira, 55', 77886633)
																					
go
 insert into tb_hardware (descricao,preco_unit,qtde_atual,qtde_minima) VALUES ('Computador bom', 999.00, 20,15),
																			  ('Placa de vídeo', 1000.00, 25, 10),
																			  ('Gabinete', 200.00, 10,1),
																			  ('Monitor', 150.00, 20,5),
																			  ('Mouse gamer', 100.00, 30,10)
go
insert into tb_vendas (id_cliente,data) VALUES (1,'07/08/2019'),
											 (2,'19/08/2019'),
											 (3,'20/05/2018'),
											 (4,'14/06/2019'),
											 (5,'30/01/2019')
go
insert into tb_vendas_itens (id_venda,id_hardware,pco_vda,qtde_item) VALUES 
														(1,2,1000.00,1),
														(2,1,999.00,1),
														(3,4,300.00,2),
														(4,5,400.00,4),
														(5,3,600.00,3)
go
        insert into tb_vds_cancel values
        ('6');
        go																			  
																			 
select * from tb_clientes
go
select * from tb_hardware
go
select * from tb_vendas
go
select * from tb_vendas_itens
go