# Palestra BSides São Paulo 2025 – Village Dumont Hackerspace - Tô só carregando, juro!

Este repositório contém os materiais da palestra apresentada na BSides São Paulo 2025, abordando ataques físicos a dispositivos Android utilizando o dispositivo Evil Crow Cable Pro.

## 🎯 Objetivo

Demonstrar como ataques físicos ainda representam uma ameaça significativa, explorando o uso do Evil Crow Cable Pro para realizar ataques HID e uma demonstração prática de força bruta em PINs de smartphones Android.

## 📄 Sumário da Apresentação

1. **Ataques Físicos**
   Exploração de vulnerabilidades físicas em dispositivos móveis, destacando a persistência e eficácia desses métodos.

2. **Por que ainda funcionam?**
   Discussão sobre as razões pelas quais ataques físicos continuam sendo viáveis, incluindo falhas de hardware e configurações inadequadas de segurança.

3. **Evil Crow Cable Pro**
   Apresentação do dispositivo Evil Crow Cable Pro, um cabo USB disfarçado que funciona como um dispositivo BadUSB e keylogger baseado no microcontrolador RP2040.

4. **Comparação entre Gadgets HID**
   Análise comparativa entre o Evil Crow Cable Pro e outros dispositivos HID utilizados em testes de penetração, destacando suas funcionalidades e limitações.

5. **Ataques**
   Demonstração de ataques realizados com o Evil Crow Cable Pro, incluindo a execução de payloads maliciosos e captura de dados sensíveis.

6. **Demonstração - Ataque de Força Bruta em PIN**
   Exibição prática de um ataque de força bruta em PINs de dispositivos Android, utilizando técnicas de emulação de teclado via USB OTG.

7. **Como se proteger**
   Recomendações de medidas de segurança para mitigar riscos associados a ataques físicos e uso de dispositivos HID maliciosos.

## 🔧 Ferramentas Utilizadas

* **Evil Crow Cable Pro**: Dispositivo BadUSB e keylogger baseado no microcontrolador RP2040. ([GitHub][1])

* **Android-PIN-Bruteforce**: Ferramenta para realizar ataques de força bruta em PINs de dispositivos Android via emulação de teclado. ([YouTube][2])

## 🛡️ Medidas de Proteção

* **Utilize senhas complexas**: Evite PINs simples e opte por senhas alfanuméricas com caracteres especiais.

* **Configure bloqueios automáticos**: Ative a opção de apagar dados após múltiplas tentativas de desbloqueio falhadas.

* **Desative o ADB quando não estiver em uso**: O Android Debug Bridge pode ser explorado para acesso não autorizado.

* **Esteja atento a dispositivos USB desconhecidos**: Evite conectar cabos ou dispositivos USB de procedência duvidosa.

## 📁 Arquivos

* [`Palestra Bsides.pdf`](https://github.com/Strongreen/bsides-sp-2025-hardware/blob/main/Palestra%20Bsides.pdf): Slides da apresentação.
* [`payload.h`](https://github.com/Strongreen/bsides-sp-2025-hardware/blob/main/payload.h): Código utilizado na POC.

## 📽️ Demonstrações

* [Evil Crow Cable Pro executando payload](https://www.youtube.com/shorts/0iDISv_R3To)

## 📬 Contato

Para dúvidas ou sugestões, entre em contato através do [GitHub Issues](https://github.com/Strongreen/bsides-sp-2025-hardware/issues).

---

[1]: https://github.com/joelsernamoreno/EvilCrowCable-Pro "joelsernamoreno/EvilCrowCable-Pro: Evil Crow Cable Pro device"
[2]: https://www.youtube.com/shorts/0iDISv_R3To


