%% Arduino-Matlab interface
aHandle = serial('COM6', 'BaudRate', 9600); % load arduino
fopen(aHandle); % open arduino port
mode=4;%define command
fprintf(aHandle,'%s',char(mode)); % write command to arduino
flushinput(aHandle); flushoutput(aHandle);%flush buffer
