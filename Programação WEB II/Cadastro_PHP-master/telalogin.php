<!DOCTYPE html>
<html>

<head>
    <title>Formulário da ETEC</title>
    <meta charset="iso-8859-1">
    <meta charset="utf-8">
    <link rel="stylesheet" href="style.css" media="all" />
    <script src="//ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
</head>
<body>
    <h2>Tela de Login - ETEC ZL</h2>

    <form method="post" action="validar.php" class="form">
    <p class="name">
        <label for="name" id="user">Usuário</label>
        <input type="text" placeholder="Usuário" name="user" />
    </p>
    <p class="email">
        <label for="senha">Senha</label>
        <input type="password" name="pass" />
    </p>
    <p class="submit">
        <input type="submit" value="Entrar" />
    </p>
    </form>

</script>
</body>

</html>