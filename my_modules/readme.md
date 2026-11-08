For use ther modules:
	#criar a build
	make

	#Iniciar/Finalizar modulo
	sudo insmod nome_do_modulo.ko
	sudo rmmod nome_do_modulo

	#Acompanhar saida
	sudo dmesg -W | grep --line-buffered -E 'valor_esperado_1|valor_esperado_2'

	#Apagar arquivos de build
	make clean
