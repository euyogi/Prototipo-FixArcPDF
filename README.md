<img alt="Header" width=100% src="https://capsule-render.vercel.app/api?type=waving&color=b03955&height=100&section=header">

# Prototipo-FixArcPDF

Este programa abre PDFs locais diretamente no navegador Arc para windows.

<h2>Para testar:</h2>

Eu fiz para uso próprio, mas caso queira testar você pode.

Requisitos: Python.

Você pode baixar <a href="https://www.microsoft.com/store/productId/9NCVDN91XZQP?ocid=pdpshare">Python 3.12 na Microsoft Store</a>, caso ainda não tenha.

Atenção: O programa provavelmente vai ser bloqueado pelo antivírus, eu recomendaria você mesmo compilar o código
porque algumas IDEs falam para o antivírus que o diretório dos programas compilados por elas são seguros e mais que isso,
você tem certeza que o programa é seguro já que você consegue vê-lo, aí se o antivírus bloquear o programa é só desbloquear.

Caso você não queira compilar o código si mesmo, você pode baixar o executável <a href="https://github.com/euyogi/Prototipo-FixArcPDF/releases/download/release/FixArcPDF.exe">aqui</a>.

Tente abrir o .exe, se ele for bloqueado o desbloqueie (Ele vai abrir e fechar instantaneamente se não for bloqueado).

Em seguida clique em qualquer PDF com o botão direito, escolha a opção Abrir com... > Escolher outro aplicativo > Escolha um aplicativo no seu PC. Procure e selecione o FixArcPDF.exe, se  e depois selecione Sempre. (Esses passos só precisam ser feitos uma vez ou se você mover o programa para outra pasta)

Caso não tenha feito ainda, defina o Arc como navegador padrão.

Clique para abrir o PDF que ele será aberto com o Arc.

Caso seja a primeira vez abrindo o Python é possível que ele peça permissões de rede.

<h2>Funcionando:</h2>

<p align="center">
  <img alt="Gif mostrando o programa funcionando width="75%" src="https://github.com/euyogi/Prototipo-FixArcPDF/assets/46427886/a67eaab3-248b-4c9a-b181-ae705319da44">
</p>

<h2>Motivo:</h2>

Para contexto, o navegador Arc para windows está em beta no momento (fevereiro, 2024). De forma que, ele só está conseguindo abrir arquivos/links http e https. Assim, não dá para abrir arquivos .pdf através do explorador de arquivos, como vemos nesse post: <a href="https://www.reddit.com/r/ArcBrowser/comments/19f731a/how_to_open_pdf_files_with_arc/">Reddit: How to open PDF files with Arc?</a>.

<p align="center"><img alt="Imagem arquivos/links compatíveis com Arc" width="50%" src="https://github.com/euyogi/Prototipo-FixArcPDF/assets/46427886/8b7e7c41-d9eb-427d-bf0b-5e20010cb858"></p>

Porém, é possível abrir abrir PDFs no navegador ao selecioná-lo e arrastá-lo ou, pelo navegador, navegar até o diretório correspondente. Mas, a primeira opção requer que você abra o navegador e o explorador lado a lado e não funciona muito bem. A segunda também você teria que abrir o explorador e copiar o diretório para colar no navegador.

Então, como o navegador só abre http e https, meu programa abre um servidor local http e abre o PDF com o aplicativo padrão para esse tipo de link, se o navegador padrão for o Arc, será aberto com o Arc.

<p align="center">
  <a href="https://www.flaticon.com/br/icones-gratis/pdf" title="pdf ícones">Pdf ícones criados por Roman Káčerek - Flaticon</a><br>
  Feito por: Yogi Nam de Souza Barbosa
</p>

<img alt="Footer" width=100% src="https://capsule-render.vercel.app/api?type=waving&color=b03955&height=100&section=footer">
