package q01;

public class Livro{
    String titulo;
    String autor;
    int anoDePublicacao;
    int numeroDeCopias;

    void emprestarLivro(){
        numeroDeCopias-=1;
    }

    void devolverLivro(){
        numeroDeCopias+=1;     
    }

    boolean verificarCopias(){
        if(numeroDeCopias > 0){
            return true;
        }else{
            return false;
        }
    }

    void obterInformacoes(Livro n){
        System.out.println("+--Livro--+\n" + "Titulo: " + n.titulo + "\nAutor: " + n.autor + "\nAno de publicação: " + n.anoDePublicacao);
    }

}

