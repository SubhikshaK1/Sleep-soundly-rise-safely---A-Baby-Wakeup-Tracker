<header>
    <h1>👶 Sleep Soundly, Rise Safely</h1>
    <p>An Automated, Low-Cost Safety Solution for Infant Monitoring</p>
</header>

<div class="container">
    <section>
        <h2>The Problem</h2>
        <p>Infants under 2 years old are at high risk of bed falls without constant adult supervision. Standard monitors require parents to stay to a screen, leading to "monitoring fatigue."</p>
    </section>
    <div class="roi-grid">
        <div class="card">
            <h3>⏱️ Reclaiming Time</h3>
            <p>Eliminated the need for manual video checking. The system uses <strong>Twilio API</strong> to call parents directly, allowing them to focus on work or rest until an alert is triggered.</p>
        </div>
        <div class="card">
            <h3>💰 Cost Efficiency</h3>
            <p>Built a "Smart" monitor at <strong>10% of the retail cost</strong>. By using Arduino and IR sensors, this system bypasses expensive subscriptions and high-end hardware price tags.</p>
        </div>
    </div>
    <section>
        <h2>How It Works</h2>
        <p>This project integrates hardware-level detection with cloud-based notifications:</p>
        <ul>
            <li><strong>Edge Detection:</strong> IR sensor monitors movement states (0 for Awake, 1 for Sleep).</li>
            <li><strong>Cloud Sync:</strong> Real-time data logging via <strong>ThingSpeak</strong> for sleep pattern analysis.</li>
            <li><strong>Voice Alert:</strong> A Python script monitors the cloud state and triggers an immediate phone call via <strong>Twilio</strong>.</li>
        </ul>
    </section>
   

Situation: Infants under 2 years old are at risk of falling from bed without adult supervision.

Task: Developed a baby monitor system using an IR sensor that detects a baby's awake and movement movements, storing data in ThingSpeak Cloud.

Action: Designed and developed a system using an IR sensor that tracks the baby's movements and stores data in ThingSpeak Cloud. Implemented an automated notification system that calls the parents to alert when the baby wakes up.

Result: The system successfully detected and alerted parents of their baby's wake-up times, providing an added layer of safety and peace of mind for parents.

Key Features:
IR Sensor: Tracks baby's movements and detects when they're awake. (Boolean data type "0 - Woke up. an 1- Sleepling" )
Data Storage: Stores data in ThingSpeak Cloud, allowing for real-time monitoring and analysis.
Parent Notification: Automatically calls to parents when the baby wakes up done using Twilio.

Technical Skills:
Programming languages: Python, C
Development frameworks: Arduino
Cloud integration: ThingSpeak Cloud

![image](https://github.com/user-attachments/assets/2a9c1cc2-fdd1-40d3-b03d-6d2c31ce1402)

![image](https://github.com/user-attachments/assets/cd18d1f8-ae0e-405f-99b1-3df3a9450163)

![Watch the demo video](https://github.com/SubhikshaK1/Sleep-soundly-rise-safely---A-Baby-Wakeup-Tracker/blob/b68c1ea2a750be48187d67366fff9915737e7b76/Sleep%20soundly%20rise%20safely%20video.mp4)


https://github.com/user-attachments/assets/dbda2f32-c5e6-4143-8a76-b7a06360f0ce



