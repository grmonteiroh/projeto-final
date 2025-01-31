#ifndef REVERSI_HPP
#define REVERSI_HPP

#include "jogo_tabuleiro.hpp"
#include <iostream>
#include <vector>
#include <string>

class Reversi : public JogoTabuleiro {
public:
    Reversi();

    Reversi(const std::string& simbolos_jogadores);

    ~Reversi() override = default;

    void inicializar_tabuleiro() override;

    void imprimir_tabuleiro() const override;

    bool realizar_jogada(int jogador, const std::vector<int>& posicao) override;

    bool verificar_vitoria(int jogador) const override;

    void boas_vindas() const override;

    void exibir_resultados() const;

private:
    std::string simbolos_jogadores;

    void inverter_pecas_direcao(char simbolo_jogador, int linha, int incremento_linha, int coluna, int incremento_coluna);

    bool esta_dentro_do_tabuleiro(int linha, int coluna) const;
};

#endif