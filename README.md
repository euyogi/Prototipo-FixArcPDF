<img alt="Header" width=100% src="https://capsule-render.vercel.app/api?type=waving&color=b03955&height=100&section=header">

# Prototipo-FixArcPDF

Este programa abre PDFs locais diretamente no navegador Arc para windows.

<h2>Para testar:</h2>

Requisitos: Windows e Python.

Baixe o executável aqui. Clique em um PDF com o botão direito, escolha a opção Abrir com... > Escolher outro aplicativo > Escolha um aplicativo no seu PC. Procure e selecione o FixArcPDF.exe e depois selecione Sempre. (Esses passos só precisam ser feitos uma vez)

Clique para abrir o PDF.

<h2>Motivo:</h2>

Para contexto, o navegador Arc para windows está em beta no momento (fevereiro, 2024). De forma que, no momento ele só consegue abrir arquivos/links http e https. Assim, não dá para abrir arquivos .pdf através do explorador de arquivos, como vemos nesse post: <a href="https://www.reddit.com/r/ArcBrowser/comments/19f731a/how_to_open_pdf_files_with_arc/">Reddit: How to open PDF files with Arc</a>.

<p align="center"><img alt="Imagem arquivos/links compatíveis com Arc" width="50%" src="https://github.com/euyogi/Prototipo-FixArcPDF/assets/46427886/8b7e7c41-d9eb-427d-bf0b-5e20010cb858"></p>

Porém, é possível abrir abrir PDFs no navegador ao selecioná-lo e arrastá-lo ou, pelo navegador, navegar até o diretório correspondente. Porém, a primeira opção requer que você abra o navegador e o explorador lado a lado e não funciona muito bem. A segunda também você teria que abrir o explorador e copiar o diretório para colar no navegador.

Então, como o navegador só abre http e https, o programa abre um servidor local http e abre o PDF com o aplicativo padrão para esse tipo de link, se o navegador padrão for o Arc, será aberto com o Arc.

<h2>Como funciona:</h2>
<p align="center">
  <a href="https://www.flaticon.com/br/icones-gratis/pdf" title="pdf ícones">Pdf ícones criados por Roman Káčerek - Flaticon</a><br>
  Feito por: Yogi Nam de Souza Barbosa
</p>

<img alt="Footer" width=100% src="https://capsule-render.vercel.app/api?type=waving&color=b03955&height=100&section=footer">
