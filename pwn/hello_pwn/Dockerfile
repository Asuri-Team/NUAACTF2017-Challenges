From asuri/ctf-xinetd:latest

# Clean up example file
RUN rm -fr /etc/xinetd.d/*

# Add prerequest files
RUN useradd -U -m hello_pwn
ADD hello_pwn /home/hello_pwn/hello_pwn
ADD flag.txt /home/hello_pwn/flag.txt
ADD ctf.xinetd /etc/xinetd.d/hello_pwn

# Ensure file privileges are correct
RUN chmod 755 /home/hello_pwn/hello_pwn \
    && chmod 644 /home/hello_pwn/flag.txt \
    && chown root:root /home/hello_pwn/flag.txt

# Clean up temp files
RUN apt-get clean && rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

ENV CTF_PORT 20000
ENV TCPDUMP_ENABLE True
EXPOSE 20000
