# 🐱‍🚀 PRO - Télécommande Arduino

Un site web de télécommande pour contrôler vos projets Arduino via WiFi. Le système crée son propre réseau WiFi (SSID) auquel vous pouvez vous connecter directement pour commander votre appareil.

## 📋 Caractéristiques

- 🌐 **Interface web intuitive** - Contrôlez votre Arduino depuis n'importe quel navigateur
- 📡 **Réseau WiFi autonome** - Crée son propre SSID, pas besoin de connexion Internet
- ⚡ **Communication en temps réel** - Contrôle instantané de vos appareils
- 📱 **Compatible mobile** - Fonctionne sur smartphone, tablette et ordinateur
- 🔧 **Facile à configurer** - Configuration simple du WiFi et des commandes

## 🚀 Démarrage rapide

### Prérequis

- Une carte Arduino compatible WiFi (ESP8266, ESP32, etc.)
- Un navigateur web moderne
- Les fichiers du projet

### Installation

1. **Cloner le repository**
   ```bash
   git clone https://github.com/alexsclrn/PRO.git
   cd PRO
   ```

2. **Charger le code Arduino**
   - Ouvrez l'Arduino IDE
   - Chargez le sketch Arduino fourni sur votre carte
   - Configurez les paramètres WiFi (SSID et mot de passe)

3. **Se connecter**
   - Connectez-vous au réseau WiFi créé par votre Arduino
   - Ouvrez votre navigateur et allez à l'adresse fournie (généralement `http://192.168.4.1`)
   - Vous êtes prêt à contrôler !

## 📝 Configuration

### WiFi

Modifiez les paramètres WiFi dans le sketch Arduino :

```cpp
const char* ssid = "PRO";           // Nom du réseau WiFi
const char* password = "password";   // Mot de passe WiFi
```

### Commandes

Personnalisez les commandes selon vos besoins en modifiant la partie web et Arduino correspondante.

## 📁 Structure du projet

```
PRO/
├── README.md              # Ce fichier
├── arduino/               # Code Arduino
│   └── sketch.ino        # Sketch principal
├── web/                  # Interface web
│   ├── index.html        # Page HTML
│   ├── style.css         # Styles
│   └── script.js         # Logique JavaScript
└── docs/                 # Documentation
```

## 🎮 Utilisation

1. Allumez votre Arduino
2. Attendez que le réseau WiFi apparaisse
3. Connectez-vous à ce réseau
4. Accédez à l'interface web
5. Contrôlez vos appareils !

## 🤝 Contribuer

Les contributions sont les bienvenues ! N'hésitez pas à :
- Signaler des bugs
- Proposer des améliorations
- Soumettre des pull requests

## 📄 Licence

À définir - Ajoutez votre licence ici

## ❓ Support

Pour toute question ou problème, ouvrez une issue sur le repository.

---

Créé avec ❤️ par [@alexsclrn](https://github.com/alexsclrn)