<?php
$cookieName="admin";
$cookieValue=-1;
$cookieTime=time() + 1800;
setcookie($cookieName,$cookieValue,$cookieValue);
if(isset($_COOKIE[$cookieName])) 
{
    if($_COOKIE[$cookieName]==-1)
    {
        echo '<!DOCTYPE html>
        <html lang="en">
        
        <head>
            <meta charset="UTF-8">
            <meta name="viewport" content="width=device-width, initial-scale=1.0">
            <title>Admin Page</title>
            <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f4f4f4;
            margin: 0;
            padding: 0;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
        }

        .container {
            background-color: #fff;
            border-radius: 5px;
            box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1);
            padding: 20px;
            text-align: center;
        }

        .message {
            font-size: 18px;
            margin-bottom: 20px;
        }

        .button {
            background-color: #007bff;
            color: #fff;
            border: none;
            padding: 10px 20px;
            border-radius: 5px;
            cursor: pointer;
        }

        .button:hover {
            background-color: #0056b3;
        }
    </style>
        </head>
        
        <body>
            <div class="container">
                <div class="message">Welcome! You are not Admin.</div>    </div>
        </body>
        
        </html>';
    }
    else if($_COOKIE[$cookieName]==1)
    {
        
            echo '<!DOCTYPE html>
            <html lang="en">
            
            <head>
                <meta charset="UTF-8">
                <meta name="viewport" content="width=device-width, initial-scale=1.0">
                <title>Admin Page</title>
                <style>
            body {
                font-family: Arial, sans-serif;
                background-color: #f4f4f4;
                margin: 0;
                padding: 0;
                display: flex;
                justify-content: center;
                align-items: center;
                height: 100vh;
            }
    
            .container {
                background-color: #fff;
                border-radius: 5px;
                box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1);
                padding: 20px;
                text-align: center;
            }
    
            .message {
                font-size: 18px;
                margin-bottom: 20px;
            }
    
            .button {
                background-color: #007bff;
                color: #fff;
                border: none;
                padding: 10px 20px;
                border-radius: 5px;
                cursor: pointer;
            }
    
            .button:hover {
                background-color: #0056b3;
            }
        </style>
            </head>
            
            <body>
                <div class="container">
                    <div class="message">Welcome! Your flag is: miniCTF{C00k1e_i5_s0_w3t}. Try other cookies to receive gift!</div>    </div>
            </body>
            
            </html>';
        
    }
    else if($_COOKIE[$cookieName]!=-1||$_COOKIE[$cookieName]!=1)
    {
        header("Location:https://youtu.be/161nREQAUWI");
        
    }
}
?>