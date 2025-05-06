import matplotlib.pyplot as plt
import numpy as np


sample_pts = 256
x = np.linspace(0, 2 * np.pi, sample_pts)
y = np.sin(x)
#[0, 255]
# [40, c0] in HEX
offset = int("0x80", 16)
start_value = int("0x40", 16)
y_scaled =  start_value * y + offset #mapping 

sine_table = y_scaled.astype(np.uint8)
line = "    .db "
with open("sinetable.txt", "w") as f:
    for i in range(sample_pts):
        line += f"0{sine_table[i]:02X}h"
        if i == sample_pts - 1 or (i % 8 ==7):
            print(line)
            f.write(line + "\n")
            line = "    .db "
        else:
            line += ", "

plt.figure(figsize=(8, 4))
plt.plot(x, y, label="sin(x)", linestyle="--", color="blue")  # Original sine wave
plt.plot(x, sine_table, label="Scaled to [0, 255]", color="red")  # Scaled version

# Formatting
plt.xlabel("x (radians)")
plt.ylabel("y value")
plt.title("Sine Wave and Scaled Version (0x00 - 0xFF)")
plt.legend()
plt.grid(True)

# Show the plot
plt.show()    
    

# def plot_dist_vs_time(time_arr, dist_to_wall_arr, time_score_arr, score_arr, save_path=None):
    
    
#     # Create figure and primary y-axis (ax1)
#     fig, ax1 = plt.subplots()

#     # Plot horizontal line on ax1
#     ax1.axhline(y=setpoint, color="r", linestyle="-", label="Desired Wall Distance (m)")

#     # Plot distance to wall on ax1
#     ax1.plot(time_arr, dist_to_wall_arr, label="Distance to Wall (m)", color="b")
#     ax1.set_xlabel("Time (seconds)")
#     ax1.set_ylabel("Distance to Wall (m)", color="b")
#     ax1.tick_params(axis='y', labelcolor="b")

#     # Create secondary y-axis (ax2) for score
#     ax2 = ax1.twinx()
#     ax2.plot(time_score_arr, score_arr, 'g-', label="Score")  # Green solid line for score
#     ax2.set_ylabel("Score", color="g")
#     ax2.tick_params(axis='y', labelcolor="g")

#     # Handle legends separately
#     ax1.legend(loc="upper left")
#     ax2.legend(loc="upper right")
#     plt.tight_layout()
#     fig.subplots_adjust(top=0.85)

#     # Set title
#     plt.title(f"{wall.capitalize()} Wall Performance, Speed: {speed} m/s")
    

#     # Save or show plot
#     if save_path:
#         plt.savefig(save_path)
#         print(f"Plot saved to {save_path}")
#     else:
#         plt.show()

