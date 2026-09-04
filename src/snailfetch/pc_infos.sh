echo "OS: $(uname -s) $(uname -r) $(uname -o)"

echo "Uptime: $(uptime -p)"

echo "Terminal: $(echo $TERM)"

echo "CPU: $(lscpu | grep "Model name:" | awk '{print $3, $4, $5, $6, $7}')"

echo "GPU: $(nvidia-smi | grep "NVIDIA GeForce" | awk '{print $3, $4, $5, $6}')"