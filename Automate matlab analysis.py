import pyautogui
import time

def button_click():
    button_location = pyautogui.locateCenterOnScreen('save and run.png', confidence=0.9)
    if button_location:
        pyautogui.click(button_location)
        print("Button clicked.")
    else:
        pyautogui.scroll(-600)
        button_click()

num_iterations = 8
for _ in range(num_iterations):
    try:
        button_click()
    except pyautogui.ImageNotFoundException:
        print("Button not found, scrolling down.")
        # Scroll down a bit
        pyautogui.moveTo(56,496)
        pyautogui.click()
        pyautogui.scroll(-600)
        button_click()
    time.sleep(3)
