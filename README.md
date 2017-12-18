# Time-Server
Задание по программированию: Работа с сервером времени

Вам дана функция string AskTimeServer(), про которую известно следующее:
в процессе своей работы она обращается по сети к удалённому серверу, запрашивая текущее время; если обращение к серверу прошло успешно, функция возвращает текущее время в виде строки; если в процессе обращения к серверу возникла сетевая проблема, функция выбрасывает исключение system_error; функция может выбрасывать другие исключения, чтобы сообщить о других проблемах.

Используя функцию AskTimeServer, напишите класс TimeServer со следующим интерфейсом:
class TimeServer { public:  string GetCurrentTime(); private:  string LastFetchedTime = "00:00:00"; };

Подробное описание задания в файле --- Работа с сервером времени_Coursera.pdf
Мое решение задачи в файле - TimeServer.cpp
