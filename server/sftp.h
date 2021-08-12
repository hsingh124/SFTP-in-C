#ifndef SFTP_H
#define SFTP_H

/*
 * @param client_fd - client file discripter
 * @param message - string that stores the message to send
 * @param buffer - string that stores the message recieved
 * @param is_closed - boolean used to check if the server was closed
 */
void done(int, char*, char*, bool*);

void user(int, sqlite3*, sqlite3_stmt*, char*, char*);

#endif